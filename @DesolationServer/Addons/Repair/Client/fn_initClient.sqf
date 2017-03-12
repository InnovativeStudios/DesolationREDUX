

/// Define needed variables for the system

//3d stuff
REP_var_Render3DActions = false;
REP_var_3DIconData = [];
REP_var_Active3DIcon = -1;

//2d stuff
REP_var_Render2DActions = false;
REP_var_2DActionIndex = -1;
REP_var_Selected2DAction = -1;
REP_var_Rendered2DActionData = [];
REP_var_2DActionParameters = [];

// add main draw thread
addMissionEventHandler ["Draw3D",{
	if(REP_var_Render3DActions) then {
		
		_active3dIcon = -1;
		if(count(REP_var_3DIconData) > 0) then {
			_actionIndex = REP_var_3DIconData select 0;
			_iconInfo = REP_var_3DIconData select 1;
			_cursorObject = REP_var_3DIconData select 2;
			
			{	
				_selection = _x select 0;
				_location = _x select 1;
				_3dpartdata = _x select 2;
				_selectionIndex = _x select 3;
				
				_name = _3dpartdata select 0;
				_icon = _3dpartdata select 1;
				
				REP_var_2DActionParameters = [_cursorObject,_selectionIndex,_selection];
				
				
				if(!REP_var_Render2DActions || _forEachIndex == REP_var_2DActionIndex) then {
				
					_onScreen = true;
					_lookingAt = [_location] call REP_fnc_isPosTarget;
					
					_spos = worldToScreen _location;
					
					if(_spos isEqualTo []) then {
						_onScreen = false;
					};
					
					
					if(_onScreen) then {
						_damage = _cursorObject getHitPointDamage _selection;
						
						_color = [0,1,0,1];
						if(!isNil {_damage}) then {
							_color = [_damage min 1,(1-_damage) max 0,0,1];
						};
						
						_scale = 0.04;
						if(_lookingAt || (REP_var_Render2DActions &&  _forEachIndex == REP_var_2DActionIndex)) then {
							_scale = 0.08;
							_active3dIcon = _forEachIndex;
						};
					
						drawIcon3D [_icon, _color, _location, 1, 1, 45, _name, 1, _scale, "TahomaB"];
					
					
						if(REP_var_Render2DActions && _forEachIndex == REP_var_2DActionIndex) then {
							
							
							_actionNames = [];
							_rendered2dactiondata = [];
							_actionInfo = REP_var_ACTIONS select _actionIndex;
							_actionList = _actionInfo select 2; 
							{
								_aCondition = _x select 0;
								_aText = _x select 1;
								_aCode = _x select 2;
								
								if(call compile _aCondition) then {
									_actionNames pushback _aText;
									_rendered2dactiondata pushBack [_aCondition,_aCode];
								};
								if(count(_actionNames) == 4) exitWith {};
								
							} forEach _actionList;
							REP_var_Rendered2DActionData = _rendered2dactiondata; 
							
							
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
							
							REP_var_Selected2DAction = _submenu;
							[_spos,_actionNames,_submenu] call REP_fnc_display2DMenu;
						};	
					};
				};
			} forEach _iconInfo;
		};
		REP_var_Active3DIcon = _active3dIcon;
	};
}];



