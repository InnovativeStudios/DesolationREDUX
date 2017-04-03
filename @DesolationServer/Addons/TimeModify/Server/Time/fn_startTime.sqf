

_StartTime = parseNumber (["StartTime","TM"] call BASE_fnc_getCfgValue);
_TimeSpread = parseNumber (["TimeSpread","TM"] call BASE_fnc_getCfgValue);

_dayMult = parseNumber (["DayMultiplier","TM"] call BASE_fnc_getCfgValue);
_dayStart = parseNumber (["DayTimeStart","TM"] call BASE_fnc_getCfgValue);
_nightMult = parseNumber (["NightMultiplier","TM"] call BASE_fnc_getCfgValue);
_nightStart = parseNumber (["NightTimeStart","TM"] call BASE_fnc_getCfgValue);
 
 
if(_StartTime > 23) then {
	diag_log "TimeManagement > ERROR: StartTime > 23, Defaulting to 12";
	_StartTime = 12;
};	
if((_StartTime + _TimeSpread) > 23) then {
	diag_log "TimeManagement > ERROR: TimeSpread to large, Reducing to max possible spread";
	_TimeSpread = 23 - _StartTime;
	if((_StartTime - _TimeSpread) < 0) then {
		_TimeSpread = _StartTime;
	};
};
if((_StartTime - _TimeSpread) < 0) then {
	diag_log "TimeManagement > ERROR: TimeSpread to large, Reducing to max possible spread";
	_TimeSpread = _StartTime;
	if((_StartTime + _TimeSpread) > 23) then {
		_TimeSpread = 23 - _StartTime;
	};
};



_startHour = random [_StartTime - _TimeSpread, _StartTime, _StartTime + _TimeSpread];

setDate [2017,6,6,_startHour,0];


if(daytime > _nightStart || daytime < _dayStart) then {
	setTimeMultiplier _nightMult;
} else {
	setTimeMultiplier _dayMult;
};

while{true} do {
	waitUntil{uiSleep 30; (daytime > _nightStart || daytime < _dayStart)};
	setTimeMultiplier _nightMult;
	waitUntil{uiSleep 30; !(daytime > _nightStart || daytime < _dayStart) };
	setTimeMultiplier _dayMult;
};