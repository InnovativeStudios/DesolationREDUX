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

// last parameter is _group (0 = vehicles, 1 = Liftables, 2 = Players, 3 = Non-Liftables)
 
params["_object"];


_position = getPosATL _object;
_lootHolder = createVehicle ["GroundWeaponHolder", [0,0,0], [], 0, "CAN_COLLIDE"];
_lootHolder setPosATL _position;
diag_log format ["DECONSTRUCT > POSITION: %1",_position];

_type = typeof _object;
diag_log format ["DECONSTRUCT > TYPE: %1",_type];

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
diag_log format ["DECONSTRUCT > CLASS: %1",_class];


_items = "";
_items = getArray (configFile >> "CfgBuildables" >> _class >> "Buildables" >> _type >> "parts");
diag_log format ["DECONSTRUCT > ITEMS: %1",_items];

_item1 = _items select 0;
_item2 = _items select 1;

_item1 = [_item1 select 0] + [round((_item1 select 1) / 2)];
_item2 = [_item2 select 0] + [round((_item2 select 1) / 2)];

_returned = [_item1] + [_item2];
diag_log format ["DECONSTRUCT > RETURNED: %1",_returned];

if (count _returned > 0) then {
	{
		_lootHolder addMagazineCargoGlobal _x;
	} forEach _returned;
};

_loot = getMagazineCargo _lootHolder;
diag_log format ["DECONSTRUCT > LOOTHOLDER ITEMS: %1",_loot];

/*
_uuid = DS_var_ObjectUUIDS select _object;
[_uuid,objNull] call DB_fnc_killObject;
*/
deleteVehicle _object;

true