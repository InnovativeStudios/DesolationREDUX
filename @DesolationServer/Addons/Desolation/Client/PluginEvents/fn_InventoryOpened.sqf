params["_player","_container"];
_override = false;
if(_container isKindOf "DSR_Civilian_Base") then {
	_box = "GroundWeaponHolder" createVehicle [0,0,0];
	_box setPosATL getPosATL _player;
	_player action ["Gear", _box];
};
DS_var_InvOpen = true;
[] spawn ds_fnc_setupInvEvents;
_override;