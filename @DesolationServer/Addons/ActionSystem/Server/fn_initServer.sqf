

/// broadcast config data

ACT_var_ACTIONS = [];
ACT_var_ICONS = [];

_cfg = configFile >> "Cfg3DActions";
for "_i" from 0 to count(_cfg)-1 do {
	
	_group = _cfg select _i;
	
	if(isClass _group) then {
		_condition = getText(_group >> "condition");
		_type = getNumber(_group >> "renderType");
		
		_actions = _group >> "Actions";
		
		_actionData = [];
		for "_j" from 0 to count(_actions)-1 do {
			_action = _actions select _j;
			
			if(isClass _action) then {
				
				_aCondition = getText(_action >> "condition");
				_aText = getText(_action >> "text");
				_aCode = getText(_action >> "action");
				
				_actionData pushBack [_aCondition,_aText,_aCode];
				
			};
		};
		
		ACT_var_ACTIONS pushBack [_condition,_type,_actionData];
	};
};

_cfg = configFile >> "Cfg3DIcons";
for "_i" from 0 to count(_cfg)-1 do {
	
	_group = _cfg select _i;
	
	if(isClass _group) then {
		
		_name = getText(_group >> "name");
		_icon = getText(_group >> "icon");
		ACT_var_ICONS pushBack [configName _group,_name,_icon];
	};
};

publicVariable "ACT_var_ACTIONS";
publicVariable "ACT_var_ICONS";
