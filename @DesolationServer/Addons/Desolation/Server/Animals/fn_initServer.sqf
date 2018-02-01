

DS_var_spawnedAnimals = []; // all alive animals
DS_var_spawnDataAnimals = []; // information on all animal spawns

SM_var_finishedZombies = true; // temp until SM_Zombz is removed

DS_fnc_spawnAnimalFnc = DS_fnc_insertAnimal; // overridable function for animal spawns in desolation

// wait for map edits to finish loading
waitUntil{BASE_var_MapEditsDone};

[] spawn DS_fnc_spawnManager;