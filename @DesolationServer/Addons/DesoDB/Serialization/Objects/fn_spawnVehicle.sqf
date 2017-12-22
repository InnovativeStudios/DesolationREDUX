/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 - 2018 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */
 
 /// used in Desolation spawnPlayer request
 
#include "\DesoDB\constants.hpp" 
 
 
params["_vehicle"];
// vehicles are the object type of 3
_objectType = 3;
// and an default priority of 10001 - they always spawn with this default priority
_priority = 10001;

_className = typeof _vehicle;

_accesscode = _vehicle getVariable ["DSR_accesscode",""];
_locked = locked _vehicle;
_player_uuid = _vehicle getVariable ["oOWNER",""];

_hitpoints = [];
_temp = getAllHitPointsDamage _vehicle;
if(count(_temp) > 2) then {
	{
		if(_x != "") then {
			_vArray = _temp select 2;
			if(count(_vArray) > _forEachIndex) then {
				_value = (_temp select 2) select _forEachIndex;
				_hitpoints pushback [_x,_value];
			};
		};
	} forEach (_temp select 0);
};
_damage = damage _vehicle;
_fuel = fuel _vehicle;
_fuelcargo = getFuelCargo _vehicle;
if(isNil {_fuelcargo}) then {_fuelcargo = 0;};
if(str(_fuelcargo) find "-1" == 0) then {
	_fuelcargo = 0;
};
_repaircargo = getRepairCargo _vehicle;
if(isNil {_repaircargo}) then {_repaircargo = 0;};
if(str(_repaircargo) find "-1" == 0) then {
	_repaircargo = 0;
};



_items = ([_vehicle] call DS_fnc_getLoot);
_reservedone = []; // todo
_reservedtwo = []; // todo
_magazinesturrent = []; // todo

// get server owner custom variables
_variables = [];
{
	if(toLower(_x) find "svar_" == 0) then {
		_variables pushback [_x,_vehicle getVariable [_x,""]];
	};
} forEach (allVariables _vehicle);

// animations and textures
_animation_sources = [];
_textures = getObjectTextures _vehicle;

// position stuff
_direction = getDir _vehicle;
_positionType = 1;
_position = getPosATL _vehicle;
_positionadvanced = [["DSR_vectorUp",str(vectorUp _vehicle)]]; 

// support to add objects that already have an uuid - in case i fuck up again (Legodev)
_objectUUID = _vehicle getVariable ["oUUID",""];

if (_objectUUID == "") then {
	_request = [PROTOCOL_DBCALL_FUNCTION_RETURN_UUID,[]];
	_objectUUID = [_request] call DB_fnc_sendRequest;
	_vehicle setVariable ["oUUID",_objectUUID];
};

[
	_objectUUID,
	_className,
	_priority,
	_objectType,
	_accesscode,
	_locked,
	_player_uuid,
	_hitpoints,
	_damage,
	_fuel,
	_fuelcargo,
	_repaircargo,
	_items,
	_magazinesturrent,
	_variables,
	_animation_sources,
	_textures,
	_direction,
	_positionType,
	_position,
	_positionadvanced,
	_reservedone,
	_reservedtwo
] call DB_fnc_spawnObject;
