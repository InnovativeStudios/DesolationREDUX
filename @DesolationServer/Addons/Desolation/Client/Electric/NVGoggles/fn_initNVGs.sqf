
while{true} do {
	waitUntil{currentVisionMode player == 1};
	if !(call DS_fnc_canPowerNVG) then {
		151413 cutText ["No power source","BLACK"];
		waitUntil{currentVisionMode player == 0};
		151413 cutText ["","PLAIN"];
	};
	uiSleep 0.001;
};