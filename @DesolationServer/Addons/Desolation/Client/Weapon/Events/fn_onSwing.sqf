params["_delay1","_functionData","_delay2"];
uiSleep _delay1; 

_canHitTrees = _functionData select 0;
_canHitRocks = _functionData select 1;
_playerDamageType = _functionData select 2;
_vehicleDamage = _functionData select 3;
_zombieDamage = _functionData select 4;

_tree = objNull;
_rocks = objNull;

if(_canHitTrees) then {
	_objects = lineIntersectsWith [eyePos player, AGLToASL (player modelToWorld [0, 3, 0]), player, objNull, true]; 
	{
		_treeName = _x; 
		{
			_modelName = toLower (str _x); 
			if ((_modelName find _treeName) != -1) exitWith { 
				_tree = _x; 
				true 
			}; 
			false 
		} count _objects;

		if !(isNull _tree) exitWith {true}; 
		false 
	} count [" t_"," bo_t_"," str_"," Smrk_"," les_"," brg_"];
};
if(_canHitRocks) then {

};

if(isNull _tree && isNull _rocks) then {
	_closest = cursorTarget; 
	if(isNull _closest) exitWith {};
	if(player distance _closest > 3) exitWith {};
	
	if(alive _closest) then {
		if(cursorTarget isKindOf "Man") then {
			if(isPlayer _closest) then {
				if(_closest == player) exitWith {systemchat "Devs fucked up. Report this";};
				[player,_playerDamageType] remoteExec ["DS_fnc_onMeleeHit",_closest];
				playSound3D ["a3\sounds_f\arsenal\sfx\bullet_hits\body_0" + str(ceil(random(6))) + ".wss", _closest,false,getPosASL _closest,1,1,50];
			} else {
				_closest setDamage _zombieDamage;
				playSound3D ["a3\sounds_f\arsenal\sfx\bullet_hits\body_0" + str(ceil(random(6))) + ".wss", _closest,false,getPosASL _closest,1,1,50];
			};
		} else {
			if(cursorTarget in vehicles) then {
			
			} else {
			
			};
		};
	};
};
if(!isNull _tree) then {
	
	(boundingBoxReal _tree) params ["_min","_max"];
	
	_height = abs((_max select 2) - (_min select 2));
	_currentLevel = player getVariable ["PVAR_DS_Progression_Resource_Level",0];
	_dCoef = (damage _tree) + ((1+_currentLevel) / (floor _height));
	_currentSwing = missionNamespace getVariable [format["CurrentSwing_%1", _tree], 0];
	_origMtW = _tree modelToWorld [0,0,1];
	
	missionNamespace setVariable [format["CurrentSwing_%1", _tree], (_currentSwing + 1)];
	
	playSound3D ["dsr_music\Effects\axe.ogg", player,false,eyepos player,2,1,15];
	
	_tree setDamage _dCoef;

	if (_dCoef >= 1) then
	{
		[_tree, _origMtW, _dCoef] spawn 
		{
			params["_tree","_origMtW"];
			
			[1] call DS_fnc_addPoints;
			["DS_var_treeChoppedCallbackFnc",["trees_chopped",[_tree]]] call DS_fnc_handleCallback;
			
			uisleep 2;

			private _nMtW = _tree modelToWorld [0,0,1];
			if !(_nMtW isEqualTo _origMtW) then
			{
				[_tree, true] remoteExecCall ["hideObjectGlobal", 2];

				(boundingBoxReal _tree) params ["_min","_max"];
				private _height = abs((_max select 2) - (_min select 2)) / 2; 

				if (_height < 1) then
				{
					_height = 1;
				};

				_dir = _origMtW getDir _nMtW;

				private _currentSwing = missionNamespace getVariable [format["CurrentSwing_%1", _tree], 0];
				if (_currentSwing < 0) exitWith {};
				for "_i" from 0 to _height step ((_height / _currentSwing) + 0.3) do
				{
					private _position = ASLtoATL AGLToASL (_tree modelToWorld [0, 0, _i - (_height / 2)]);
					_position set[2,0];
					private _lootHolder = createVehicle ["GroundWeaponHolder", [0,0,0], [], 0, "CAN_COLLIDE"];
					_lootHolder setDir _dir;
					_lootHolder setPosATL _position;
					_lootHolder addMagazineCargoGlobal ["dsr_item_logs", 1];
				};
			};
		};
	};		
};
if(!isNull _rocks) then {

};

uiSleep _delay2;
DSR_isSwinging = false; 