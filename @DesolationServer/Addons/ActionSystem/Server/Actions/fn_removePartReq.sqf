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
	diag_log _x;
	_aCondition = _x select 0;
	_aText = _x select 1;
	_aCode = _x select 2;
	_aRequired = _x select 3;
	_aReturned = _x select 4;
	
	if (_class == _aText) exitWith {
		_returned = _aReturned;
	};
	
} forEach _actionInfo;

_lootHolder = objNull;
_nearLootHolders = _player nearObjects ["GroundWeaponHolder", 5];
_nearLootHolders append (_player nearObjects ["LootWeaponHolder", 5]);
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
	_lootHolder = createVehicle ["LootWeaponHolder", [0,0,0], [], 0, "CAN_COLLIDE"];
	_lootHolder setPosATL (getPosATL _player);
};

if (count _returned != 0) then {
	{
		_lootHolder addItemCargoGlobal _x;
	} forEach _returned;
};

[_object, [_hitPoint, 1]] remoteExecCall ["setHitPointDamage", 0];

true
