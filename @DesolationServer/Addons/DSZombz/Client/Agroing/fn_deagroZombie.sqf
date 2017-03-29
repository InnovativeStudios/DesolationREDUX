params["_zed"];



if(!alive _zed || isNull _zed) exitWith {};

_zed enableCollisionWith player;


_zed forceSpeed (_zed getSpeed "SLOW");
_zed setVariable ["agroed",false,true];


// restart roaming AI
_zInformation = _zed getVariable ["zInformation",[]];
systemchat format["DEAGROING ZOMBIE # %1",_zDataIndex];
if(count(_zInformation) == 0) exitWith {diag_log "ERROR: wtf no data index?";};
[_zInformation select 1,_zInformation select 2,group _zed] call DSZ_fnc_initRoaming;