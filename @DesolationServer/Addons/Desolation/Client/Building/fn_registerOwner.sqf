
params[["_buildings",[]]];
{
	for "_i" from 1 to 5 do {
		_x setVariable["bis_disabled_Door_" + str(_i),0]; // enable door access
	};
} forEach _buildings;