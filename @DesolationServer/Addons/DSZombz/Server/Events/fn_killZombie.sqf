params["_zed","_zIndex"];

if(alive _zed) exitWith {};

// if not local then transfer its locality
if(!local (group _zed)) then {[_zed] call DSZ_fnc_fromClient};

// set data to empty array to represent a dead zombie & to not compromise other zIndex's on zombies
DSZ_var_spawnData set[_zIndex,[]]; 

// delete dead body from spawnedZeds array
_index = (DSZ_var_spawnedZeds find _zed);
if(_index > -1) then {
	DSZ_var_spawnedZeds deleteAt _index;
};