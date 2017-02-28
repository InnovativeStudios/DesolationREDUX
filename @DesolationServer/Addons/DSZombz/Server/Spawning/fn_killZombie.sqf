params["_zed","_zDataIndex"];

waitUntil{!(_zed getVariable ["agroed",false])};
[_zed] call DSZ_fnc_fromClient;

_zombieData = bis_functions_mainscope getVariable ["DSZ_var_zData",[]];
_zData = _zombieData select _zDataIndex;

//we cant remove the element so move the dead zombies data location to [0,0,0]
_zData set[1,[0,0,0]];
_zombieData set[_zDataIndex,_zData];
bis_functions_mainscope setVariable ["DSZ_var_zData",_zombieData,true];

_group = group _zed;
//deleteVehicle _zed; 
deleteGroup _group;