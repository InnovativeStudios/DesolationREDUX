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

_enabled = call compile (["Enabled","DS"] call BASE_fnc_getCfgValue);
if(!_enabled) exitWith {diag_log "DESOLATION IS NOT ENABLED, THE PLUGIN WILL NOT RUN";};

_debug = call compile (["DebugMode","DS"] call BASE_fnc_getCfgValue);

if !(_debug) then {
	{
		_x setMarkerAlpha 0;
	} forEach allMapMarkers;
};

addMissionEventHandler ["PlayerDisconnected", DS_fnc_playerDisconnected];
addMissionEventHandler ["HandleDisconnect", DS_fnc_handleDisconnect];

civilian setFriend [sideEnemy, 1];

call DS_fnc_initLock;

// start vehicle & object spawns
[] spawn DS_fnc_spawnVehicles;

// start helicrash spawns
[] call DS_fnc_initHeliCrashes;
[] spawn DS_fnc_spawnCrashes;

// start item spawns
[] spawn DS_fnc_lootManager;

// start the building & crafting systems
[] spawn DS_fnc_initBuildingSys;
[] spawn DS_fnc_initCraftingSys;



// start the crafting system (not implemented)
// [] spawn DS_fnc_initCraftingSys;

// start airdrops
[] spawn DS_fnc_initAirdrops;

//--- start subsystems
[] spawn DS_fnc_simManager;

//--- TEMP (group system manager)
[] spawn {
	while{true} do {
		{ 
			if ((count units _x) == 0) then 
			{
				deleteGroup _x;
			};
		} forEach allGroups;
		uiSleep 20;
	};
};
//--- TEMP: move this to its own function
DeleteEmptyHolder = 
{
    // This file does not need to be optimized, it's litreally just doing something very basic.
    // Security
    params["_netIdConatiner","_netIdPlayer"];
    private _container = objectFromNetId _netIdConatiner;
    private _player = objectFromNetId _netIdPlayer;
    if !(isNull _container) then
    {
        // Also secuirty
        if ((typeOf _container) == "LootWeaponHolder") then
        {
            deleteVehicle _container;
        };
    };
    true
};


//--- DEBUG (monitor thread counts)
[] spawn {
	while{true} do {
		_threads = Diag_activeScripts;
		NUM_THREADS = (_threads select 0) + (_threads select 1) - 1;
		
		if(NUM_THREADS > 13 && diag_fps < 40) then {
			diag_log ("ERROR: CANT KEEP UP! To many threads running on the server - " + str(NUM_THREADS) + " - FPS: " + str(diag_fps));
		};
		if(diag_fps < 15) then {
			diag_log ("ERROR: CANT KEEP UP! Thread Count: " + str(Diag_activeScripts) + " - FPS: " + str(diag_fps));
		};
		uiSleep 0.5;
	};
};
