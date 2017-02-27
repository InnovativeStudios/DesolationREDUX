

// Psuedocode for zombie spawning/despawning

while{true} do {
	_plrPos = getpos (vehicle player);
	waitUntil{(((getpos (vehicle player)) distance _plrPos) > 20)};

	systemchat "Requesting new data";
	

	_zombieData = bis_functions_mainscope getVariable ["DSZ_var_zData",[]];
	_nearZombies = (vehicle player) nearEntities ["Man",400];
	
	_spawnArray = [];
	_despawnArray = [];
	{
		_pos = _x select 1;
		_dist = (vehicle player) distance _pos;
		
		if(_dist < 400) then {
			if(_dist < 250) then {
				
				_index = _forEachIndex;
				_exists = ({_x getVariable ["zDataIndex",-1] == _index} count(_nearZombies)) > 0;
				
				if(!_exists) then {
					_spawnArray pushback _index;
				};
			} else {
				
				_index = _forEachIndex;
				_exists = ({_x getVariable ["zDataIndex",-1] == _index} count(_nearZombies)) > 0;
				
				if(_exists) then {
					_despawnArray pushback _index;
				};
			};
		};
	} foreach (_zombieData);
	
	if(count(_spawnArray) > 0 || count(_despawnArray) > 0) then {
		systemchat str(count _spawnArray);
		systemchat str(count _despawnArray);
	
		[_spawnArray,_despawnArray] remoteExec ["DSZ_fnc_simUpdateRequest",2];
	};
};	


