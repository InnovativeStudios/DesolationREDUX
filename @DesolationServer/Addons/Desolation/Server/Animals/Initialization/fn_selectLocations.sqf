params["_config"];


_animalData = [];


_NumAnimals = 5000; // TODO: for testing

for "_i" from 1 to _NumAnimals do {
	_pos = [random(worldSize),random(worldSize),0];
	if !(surfaceIsWater _pos) exitWith {
		_animalType = selectRandom _config;
		_animalData pushback [_animalType select 0,_pos,_animalType select 1,_pos,100];
	};
};


DS_var_spawnData = _animalData;

//create holder objects
{
	_holder = [_forEachIndex,(_x select 1)] call DS_fnc_createHolder;
	_newArray = +_x;
	_newArray pushBack _holder;
	DS_var_spawnData set[_forEachIndex,_newArray];
} forEach DS_var_spawnData;

DS_var_doneSpawning = true;











