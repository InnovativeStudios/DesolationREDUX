
private ["_cargo"];
_cargo = [(_this call BASE_fnc_getItemCargo),(_this call BASE_fnc_getMagCargo),(weaponsItemsCargo _this)];
_cargo