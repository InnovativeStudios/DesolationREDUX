
params["_config"];


_Random_Zombies = call compile (["Random_Zombies","DSZ"] call BASE_fnc_getCfgValue);


_locations = ["Airport","NameMarine","NameCityCapital","NameCity","NameVillage","NameLocal"];
_zombieData = [];

{
	_allLocations = nearestLocations [[worldSize/2,worldSize/2,0], [_x], worldSize];
	_NumZombies = call compile (["Zombies_" + _x,"DSZ"] call BASE_fnc_getCfgValue);
	_SpawnRadius = call compile (["Radius_" + _x,"DSZ"] call BASE_fnc_getCfgValue);
	
	{
		_position = locationPosition _x;
		_roads = _position nearRoads _SpawnRadius;
		_posOnFail = _position;
		for "_i" from 1 to _NumZombies do {
			if(count(_roads) > 0) then {
				_road = selectRandom _roads;
				_posOnFail = getPosATL _road;
			};
			
			_zedPosition = [_position, 0, _SpawnRadius, 3, 0, 0, 0, [], [_posOnFail,[0,0,0]]] call BIS_fnc_findSafePos;
			_zedPosition pushBack 0;
			
			_zType = selectRandom _config;
			_zombieData pushback [_zType select 0,_zedPosition,_zType select 1,_position,_SpawnRadius];
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

//create holder objects
{
	_holder = [_forEachIndex,(_x select 1)] call DSZ_fnc_createHolder;
	_newArray = _x pushBack _holder;
	DSZ_var_spawnData set[_forEachIndex,_newArray];
} forEach DSZ_var_spawnData;

DSZ_var_doneSpawning = true;











