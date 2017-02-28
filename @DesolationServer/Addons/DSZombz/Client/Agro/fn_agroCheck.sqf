


_maxVisionDistance = 100;

_maxVisibleAngle = 60;

_smellDistance = 10;




while{true} do {

	//todo: add more checks
	if(rain > 0) then {
		_smellDistance = 10/(7*rain);
	};


	_maxDistance = _maxVisionDistance max _smellDistance;


	_nearZombies = (vehicle player) nearEntities ["Man",_maxDistance];

	{
		if(!isPlayer _x && alive _x) then {
			if(!(_x getVariable ["agroed",false])) then {
				
				
				if(_x distance player < _smellDistance) then { 
					// smell agro
					[_x] call DSZ_fnc_agroZombie;
				
				} else {
					//get vectors
					_zDir = vectorDir _x;
					_dirTo = (getposAtl _x) vectorFromTo (getposatl (vehicle player));
					//create 2d vectors (ignore param index 2)
					_zDir set [2,0];
					_dirTo set [2,0];
					
					_dot = _zDir vectorDotProduct _dirTo; 
					//magnatude of both is 1, ignore divisor
					_angle = acos(_dot);
					if(abs(_angle) <= _maxVisibleAngle) then {
						// player within view matrix
						_visibility = [(vehicle player), "VIEW",_x] checkVisibility [eyePos _x, eyePos player];
						if(_visibility >= 0.9) then {
							[_x] call DSZ_fnc_agroZombie;
						};
					};
				};
			};
		};
		true
	} count _nearZombies;
	
	
	uiSleep 5;
};