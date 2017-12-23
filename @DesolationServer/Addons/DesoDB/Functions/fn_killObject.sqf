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
 
 
params["_object_uuid","_killerObj"];

_killerUUID = "";
_type = "Unknown";
_weapon = "";
_distance = 0;

/*
if(!isNull _killerObj && isPlayer _killerObj) then {
	_killerUUID = _killerObj getVariable ["cUUID",""];
	_weapon = "TODO: get weapon"; 
	_distance = _killerObj distance _playerObj;
	_type = "Killed";
};
*/

_request = [PROTOCOL_DBCALL_FUNCTION_DECLARE_OBJECT_DEATH,[
	PROTOCOL_DBCALL_ARGUMENT_OBJECTUUID,_object_uuid,
	PROTOCOL_DBCALL_ARGUMENT_ATTACKER,_killerUUID,
	PROTOCOL_DBCALL_ARGUMENT_TYPE,_type,
	PROTOCOL_DBCALL_ARGUMENT_WEAPON,_weapon,
	PROTOCOL_DBCALL_ARGUMENT_DISTANCE,_distance
]];
[_request] call DB_fnc_sendRequest;
