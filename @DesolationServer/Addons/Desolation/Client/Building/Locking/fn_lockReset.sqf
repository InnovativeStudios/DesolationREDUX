disableSerialization;
_display = findDisplay 4003;

_code = [];
for "_i" from 0 to 4 do {
	_ctrl = _display displayCtrl (2100+_i);
	_index = lbCurSel _ctrl;
	if(_index == -1) then {
		_code pushBack -1;
	} else {
		_code pushBack parseNumber(_ctrl lbText _index);
	};
};


_door = cursorObject;
if(isNull _door) then {
	_door = cursorTarget;
};
_door setVariable ["SVAR_UnlockCode",_code,true];

for "_i" from 1 to 5 do {
	_door setVariable["bis_disabled_Door_" + str(_i),1,true]; // relock door for all who had access
};
for "_i" from 1 to 5 do {
	_door setVariable["bis_disabled_Door_" + str(_i),0]; // unlock door for me
};

systemchat "Lock Changed!";