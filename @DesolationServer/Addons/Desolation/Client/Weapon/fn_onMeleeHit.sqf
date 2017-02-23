params["_damagedBy"];
DS_var_blood = DS_var_blood - (1000 + random(2500));
DS_var_damagedBy pushBack _damagedBy;
_selections = ["spine3","leftforearm","rightforearm","lefthand","righthand","leftupleg","rightupleg","leftleg","rightleg","leftfoot","rightfoot","head","pelvis"];
[_damagedBy,selectRandom _selections] call DS_fnc_onHitPartReceived;