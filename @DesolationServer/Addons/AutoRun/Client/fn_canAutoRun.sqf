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
private["_canAutoRun"];
if ((vehicle player) isEqualTo player && underwater player && ((getPosASL player) select 2) < 0.1 && (stance player) isEqualTo "UNDEFINED") then {
	_canAutoRun = false;
} else {
	_canAutoRun = true;
};
_canAutoRun