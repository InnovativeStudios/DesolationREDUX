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
 
 /// used in Desolation createPlayer request

#include "\DesoDB\constants.hpp" 

params["_playerObj"];

_playeruuid = _playerObj getVariable ["pUUID",""];
if(_playeruuid == "") exitWith {diag_log "INTERNAL ERROR | FATAL > PlayerUUID not on the targeted unit when creating!";};

_posATL = getPosATL _playerObj;
_loadout = getUnitLoadout _playerObj;
_vars = allVariables _playerObj;
_textures = [];

_nonpersvars = [];
_persvars = [];
{
	if(_x find "SVAR_" == 0) then {
		_nonpersvars pushback [_x,_playerObj getVariable [_x,""]];
	};
	if(_x find "PVAR_" == 0) then {
		_persvars pushback [_x,_playerObj getVariable [_x,""]];
	};
} forEach _vars;

if((_loadout select 3) isEqualTo []) then {
	_loadout set[3,["",[]]];
};
if((_loadout select 4) isEqualTo []) then {
	_loadout set[4,["",[]]];
};
if((_loadout select 5) isEqualTo []) then {
	_loadout set[5,["",[]]];
};

_request = [PROTOCOL_DBCALL_FUNCTION_CREATE_CHAR,[
	PROTOCOL_DBCALL_ARGUMENT_PLAYER_UUID,_playeruuid,
	PROTOCOL_DBCALL_ARGUMENT_ANIMATIONSTATE,animationState _playerObj,
	PROTOCOL_DBCALL_ARGUMENT_DIRECTION, getdir _playerObj,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONTYPE, 1,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONX,_posATL select 0,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONY,_posATL select 1,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONZ,_posATL select 2,
	PROTOCOL_DBCALL_ARGUMENT_CLASSNAME,typeof _playerObj,
	PROTOCOL_DBCALL_ARGUMENT_HITPOINTS,getAllHitPointsDamage _playerObj,
	PROTOCOL_DBCALL_ARGUMENT_VARIABLES,_nonpersvars,
	PROTOCOL_DBCALL_ARGUMENT_PERSISTENTVARIABLES,_persvars,
	PROTOCOL_DBCALL_ARGUMENT_TEXTURES,_textures,
  PROTOCOL_DBCALL_ARGUMENT_GEAR, _loadout,
	PROTOCOL_DBCALL_ARGUMENT_CURRENTWEAPON, currentWeapon _playerObj
]];

_response = [_request] call DB_fnc_sendRequest;


_playerObj setVariable ["cUUID",_response];

_request = [PROTOCOL_DBCALL_FUNCTION_LOAD_CHAR,[PROTOCOL_DBCALL_ARGUMENT_PLAYER_UUID,_playeruuid]];
_data = [_request] call DB_fnc_sendRequest;

_anim = _data deleteAt 0;
_dir = _data deleteAt 0;
_positiontype = _data deleteAt 0;
_positionx = _data deleteAt 0;
_positiony = _data deleteAt 0;
_positionz = _data deleteAt 0;
_charuuid = _data deleteAt 0;

_classname = _data deleteAt 0;
_hitpoints = _data deleteAt 0;
_nonpersvars = _data deleteAt 0;
_textures = _data deleteAt 0;
_gear = _data deleteAt 0;
_currentWeapon = _data deleteAt 0;
_charshareuuid = _data deleteAt 0;

_persvars = _data deleteAt 0;
_persuuid = _data deleteAt 0;

_objectuuid = _data deleteAt 0;

{
	_playerObj setVariable [_x select 0,_x select 1,true];
	diag_log ("SETTING VARIABLE: " + str(_x select 0) + " VALUE: " + str(_x select 1));
} forEach _nonpersvars;
{
	_playerObj setVariable [_x select 0,_x select 1,true];
	diag_log ("SETTING PERSISTANT VARIABLE: " + str(_x select 0) + " VALUE: " + str(_x select 1));
} forEach _persvars;

