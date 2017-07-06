params["_location","_roamRadius"];

_config = DSZ_var_zConfig;
_zType = selectRandom _config;
_zIndex = DSZ_var_spawnData pushback [_zType select 0,_location,_zType select 1,_location,_roamRadius];



[_zIndex,_location] call DSZ_fnc_createHolder;