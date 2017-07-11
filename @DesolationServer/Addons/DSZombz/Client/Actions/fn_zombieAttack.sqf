params["_zed"];

_standardDamage = {
	params["_damagedBy"];
	DS_var_blood = DS_var_blood - (1000 + random(1500));
	
	if(random(1) <= 0.15) then {
		DS_var_damagedBy pushBack _damagedBy;
		_selections = ["spine3","leftforearm","rightforearm","lefthand","righthand","leftupleg","rightupleg","leftleg","rightleg","leftfoot","rightfoot","head","pelvis"];
		[_damagedBy,selectRandom _selections] call DS_fnc_onHitPartReceived;
	};
	/*
	if(random(1) <= 0.01) then {
		SM_infectionDot = SM_infectionDot + 0.01;
	};
	*/
};

if(isNil "DSZ_var_zombieAttackOverride") then {
	playSound3D ["a3\sounds_f\characters\human-sfx\P01\Low_hit_" + str(ceil(random(6))) + ".wss",player,false,getPosASL player,1,1,50];
	[_zed] call _standardDamage;
} else {
	[_zed] call (missionNamespace getVariable [DSZ_var_zombieAttackOverride,_standardDamage]);
};