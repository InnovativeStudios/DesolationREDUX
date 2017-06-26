

params["_unit","_anim"];
if(_anim find "aovr" == 0) then {
	if(cursorTarget getVariable ["oOWNER",""] != "") then {
		if(cursorTarget distance2D player < 5) then {
			_unit switchMove "";
			systemchat "<AntiGlitch> Wall Glitch Detected";
		};
	};
};