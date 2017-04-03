
params["_password","_callback"];

_uptime = parseNumber (["Uptime","TM"] call BASE_fnc_getCfgValue);

_time = _uptime*3600; 


_RestartMessageTimers = (["RestartMessageTimers","TM"] call BASE_fnc_getCfgValue) splitString ",";

_Notifications = [];
{
	_Notifications pushBack (parseNumber _x);
} forEach _RestartMessageTimers;


_endTime = diag_tickTime + _time;
{
	waitUntil{uiSleep 10;diag_tickTime >= (_endTime-(_x*60))};
	
	["SERVER SHUTTING DOWN IN " + str(_x) + " " + (if(_x > 1) then {"MINUTES"} else {"MINUTE"}) + ", PLEASE LOGOUT"] call TM_fnc_notify;
	
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