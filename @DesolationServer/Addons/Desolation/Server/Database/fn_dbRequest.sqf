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


params["_type",["_callback",""],["_callbackParam",[]]];

_return = "";
switch(_type)do{
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