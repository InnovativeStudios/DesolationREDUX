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

_request = [PROTOCOL_DBCALL_FUNCTION_QUIET_CREATE_OBJECT,[
	PROTOCOL_DBCALL_ARGUMENT_OBJECTUUID,_objectUUID,
	PROTOCOL_DBCALL_ARGUMENT_CLASSNAME,_className,
	PROTOCOL_DBCALL_ARGUMENT_PRIORITY,_priority,
	PROTOCOL_DBCALL_ARGUMENT_VISIBLE,_visible,
	PROTOCOL_DBCALL_ARGUMENT_ACCESSCODE, _accesscode,
	PROTOCOL_DBCALL_ARGUMENT_LOCKED,_locked,
	PROTOCOL_DBCALL_ARGUMENT_PLAYER_UUID,_player_uuid,
	PROTOCOL_DBCALL_ARGUMENT_HITPOINTS,_hitpoints,
	PROTOCOL_DBCALL_ARGUMENT_DAMAGE,_damage,
	PROTOCOL_DBCALL_ARGUMENT_FUEL,_fuel,
	PROTOCOL_DBCALL_ARGUMENT_FUELCARGO,_fuelcargo,
	PROTOCOL_DBCALL_ARGUMENT_REPAIRCARGO,_repaircargo,
	PROTOCOL_DBCALL_ARGUMENT_ITEMS,_items,
	PROTOCOL_DBCALL_ARGUMENT_MAGAZINESTURRET, _magazinesturrent,
	PROTOCOL_DBCALL_ARGUMENT_VARIABLES, _variables,
	PROTOCOL_DBCALL_ARGUMENT_ANIMATIONSTATE, _animation_sources,
	PROTOCOL_DBCALL_ARGUMENT_TEXTURES, _textures,
	PROTOCOL_DBCALL_ARGUMENT_DIRECTION, _direction,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONTYPE, _positionType,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONX, _position select 0,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONY, _position select 1,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONZ, _position select 2,
				PROTOCOL_DBCALL_ARGUMENT_POSITIONADVANCED, _positionadvanced,
				PROTOCOL_DBCALL_ARGUMENT_RESERVEDONE, _reservedone,
				PROTOCOL_DBCALL_ARGUMENT_RESERVEDTWO, _reservedtwo
]];
[_request] call DB_fnc_sendRequest;