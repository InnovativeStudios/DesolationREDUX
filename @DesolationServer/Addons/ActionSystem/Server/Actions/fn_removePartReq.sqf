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

_returned = [];

{
	_aCondition = _x select 0;
	_aText = _x select 1;
	_aCode = _x select 2;
	_aParameters = _x select 3;
	
	//diag_log format ["<ActionSystem>: (Debug) _aParameters = %1", _aParameters];
	
	if (_class == _aText) exitWith {
		_returned = _aParameters select 1;
		diag_log format ["<ActionSystem>: (Debug) _returned = %1", _returned];
	};
	
} forEach _actionInfo;

//diag_log format ["<ActionSystem>: (Debug) Who Am I: %1", _player];

_lootHolder = objNull;
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

_player reveal _lootHolder;
[_object, [_hitPoint, 1]] remoteExecCall ["setHitPointDamage", 0];
// TODO set hit point damage to object in database if stored object

true
