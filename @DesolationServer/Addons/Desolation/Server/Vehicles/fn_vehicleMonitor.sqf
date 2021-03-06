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

DS_var_finishedVehicles = true;
DS_var_runVehicleMon = true;
DS_var_savingVehicles = true;
call DS_fnc_checkServerLock;

while{true} do {
	_time = diag_tickTime + (60*30);
	waitUntil{diag_tickTime >= _time || !DS_var_runVehicleMon};
	
	
	_newArray1 = [];
	_newArray2 = [];
	{
		_uuid = DS_var_VehicleUUIDS select _forEachIndex;
		
		_cleanup = false;
		_pos = getPosASL _x;
		if((_pos select 2) < 0 && !(_x isKindOf "Ship")) then {
			_cleanup = true;
		};
		
		if (isNull _x || !(alive _x) || _cleanup) then {
			["destroyVehicle","",[_uuid,objNull]] call DS_fnc_dbRequest;
			if(!isNull _x) then {
				detach _x;
				deleteVehicle _x;
			};
		} else {
			["updateVehicle","",[_x]] call DS_fnc_dbRequest;
			_newArray1 pushBack _x;
			_newArray2 pushBack _uuid;
		};
	} forEach (DS_var_Vehicles);
	DS_var_Vehicles = _newArray1;
	DS_var_VehicleUUIDS = _newArray2;
	
	if(!DS_var_runVehicleMon) exitWith {};
};
DS_var_savingVehicles = false;