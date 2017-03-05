_closest = cursorTarget;
if(isNull _closest) exitWith {};
if(player distance _closest > 3) exitWith {};

systemchat str(_closest);
if(alive _closest) then {
	if(cursorTarget isKindOf "Man") then {
		if(isPlayer _closest) then {
			systemchat "Player Hit";
			if(_closest == player) exitWith {systemchat "Devs fucked up. Report this";};
			[player,2] remoteExec ["DS_fnc_onMeleeHit",_closest];
		} else {
			systemchat "Zombie Hit";
			_closest setDamage ((damage _closest) + 0.25);
		};
	} else {
		if(cursorTarget in vehicles) then {
			systemchat "Vehicle Hit";
		//	(vehicle _closest) setDamage ((damage _closest) + 0.005);
		} else {
			systemchat "Random object hit";
		};
	};
};