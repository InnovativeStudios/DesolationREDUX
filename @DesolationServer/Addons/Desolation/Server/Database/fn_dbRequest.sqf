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
#include "constants.hpp"


params["_type",["_callback",""],["_callbackParam",[]]];

_return = "";
switch(_type)do{
	// Player Databasing
	
	//--- called on spawn request
	case "spawnPlayer":{
		_playerObj = _callbackParam select 0;
		
		_response = [_playerObj] call DB_fnc_loadPlayer;
		
		_callbackParam = [_response select 0,_response] + _callbackParam; //--- _playeruuid should be tied to the spawned unit, this is handled in the callback so we need to add it to the _callbackParam
		
		if(_response isEqualTo []) then {
			["fresh", _callbackParam] call (missionNamespace getVariable [_callback,{diag_log "<REQUEST ERROR>: callback not defined?";}]);
		} else {
			["load", _callbackParam] call (missionNamespace getVariable [_callback,{diag_log "<REQUEST ERROR>: callback not defined?";}]);
		};
	};
	//--- called on logout or disconnect
	case "savePlayer": {
		_playerObj = _callbackParam select 0;
		
		[_playerObj] call DB_fnc_savePlayer;
	};
	//--- called on death
	case "killPlayer": {
		_playerObj = _callbackParam select 0;
		_killerObj = _callbackParam select 1;
		
		[_playerObj,_killerObj] call DB_fnc_killPlayer;
	};
	//--- called on fresh spawn finishing
	case "createPlayer": {
		_playerObj = _callbackParam select 0;
		
		[_playerObj] call DB_fnc_createPlayer;
	};
	
	//--- used for vehicle / object spawning from DB
	case "getObjects": {
		_return = call DB_fnc_dumpObjects;
	};
	
	// Vehicle Databasing
	//--- called on new vehicle spawn
	case "spawnVehicle": {
		_vehicle = _callbackParam select 0;
		[_vehicle] call DB_fnc_spawnVehicle;
		
	};
	//--- called on vehicle save
	case "updateVehicle": {
		_vehicle = _callbackParam select 0;

		[_vehicle] call DB_fnc_updateVehicle;
	};
	//--- called on vehicle death
	case "destroyVehicle": {
		_object_uuid = _callbackParam select 0;	
		_killerObj = _callbackParam select 1;
		
		[_object_uuid,_killerObj] call DB_fnc_killVehicle;
	};
	
	//--- used on building finished / item placement
	case "spawnBuilding": {
		_building = _callbackParam select 0;
		
		[_building] call DB_fnc_spawnBuilding;
	};
	//--- used in building monitor thread
	case "updateBuilding": {
		_building = _callbackParam select 0;
		[_building] call DB_fnc_updateBuilding;
	};
	//--- used when a building is destroyed
	case "destroyBuilding": {
		_object_uuid = _callbackParam select 0;	
		_killerObj = _callbackParam select 1;
		
		[_object_uuid,_killerObj] call DB_fnc_killVehicle;
	};
};
_return;