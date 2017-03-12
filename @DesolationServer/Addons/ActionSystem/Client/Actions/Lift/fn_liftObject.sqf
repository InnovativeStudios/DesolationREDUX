

params["_cursor"];


// lift based on object type (*_preview2 is a buildable, requires more calculations done in desolation plugin)
// also checks if desolation plugin exists
if(!(isNil "DS_fnc_onBuildableLift") && (toLower(typeof(_cursor)) find "_preview2" != -1)) then {
	[_cursor] call DS_fnc_onBuildableLift;
} else {
	if(!isNil "DS_fnc_onBuildableLift") then {
		[_cursor] call OM_fnc_liftObject; 
	} else {
		systemchat "No Lift Plugin Implemented, cannot lift";
	};
};