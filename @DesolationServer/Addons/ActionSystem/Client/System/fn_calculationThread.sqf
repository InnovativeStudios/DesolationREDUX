


while{ACT_var_Render3DActions} do {

	scopeName "calc_main";

	_3D_ICON_DATA = [];
	
	
	_cursor = cursorTarget;
	if(isNull _cursor) then {
		_cursor = cursorObject;
	};
	if(!isNull _cursor) then {
		if(player distance _cursor <= 7) then {
			_actionIndex = -1;
			_renderType = -1;
			{
				_condition = _x select 0;
				if(call compile _condition) exitWith {
					_actionIndex = _forEachIndex;
					_renderType = _x select 1;
				};
			} forEach ACT_var_ACTIONS;
			
			if(_actionIndex != -1) then { 
				_iconInfo = [];
				
				if(_renderType == 0) then {
				
					_hitpoints = "true" configClasses (configFile >> "CfgVehicles" >> typeOf _cursor >> "Hitpoints");
					
					if(count(_hitpoints) <= 0) then { breakTo "calc_main"; };
					
					
					for "_i" from 0 to count(_hitpoints)-1 do {
						_partName = configName (_hitpoints select _i);
						_pos = _cursor selectionPosition [getText((_hitpoints select _i) >> "name"), "HitPoints"];
						_position = _cursor modelToWorldVisual _pos;
						
						_3dpartdata = [_partName] call ACT_fnc_get3DPartName;
						if((_3dpartdata select 0) != "Error") then {
							_iconInfo pushback [_partName, _position,_3dpartdata,_i];
						};
					};
				} else {
					_iconInfo pushBack ["no_selection",_cursor modelToWorld [0,0,0],["action"] call ACT_fnc_get3DPartName,0];
				};
				
				_3D_ICON_DATA pushBack _actionIndex;
				_3D_ICON_DATA pushBack _iconInfo;
				_3D_ICON_DATA pushBack _cursor;
			};	
		};
	};
	
	ACT_var_3DIconData = _3D_ICON_DATA; 
	uiSleep 0.001;
};