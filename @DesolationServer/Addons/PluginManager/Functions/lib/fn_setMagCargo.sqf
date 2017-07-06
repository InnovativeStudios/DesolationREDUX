

params ["_object","_cargo"];
clearMagazineCargoGlobal _object;
{
_object addMagazineAmmoCargo _x;
}foreach _cargo;