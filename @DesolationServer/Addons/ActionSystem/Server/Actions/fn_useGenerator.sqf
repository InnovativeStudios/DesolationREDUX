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

// last parameter is _group (0 = vehicles, 1 = Liftables, 2 = Players, 3 = Non-Liftables)
 
params["_object","_player"];

_running = !(isNil {_object getVariable "DS_var_genRunning"});
if !(_running) then {
	[_object] spawn {
		params["_object"];
		
		_object setVariable ["DS_var_genRunning", true, true];
		{_x setDamage 0} forEach (_object nearObjects ["Lamps_base_F", 16]);
		
		while {!isNil {_object getVariable "DS_var_genRunning"}} do {
			playSound3D ["dsr_music\Effects\axe.ogg", _object,false,getposATL _object,15,0.1,45]; 
			sleep 0.2;
		};
	};
} else {

	_object setVariable ["DS_var_genRunning", nil, true];
	{_x setDamage 0.95} forEach (_object nearObjects ["Lamps_base_F", 16]);
};

true