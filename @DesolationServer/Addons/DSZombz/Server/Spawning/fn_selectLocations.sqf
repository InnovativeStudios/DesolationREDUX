
params["_config"];


_City_Spawn_Radius = call compile (["City_Spawn_Radius","DSZ"] call BASE_fnc_getCfgValue);
_Zombies_Per_City = call compile (["Zombies_Per_City","DSZ"] call BASE_fnc_getCfgValue);
_Random_Zombies = call compile (["Random_Zombies","DSZ"] call BASE_fnc_getCfgValue);


_locations = ["Airport","NameMarine","NameCityCapital","NameCity","NameVillage","NameLocal"];

_allLocations = nearestLocations [[worldSize/2,worldSize/2,0], _locations, worldSize/2];

_zombieData = [];

{
	_position = locationPosition _x;
	
	_roads = _position nearRoads _City_Spawn_Radius;
	if(count(_roads) < _Zombies_Per_City) then {
		for "_i" from 1 to _Zombies_Per_City do {
			_road = selectRandom _road;
			_pos = getPosATL _road;
			_pos set[2,0];
			
			_zType = selectRandom _config;
			
			_zombieData pushback [_zType select 0,_pos,_zType select 1];
			
		};
	} else {
		for "_i" from 1 to _Zombies_Per_City do {
			_road = _roads deleteAt floor(random(count(_roads)));
			_pos = getPosATL _road;
			_pos set[2,0];
			
			_zType = selectRandom _config;
			
			_zombieData pushback [_zType select 0,_pos,_zType select 1];
			
		};
	};
	
} forEach _allLocations;
for "_i" from 1 to _Random_Zombies do {
	_pos = [0,0,0];
	while{true} do {
		_pos = [random(worldSize),random(worldSize),0];
		if !(surfaceIsWater _pos) exitWith {
			_zType = selectRandom _config;
			
			_zombieData pushback [_zType select 0,_pos,_zType select 1];
		};
	};
	
	
};


_zombieData;

//todo select all locations
//todo pull .cfg data for spawning
//todo generate array of all zombie spawn data
//todo return that array of zombie spawn data














