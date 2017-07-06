

params ["_object","_cargo"];
clearItemCargoGlobal _object;
{
_object addItemCargoGlobal _x;
}foreach _cargo;