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
	
	if(!REM_var_Render2DActions) then {
	
		//register current action as the target for 2d actions
		
		if(REM_var_Active3DIcon != -1) then {
			REM_var_2DActionIndex = REM_var_Active3DIcon;
			REM_var_Render2DActions = true;
		};
	
	} else {
		
		_index = REM_var_Selected2DAction - 1;
		if(_index >= 0) then {
			_data = REM_var_Rendered2DActionData select _index;
			_cursor = REM_var_2DActionParameters select 0;
			_index = REM_var_2DActionParameters select 1;
			_selection = REM_var_2DActionParameters select 2;
			
			if(call compile (_data select 0)) then {
				call compile (_data select 1);
			} else {
				systemchat "something failed, cannot execute that action";
			};
		};
		
		
		
		//run code for selected action
	
	};
};
true