params["_zed"];

if(!DSZ_allow_Agro) exitWith {systemchat "AGRO DISABLED";};

_zed setVariable ["agroed",true,true];
if(!local _zed) then {
	[player,_zed] remoteExecCall ["DSZ_fnc_toClient",2];
	waitUntil{local _zed};
};

_zed forceSpeed (_zed getSpeed "FAST");

_group = group _zed;

while{(count (waypoints _group)) > 0} do {
	deleteWaypoint ((waypoints _group) select 0);
};

[_zed,player] execFSM "DSR_Zombz_Code\fsm\dszBrain.fsm";