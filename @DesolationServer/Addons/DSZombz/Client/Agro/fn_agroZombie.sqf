params["_zed"];

_zed setVariable ["agroed",true,true];
if(!local _zed) then {
	[player,_zed] remoteExecCall ["DSZ_fnc_toClient",2];
	waitUntil{local _zed};
};

// start agro fsm
[_zed,player] execFSM "zombie\ai\fsm.fsm";