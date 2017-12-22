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

#include "constants.hpp"

_worldUUID = call DB_fnc_getWorldUUID;
if(_worldUUID == "") then {
	diag_log "WARNING: WORLD IDENTIFICATION IS NOT SET, YOU WILL NOT BE ABLE TO RUN MULTIPLE INSTANCES ON THE SAME TABLES!";
};

_worldUUID = "0";

diag_log ("DesoDB > World UUID: " + _worldUUID);

_request = ["initdb",["worlduuid",_worldUUID]];
[_request] call DB_fnc_sendRequest;
