params["_toSpawn","_toDespawn"];

diag_log "ZOMBIE SPAWN REQUEST";
diag_log str(count _toSpawn);
diag_log str(count _toDespawn);


{
	[_x] call DSZ_fnc_spawnZombie;
	
	true
} count _toSpawn;
{
	[_x] call DSZ_fnc_despawnZombie;
	
	true
} count _toDespawn;