

params["_crate"]; // this is the dynamic preview object


systemchat "Preview objects are not saved. After restart they will be deleted.";
systemchat "Press ESCAPE to cancel building.";

player reveal [_crate, 4]; // make sure we can see it

[_crate] spawn OM_fnc_liftObject;
waitUntil{!isNull OM_var_lifted};

_event = (findDisplay 46) displayAddEventHandler ["KeyDown",{
	_key = _this select 1;
	if(_key == 0x01) then {
		deleteVehicle OM_var_lifted;
	};
	false;
}];

waitUntil{isNull OM_var_lifted};

(findDisplay 46) displayRemoveEventHandler ["KeyDown",_event];

if(isNull _crate) exitWith {};

[_crate] remoteExec ["DS_fnc_buildableDropped",2];