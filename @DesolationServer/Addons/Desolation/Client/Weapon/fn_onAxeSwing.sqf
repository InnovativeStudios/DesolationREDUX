private _tree = objNull;

private _objects = lineIntersectsWith [eyePos player, AGLToASL (player modelToWorld [0, 3, 0]), player, objNull, true]; 

{
	_treeName = _x; 
	{
		_modelName = toLower (str _x); 
		if ((_modelName find _treeName) != -1) exitWith { _tree = _x; true }; 
		false 
	} count _objects;

	if !(isNull _tree) exitWith {true}; 
	false 
} count [" t_"," bo_t_"," str_"," Smrk_"," les_"," brg_"];

if (isNull _tree) exitWith {};

(boundingBoxReal _tree) params ["_min","_max"];
private _height = abs((_max select 2) - (_min select 2));
private _dCoef = (damage _tree) + (1 / (floor _height));

private _currentSwing = missionNamespace getVariable [format["CurrentSwing_%1", _tree], 0];
missionNamespace setVariable [format["CurrentSwing_%1", _tree], (_currentSwing + 1)];

private _origMtW = _tree modelToWorld [0,0,1];

_tree setDamage _dCoef;

if (_dCoef >= 1) then
{
	[_tree, _origMtW, _dCoef] spawn 
	{
		params["_tree","_origMtW"];

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
				private _lootHolder = createVehicle ["LootWeaponHolder", [0,0,0], [], 0, "CAN_COLLIDE"];
				_lootHolder setDir _dir;
				_lootHolder setPosATL _position;
				_lootHolder addMagazineCargoGlobal ["dsr_item_logs", 1];
			};
		};
	};
};