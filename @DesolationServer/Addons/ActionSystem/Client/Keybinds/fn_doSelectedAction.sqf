/*
 * Desolation Redux
 * http://desolationredux.com/
 * � 2016 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */

if(toLower(["Enabled","ACT"] call BASE_fnc_getCfgValue) == "true") then {
	
	if(!ACT_var_Render2DActions) then {
	
		//register current action as the target for 2d actions
		
		if(ACT_var_Active3DIcon != -1) then {
			ACT_var_2DActionIndex = ACT_var_Active3DIcon;
			ACT_var_Render2DActions = true;
		};
	
	} else {
		_index = ACT_var_Selected2DAction - 1;
		
		if(_index >= 0 && _index < count(ACT_var_Rendered2DActionData)) then {
			_data = ACT_var_Rendered2DActionData select _index;
			_cursor = ACT_var_2DActionParameters select 0;
			_index = ACT_var_2DActionParameters select 1;
			_selection = ACT_var_2DActionParameters select 2;
			
			//systemChat str(_data);
			//systemChat str(_index);
			//systemChat str(_selection);
			
			if(call compile (_data select 0)) then {
				ACT_var_Render2DActions = false;
				[_cursor, _index, _selection] spawn compile ("params[""_cursor"",""_index"",""_selection""];" + (_data select 1));
			} else {
				systemchat "something failed, cannot execute that action";
			};
		};
		//run code for selected action	
	};
};
true