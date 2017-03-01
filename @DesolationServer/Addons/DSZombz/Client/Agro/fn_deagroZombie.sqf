params["_zed"];



if(!alive _zed || isNull _zed) exitWith {};

_zed forceSpeed (_zed getSpeed "SLOW");
_zed setVariable ["agroed",false,true];
_zDataIndex = _zed getVariable ["zDataIndex",-1];


if(_zDataIndex < 0) exitWith {diag_log "ERROR: wtf no data index?";};


_zombieData = bis_functions_mainscope getVariable ["DSZ_var_zData",[]];
_zData = _zombieData select _zDataIndex;
_locationpos = _zData select 3;
_roamDist = _zData select 4;

[_locationpos,_roamDist,group _zed] remoteExec ["DSZ_fnc_initRoaming",2];