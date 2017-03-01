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
	if !([getpos _zed] call DSZ_fnc_isPlayerNear) then {
		_zData set[1,getposatl _zed];
		_zombieData set[_zDataIndex,_zData];
		bis_functions_mainscope setVariable ["DSZ_var_zData",_zombieData,true];
	
		[_zed] call DSZ_fnc_fromClient;
		diag_log "DESPAWNING ZOMBIE #";
		diag_log str(_x);
		_group = group _zed;
		deleteVehicle _zed;
		deleteGroup _group;
	} else {
		diag_log "NOT DELETING, TRANSFERING ZED #";
		diag_log str(_x);
		_near = [getpos _zed] call DSZ_fnc_getNearMen;
		{
			if(alive _x && isplayer _x) exitWith {
				[_x,_zed] call DSZ_fnc_toClient;
			};
		} forEach _near;
	};
};