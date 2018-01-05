
params ["_unit","_cargo"];
_cargo params ["_itemCargo","_magCargo","_weaponCargo"];

if ((count _itemCargo)> 0) then {[_unit,_itemCargo] call BASE_fnc_setItemCargo;};
if ((count _magCargo)> 0) then {[_unit,_magCargo] call BASE_fnc_setMagCargo;};
if ((count _weaponCargo)> 0) then {[_unit,_weaponCargo] call BASE_fnc_setWepCargo;};
