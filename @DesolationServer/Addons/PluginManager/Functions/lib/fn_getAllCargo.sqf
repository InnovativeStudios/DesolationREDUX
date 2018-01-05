
private ["_cargo"];

_weapons = (weaponsItemsCargo _this);
if (isNil "_weapons") then {_weapons = [];};

_cargo = [(_this call BASE_fnc_getItemCargo),(_this call BASE_fnc_getMagCargo),_weapons];

_cargo