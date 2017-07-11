params["_zed"];

_maxVisionDistance = 70;
_maxVisibleAngle = 45;

_return = false;

if(sunOrMoon == 0) then {
	_maxVisibleAngle = 15;
	_maxVisionDistance = 30;
};


_isWearingGhillie = false;
_isLayingDown = false;
_surfaceIsGrass = false;

// if wearing ghillie and in correct position, reduce vision by 3x (both distance and angle)
if(_isWearingGhillie && _isLayingDown && _surfaceIsGrass) then {
	_maxVisibleAngle = _maxVisibleAngle / 3;
	_maxVisionDistance = _maxVisionDistance / 3;
};





//TODO: is under light (lamp for example)

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