params["_zIndex","_owner"];

diag_log format["SPAWNING ZOMBIE # %1",_zIndex];

_zData = DSZ_var_spawnData select _zIndex;

_class = _zData select 0;
_pos = _zData select 1;
_agroType = _zData select 2;
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
_zombie enableFatigue false;
_zombie disableAI "TARGET";
_zombie disableAI "AUTOTARGET";
_zombie disableAI "COVER";
_zombie disableAI "AUTOCOMBAT";

_zombie setBehaviour "CARELESS";
_zombie forceSpeed (_zombie getSpeed "SLOW");
_zombie setVariable ["MoanDelay",diag_tickTime + (1.5 + random(3.5))];


_zombie addEventHandler ["MPKilled",{
	params["_zed"];
	if(isServer) then {
		_zIndex = _zed getVariable ["zIndex",-1];
		[_zed,_zIndex] spawn DSZ_fnc_killZombie;
	};
}];

_zombie setVariable ["zIndex",_zIndex]; //todo: cehck to see if this is used by clients
_zombie setVariable ["zInformation",[_agroType,_locationpos,_roamDist],true];
DSZ_var_spawnedZeds pushback _zombie;

[_owner,_zombie] call DSZ_fnc_toClient;
[_locationpos,_roamDist,group _zombie] call DSZ_fnc_initRoaming;
