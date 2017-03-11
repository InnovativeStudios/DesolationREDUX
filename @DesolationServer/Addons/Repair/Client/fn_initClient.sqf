

/// Define needed variables for the system

//3d stuff
REM_var_Render3DActions = false;
REM_var_3DIconData = [];
REM_var_Active3DIcon = -1;

//2d stuff
REM_var_Render2DActions = false;
REM_var_2DActionIndex = -1;
REM_var_Selected2DAction = -1;
REM_var_Rendered2DActionData = [];
REM_var_2DActionParameters = [];

// add main draw thread
addMissionEventHandler ["Draw3D",{
	if(REM_var_Render3DActions) then {
		
		_active3dIcon = -1;
		{
			_actionIndex = _x select 0;
			_iconInfo = _x select 1;
			_cursorObject = _x select 2;
			
			{	
				_selection = _x select 0;
				_location = _x select 1;
				_3dpartdata = _x select 2;
				_selectionIndex = _x select 3;
				
				_name = _3dpartdata select 0;
				_icon = _3dpartdata select 1;
				
				REM_var_2DActionParameters = [_cursorObject,_selectionIndex,_selection];
				
				//todo check info
				/*
					1) are we looking at the icon
					2) are we in the 2d action system?
					3) is the icon on screen?
				*/
				
				if(!REM_var_Render2DActions || _forEachIndex == REM_var_2DActionIndex) then {
				
					_onScreen = true;
					_lookingAt = [_location] call REM_fnc_isPosTarget;
					
					_spos = worldToScreen _location;
					
					if(_spos isEqualTo []) then {
						_onScreen = false;
					};
					
					
					if(_onScreen) then {
						
						_scale = 0.04;
						if(_lookingAt || (REM_var_Render2DActions &&  _forEachIndex == REM_var_2DActionIndex)) then {
							_scale = 0.08;
							_active3dIcon = _forEachIndex;
						};
					
						drawIcon3D [_icon, [1,1,1,1], _location, 1, 1, 45, _name, 1, _scale, "TahomaB"];
					
					
						if(REM_var_Render2DActions && _forEachIndex == REM_var_2DActionIndex) then {
							
							
							// pull all available actions from the group
							_actionNames = [];
							_rendered2dactiondata = [];
							_actionInfo = REM_var_ACTIONS select _actionIndex;
							_actionList = REM_var_ACTIONS select 2; 
							{
								_aCondition = _x select 0;
								_aText = _x select 1;
								_aCode = _x select 2;
								
								if(call compile _aCondition) then {
									_actionNames pushback _aText;
									_rendered2dactiondata pushBack [_aCondition,_aCode];
								};
								if(count(_actionNames) == 4) exitWith {};  // only 4 actions can render
								
							} forEach _actionList;
							REM_var_Rendered2DActionData = _rendered2dactiondata; // update the data we are rendering
							
							// calculate the selected action
							
							_cpos = [0.5,0.5];
							_submenu = 1;
							
							
							_dX = (_spos select 0) - (_cpos select 0);
							_dY = (_spos select 1) - (_cpos select 1);
							_h = sqrt(_dX^2 + _dY^2);
							
							_angle = abs(asin(_dY/_h));
							
							if(_angle <= 45) then {
								if(_dX <= 0) then {
									_submenu = 4;
								} else {
									_submenu = 2;
								};
							} else {
								if(_dY <= 0) then {
									_submenu = 3;
								} else {
									_submenu = 1;
								};
							};
							
							REM_var_Selected2DAction = _submenu;
							[_location,_actionNames,_submenu] call REM_fnc_display2DMenu;
						};	
					};
				};
			} forEach _iconInfo;
		
		} forEach REM_var_3DIconData;
		
		REM_var_Active3DIcon = _active3dIcon;
		
		
	};
}];



