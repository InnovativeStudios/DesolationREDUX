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

_heli = _this select 0;
_pilot = driver _heli;
_heliwreckModel = _this select 1;
_smokesize = _this select 2;
_smokeModelPos = _this select 3;
_wreckSmoke = _this select 4;


_heli  setHit ["tail_rotor_hit", 1];
[_heli,_smokesize,_smokeModelPos,false] remoteExec ["DS_fnc_crashSmoke",-2];



_listeners = [];
{
	if("ItemRadio" in (assignedItems _x)) then {
		_listeners pushBack _x;
	};
} forEach allPlayers;

_callsignList = ["Charle 1-1","Misfit 1-1","Burglar 1-1","Foxhound 1-1"];
_callsign = selectRandom _callsignList;
_gridRef = mapGridPosition getpos _heli;
[netID _pilot,_callsign,"Mayday Mayday "+ _callsign + " is hit! We have lost engine power and are going down at GRID "+ _gridRef +" Requesting Immediate Assistance! Over"] remoteExec ["DS_fnc_receiveTransmition",_listeners];



uiSleep 3;
_heli  setHit ["main_rotor_hit", 1];
_heli  setHit ["engine_hit", 1];
waitUntil {isTouchingGround _heli};
_heli setdamage 1;
_wreckPos = getpos _heli;
_wreckDir = getDir _heli;
_wreckUp = VectorUp _heli;

uiSleep 0.5;
deletevehicle _heli;
_wreck = _heliWreckModel createvehicle _wreckPos;
_wreck setDir _wreckDir;
_wreck setVectorUp _wreckUp;

if (_wreckSmoke > 0) then {
	[_wreck,7,[0,0,0],true] remoteExec ["DS_fnc_crashSmoke",-2];
};
_wreckPos