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
params["_building"];
private["_bLootPiles","_savedLoot","_data"];

_bLootPiles = (_building getVariable ["LOOT_PILES",[]]) - [objNull]; //--- get all remaining loot piles

_savedLoot = [];
// Layout: LOCATION, [ CONTAINER DATA , MAGAZINE DATA, ITEM DATA, WEAPON DATA, BACKPACK DATA]
// CONTAINER DATA: [ [CONTAINER TYPE, CONTAINER LOOT] , ... ]
{
	//--- TEMPORARY
	_data = [getposatl _x,[_x] call DS_fnc_getLoot];
	_savedLoot pushBack _data;
	deleteVehicle _x;
} forEach _bLootPiles;

_building setVariable ["SavedLoot",_savedLoot];
_building setVariable ["LOOT_PILES",[]];
