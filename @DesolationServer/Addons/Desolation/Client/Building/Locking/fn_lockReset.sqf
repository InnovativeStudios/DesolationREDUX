
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


_object = cursorObject;
if(isNull _object) then {
	_object = cursorTarget;
};

_object setVariable ["APMS_UnlockCode",_code,true];

systemchat "Lock Changed!";

closeDialog 0;