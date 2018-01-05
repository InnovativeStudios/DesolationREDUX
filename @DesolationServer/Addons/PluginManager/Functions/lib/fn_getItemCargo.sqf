
private ["_itemsRaw","_classes","_items","_pos","_element"];

_itemsRaw = getItemCargo _this;

_classes = _itemsRaw select 0;
if (count _classes == 0) exitWith {[]}; 
_amounts = _itemsRaw select 1;


_items = [];
_pos = 0;
{
	_element = [_x,_amounts select _pos];
	_pos = _pos +1;
	_items pushback _element;
} foreach _classes;

_items