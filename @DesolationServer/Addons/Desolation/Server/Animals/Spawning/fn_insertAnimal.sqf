params["_location","_roamRadius"];

_config = DS_var_animalConfig;
_animalType = selectRandom _config;
_animalIndex = count(DSZ_var_spawnData);

_holder = [_animalIndex,_location] call DS_fnc_createHolder;
DS_var_spawnData pushback [_animalType select 0,_location,_animalType select 1,_location,_roamRadius,_holder];