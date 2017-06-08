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

params["_object_uuid","_parent","_classname","_priority","_objectType","_accesscode","_locked","_player_uuid","_hitpoints","_damage","_fuel","_fuelcargo","_repaircargo","_items","_magazinesturret","_variables","_animation_sources","_textures","_direction","_positiontype","_positionx","_positiony","_positionz","_positionadvanced","_reservedone","_reservedtwo","_friendslist"];

_returnData = [];

/* _objectType:
 * 0 -> Hidden Object
 * 1 -> Simple Object
 * 2 -> Building
 * 3 -> Vehicle
 * 4 -> Ai (not supported)
 */

/* TODO: 
 * if (_parent != "") {
 *    Search Parent
 * }
 */

/* TODO: 
 * if(_objectType == 0) then {
 * take Parent and add Objectdata to an Variable of this Object to Spawn it later
 * }
 */

/* TODO: 
 * if(_objectType == 1) then {
 * spawn SimpleObject
 * }
 */

if (_objectType > 1) then { // its an building, vehicle or ai - all use createVehicle
	_position = [_positionx,_positiony,_positionz];
	_object = _classname createVehicle _position;
	
	if (_objectType == 2) then {  // if building
		for "_i" from 1 to 5 do {
			_object setVariable["bis_disabled_Door_" + str(_i),1,true]; // disable door access
		};
	};
	
	clearItemCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	clearWeaponCargoGlobal _object;
	clearBackpackCargoGlobal _object;
	
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
	
	if(_priority > 0 && _priority != 1001 && _priority != 10001) then {
		_object setVariable ["DSR_priority", _priority];
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

	if(_objectType == 3) then { // vehicle
		_object setFuel _fuel;
		_object setFuelCargo _fuelcargo;
		_object setRepairCargo _repaircargo;
		
		if(_locked == 2) then {
			_object lock true;
		};

		_object setVariable ["isCar",true];
		
		{
			_object setHitPointDamage _x;
		} forEach _hitpoints;
	};
	
	if(_objectType == 4) then { // ai
		diag_log("sorry ai is not supported");
	};

	_returnData = [_object,_objectType,_object_uuid];
};

_returnData;
