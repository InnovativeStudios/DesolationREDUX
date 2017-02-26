
DSZ_var_zUnits = []; //array containing all spawned zombies
_config = call DSZ_fnc_readConfig;
_zData = [_config] call DSZ_fnc_selectLocations;
[_zData] call DSZ_fnc_publish;


[] execFSM "\DSZombz\Server\BRAIN.fsm";