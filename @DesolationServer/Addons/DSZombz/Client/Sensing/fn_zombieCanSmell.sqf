params["_zed"];

_smellDistance = 10;
//todo: add more checks
if(rain > 0) then {
	_smellDistance = 10/(7*rain);
};

_return = false;
if(_zed distance player < _smellDistance) then { 
	_return = true;
};
_return;