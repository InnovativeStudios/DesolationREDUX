params["_animalIndex","_position"];

_animalHolder = "DSR_Object_Blank_Cube" createVehicle [0,0,0];
_animalHolder enableSimulationGlobal false;
_animalHolder hideObjectGlobal true;
_animalHolder setVariable ["animalIndex",_animalIndex];
_animalHolder setVariable ["isSpawned",false];
_animalHolder setposatl _position;

_animalHolder;