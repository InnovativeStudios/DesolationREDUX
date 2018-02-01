params["_animal"];

if(isNull _animal) exitWith {diag_log "ANIMALS > Can't despawn unknown animal!";}; // animal didnt exist?

_animalIndex = _animal getVariable ["animalIndex",-1];

if !([getpos _animal] call DS_fnc_isPlayerNear) then {
	
	// update zombie position in spawnData
	_animalData = DS_var_spawnData select _animalIndex;
	_animalData set[1,getposatl _animal];
	DS_var_spawnData set[_animalIndex,_animalData];

	//transfer locality if not local
	if(!local (group _animal)) then {[_animal] call DS_fnc_fromClient;};
	
	
	//update holder
	_holder = _animalData select (count(_animalData)-1);
	_holder setposatl (_animalData select 1);
	_holder setVariable ["isSpawned",false];
	
	_group = group _animal;
	deleteGroup _group;
	deleteVehicle _animal;
	
} else {
	_near = [getpos _animal] call DS_fnc_getNearPlayers;
	if(count(_near) > 0) then {
		// transfer zombie locality to new near player
		_plr = _near select 0;
		[_plr,_animal] call DS_fnc_toClient;
	} else {
		diag_log "ANIMALS > ERROR: Player near but not found when despawning";
	};
};