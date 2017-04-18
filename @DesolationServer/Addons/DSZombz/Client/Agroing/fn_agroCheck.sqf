DSZ_allow_Agro = true;



while{true} do {
	_nearZombies = player nearEntities ["DSR_Civilian_Base",120];
	{
		if(!isPlayer _x && alive _x) then {
			if(!(_x getVariable ["agroed",false])) then {
				
				if([_x] call DSZ_fnc_zombieCanSmell) then {
					[_x] call DSZ_fnc_agroZombie;
				} else {
					if([_x] call DSZ_fnc_zombieCanSee) then {
						[_x] call DSZ_fnc_agroZombie;
					} else {
						if([_x] call DSZ_fnc_zombieCanHear) then {
							[_x] call DSZ_fnc_agroZombie;
						};
					};
				};
			};
		};
	} forEach _nearZombies;
	
	
	uiSleep 0.25;
};