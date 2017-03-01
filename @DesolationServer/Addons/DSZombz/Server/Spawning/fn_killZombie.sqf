params["_zed","_zDataIndex"];

diag_log "ZOMBIE DIED #";
diag_log str(_zDataIndex);

if(!local (group _zed)) then {[_zed] call DSZ_fnc_fromClient};
waitUntil{local (group _zed)};

_zombieData = bis_functions_mainscope getVariable ["DSZ_var_zData",[]];
_zData = _zombieData select _zDataIndex;

_zData set[1,[0,0,0]];
_zombieData set[_zDataIndex,_zData];
bis_functions_mainscope setVariable ["DSZ_var_zData",_zombieData,true];


DSZ_var_zUnits deleteAt (DSZ_var_zUnits find _zed);
_group = group _zed;
deleteGroup _group;