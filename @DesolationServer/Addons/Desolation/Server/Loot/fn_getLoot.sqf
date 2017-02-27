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
 
params["_container"];
private["_data","_iContainData","_insideContainers","_loot"];

_data = [];

//--- Recursively get all data from inside containers
_iContainData = [];
_insideContainers = everyContainer _container;
{
	_loot = ([_x select 1] call DS_fnc_getLoot);
	_iContainData pushBack [_x select 0,_loot];
} forEach _insideContainers;
_data pushBack _iContainData;

//--- Get non-container data

_info = (magazinesAmmoCargo _container);
if(isNil {_info}) then {
	_info = [];
};
_data pushback _info;

_info2 = (itemCargo _container);
if(isNil {_info2}) then {
	_info2 = [];
};
_data pushback _info2;

_info3 = (weaponsItemsCargo _container);
if(isNil {_info3}) then {
	_info3 = [];
};
_data pushback _info3;

_info4 = (backpackCargo _container);
if(isNil {_info4}) then {
	_info4 = [];
};
_data pushback _info4;

_data;