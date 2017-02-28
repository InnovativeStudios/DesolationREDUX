params["_x"];

_zombieData = bis_functions_mainscope getVariable ["DSZ_var_zData",[]];


_zData = _zombieData select _x;

_class = _zData select 0;
_pos = _zData select 1;
_type = _zData select 2;
_locationpos = _zData select 3;
_roamDist = _zData select 4;







_group = createGroup west;
if(isNull _group) then {
	_group = createGroup east;
};
if(isNull _group) then {
	_group = createGroup independent;
};
if(isNull _group) exitWith {
	"DSZOMBZ > FATAL ERROR: NOT ENOUGH GROUPS FOR ZOMBIES";
};

// make sure the group isnt having its side changed when this is run
_zombie = _group createUnit [_class, _pos, [], 0, "NONE"];

_zombie forceWalk true;

_zombie addEventHandler ["Killed",{
	params["_zed"];
	_zDataIndex = _zed getVariable ["zDataIndex",-1];
	[_zed,_zDataIndex] spawn DSZ_fnc_killZombie;
}];

[_locationpos,_roamDist,_group] call DSZ_fnc_initRoaming;

_zombie setVariable ["zDataIndex",_x,true];
_zombie setVariable ["zAgroType",_type,true];
DSZ_var_zUnits pushback _zombie;