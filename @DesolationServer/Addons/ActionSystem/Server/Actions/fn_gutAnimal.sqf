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

diag_log format ["<ActionSystem>: (Debug) started gut animal"];

_actionGroup = ACT_var_ACTIONS select _group;
_actionInfo = _actionGroup select 2;

/* required should not be needed since the check for the knife is in the actions config
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

*/

_returned = ["DSR_Item_Beef", "DSR_Item_Leather"];
/* _returned = getArray (configFile >> "CfgAnimalRessources" >> typeOf _object >> "gutting" >> "returned"); */
{
	_player addItemCargoGlobal _x;
} forEach _returned;

/* would need some checks if all items could be added etc */
diag_log format ["<ActionSystem>: (Debug) deleting animal"];
deleteVehicle _object;

true
