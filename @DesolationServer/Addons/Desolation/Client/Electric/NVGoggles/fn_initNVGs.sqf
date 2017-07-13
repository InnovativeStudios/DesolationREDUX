
while{true} do {
	waitUntil{currentVisionMode player == 1};
	if !(call DS_fnc_canPowerNVG) then {
		151413 cutText ["No power source","BLACK OUT"];
		waitUntil{currentVisionMode player == 0 || call DS_fnc_canPowerNVG};
		_mode = if(call DS_fnc_canPowerNVG) then {"BLACK IN"} else {"PLAIN"};
		151413 cutText ["",_mode];
	};
	uiSleep 0.001;
};