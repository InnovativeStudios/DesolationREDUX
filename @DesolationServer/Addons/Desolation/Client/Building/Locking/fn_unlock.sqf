
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
_unlock = _door getVariable ["SVAR_UnlockCode",[10,10,10,10,10]];
if(_code isEqualTo _unlock) then {
	[[_door]] call DS_fnc_registerOwner;
	Systemchat "Unlocked";
} else {
	Systemchat "Wrong Code";
};

closeDialog 0;
