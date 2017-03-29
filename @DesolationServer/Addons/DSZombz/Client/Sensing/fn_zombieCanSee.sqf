params["_zed"];

_maxVisionDistance = 70;
_maxVisibleAngle = 45;

_return = false;
//TODO: nighttime - reduce vision distance
if((player distance _zed) <= _maxVisionDistance) then {

	//get vectors
	_zDir = vectorDir _zed;
	_dirTo = (getposAtl _zed) vectorFromTo (getposatl (vehicle player));
	//create 2d vectors (ignore param index 2)
	_zDir set [2,0];
	_dirTo set [2,0];

	_dot = _zDir vectorDotProduct _dirTo; 
	//magnatude of both is 1, ignore divisor
	_angle = acos(_dot);
	if(abs(_angle) <= _maxVisibleAngle) then {
		// player within view matrix
		_visibility = [(vehicle player), "VIEW",_zed] checkVisibility [eyePos _zed, eyePos player];
		if(_visibility >= 0.9) then {
			_return = true;
		};
	};
};

_return;