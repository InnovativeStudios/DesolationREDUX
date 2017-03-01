
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
				if !([getpos _zed] call DSZ_fnc_isPlayerNear) then {
					[_zed getVariable ["zDataIndex",-1]] call DSZ_fnc_despawnZombie;
				};
			};
		} forEach DSZ_var_zUnits;
		DSZ_var_zUnits = DSZ_var_zUnits - [objNull];
	};
};