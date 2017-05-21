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
 
 
params["_vehicle"];


_className = typeof _vehicle;
_priority = 10001;
_accesscode = "";
_locked = 0;
_visible = 1;
_player_uuid = "";
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
_positionadvanced = [["DSR_vectorUp",vectorUp _vehicle]];  //todo
_reservedone = []; // todo
_reservedtwo = []; // todo
_magazinesturrent = []; // todo
_variables = [];
{
	if(toLower(_x) find "svar_" == 0) then {
		_variables pushback [_x,_vehicle getVariable [_x,""]];
	};
} forEach (allVariables _vehicle);
_animation_sources = [];
_textures = getObjectTextures _vehicle;
_direction = getDir _vehicle;
_positionType = 1;
_position = getPosATL _vehicle;

_request = [PROTOCOL_DBCALL_FUNCTION_RETURN_UUID,[]];
_objectUUID = [_request] call DB_fnc_sendRequest;
_vehicle setVariable ["oUUID",_objectUUID];

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
				PROTOCOL_DBCALL_ARGUMENT_POSITIONADVANCED,_positionadvanced,
				PROTOCOL_DBCALL_ARGUMENT_RESERVEDONE, _reservedone,
				PROTOCOL_DBCALL_ARGUMENT_RESERVEDTWO, _reservedtwo
]];
[_request] spawn DB_fnc_sendRequest;