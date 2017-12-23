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

#include "\DesoDB\constants.hpp" 

params["_object", ["_objectType", 3], ["_priority", 10001]];

// vehicles are the object type of 3 with default spawn priority of 10001
// buildings are the object type of 2 with default spawn priority of 1001
if ((_objectType == 2) && (_priority > 10000)) then {
	_priority = 1001;
};

_serializedData = [_object, _objectType, _priority] call DB_fnc_serializeObject;
_request = [PROTOCOL_DBCALL_FUNCTION_UPDATE_OBJECT,_serializedData];
[_request] call DB_fnc_sendRequest;