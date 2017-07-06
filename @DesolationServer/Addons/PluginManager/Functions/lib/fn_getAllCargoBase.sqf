
private ["_cargo"];
_cargo = [(_this call BASE_fnc_getItemCargo),(_this call BASE_fnc_getMagCargo),(_this call BASE_fnc_getWepCargoBase)];
_cargo