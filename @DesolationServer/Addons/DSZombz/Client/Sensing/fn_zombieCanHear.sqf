params["_zed"];
private["_maxSoundDistance","_animState","_stance","_move","_mode","_return"];

_maxSoundDistance = 40;
_weaponSoundDistance = 100;

_chance = 0;

_animState = animationState player;
_parts = _animState splitString "_";
_animState = _parts select 0;

if(count(_animState) >= 19) then {
	_stance = _animState select [4,4];
	_move = _animState select[8,4];
	_mode = _animState select [20];

	
	if(_stance == "perc") then {
		_chance = _chance + 10;
	};
	if(_stance == "pknl") then {
		_chance = _chance + 5;
	};
	if(_stance == "ppne") then {
		_chance = _chance + 0;
	};

	if(_move == "meva") then {
		_chance = _chance + 70;
	};
	if(_move == "mrun") then {
		_chance = _chance + 40;
	};
	if(_move == "mwlk") then {
		_chance = _chance + 10;
	};
	if(_move == "mstp") then {
		_chance = _chance + 0;
	};

	if(_move == "dnon") then {
		_chance = _chance + 0;
	};
	if(_move == "dup") then {
		_chance = _chance + 10;
	};
	if(_move == "ddown") then {
		_chance = _chance - 10;
	};
	if(_move == "df") then {
		_chance = _chance + 20;
	};
};
_return = false;
_soundDist = _maxSoundDistance * (_chance/100);
if((player distance _zed) <= _soundDist) then {
	_return = true;
};


if (!_return) then {
	_lastSound = player getVariable ["DSZ_var_lastSound",diag_tickTime - 3];
	if((_lastSound + 1) >= diag_tickTime) then {
		if((player distance _zed) <= _weaponSoundDistance) then {
			_return = true;
		};
	};
};


_return;