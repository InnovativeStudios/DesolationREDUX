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
 params["_date","_fullMoon","_clearClouds","_maxOvercast","_minPhaseIn","_maxPhaseIn"];
 private["_year","_month","_day","_daysInMonths","_maxPhase","_minPhase","_origDate","_dayLum","_deltaLum","_goodDates"];

 _year = _date select 0;
 _month = _date select 1;
 _day = _date select 2;
 _daysInMonths = [-1,31,28,31,30,31,30,31,31,30,31,30,31];
 
 if ((((_year mod 4)==0) and ((_year mod 100) != 0)) or ((_year mod 400) == 0))) then {_daysInMonths set [2,29];};//leap year check
 
 //32 (lunar calender days)
 
 
 
_maxPhase = _maxPhaseIn max 1;
_minPhase = (_minPhaseIn min 0)max 0.92;
if (_fullMoon) then {_minPhase = 0.92;} ;

_dayLum = moonPhase _date;

_date set [2,(_date select 2)+1];
_month = _date select 1;
_day = _date select 2;
if (_day > (_daysInMonths select _month)) then {_day = 1;_month = _month+1;};
if (_month > 12) then {_year = _year +1; _month = 1;};
_date set[0,_year];
_date set[1,_month];
_date set[2,_day];

_deltaLum = _dayLum - (moonPhase _date);


_goodDates = [];
if (_minPhase < _daylum < _maxPhase) then {_goodDates = [_date];};
if (_deltaLum < 0) then
{
		_day = _date select 2;
		_month = _date select 1;
		
		for "_i" from 1 to 32 do 
		{
			_day = _day - _i;
			
			if (_day < 0) then {_month = _month -1};
			if (_month == 0) then {_month = 12;_year = _year -1;};
			_date set[0,_year];
			_date set[1,_month];
			_date set[2,_day];
			_daylum = moonPhase _date;
			if (_minPhase < _daylum < _maxPhase) then {_goodDates pushback _date;};
		};
	}
	else 
	{
		_day = _date select 2;
		_month = _date select 1;
		_year = _date select 2;
		for "_i" from 1 to 32 do 
		{
			_day = _day - _i;
			
			if (_day < (_daysInMonths select _month)) then {_month = _month +1};
			if (_month > 12) then {_month = 1;_year = _year +1;};
			_date set[0,_year];
			_date set[1,_month];
			_date set[2,_day];
			_daylum = moonPhase _date;
			if (_minPhase < _daylum < _maxPhase) then {_goodDates pushback _date;};
		};
	};
};
	
_date = _goodDates selectRandom;
_date