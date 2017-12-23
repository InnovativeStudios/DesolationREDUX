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

params["_playerObj","_loadoutData"];

_playerObj hideObjectGlobal true;
_playerObj setVariable ["DDATA",_loadoutData];

_response = [_playerObj] call DB_fnc_loadPlayer;
_callbackParam = [_response select 0,_response] + [_playerObj]; //--- _playeruuid should be tied to the spawned unit, this is handled in the callback so we need to add it to the _callbackParam

diag_log "requestSpawn.sqf _resonse data:";
diag_log _response;

if(_response isEqualTo []) then {
	["fresh", _callbackParam] call (missionNamespace getVariable ["DS_fnc_dbOnSpawnResponse",{diag_log "<REQUEST ERROR>: callback not defined?";}]);
} else {
	["load", _callbackParam] call (missionNamespace getVariable ["DS_fnc_dbOnSpawnResponse",{diag_log "<REQUEST ERROR>: callback not defined?";}]);
};
