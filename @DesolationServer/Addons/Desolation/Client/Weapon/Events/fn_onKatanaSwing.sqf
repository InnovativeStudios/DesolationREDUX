_closest = cursorTarget;
if(isNull _closest) exitWith {};
if(player distance _closest > 3) exitWith {};

if(alive _closest) then {
	if(cursorTarget isKindOf "Man") then {
		if(isPlayer _closest) then {
			if(_closest == player) exitWith {};
			[player,2] remoteExec ["DS_fnc_onMeleeHit",_closest];
		} else {
			_closest setDamage ((damage _closest) + 0.25);
		};
	} else {
		if(cursorTarget in vehicles) then {
			//TODO: vehicle damage without setDamage as it doesnt work
		//	(vehicle _closest) setDamage ((damage _closest) + 0.005);
		} else {
			// Random object damage
		};
	};
};