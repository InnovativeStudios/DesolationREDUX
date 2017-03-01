
DSZ_var_zUnits = []; //array containing all spawned zombies
_config = call DSZ_fnc_readConfig;
_zData = [_config] call DSZ_fnc_selectLocations;
[_zData] call DSZ_fnc_publish;


[] spawn {
	while{true} do {
		uiSleep 10;
		{
			if(!isNull _x) then {
				_zed = _x;
				
				// handle zombie moaning
				if !(_zed getVariable ["agroed",false]) then {
					if(diag_tickTime > ((_zed getVariable ["lastMoan",diag_tickTime - 25]) + 25)) then {
						if(count(attachedObjects _zed) == 0) then {
							_source = "Land_Can_Rusty_F" createVehicle [0,0,0];
							_source hideObjectGlobal true;
							_source attachTo [_zed,[0,0,1]];
						};
						_zed setVariable ["lastMoan",diag_tickTime];
						[((attachedObjects _zed) select 0),"SM_Zombz_Moan1"] remoteExec ["say3D",([getpos _zed] call DSZ_fnc_getNearMen)];
					};
				};
				
				if !([getpos _zed] call DSZ_fnc_isPlayerNear) then {
					[_zed getVariable ["zDataIndex",-1]] call DSZ_fnc_despawnZombie;
				} else {
					if(local (group _zed)) then {
						//zombie is local, but there is a nearby player, deagro, transfer, and reapply waypoints
						_zed setVariable ["agroed",false,true];
						_near = [getpos _zed] call DSZ_fnc_getNearMen;
						{
							if(alive _x && isplayer _x) exitWith {
								[_x,_zed] call DSZ_fnc_toClient;
								
								if(count(waypoints(group _zed)) == 0) then {
									_zDataIndex = _zed setVariable ["zDataIndex",-1];
									
									if(_zDataIndex < 0) exitWith {diag_log "WHAT THE FUCK";}; // failed
									
									_zombieData = bis_functions_mainscope getVariable ["DSZ_var_zData",[]];
									_zData = _zombieData select _zDataIndex;
									_locationpos = _zData select 3;
									_roamDist = _zData select 4;

									[_locationpos,_roamDist,group _zed] call DSZ_fnc_initRoaming;
								};
							};
						} forEach _near;
					};
				};
			};
		} forEach DSZ_var_zUnits;
		DSZ_var_zUnits = DSZ_var_zUnits - [objNull];
	};
};