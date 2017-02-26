
DSZ_var_zUnits = []; //array containing all spawned zombies
_config = call DSZ_fnc_readConfig;
_zData = [_config] call DSZ_fnc_selectLocations;
[_zData] call DSZ_fnc_publish;


[] spawn {
	while{true} do {
		uiSleep 10;
		{
			if(!isNull _x) then {
				_zed = _x;
				_nearPlayers = {isPlayer _x && alive _x} count (_zed nearEntities ["Man",250]);
				if(_nearPlayers == 0) then {
					[_zed getVariable ["zDataIndex",-1]] spawn DSZ_fnc_despawnZombie;
				};
			};
		} forEach DSZ_var_zUnits;
	};
};