
_cfg = configFile >> "CfgPluginMapEdits";
_config = _cfg >> worldName;

if(isClass _config) then {

	for "_i" from 0 to count(_config)-1 do {
		_entry = _config select _i;
		if(isClass _entry) then {
			
			_classname = configName _entry;
			_pos = getArray(_entry >> "posATL");
			_vectorUp = getArray(_entry >> "vectorUp");
			_vectorDir = getArray(_entry >> "vectorDir");
			
			_obj = createSimpleObject [_classname, ATLtoASL _pos];
			_obj setVectorDirAndUp [_vectorDir,_vectorUp];
			_obj enableSimulationGlobal false;
			_obj allowDamage false;
		};
	};

};

BASE_var_MapEditsDone = true;