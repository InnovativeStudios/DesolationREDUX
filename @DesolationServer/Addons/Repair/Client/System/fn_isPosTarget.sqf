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

// _iconPos = icon world position

params["_iconPos"];
private["_distance", "_dif0", "_dif1", "_camDir", "_visPos", "_camPos", "_vecFT"];

(boundingBoxReal _obj) params ["_dif0","_dif1"];
_distance = (_dif0 distance _dif1) + 4;

if (cameraView == "External") then {
	_camDir = eyeDirection player;
	_camPos = (eyePos player) vectorAdd _camDir;
	
	_return = false;
	for "_j" from 1 to _distance do 
	{
		_diff = _camPos vectorFromTo _iconPos;
        if ((abs((_camDir select 1) - (_diff select 1)) < 0.05) && (abs((_camDir select 1) - (_diff select 1)) < 0.05) && (abs((_camDir select 2) - (_diff select 2)) < 1.5)) exitWith
		{
			_return = true;
		};
	};
} else {
	_visPos = ASLToATL(AGLToASL positionCameraToWorld [0,0,5.5]);
	_camPos = ASLToATL(AGLToASL positionCameraToWorld [0,0,0]);
	_vecFT = _camPos vectorFromTo _visPos;

	_return = false;
	for "_j" from 1 to _distance do 
	{
		_vChange = _vecFT vectorMultiply (((_camPos distance _visPos) / 20)*_j);
		_checkPos = _camPos vectorAdd _vChange;
		if((_checkPos distance _iconPos) <= 0.1) exitWith {
			_return = true;
		};
	};
};
_return