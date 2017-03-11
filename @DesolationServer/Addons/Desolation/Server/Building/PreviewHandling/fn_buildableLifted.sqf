params["_buildable","_clientObj"];

// we are lifting the buildable
/*
	1) copy loot
	2) delete old one
	3) create dynamic varient
	4) attach dynamic varient to client via lift system
*/

_typename = typeof(_buildable);
_typename = _typename select [0,count(_typename)-1]; //strip off 2 (*_Preview2 => *_Preview)

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

//tell client to lift this new object
[_buildable] remoteExec ["DS_fnc_liftBuildable",_clientObj]; 