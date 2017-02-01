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
createDialog "DS_Journal_Index";

[] spawn {
	disableserialization;
	waitUntil{!isNull (findDisplay 4001) || isNull (findDisplay 4002) || !isNull (findDisplay 4003)};
	if(!isNull (findDisplay 4001)) then {
		call DS_fnc_initBuildUI;
	};
	if(!isNull (findDisplay 4003)) then {
		call DS_fnc_initCraftUI;
	};
};

