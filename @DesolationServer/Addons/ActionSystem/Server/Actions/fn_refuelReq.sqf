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
 
// last parameter is _group (0 = vehicles, 1 = Liftables, 2 = Players)

params ["_hitPoint","_object","_index","_player","_class","_group"];

_actionGroup = ACT_var_ACTIONS select _group;
_actionInfo = _actionGroup select 2;

_required = [];
_returned = [];
_can = [];
_size = 0;
_canNo = 0;

{
	_aCondition = _x select 0;
	_aText = _x select 1;
	_aCode = _x select 2;
	_aParameters = _x select 3;
		
	diag_log format ["<ActionSystem>: (Debug) _aParameters = %1", _aParameters];
		
	if (_class == _aText) exitWith {
		_required = _aParameters select 0;
		_returned = _aParameters select 1;
		diag_log format ["<ActionSystem>: (Debug) _required = %1", _required];
		diag_log format ["<ActionSystem>: (Debug) _returned = %1", _returned];
	};
		
} forEach _actionInfo;

//diag_log format ["<ActionSystem>: (Debug) Who Am I: %1", _player];

_haveRequiredItems = false;
//_playerItems = (vestitems _player + uniformitems _player + backpackitems _player);

//diag_log format ["player items = %1", _playerItems];

_tmpCanNo = 0;
{
	_item = _x select 0;
	_litres = _x select 1;
	diag_log format ["looking for %1", _item];
	if( ({tolower(_x) == tolower(_item)} count (magazines _player)) > 0 ) exitWith {
		diag_log format ["Does have: %1 (%2 litres) @ %3", _item, _litres, _tmpCanNo];
		_can = _item;
		_size = _litres;
		_canNo = _tmpCanNo;
		_haveRequiredItems = true;
	};
	_tmpCanNo = _tmpCanNo + 1;
true
} count _required;

/*_lootHolder = objNull;
_nearLootHolders = _player nearObjects ["GroundWeaponHolder", 5];
if ((count _nearLootHolders) != 0) then
{
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

	if (isNull _lootHolder) then
	{
		diag_log "<ActionSystem>: (Debug) Create GroundWeaponHolder";
		_lootHolder = createVehicle ["GroundWeaponHolder", _player modelToWorld [0,0.8,0], [], 0.5, "CAN_COLLIDE"];
		_lootHolder setDir floor (random 360);
	};

	if (count _returned != 0) then {
		{
			diag_log format ["<ActionSystem>: (Debug) Add Item: %1", _x];
			_lootHolder addItemCargoGlobal _x;
		} forEach _returned;
	};

	diag_log format ["<ActionSystem>: (Debug) Loot Holder: %1", _lootHolder];

	_player reveal _lootHolder;*/

if (_haveRequiredItems) then {
	_currentFuel = fuel _object;

	diag_log format ["current fuel: %1", _currentFuel];

	_newFuel = _currentFuel + (_size / 100);

	diag_log format ["new fuel: %1", _newFuel];

	if (_newFuel > 1) then {
		_newFuel = 1;
	};

	[_object, _newFuel] remoteExec ["setFuel", 0];

	diag_log format ["removing %1", _can];
	_player removeItem _can;

	diag_log format ["canNo: %1", _canNo];
	_tmpCanNo = 0;
	{
		if (_tmpCanNo == _canNo) exitWith {
			diag_log format ["adding %1", (_x select 0)];
			_player addItem (_x select 0);
		};
		_tmpCanNo = _tmpCanNo + 1;
		true
	} count _returned;
} else {
	systemChat "You don't have the required Items";
};

true
