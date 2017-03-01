DSZ_allow_Agro = false;


_maxVisionDistance = 100;

_maxVisibleAngle = 60;

_smellDistance = 10;




while{true} do {

	_maxDistance = _maxVisionDistance max _smellDistance;


	_nearZombies = (vehicle player) nearEntities ["Man",_maxDistance];

	{
		if(!isPlayer _x && alive _x) then {
			if(!(_x getVariable ["agroed",false])) then {
				
				if([_x] call DSZ_fnc_zombieCanSmell) then {
					// smell agro
					systemchat "AGRO ZOMBIE: SMELL";
					[_x] call DSZ_fnc_agroZombie;
				
				} else {
					if([_x] call DSZ_fnc_zombieCanSee) then {
						// visible agro
						systemchat "AGRO ZOMBIE: VISION";
						[_x] call DSZ_fnc_agroZombie;
					};
				};
			};
		};
		true
	} count _nearZombies;
	
	
	uiSleep 5;
};