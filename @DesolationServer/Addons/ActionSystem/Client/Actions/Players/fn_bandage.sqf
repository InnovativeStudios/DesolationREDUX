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
 
params["_cursor","_index"];

if ([1] call ACT_fnc_doAnimation) then {
//	[_cursor, _index, player, "Bandage",2] remoteExec ["ACT_fnc_playerAction", 2];
	["dsr_item_bandage",_cursor] call DS_fnc_usebandage;
};

true