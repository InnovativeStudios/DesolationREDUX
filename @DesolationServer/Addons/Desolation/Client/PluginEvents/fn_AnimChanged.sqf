params["_unit","_anim"]; 
if(_anim find "ladder" != -1) then {
	player setAnimSpeedCoef 1.8; //ladder speed boost
} else {
	_action = _anim select [1,3];
	if(_action in ["ssw","swm","bsw"]) then {
		player setAnimSpeedCoef 2; //swim speed boost
	} else {
		player setAnimSpeedCoef 1;
	};
};