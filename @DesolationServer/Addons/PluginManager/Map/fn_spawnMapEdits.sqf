
// Map Edits

BASE_var_cObjectsToRender = [];

_cfg = configFile >> "CfgPluginMapEdits";
_config = _cfg >> worldName;

if(isClass _config) then {
	_count = count(_config)-1;
	for "_i" from 0 to _count do {
		_entry = _config select _i;
		if(isClass _entry) then {
			
			_cfgName = configName _entry;
			
			_parts = _cfgName splitString "_";
			_parts deleteAt (count(_parts)-1);
			
			_classname = _parts joinString "_";
			
			
			_pos = getArray(_entry >> "posATL");
			_vectorUp = getArray(_entry >> "vectorUp");
			_vectorDir = getArray(_entry >> "vectorDir");
			_obj = objNull;
			
			_cfg = configFile >> "cfgVehicles" >> _classname >> "AnimationSources";
			_isSimple = true;
			if(isClass _cfg) then {
				if(count(_cfg) > 0) then {
					_isSimple = false;
				};
			};
			
			if(!_isSimple) then {
				_obj = _classname createVehicle _pos;
				_obj enableDynamicSimulation true;
			} else {
				_obj = createSimpleObject [_classname, ATLtoASL _pos];
				BASE_var_cObjectsToRender pushBack _obj;
			};
			_obj setPosATL _pos;
			_obj setVectorDirAndUp [_vectorDir,_vectorUp];
			_obj enableSimulationGlobal false;
			
			diag_log ("Spawned " + str(_i+1) + " map edits out of " + str(_count));
		};
	};

};


// Building Replacements

_findClasses = [];
_replaceClasses = [];

_cfg = configFile >> "CfgPluginReplacements";
for "_i" from 0 to count(_cfg)-1 do {
	_entry = _cfg select _i;
	if(isClass _entry) then {
		_findClasses pushBack toLower(configName _entry);
		_replaceClasses pushBack toLower(getText(_entry >> "replace"));
	};
};
if(count(_findClasses) > 0) then {
	_houses = nearestObjects[[worldSize/2,worldSize/2,0],_findClasses,worldSize,false,true];
	_count = count(_houses)-1;
	{
		_type = toLower(typeof(_x));
		_index = _findClasses find _type;
		_replace = _replaceClasses select _index;
		
		_x enableSimulationGlobal false;
		_x hideObjectGlobal true;
		_x allowDamage false;
		
		_pos = getPosATL _x;
		_vectorDir = vectorDir _x;
		_vectorUp = vectorUp _x;
		
		_obj = _replace createVehicle _pos;
		_obj enableDynamicSimulation true;
		_obj setPosATL _pos;
		_obj setVectorDirAndUp [_vectorDir,_vectorUp];
		_obj enableSimulationGlobal false;
		diag_log ("Completed " + str(_forEachIndex+1) + " building replacements out of " + str(_count));
	} forEach _houses;
};
publicVariable "BASE_var_cObjectsToRender";
BASE_var_MapEditsDone = true;