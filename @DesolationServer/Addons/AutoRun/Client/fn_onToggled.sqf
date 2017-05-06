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

if(isNil 'RUN_var_isAutoRun') then {RUN_var_isAutoRun = false;};

_found = false;
if(toLower(["Enabled","RUN"] call BASE_fnc_getCfgValue) == "true") then {
	_found = true;

	if (RUN_var_isAutoRun) then {
		RUN_var_isAutoRun = false;
		player switchMove "";
	} else {
		if (call RUN_fnc_canAutoRun)
			RUN_var_isAutoRun = true;
			[] spawn {
				while {RUN_var_isAutoRun} do {
					player playAction "FastF";
					sleep 0.5;//Needs to be called every 0.6 but do 0.5 to be safe...
				};
			};
		};
	};
};
_found