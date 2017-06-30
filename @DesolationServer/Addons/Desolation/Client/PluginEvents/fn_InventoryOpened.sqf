params["_player","_container"];
_override = false;

[player,["BagOpen",50]] remoteExec ["say3D",allPlayers];

if(_container isKindOf "DSR_Civilian_Base") then {
	_box = "GroundWeaponHolder" createVehicle [0,0,0];
	_box setPosATL getPosATL _player;
	_player action ["Gear", _box];
	_override = true;
} else {
	_badUniforms = ["DSR_Assistant", "DSR_Doctor", "DSR_SchoolTeacher", "DSR_Policeman", "DSR_Priest", "DSR_Villager4", "DSR_Villager3", "DSR_Villager2", "DSR_Villager1", "DSR_Villager", "DSR_Functionary2", "DSR_Functionary1", "DSR_Woodlander4", "DSR_Woodlander3", "DSR_Woodlander2", "DSR_Woodlander1", "DSR_Woodlander", "DSR_Profiteer4", "DSR_Profiteer3", "DSR_Profiteer2", "DSR_Profiteer1", "DSR_Worker4", "DSR_Worker3", "DSR_Worker2", "DSR_Worker1", "DSR_Worker", "DSR_Citizen4", "DSR_Citizen3", "DSR_Citizen2", "DSR_Citizen1", "DSR_Citizen"];
	{
		if(_x in _badUniforms) then {
			_box = "GroundWeaponHolder" createVehicle [0,0,0];
			_box setPosATL getPosATL _player;
			_player action ["Gear", _box];
			_override = true;
		};
	} forEach (itemCargo _container);
};
DS_var_InvOpen = true;
[] spawn ds_fnc_setupInvEvents;
_override;