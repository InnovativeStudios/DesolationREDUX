/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */

if(toLower(["Enabled","REP"] call BASE_fnc_getCfgValue) == "true") then {
	if (isNil "REP_var_3DActionsEnabled") then
	{
		REP_var_3DActionsEnabled = false;
	};

	if !(REP_var_3DActionsEnabled) then
	{
		systemChat "Enabled";
		REP_var_3DActionsEnabled = true;
		REP_var_3DDrawEvent = addMissionEventHandler ["Draw3D",{ [] call REP_fnc_draw3DActions; }];
		[] spawn REP_fnc_calculate3DActions;
	}
	else
	{
		systemChat "Disabled";
		REP_var_3DActionsEnabled = false;
		if (isNil "REP_var_3DDrawEvent") exitWith { false };
		removeMissionEventHandler ["Draw3D", REP_var_3DDrawEvent];
		REP_var_3DDrawEvent = nil;
		REP_var_3DPartName = nil;
		REP_var_3DActionData = nil;
		REP_var_valid3DActionsCode = nil;
		REP_var_valid3DActionCodeSelected = nil;
	};
};
true