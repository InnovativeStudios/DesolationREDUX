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
	[("Generator is now running")] remoteExec ["systemChat",_player];
	[_object] spawn {
		params["_object"];
		
		_object setVariable ["DS_var_genRunning", true, true];
		{_x setDamage 0} forEach (_object nearObjects ["Lamps_base_F", 16]);
		
		while {!isNil {_object getVariable "DS_var_genRunning"}} do {
			playSound3D ["dsr_music\Effects\generator.ogg", _object,false,getposATL _object,10,1,40]; 
			sleep 8.27;
		};
	};
} else {

	[("Generator is no longer running")] remoteExec ["systemChat",_player];
	_object setVariable ["DS_var_genRunning", nil, true];
	{_x setDamage 0.95} forEach (_object nearObjects ["Lamps_base_F", 16]);
};

true