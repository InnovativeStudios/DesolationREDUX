params["_animal","_animalIndex"];

if(alive _animal) exitWith {};

// set data to empty array to represent a dead animal & to not compromise other animalIndex's on animals
DS_var_spawnData set[_animalIndex,[]]; 

// delete dead body from spawnedAnimals array
_index = (DS_var_spawnedAnimals find _animal);
if(_index > -1) then {
	DS_var_spawnedZeds deleteAt _index;
};
_animal setVariable ["diedAt",diag_tickTime]; //mark animal for cleanup