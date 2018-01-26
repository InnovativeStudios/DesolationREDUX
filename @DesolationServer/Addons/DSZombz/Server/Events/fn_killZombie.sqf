params["_zed","_zIndex"];

if(alive _zed) exitWith {};

// set data to empty array to represent a dead zombie & to not compromise other zIndex's on zombies
DSZ_var_spawnData set[_zIndex,[]]; 

// delete dead body from spawnedZeds array
_index = (DSZ_var_spawnedZeds find _zed);
if(_index > -1) then {
	DSZ_var_spawnedZeds deleteAt _index;
};
_zed setVariable ["diedAt",diag_tickTime]; //mark zombie for cleanup
[_zed] spawn {
	params ["_zed"];
	uiSleep 2;
	removeUniform _zed;
	_type = typeOf _zed;
	diag_log format ["%1",_type];

	_zed addUniform "dsr_player_"+_type;
	//_items = call copmile (getConfig);
	_items = "dsr_item_redApple";
	_zed addItem _items;
};