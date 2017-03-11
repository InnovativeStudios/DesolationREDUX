


while{REM_var_Render3DActions} do {

	_3D_ICON_DATA = [];
	
	
	_cursor = cursorTarget;
	if(isNull _cursor) then {
		_cursor = cursorObject;
	};
	if(!isNull _cursor) then {
		if(player distance _cursor <= 7) then {
			//TODO:  calculate the action data
			_actionIndex = -1;
			_renderType = -1;
			{
				_condition = _x select 0;
				if(call compile _condition) exitWith {
					_actionIndex = _forEachIndex;
					_renderType = _x select 1;
				};
			} forEach REM_var_ACTIONS;
			
			if(_actionIndex != -1) then { // if the object we are looking at has 3d actions
				_iconInfo = [];
				
				if(_renderType == 0) then {
					_selections = selectionNames _cursor;
					{
						_3dpartdata = [_x] call REM_fnc_get3DPartName;
						if((_3dpartdata select 0) != "Error") then {
							_iconInfo pushback [_x, _cursor modelToWorld (_cursor selectionPosition _x),_3dpartdata,_forEachIndex];
						};
					} forEach _selections;
				} else {
					_iconInfo pushBack ["no_selection",_cursor modelToWorld [0,0,0],["action"] call REM_fnc_get3DPartName,0];
				};
				
				_3D_ICON_DATA pushBack _actionIndex;
				_3D_ICON_DATA pushBack _iconInfo;
				_3D_ICON_DATA pushBack _cursor;
			};	
		};
	};
	
	REM_var_3DIconData = _3D_ICON_DATA; // update icon data
	uiSleep 0.001; // wait 1 frame (this prevents sqf overload)
};