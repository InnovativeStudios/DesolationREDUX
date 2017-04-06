
while{true} do {
	_aliveZombieIndexes = [];
	_zedsToSpawn = [];
	
	DSZ_var_spawnedZeds = DSZ_var_spawnedZeds - [objNull];
	{
		if(!isNull _x) then {
			_zIndex = _x getVariable ["zIndex",-1]; //get zombie index information
			if !([getposatl _x] call DSZ_fnc_isPlayerNear) then { 
				if(alive _x) then {
					[_x] call DSZ_fnc_despawnZombie; // if no player is near, despawn
				};
			} else {
				_aliveZombieIndexes pushback _zIndex; // mark that index as a spawned zombie
				
				if(local group _x) then {
					//-- transfer locality to nearest man
					_nearPlayers = [getposatl _x] call DSZ_fnc_getNearPlayers;
					_plr = _nearPlayers select 0;
					
					diag_log "DSZOMBZ > TRANSFERING";
					
					[_plr,_x] call DSZ_fnc_toClient;
				};
				
				// play zombie moan if random time delay is triggered
				if !(_x getVariable ["agroed",false]) then {
					_moanDelay = _x getVariable ["MoanDelay",diag_tickTime + 5 + random(5)];
					if(diag_tickTime >= _moanDelay) then {
						[_x,"DSR_Zombz_Idle" + str(ceil(random(36)))] remoteExec ["say3D",0];
						_x setVariable ["MoanDelay",diag_tickTime + 5 + random(5)];
					};
				};
				
			};
		};
	} forEach DSZ_var_spawnedZeds;
	uiSleep 0.25;
	{
		if(count(_x) > 0) then { // if count(_x) == 0 then zombie is dead (this is an "isdead" check)
			_pos = _x select 1;
			_zIndex = _forEachIndex;
			
			if !(_zIndex in _aliveZombieIndexes) then { // if this zombie is not already spawned
				_nearPlayers = [_pos] call DSZ_fnc_getNearPlayers; // get all near players
				if(count(_nearPlayers) > 0) then {
					_player = _nearPlayers select 0;
					[_zIndex,_player] call DSZ_fnc_spawnZombie; // if there is a near player, spawn zombie
				};
			};
		};
	} forEach DSZ_var_spawnData;
	uiSleep 0.25;
};