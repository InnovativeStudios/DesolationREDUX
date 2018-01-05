
params ["_object","_cargo"];

clearItemCargo _object;
{
	_object addItemCargo _x;
} foreach _cargo;