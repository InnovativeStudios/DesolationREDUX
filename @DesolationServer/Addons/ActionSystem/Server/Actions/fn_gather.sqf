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


_haveRequiredItems = true;

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



if (_haveRequiredItems) then {

	{
		diag_log format ["adding %1", (_x select 0)];
		_player addItem (_x select 0);
	true
	} count _returned;
	
} else {
	systemChat "You don't have the required Items";
};

true
