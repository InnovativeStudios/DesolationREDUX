/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 Desolation Dev Team
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

{
	_aCondition = _x select 0;
	_aText = _x select 1;
	_aCode = _x select 2;
	_aParameters = _x select 3;
		
	diag_log format ["<ActionSystem>: (Debug) _aParameters = %1", _aParameters];
		
	if (_class == _aText) exitWith {
		_required = _aParameters select 0;
		diag_log format ["<ActionSystem>: (Debug) _required = %1", _required];
	};
		
} forEach _actionInfo;

//diag_log format ["<ActionSystem>: (Debug) Who Am I: %1", _player];

_haveRequiredItems = true;
//_playerItems = (vestitems _player + uniformitems _player + backpackitems _player);

//diag_log format ["player items = %1", _playerItems];

{
	_item = _x select 0;
	_count = _x select 1;
	diag_log format ["looking for %1", _item];
	if( ({tolower(_x) == tolower(_item)} count (magazines _player)) < 1) exitWith {
		systemchat ("Does not have: " + _item);
		_haveRequiredItems = false;
	};
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
	
_currentDamage = damage _object;
diag_log format ["Start part damage = %1 and %2", _currentDamage, _haveRequiredItems];
_mass = getMass _object;

if ((_haveRequiredItems || (_mass < 400)) && (_currentDamage < 1)) then {	// don't flip destroyed vehicles
	diag_log format ["getPosATL = %1", getPosATL _object];
	diag_log format ["terrain = %1", getTerrainHeightASL (position _object)];

	_object setPosATL [(getPosATL _object) select 0, (getPosATL _object) select 1, ((getPosATL _object) select 2) + 0.1];

	if(abs(getTerrainHeightASL (position _object)) - ((getPosASL _object) select 2) < 1) then {
		_object setVectorUp (surfaceNormal [(getPosATL _object) select 0, (getPosATL _object) select 1]);
		_object setPosATL [(getPosATL _object) select 0, (getPosATL _object) select 1, 0];
	} else {
		_object setVectorUp [0,0,1];
		_object setPosATL [(getPosATL _object) select 0, (getPosATL _object) select 1, ((getPosATL _object) select 2)];
	};
} else {
	diag_log format ["Cannot perform this action"];
	systemChat "Cannot perform this action";
};

true
