params["_buildable"];



_typename = typeof(_buildable) + "2"; //add 2 (*_Preview => *_Preview2)

// get statistics from old object
_loot = [_buildable] call DS_fnc_getLoot;
_dir = getdir _buildable;
_pos = getposatl _buildable;
_vars = [];
{
	_vars pushback [_x,_buildable getVariable _x];
} forEach allVariables _buildable;


_newBuildable = _typename createVehicle [0,0,0];

//transfer statistics to new object
_newBuildable setDir _dir;
{
	_buildable setVariable _x;
} forEach _vars;
[_newBuildable,_loot] call DS_fnc_setLoot;
_newBuildable setVectorUp [0,0,1];

//update object (delete old, move new)
deleteVehicle _buildable;
_newBuildable setPosATL _pos;
