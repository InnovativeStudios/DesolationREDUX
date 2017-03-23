params["_x","_owner"];

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

_zombie = _group createUnit [_class, _pos, [], 0, "NONE"];

_zombie disableAI "TARGET";
_zombie disableAI "AUTOTARGET";
_zombie disableAI "COVER";
_zombie disableAI "AUTOCOMBAT";

_zombie setBehaviour "CARELESS";
_zombie forceSpeed (_zombie getSpeed "SLOW");



_zombie addEventHandler ["MPKilled",{
	params["_zed"];
	if(isServer) then {
		_zDataIndex = _zed getVariable ["zDataIndex",-1];
		[_zed,_zDataIndex] spawn DSZ_fnc_killZombie;
	};
}];

_zombie setVariable ["zDataIndex",_x,true];
_zombie setVariable ["zAgroType",_type,true];
DSZ_var_zUnits pushback _zombie;

[_owner,_zombie] call DSZ_fnc_toClient;
[_locationpos,_roamDist,_group] call DSZ_fnc_initRoaming;