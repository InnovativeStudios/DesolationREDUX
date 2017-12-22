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

DS_var_finishedBuildings = true;
DS_var_runBuildingMon = true;
DS_var_savingBuildings = true;
call DS_fnc_checkServerLock;

while{true} do {
	_time = diag_tickTime + (60*30);
	waitUntil{diag_tickTime >= _time || !DS_var_runBuildingMon};
	_newArray1 = [];
	_newArray2 = [];
	{
		_uuid = DS_var_BuildingUUIDS select _forEachIndex;
		
		_cleanup = false;
		_pos = getPosASL _x;
		if((_pos select 2) < 0) then {
			_cleanup = true;
		};
		
		if (isNull _x || !(alive _x) || _cleanup) then {
			["destroyBuilding","",[_uuid,objNull]] call DS_fnc_dbRequest;
			if(!isNull _x) then {
				detach _x;
				deleteVehicle _x;
			};
		} else {
			["updateBuilding","",[_x]] call DS_fnc_dbRequest;
			_newArray1 pushBack _x;
			_newArray2 pushBack _uuid;
		};
	} forEach (DS_var_Buildings);
	
	DS_var_Buildings = _newArray1;
	DS_var_BuildingUUIDS = _newArray2;
	if(!DS_var_runBuildingMon) exitWith {};
};
DS_var_savingBuildings = false;
