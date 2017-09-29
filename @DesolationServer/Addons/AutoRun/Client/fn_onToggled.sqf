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
		if (call RUN_fnc_canAutoRun) then {
			RUN_var_isAutoRun = true;
			[] spawn {
				while {RUN_var_isAutoRun} do {
					player playAction "FastF";
					sleep 0.5;
					_interuptAutoRun = (inputAction "LeanLeft")+(inputAction "LeanRight")+(inputAction "MoveLeft")+(inputAction "MoveRight")+(inputAction "Stand")+(inputAction "Crouch")+(inputAction "Prone")+(inputAction "Salute")+(inputAction "SitDown")+(inputAction "MoveUp")+(inputAction "MoveDown")+(inputAction "AdjustUp")+(inputAction "AdjustDown")+(inputAction "AdjustRight")+(inputAction "AdjustLeft")+(inputAction "TactTemp")+(inputAction "TactToggle")+(inputAction "TactShort");
					if (_interuptAutoRun > 0 || !call RUN_fnc_canAutoRun) exitWith {RUN_var_isAutoRun = false;};
				};
			};
		};
	};
};
_found