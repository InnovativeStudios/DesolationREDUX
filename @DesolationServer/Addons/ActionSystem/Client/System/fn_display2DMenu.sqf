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
 
// _worldPos = position of the icon in world space
// _menuList = array of available menu actions
// _selected = number of action selected (if any)

params["_screenPos", "_menuList", "_selected"];
private ["_ctrlDisplay", "_menuSize", "_txtOffset", "_menuPos", "_txtPos", "_maxMenuItems", "_menuColor", "_assetPath"];

_menuSize = 300;
_txtOffset = 125;
_maxMenuItems = 4;
_ctrlDisplay = ((findDisplay 12) displayCtrl 51);
_menuPos = _ctrlDisplay ctrlMapScreenToWorld _screenPos;
_txtPosU = _ctrlDisplay ctrlMapScreenToWorld [(_screenPos select 0), (_screenPos select 1) - (_txtOffset*pixelH)];
_txtPosR = _ctrlDisplay ctrlMapScreenToWorld [(_screenPos select 0) + (_txtOffset*pixelW), (_screenPos select 1)];
_txtPosD = _ctrlDisplay ctrlMapScreenToWorld [(_screenPos select 0), (_screenPos select 1) + (_txtOffset*pixelH)];
_txtPosL = _ctrlDisplay ctrlMapScreenToWorld [(_screenPos select 0) - (_txtOffset*pixelW), (_screenPos select 1)];
_txtPos = [_txtPosU, _txtPosR, _txtPosD, _txtPosL];

_menuColor = [0.6627, 0.6627, 0.6627, 1];

_ctrlDisplay drawIcon ['\dsr_ui\Assets\repair\menu.paa', _menuColor, _menuPos, _menuSize, _menuSize, 0, "", 0, 0.01, 'TahomaB', 'Center'];


for "_i" from 0 to (_maxMenuItems - 1) do {
	_color = [0.5607, 0.7372, 0.5607, 0.9];
	if (_i < count(_menuList)) then {
		if (_selected == (_i + 1)) then {
			_color = [0.2, 0.9725, 0.8627, 1];
		};
	};
	_assetPath = format [ '\dsr_ui\Assets\repair\opt%1.paa', (_i + 1) ];
	_ctrlDisplay drawIcon [_assetPath, _color, _menuPos, _menuSize, _menuSize, 0, '', 0, 0.04, 'TahomaB', 'Center'];
};

_menuString = "";
for "_i" from 0 to count(_menuList)-1 do
{
	if (_i == 1 || _i == 3) then {
		_menuWords = (_menuList select _i) splitString " ";
		_numWords = count _menuWords;
		if (_numWords == 1) then {
			_menuString = (_menuList select _i);
			_ctrlDisplay drawIcon ['#(argb,8,8,3)color(0,0,0,0)', [0, 0, 0, 1], (_txtPos select _i), _menuSize, _menuSize, 0, str(parseText _menuString), 0, 0.1, 'TahomaB', 'Center'];
		} else {
			_offset = -1 * (floor(_numWords / 2));
			for "_j" from 0 to (_numWords - 1) do {
				_txtPosNew = [((_txtPos select _i) select 0), ((_txtPos select _i) select 1) - (75 * _offset)];
				_menuString = (_menuWords select _j);
				_ctrlDisplay drawIcon ['#(argb,8,8,3)color(0,0,0,0)', [0, 0, 0, 1], _txtPosNew, _menuSize, _menuSize, 0, str(parseText _menuString), 0, 0.1, 'TahomaB', 'Center'];
				_offset = _offset + 1;
			};
		};
	} else {
		_menuString = (_menuList select _i);
		_ctrlDisplay drawIcon ['#(argb,8,8,3)color(0,0,0,0)', [0, 0, 0, 1], (_txtPos select _i), _menuSize, _menuSize, 0, str(parseText _menuString), 0, 0.1, 'TahomaB', 'Center'];
	};
};

_ctrlDisplay drawIcon ['#(argb,8,8,3)color(0,0,0,0)', [0, 0, 0, 1], _menuPos, _menuSize, _menuSize, 0, '', 0, 0.1, 'TahomaB', 'Center'];

true