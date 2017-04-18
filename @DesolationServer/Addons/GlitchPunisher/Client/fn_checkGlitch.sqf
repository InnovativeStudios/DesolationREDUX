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

params["_oldPos","_newPos",["_override",{player setposatl (_this select 0);}],["_overrideparam",[]]];

_p1 = _oldPos vectorAdd [0,0,1];
_p2 = _newPos vectorAdd [0,0,1];

_objectBetween = lineIntersectsObjs [ATLtoASL _p1,ATLtoASL _p2,objNull,objNull,false,4];

{
	_owner = _object getVariable ["oOWNER",""];
	if(_owner != "") exitWith {
		[_oldPos,_overrideparam] call _override;
		systemchat "<AntiGlitch> Wall Glitch Detected";
	};
} forEach _objectBetween;