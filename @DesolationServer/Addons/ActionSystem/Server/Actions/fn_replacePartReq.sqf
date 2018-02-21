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

_groupedHitpoints = (call compile (toLower(["groupedHitpoints","ACT"] call BASE_fnc_getCfgValue)));
_twinSteerVehicles = (call compile (toLower(["twinSteerVehicles","ACT"] call BASE_fnc_getCfgValue)));
_twinAxleVehicles = (call compile (toLower(["twinAxleVehicles","ACT"] call BASE_fnc_getCfgValue)));

_actionGroup = ACT_var_ACTIONS select _group;
_actionInfo = _actionGroup select 2;

_required = [];
{
	_aCondition = _x select 0;
	_aText = _x select 1;
	_aCode = _x select 2;
	_aParameters = _x select 3;
		
	if (_class == _aText) exitWith {
		_required = _aParameters select 0;
	};
} forEach _actionInfo;

_haveRequiredItems = true;
{
	_item = _x select 0;
	_count = _x select 1;
	if (({tolower(_x) == tolower(_item)} count (magazines _player)) < _count) exitWith {
		_displayName = getText (configfile >> "CfgMagazines" >> _item >> "displayName");
		[("Item(s) missing: " + _displayName + ", count: " + str(_count))] remoteExec ["systemChat",_player];
		_haveRequiredItems = false;
	};
    true
} count _required;
if !(_haveRequiredItems) exitWith {};

_hitPoints = [_hitPoint];

if (toLower(_hitPoint) find 'wheel' != -1) then {
	_hitPoints = [];
	_lowerClassname = toLower(typeof _object);
	_objectIsTwinSteerVehicles = (_twinSteerVehicles find _lowerClassname != -1);
	_objectIsTwinAxleVehicles = (_twinAxleVehicles find _lowerClassname != -1);
	
	// find the group of the current hitpoint
	_groupArray = [_hitPoint];
	_groupType = "";
	{
		_groupTempArray = _x select 0;
		_groupTempType = _x select 1;
		if (_groupTempArray find _lowerClassname != -1) then {
			if (_groupTempType == "frontwheel" && !_objectIsTwinSteerVehicles) then {
				_groupArray = _groupTempArray;
				_groupType = _groupTempType;
			};
			if (_groupTempType == "rearwheel" && !_objectIsTwinAxleVehicles) then {
				_groupArray = _groupTempArray;
				_groupType = _groupTempType;
			};
		};
	} foreach _groupedHitpoints;
	
	// if there is another hitpoint thats in the group, add it to the _hitPoints array
	{
		if (_groupArray find toLower(_x) != -1) then {
			_hitPoints append [_x];
		};
	} foreach (getAllHitPointsDamage _object select 0);
};

_currentDamage = _object getHitPointDamage _hitPoint;

if (_currentDamage > 0) then {
	{
		for "_i" from 1 to (_x select 1) do {
			_player removeItem (_x select 0);
		};
		true
	} count _required;

	[("Part replaced successfully")] remoteExec ["systemChat",_player];
} else {
    [("Part is already fully repaired")] remoteExec ["systemChat",_player];
};

{
	[_object, [_x, 0]] remoteExec ["setHitPointDamage", 0];
} foreach _hitPoints;

true