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

 
_password = bis_functions_mainscope getVariable ["ServerCommandPassword_DS", ""];
if(DS_var_finishedVehicles && DS_var_finishedLoot && SM_var_finishedZombies) then {
	bis_functions_mainscope setVariable ["ServerCommandPassword_DS",nil,true]; //--- wipe security vulnerability 
	_password serverCommand "#unlock";
	diag_log "SERVER LOCKING > UNLOCKED";
	
	safeshutdown = compileFinal ('
		params["_password"];
		
		diag_log  "Shutdown > Locking Server";
		_password serverCommand "#lock";
		diag_log  "Shutdown > Kicking Players";
		{
			_password serverCommand ("#kick " + str(owner _x));
		} forEach allPlayers;
		uiSleep 10; 
		diag_log  "Shutdown > Waiting for vehicle monitor to exit";
		DS_var_runVehicleMon = false;
		waitUntil{!DS_var_savingVehicles};
		diag_log  "Shutdown > Waiting for building monitor to exit";
		DS_var_runBuildingMon = false;
		waitUntil{!DS_var_savingBuildings};
		diag_log  "Shutdown > Done";
		_password serverCommand "#shutdown";
	');
	_password spawn {
		params["_password"];
		
		uiSleep (3600*4)-(60*5); // temp removed to test shutdown
		[
			[
				["SERVER SHUTTING DOWN, LOGOUT","align = 'left' shadow = '1' size = '0.9' font='PuristaBold'"]
			], 0, 0, true
		] remoteExec  ["BIS_fnc_typeText2", -2];
		uiSleep 60*4;
		[
			[
				["SERVER SHUTTING DOWN NOW, LOGOUT","align = 'left' shadow = '1' size = '0.9' font='PuristaBold'"]
			], 0, 0, true
		] remoteExec  ["BIS_fnc_typeText2", -2];
		uiSleep 60;
		
		// prevent new players from connecting
		diag_log  "Shutdown > Locking Server";
		_password serverCommand "#lock";
		
		// kick existing players
		diag_log  "Shutdown > Kicking Players";
		{
			_password serverCommand ("#kick " + str(owner _x));
		} forEach allPlayers;
		
		// wait for all disconnects to process
		uiSleep 10; 
		
		// save vehicles
		diag_log  "Shutdown > Waiting for vehicle monitor to exit";
		DS_var_runVehicleMon = false;
		waitUntil{!DS_var_savingVehicles};
		
		// save buildings
		diag_log  "Shutdown > Saving buildings";
		DS_var_runBuildingMon = false;
		waitUntil{!DS_var_savingBuildings};
		
		
		diag_log  "Shutdown > Done";
		_password serverCommand "#shutdown";
		
	};
};