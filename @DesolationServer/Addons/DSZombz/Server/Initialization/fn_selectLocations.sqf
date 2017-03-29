
params["_config"];


_Random_Zombies = call compile (["Random_Zombies","DSZ"] call BASE_fnc_getCfgValue);


_locations = ["Airport","NameMarine","NameCityCapital","NameCity","NameVillage","NameLocal"];
_zombieData = [];

{
	_allLocations = nearestLocations [[worldSize/2,worldSize/2,0], [_x], worldSize/2];
	_NumZombies = call compile (["Zombies_" + _x,"DSZ"] call BASE_fnc_getCfgValue);
	_SpawnRadius = call compile (["Radius_" + _x,"DSZ"] call BASE_fnc_getCfgValue);
	
	
	{
		_position = locationPosition _x;
		_roads = _position nearRoads _SpawnRadius;
		if(count(_roads) < _NumZombies) then {	
			if(count(_roads) > 0) then {
				for "_i" from 1 to _NumZombies do {
					_road = selectRandom _roads;
					_pos = getPosATL _road;
					_pos set[2,0];
					_zType = selectRandom _config;
					_zombieData pushback [_zType select 0,_pos,_zType select 1,_position,_SpawnRadius];
				};
			} else {
				for "_i" from 1 to _NumZombies do {
					_dPos = [random(_SpawnRadius*2)-_SpawnRadius,random(_SpawnRadius*2)-_SpawnRadius,0];
					_pos = _position vectorAdd _dPos;
					_pos set[2,0];
					_zType = selectRandom _config;
					_zombieData pushback [_zType select 0,_pos,_zType select 1,_position,_SpawnRadius];
				};
			};
		} else {
			for "_i" from 1 to _NumZombies do {
				_road = _roads deleteAt floor(random(count(_roads)));
				_pos = getPosATL _road;
				_pos set[2,0];
				_zType = selectRandom _config;
				_zombieData pushback [_zType select 0,_pos,_zType select 1,_position,_SpawnRadius];
			};
		};
		true
	} count _allLocations;
	true
} count _locations;


// Random zombie locations (in jungle)
for "_i" from 1 to _Random_Zombies do {
	_pos = [0,0,0];
	while{true} do {
		_pos = [random(worldSize),random(worldSize),0];
		if !(surfaceIsWater _pos) exitWith {
			_zType = selectRandom _config;
			_zombieData pushback [_zType select 0,_pos,_zType select 1,_pos,100];
		};
	};
};




DSZ_var_spawnData = _zombieData;












