

DSZ_var_spawnedZeds = []; // all alive zombies
DSZ_var_spawnData = []; // information on all zombie spawns

SM_var_finishedZombies = true; // temp until SM_Zombz is removed

DS_fnc_spawnZombieFnc = DS_fnc_spawnZombieFnc; // overridable function for zombie spawns in desolation


DSZ_var_zConfig = call DSZ_fnc_readConfig;
[DSZ_var_zConfig] call DSZ_fnc_selectLocations;

[] spawn DSZ_fnc_spawnManager;