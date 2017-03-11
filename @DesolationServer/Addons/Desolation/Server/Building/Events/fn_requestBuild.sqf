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
params["_entry","_player"];

_posASL = AGLtoASL (_player modelToWorld [0,3,0]);

_crate = (_entry select 6) createVehicle [0,0,0];
_crate setPosASL _posASL;
_crate setVariable ["SVAR_buildParams",_entry,true];

[_crate] remoteExec ["DS_fnc_onBuildableLift",_player]; // have the player lift the preview object