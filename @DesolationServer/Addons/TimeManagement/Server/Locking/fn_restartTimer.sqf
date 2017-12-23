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

params["_password","_callback"];

diag_log "TimeManagement > INFO: restartTimer started";

_uptime = parseNumber (["Uptime","TM"] call BASE_fnc_getCfgValue);
_time = _uptime*3600;
_RestartMessageTimers = (["RestartMessageTimers","TM"] call BASE_fnc_getCfgValue) splitString ",";

_Notifications = [];
{
	_Notifications pushBack (parseNumber _x);
} forEach _RestartMessageTimers;

if (_Notifications find 0 == -1) then {_Notifications pushBack 0; };

_endTime = diag_tickTime + _time;
{
	waitUntil{uiSleep 10;diag_tickTime >= (_endTime-(_x*60))};
	if (_x != 0) then {
		["SERVER RESTARTING IN " + str(_x) + " " + (if(_x > 1) then {"MINUTES"} else {"MINUTE"}) + (if(_x < 16) then {", PLEASE LOGOUT"} else {""})] call TM_fnc_notify;
	};
} forEach _Notifications;

diag_log  "TimeManagement > Locking Server";
_password serverCommand "#lock";

diag_log  "TimeManagement > Kicking Players";
{
	_password serverCommand ("#kick " + str(owner _x));
} forEach allPlayers;
uiSleep 10; 

diag_log  "TimeManagement > Processing Callback";
call _callback;

diag_log  "TimeManagement > Shutting Down Server";
_password serverCommand "#shutdown";

//RestartMessageTimers = 20,10,5,1 # list of minutes before shutdown that notifications get broadcasted