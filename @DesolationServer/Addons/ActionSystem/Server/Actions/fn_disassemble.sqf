/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 - 2018 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */
 
// last parameter is _group (0 = vehicles, 1 = Liftables, 2 = Players, 3 = Non-Liftables)

params ["_object","_player","_class","_group"];

if ((damage _object) == 0) then {

	// get parameters
	_actionGroup = ACT_var_ACTIONS select _group;
	_actionInfo = _actionGroup select 2;

    _required = [];
	_returned = [];
	{
		_aCondition = _x select 0;
		_aText = _x select 1;
		_aCode = _x select 2;
		_aParameters = _x select 3;
		if (_class == _aText) exitWith {
		    _required = _aParameters select 0;
			_returned = _aParameters select 1;
		};
	} forEach _actionInfo;


	// check if player has required items
    _haveRequiredItems = true;
    {
	    _item = _x select 0;
	    _count = _x select 1;
    	if( ({tolower(_x) == tolower(_item)} count (magazines _player)) < 1) exitWith {
    	    _displayName = getText (configfile >> "CfgMagazines" >> _item >> "displayName");
    	    [("Item(s) missing: " + _displayName + ", count: " + str(_count))] remoteExec ["systemChat",_player];
		    _haveRequiredItems = false;
	    };
        true
    } count _required;
    if !(_haveRequiredItems) exitWith {};


	// if object is building get returned items
	if !(_object isKindOf "AllVehicles") then {

		// get object class for config
		_type = typeOf _object;
		_class = "";
		if (_type find "Stockade" != -1) then {
			_class = "Stockade";
		} else {
			if (_type find "House" != -1) then {
				_class = "Houses";
			} else {
				_class = "Misc";
			};
		};
		_items = getArray (configFile >> "CfgBuildables" >> _class >> "Buildables" >> _type >> "parts");

		//get returned items (divide with 2)
		_index = 0;
		for "_i" from 0 to ((count(_items))-1) do {

			_item = _items select _index;
			_itemType = _item select 0;
			_count = _item select 1;

			_newCount = round((_count) / 2);
			_newItem = [_itemType] + [_newCount];

			_returned pushBack _newItem;
			_index = _index + 1;
 		};
	};


	// check if loot holder already nearby
	_lootHolder = objNull;
	_nearLootHolders = _player nearObjects ["GroundWeaponHolder", 5];
	if ((count _nearLootHolders) != 0) then {
		_distance = 5;
		{
			_tmpDist = _player distance _x;
			if (_tmpDist < _distance) then
			{
				_lootHolder = _x;
				_distance = _tmpDist;
			};
			true
		} count _nearLootHolders;
	};
	if (isNull _lootHolder) then {
		_lootHolder = createVehicle ["GroundWeaponHolder", _player modelToWorld [0,0.8,0], [], 0.5, "CAN_COLLIDE"];
		_lootHolder setDir floor (random 360);
	};


	// place items to lootholder
	if (count _returned != 0) then {
		{
			_lootHolder addItemCargoGlobal _x;
		} forEach _returned;
	};
	_player reveal _lootHolder;
	
	
	// delete object
	[_object,objNull] call DB_fnc_killObject;
	deleteVehicle _object;
	
	[("Object disassembled successfully")] remoteExec ["systemChat",_player];
} else {
    [("Object is too damaged")] remoteExec ["systemChat",_player];
};

true