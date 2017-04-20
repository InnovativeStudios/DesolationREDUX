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

params["_object_uuid","_parent","_classname","_priority","_visible","_accesscode","_locked","_player_uuid","_hitpoints","_damage","_fuel","_fuelcargo","_repaircargo","_items","_magazinesturret","_variables","_animation_sources","_textures","_direction","_positiontype","_positionx","_positiony","_positionz","_positionadvanced","_reservedone","_reservedtwo","_friendslist"];

_returnData = [];
// todo split this into multiple scripts
if(_priority > 10000) then {


	if(_visible == 1) then {
		_position = [_positionx,_positiony,_positionz];
		
		_object = _classname createVehicle _position;
		
		clearItemCargoGlobal _object;
		clearMagazineCargoGlobal _object;
		clearWeaponCargoGlobal _object;
		clearBackpackCargoGlobal _object;
		
		
		_object allowDamage false;
		_object setVariable ["oUUID",_object_uuid];
		{
			//  todo
		} forEach _animation_sources;
		_object setFuel _fuel;
		_object setFuelCargo _fuelcargo;
		_object setRepairCargo _repaircargo;
		
		{
			_object setObjectTextureGlobal [_forEachIndex,_x];
		} forEach _textures;
		
		if(count(_hitpoints) >= 3) then {
			_names = _hitpoints select 0;
			_values = _hitpoints select 2;
			
			_maxIt = count(_names) max count(_values);
			for "_i" from 0 to (_maxIt-1) do {
				if((_names select _i) != "") then { // some hitpoints dont have names
					_object setHitPointDamage [_names select _i,_values select _i];
				};
			};
		} else {
			diag_log ("VEHICLE " + _classname + " DOES NOT HAVE HITPOINTS SAVED IN DB");
		};
		if(_player_uuid != "") then {
			_object setVariable ["owner",_player_uuid];
			_object setVariable ["friends",_friendslist];
		};
		if(_accesscode != "") then {
			_object setVariable ["aCode",_accesscode];
		};
		if(_locked == 1) then {
			_object lock true;
		};
		
		
		[_object,_items] call DS_fnc_setLoot;
		
		_object setVectorUp ((_positionadvanced deleteAt 0) select 1);
		{
			_object setVariable _x;
		} foreach _variables;
		
		
		
		_object setDir _direction;
		if(_positiontype == 1) then {
			_object setPosATL _position;
		} else {
			_object setPosASL _position;
		};
		_object setVariable ["isCar",true];
		_object allowDamage true;
		_returnData = [_object,_priority,_object_uuid];
	};

} else {
	if(_visible == 1) then {
		_position = [_positionx,_positiony,_positionz];
		
		_object = _classname createVehicle _position;
		for "_i" from 1 to 5 do {
			_object setVariable["bis_disabled_Door_" + str(_i),1,true]; // disable door access
		};
		_object allowDamage false;
		_object setVariable ["oUUID",_object_uuid];
		{
			//  todo
		} forEach _animation_sources;
		
		
		{
			_object setObjectTextureGlobal [_forEachIndex,_x];
		} forEach _textures;
		
		
		if(_player_uuid != "") then {
			_object setVariable ["oOWNER",_player_uuid,true];
			_object setVariable ["friends",_friendslist];
		};
		if(_accesscode != "") then {
			_object setVariable ["aCode",_accesscode];
		};
		if(_locked == 1) then {
			_object setVariable ["locked",true];
		};
		
		
		[_object,_items] call DS_fnc_setLoot;
		
		_object setVectorUp ((_positionadvanced deleteAt 0) select 1);
		{
			_object setVariable _x;
		} foreach _variables;
		_object setDir _direction;
		if(_positiontype == 1) then {
			_object setPosATL _position;
		} else {
			_object setPosASL _position;
		};
		
		_object allowDamage true;
		_returnData = [_object,_priority,_object_uuid];
	};

};
_returnData;