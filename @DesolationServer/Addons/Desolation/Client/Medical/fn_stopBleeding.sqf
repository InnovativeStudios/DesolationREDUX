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


{
	[player,_x] remoteExec ["DS_fnc_removeBleedSource",-2];
} forEach (player getVariable "DS_var_BleedSources");
player setVariable ["BLEED_SOURCES",[]]; //temp fix for bleeding after banadge and reload in
// TODO: Toggle bleeding off
