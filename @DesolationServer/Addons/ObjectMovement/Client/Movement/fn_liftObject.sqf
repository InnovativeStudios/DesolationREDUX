/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */

params["_object"];
if !(local _object) then {[_object,player] remoteExecCall ["OM_fnc_serverLift",2]};
_object spawn {
	waitUntil{local _this};
	player disableCollisionWith _this;
};

_origMass = getMass _object;
_object setVariable ["oMass",_origMass];
_object setMass 0.1;


if([_object] call OM_fnc_canLift) then {
	OM_var_lifted = _object;
	_object addEventHandler ["EpeContact",{
		OM_var_collisionForce = _this select 4;
	}];
	
	OM_var_EachFrameEH = addMissionEventHandler ["EachFrame",{
		_object = OM_var_lifted;
		
		_maxheight = call compile (["maxHeight","OM"] call BASE_fnc_getCfgValue); 
		_carryDistance = call compile (["carryDistance","OM"] call BASE_fnc_getCfgValue); 
		_speedUpDown = call compile (["liftSpeed","OM"] call BASE_fnc_getCfgValue);
		_lagComp = call compile (["lagComp","OM"] call BASE_fnc_getCfgValue);
		_maxDistToObject = call compile (["maxDistance","OM"] call BASE_fnc_getCfgValue);
		_gravityCounter = 0.125;//DO NOT TOUCH THIS OR A KITTEN DROWNS!
		_speedPushPull = call compile (["moveSpeed","OM"] call BASE_fnc_getCfgValue);
		_maxCollisionForce = call compile (["maxForce","OM"] call BASE_fnc_getCfgValue);
		_rotSpeed = call compile (["rotationSpeed","OM"] call BASE_fnc_getCfgValue);
		
		_carryDistance = _carryDistance + sizeOf _object;
		_maxDistToObject = _maxDistToObject + sizeOf _object;
		
		if(!isNull _object) then {
			if(OM_var_collisionForce < _maxCollisionForce) then {
				if (((player distance2d _object) > _maxDistToObject) || !(alive player)) exitWith {call OM_fnc_dropObject;}; 
				
			
				_playerHeight = (getPosATL player) select 2;
				_objectHeight = (getPosATL _object) select 2;
				_weaponPitch = (getCameraViewDirection player) select 2;
				
				_wantedHeight = ((((1 - (_weaponPitch/ -0.985))) * _maxheight)-1) + _playerHeight;
				
				if(_wantedHeight < 0) then {_wantedHeight = 0;}; 
				
				_objectXVelocity = 0;
				_objectYVelocity = 0;
				_objectZVelocity = 0;
				_relativeDir = (player getDir _object);
				_shortestAngle = ((((getDir player - _relativeDir) % 360) + 540) % 360) - 180;
				
				
				
				//rotation control
				if(abs _shortestAngle > 2) then {
					if(_shortestAngle > 0) then {
						_objectXVelocity = - _rotSpeed;
					} else {
						_objectXVelocity = _rotSpeed;
					};
				};
				
				
				
				//distance control
				if (player distance2d _object > _carryDistance) then {
					_objectYVelocity = _speedPushPull;
				} else {
						if (player distance2d _object < (_carryDistance - 0.1 )) then {
						_objectYVelocity = -_speedPushPull;
						};
				};
				
				
				//height control
				if(abs (_wantedHeight-_objectHeight) > 0.1) then { 
					if (_wantedHeight > (_objectHeight)) then {
						_objectZVelocity  = _speedUpDown + _gravityCounter;
					} else { 
						if(_wantedHeight < (_objectHeight - 0.1)) then {
						_objectZVelocity = -_speedUpDown;
						};
					};
				};
				
				
				_object setVelocity (velocity player);
				_object setDir (_object getDir player);
				_object setVelocityModelspace ((velocityModelspace _object) VectorAdd [_objectXVelocity*_lagComp,_objectYVelocity*_lagComp, (_objectZVelocity+_gravityCounter)*_lagComp]);
			
			};
		};
		};
	}];
};