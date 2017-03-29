

DSZ_var_spawnedZeds = []; // all alive zombies
DSZ_var_spawnData = []; // information on all zombie spawns

SM_var_finishedZombies = true; // temp until SM_Zombz is removed

_config = call DSZ_fnc_readConfig;
[_config] call DSZ_fnc_selectLocations;

[] spawn DSZ_fnc_spawnManager;