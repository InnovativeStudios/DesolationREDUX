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
 
 
params["_playerObj"];

_playerObj = _callbackParam select 0;

_nickName = name _playerObj;
_steamID = getPlayerUid _playerObj;

_request = [PROTOCOL_DBCALL_FUNCTION_LOAD_PLAYER,[PROTOCOL_DBCALL_ARGUMENT_NICKNAME,_nickName,PROTOCOL_DBCALL_ARGUMENT_STEAMID,_steamID]];
_response = [_request] call DB_fnc_sendRequest;


_playeruuid = _response select 0;
_dpvaruuid = _response select 1; // what is this? its for persistant variables. whats it used for? i do not know.
_friendlist = _response select 2;
_kickableData = _response select 3;
_kickable = _kickableData select 0;
_kickReason = _kickableData select 1;

_open_alpha_test = false;


if (_kickable && !_open_alpha_test) exitWith {
	[_kickReason] remoteExecCall ["DS_fnc_notWhitelisted", _playerObj];
};

if(_kickable && _open_alpha_test && ((diag_tickTime - (missionNamespace getVariable ["DS_var_startTime",10000])) < 300)) exitWith {
	["Only closed-alpha testers can join for the first 5 minutes. Please wait your turn."] remoteExecCall ["DS_fnc_notWhitelisted", _playerObj];
};

_playerObj setVariable ["pUUID",_playeruuid];

_request = [PROTOCOL_DBCALL_FUNCTION_LOAD_CHAR,[PROTOCOL_DBCALL_ARGUMENT_PLAYER_UUID,_playeruuid]];
_response = [_request] call DB_fnc_sendRequest;

_response;