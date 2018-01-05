
_wepsRaw = getWeaponCargo _this;

_classes = _wepsRaw select 0;
if (count _classes == 0)exitWith {[]}; 
_amounts = _wepsRaw select 1;


_weps = [];
_pos = 0;
{
	_element = [_x,_amounts select _pos];
	_pos = _pos +1;
	_weps pushback _element;
} foreach _classes;

_weps