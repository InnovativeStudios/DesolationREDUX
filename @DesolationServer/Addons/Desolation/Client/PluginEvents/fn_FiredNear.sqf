params["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_vehicle"];


if(!alive _unit) exitWith {false};

[_unit] spawn {
	params["_unit"];
	_unit setVariable ["DS_var_inCombat", true, true];
	uiSleep 60;
	_unit setVariable ["DS_var_inCombat", nil, true];
};


// USAGE: if !(isNil {_unit getVariable "DS_var_inCombat"}) then {_inCombat = true;};