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
 
 /// used in Desolation spawnPlayer request
 
#include "\DesoDB\constants.hpp" 
 
 
params["_building"];

// unused params (DO NOT CHANGE)
_hitpoints = []; 
_locked = 0;
_priority = 1001;
_visible = 1;
_fuel = 1;
_fuelcargo = 0;
_repaircargo = 0;
_positionadvanced = [["DSR_vectorUp",vectorUp _building]]; 
_reservedone = [];
_reservedtwo = []; 
_magazinesturrent = []; 
_positionType = 1;

// type
_className = typeof _building;

// owner and unlock code
_accesscode = "";
_player_uuid = _building getVariable ["oOWNER",""];

// damage
_damage = damage _building;

// container items
_items = ([_building] call DS_fnc_getLoot);  // gets loot contained within object if it is a container

// animations and textures
_animation_sources = [];
_textures = getObjectTextures _building;

// position stuff
_direction = getDir _building;
_variables = [];
{
	if(toLower(_x) find "svar_" == 0) then {
		_variables pushback [_x,_building getVariable [_x,""]];
	};
} forEach (allVariables _building);
_position = getPosATL _building;

_request = [PROTOCOL_DBCALL_FUNCTION_RETURN_UUID,[]];
_objectUUID = [_request] call DB_fnc_sendRequest;
_building setVariable ["oUUID",_objectUUID];

[
	_objectUUID,
	_className,
	_priority,
	_visible,
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
	_position select 0,
	_position select 1,
	_position select 2,
	_positionadvanced,
	_reservedone,
	_reservedtwo
] call DB_fnc_spawnObject;