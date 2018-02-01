

while {true} do {
	_aliveZombieIndexes = [];
	_zedsToSpawn = [];
	
	_lastNum = -1;
	DSZ_var_spawnedZeds = DSZ_var_spawnedZeds - [objNull];
	{
		if(!isNull _x) then {
			_animalIndex = _x getVariable ["animalIndex",-1]; //get zombie index information
			if !([getposatl _x] call DS_fnc_isPlayerNear) then { 
				if(alive _x) then {
					[_x] call DS_fnc_despawnAnimal; // if no player is near, despawn
				};
			} else {
				_aliveAnimalIndexes pushback _animalIndex; // mark that index as a spawned zombie
				_nearPlayers = [getposatl _x] call DS_fnc_getNearPlayers;
				
				if(local group _x && count(_nearPlayers) > 0) then {
					//-- transfer locality to nearest man
					_plr = _nearPlayers select 0;
					
					
					[_plr,_x] call DS_fnc_toClient;
				};
			};
		};
	} forEach DS_var_spawnedAnimals;
	uiSleep 0.5;
	
	{
		_player = _x;	
		if(alive _player) then {
			_nearAI = _player nearObjects ["DSR_Object_Blank_Cube",250];
			{
				_animalHolder = _x;
				if !(_animalHolder getVariable["isSpawned",false]) then {
					[_animalHolder,_player] call DS_fnc_spawnAnimal;
				};
			} forEach _nearAI;
		};
	} forEach allPlayers;
	uiSleep 0.5;
};