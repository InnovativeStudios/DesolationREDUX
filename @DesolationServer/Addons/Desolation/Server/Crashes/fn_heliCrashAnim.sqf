/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 - 2018 Desolation Dev Team
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


_heli  setHitPointDamage ["HitVRotor", 1];
_smoke = "test_EmptyObjectForSmoke" createVehicle (getposatl _heli);
_smoke attachTo [_heli,_smokeModelPos];


_listeners = [];
{
	if("ItemRadio" in (assignedItems _x)) then {
		_listeners pushBack _x;
	};
} forEach allPlayers;

_callsignList = ["Charle 1-1","Misfit 1-1","Burglar 1-1","Foxhound 1-1"];
_callsign = selectRandom _callsignList;
_gridRef = mapGridPosition getpos _heli;
[netID _pilot,_callsign,["Mayday Mayday "+ _callsign + " is hit! We have lost engine power and are going down in GRID "+ _gridRef +" Requesting Immediate Assistance! Over"]] remoteExec ["DS_fnc_receiveTransmition",_listeners];



uiSleep 3;
_heli setHitPointDamage ["HitHRotor", 1];
_heli setHitPointDamage ["HitEngine", 1];
waitUntil {isTouchingGround _heli};

deletevehicle _smoke;

_heli setdamage 1;
_wreckPos = getposATL _heli;
_wreckDir = vectorDir _heli;
_wreckUp = VectorUp _heli;
_wreckPos set [2,0];

{_heli deleteVehicleCrew _x} forEach crew _heli;
uiSleep 0.5;
deletevehicle _heli;
_wreck = _heliWreckModel createVehicle _wreckPos;
_wreck enableSimulationGlobal false;
_wreck setposATL _wreckPos;
_wreck setVectorDir _wreckDir;
_wreck setVectorUp _wreckUp;

for "_i" from 1 to 3 do {
	_mult = if(random(1) >= 0.5) then {1} else {-1};
	_zPos = _wreckPos vectorAdd [_mult*random [1,2,3],_mult*random [1,2,3],0];
	[_zPos,10] call (missionNamespace getVariable ["DS_fnc_spawnZombieFnc",{}]);
};

diag_log ("CREATED HELI CRASH AT: " + str(_wreckPos));

if (_wreckSmoke > 0) then {
	_smoke = "test_EmptyObjectForSmoke" createVehicle _wreckPos;
//	_smoke enableDynamicSimulation true; //TODO: increase simulation distance on this and renable
	_smoke setPosATL _wreckPos;
};
_wreckPos