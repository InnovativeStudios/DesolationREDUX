params["_x"];

_zombieData = bis_functions_mainscope getVariable ["DSZ_var_zData",[]];


_zData = _zombieData select _x;
_pos = _zData select 1;
_zDataIndex = _x;
_zed = objNull;
{
	if((_x getVariable ["zDataIndex",-1]) == _zDataIndex) exitWith {
		_zed = _x;
	};
} forEach DSZ_var_zUnits;

if(!isNull _zed) then {
	_nearPlayers = {isPlayer _x && alive _x} count (_zed nearEntities ["Man",250]);
	if(_nearPlayers == 0) then {
		_zData set[1,getposatl _zed];
		_zombieData set[_zDataIndex,_zData];
		bis_functions_mainscope setVariable ["DSZ_var_zData",_zombieData];
	
		_group = group _zed;
		deleteVehicle _zed;
		deleteGroup _group;
	} else {
		diag_log "NOT DELETING, TRANSFERING ZED #";
		diag_log str(_x);
		_near = _zed nearEntities ["Man",250];
		{
			if(alive _x && isplayer _x) exitWith {
				[_x,_zed] call DSZ_fnc_toClient;
			};
		} forEach _near;
	};
};