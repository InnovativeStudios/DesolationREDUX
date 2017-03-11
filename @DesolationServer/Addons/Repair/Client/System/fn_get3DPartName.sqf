
params["_selection"];

_data = ["Error","#(argb,8,8,3)color(0,0,0,0)"];
{
	_cfgName = _x select 0;
	_name = _x select 1;
	_icon = _x select 2;
	
	if(toLower(_selection) find toLower(_cfgName) != -1) exitWith {
		_data = [_name,_icon];
	};
} forEach REM_var_ICONS;
_data;