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

{
	_aCondition = _x select 0;
	_aText = _x select 1;
	_aCode = _x select 2;
	_aParameters = _x select 3;
		
	diag_log format ["<ActionSystem>: (Debug) _aParameters = %1", _aParameters];
		
	if (_class == _aText) exitWith {
		_required = _aParameters select 0;
		diag_log format ["<ActionSystem>: (Debug) _required = %1", _required];
		_returned = _aParameters select 1;
		diag_log format ["<ActionSystem>: (Debug) _returned = %1", _returned];
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
		[("Does not have: " + _item)] remoteExec ["systemChat",_player]; //notify player of missing items
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
	
_currentDamage = _object getHitPointDamage _hitPoint;
diag_log format ["Start part damage = %1 and %2", _currentDamage, _haveRequiredItems];

if (_haveRequiredItems && (_currentDamage > 0)) then {
	{
		_requiredItem = _x;
		_dpp = (1 / (_requiredItem select 1));
		diag_log format ["Damage Per %1 = %2", _requiredItem select 0, _dpp];
		if (_dpp < 1) then {	// is it a tool (better check?)
			for "_i" from 1 to (_requiredItem select 1) do {
				if (_currentDamage > 0) then { // we need to make repair
					if ( (_requiredItem select 0) in magazines _player) then { // we have a part to use
						diag_log format ["Removing %1", (_requiredItem select 0)];
						_player removeItem (_requiredItem select 0);	// remove part from player
						_currentDamage = _currentDamage - _dpp;	// calculate new damage
						diag_log format ["New damage = %1", _currentDamage];
						if (_currentDamage < 0) exitWith {	// check if fully repaired
							_currentDamage = 0;
							diag_log format ["Fully repaired!"];
							[_object, [_hitPoint, 0]] remoteExec ["setHitPointDamage", 0];
						};
						[_object, [_hitPoint, _currentDamage]] remoteExec ["setHitPointDamage", 0];
					};
				};
			};
		} else {
			diag_log format ["Removing Tool %1", _requiredItem select 0];
			_player removeItem (_requiredItem select 0);	
		};
	} foreach _required;

	diag_log format ["End part damage = %1", _currentDamage];

	{
		_player addItem (_x select 0);
		diag_log format ["Adding Tool %1", (_x select 0)];
	} forEach _returned;

} else {
	diag_log format ["No need to perform this action"];
	systemChat "No need to perform this action";
};

true
