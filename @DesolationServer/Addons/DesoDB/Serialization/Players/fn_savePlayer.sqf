/*
 * Desolation Redux
 * http://desolationredux.com/
 * � 2016 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */
 
 /// used in Desolation savePlayer request

#include "\DesoDB\constants.hpp" 
 
 
params["_playerObj"];
_playeruuid = _playerObj getVariable ["pUUID",""];
_charuuid = _playerObj getVariable ["cUUID",""];
if(_playeruuid == "" || _charuuid == "") exitWith {diag_log "INTERNAL ERROR | FATAL > PlayerUUID or CharUUID not on the targeted unit!";};

_posATL = getPosATL _playerObj;
_loadout = getUnitLoadout _playerObj;
_vars = allVariables _playerObj;
_textures = []; //--- fix for escape sequence error

_nonpersvars = [];
_persvars = [];
{
	if(toLower(_x) find "svar_" == 0) then {
		_nonpersvars pushback [_x,_playerObj getVariable [_x,""]];
	};
	if(tolower(_x) find "pvar_" == 0) then {
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

_anim = animationState _playerObj;
if(vehicle _playerObj != _playerObj) then {
	_anim = "";
};


_request = [PROTOCOL_DBCALL_FUNCTION_UPDATE_CHAR,[
	PROTOCOL_DBCALL_ARGUMENT_CHARUUID,_charuuid,
	PROTOCOL_DBCALL_ARGUMENT_ANIMATIONSTATE,_anim,
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
	
	PROTOCOL_DBCALL_ARGUMENT_INVENTORYUNIFORM, (_loadout select 3) select 1,
	PROTOCOL_DBCALL_ARGUMENT_INVENTORYVEST, (_loadout select 4) select 1,
	PROTOCOL_DBCALL_ARGUMENT_INVENTORYBACKPACK, (_loadout select 5) select 1,
	PROTOCOL_DBCALL_ARGUMENT_UNIFORM, (_loadout select 3) select 0,
	PROTOCOL_DBCALL_ARGUMENT_VEST, (_loadout select 4) select 0,
	PROTOCOL_DBCALL_ARGUMENT_BACKPACK, (_loadout select 5) select 0,
	PROTOCOL_DBCALL_ARGUMENT_HEADGEAR, _loadout select 6,
	PROTOCOL_DBCALL_ARGUMENT_GOOGLES, _loadout select 7,
	PROTOCOL_DBCALL_ARGUMENT_PRIMARYWEAPON, _loadout select 0,
	PROTOCOL_DBCALL_ARGUMENT_SECONDARYWEAPON, _loadout select 1,
	PROTOCOL_DBCALL_ARGUMENT_HANDGUN, _loadout select 2,
	PROTOCOL_DBCALL_ARGUMENT_TOOLS, [_loadout select 8,_loadout select 9],
	PROTOCOL_DBCALL_ARGUMENT_CURRENTWEAPON, currentWeapon _playerObj
]];
[_request] call DB_fnc_sendRequest;