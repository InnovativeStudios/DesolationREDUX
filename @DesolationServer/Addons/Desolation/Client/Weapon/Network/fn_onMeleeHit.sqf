params["_damagedBy","_type"];


//high initial damage, low bleed
if(_type == 1) then {
	DS_var_blood = DS_var_blood - (1000 + random(2500));
	DS_var_damagedBy pushBack _damagedBy;
	_selections = ["spine3","leftforearm","rightforearm","lefthand","righthand","leftupleg","rightupleg","leftleg","rightleg","leftfoot","rightfoot","head","pelvis"];
	[_damagedBy,selectRandom _selections] call DS_fnc_onHitPartReceived;
};
//low initial damage, high bleed
if(_type == 2) then {
	DS_var_blood = DS_var_blood - (500 + random(1000));
	DS_var_damagedBy pushBack _damagedBy;
	_selections = ["spine3","leftforearm","rightforearm","lefthand","righthand","leftupleg","rightupleg","leftleg","rightleg","leftfoot","rightfoot","head","pelvis"];
	[_damagedBy,selectRandom _selections] call DS_fnc_onHitPartReceived;
	[_damagedBy,selectRandom _selections] call DS_fnc_onHitPartReceived;
	[_damagedBy,selectRandom _selections] call DS_fnc_onHitPartReceived;
};
//low initial damage, no bleed, high knockout chance
if(_type == 3) then {
	
};