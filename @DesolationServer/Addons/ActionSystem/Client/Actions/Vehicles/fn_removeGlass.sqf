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
 
params["_cursor","_index","_selection"];

if ([0] call ACT_fnc_doAnimation) then {
	[_selection, _cursor, _index, player, "Remove Glass",0] remoteExec ["ACT_fnc_removePartReq", 2];
};

true