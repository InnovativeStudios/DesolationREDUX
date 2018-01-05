
private ["_magsRaw","_classes","_mags","_pos","_element"];

_magsRaw = magazinesAmmoCargo _this;

if (isNil "_magsRaw") exitWith {[]}; 





_mags = _magsRaw call BIS_fnc_consolidateArray;

_curIndex = 0;
{
	_magCount = _x select 1;
	_magClass = (_x select 0) select 0;
	_magAmmo = (_x select 0) select 1;
	_newArray = [_magClass,_magCount,_magAmmo];
	_mags set [_curIndex,_newArray];
	_curIndex = _curIndex +1;
} foreach _mags;
_mags