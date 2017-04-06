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
 
params["_cursor"];

[player,"Crew"] remoteExecCall ["switchMove",-2];
player setPos (getPos _cursor);
player setDir ((getDir _cursor) - 180);
//_newPos = getPos player;
//player setPos [_newPos select 0, _newPos select 1, (_newPos select 2) + 0.5];
stand = player addAction ["Stand Up", "call ACT_fnc_stand"];

true