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


params["_regionNum"];

0 cutRsc ["background","PLAIN",0];

_region = switch(_regionNum) do {
	case 0: {["Zone1Marker","DS"] call BASE_fnc_getCfgValue;};
	case 1: {["Zone2Marker","DS"] call BASE_fnc_getCfgValue;};
	case 2: {["Zone3Marker","DS"] call BASE_fnc_getCfgValue;};
};

_spawnPos = [_region,1] call DS_fnc_findSpawnPosition;
player setVariable ["ReadyToSpawn",true,true];
[player,_spawnPos] remoteExec ["DS_fnc_requestFreshSpawn",2];
0 cutRsc ["background","PLAIN",0];