params["_zed"];

_zombie forceSpeed (_zombie getSpeed "SLOW");

_zed setVariable ["agroed",false,true];

if(!alive _zed) exitWith {};

_zDataIndex = _zed setVariable ["zDataIndex",-1];

if(_zDataIndex < 0) exitWith {diag_log "ERROR: wtf no data index?";};


_zombieData = bis_functions_mainscope getVariable ["DSZ_var_zData",[]];
_zData = _zombieData select _x;
_locationpos = _zData select 3;
_roamDist = _zData select 4;

[_locationpos,_roamDist,group _zed] remoteExec ["DSZ_fnc_initRoaming",2];