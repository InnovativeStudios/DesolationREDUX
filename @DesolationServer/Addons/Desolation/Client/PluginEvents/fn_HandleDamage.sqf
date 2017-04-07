params["_unit","_selectionName","_damage","_shooter","_projectile","_hitPartIndex"];

if(!alive _unit) exitWith {false};

_allowDamage = false;
_allowArmaDamage = true;

if(_damage > 0.1) then {
	_allowDamage = true;
	
	if(!isNull _shooter) then {
		if(toLower(_projectile) find "b_" == 0) then {
			_allowArmaDamage = false;
			if !(_shooter in DS_var_damagedBy) then {
				DS_var_damagedBy pushBack _shooter;
				
				_bloodLoss = _damage * 27500;
				if(_selectionName != "head") then {
					_bloodLoss = _bloodLoss / 1.5;
				};
				DS_var_Blood = DS_var_Blood - _bloodLoss;
			};
		} else {
			if(_shooter isKindOf "LandVehicle") then {
				_bloodLoss = _damage * 825;
				DS_var_Blood = DS_var_Blood - _bloodLoss;
			} else {
				_fallSpeed = (velocity _unit) select 2;
				if(_fallSpeed < -2) then {
					_bloodLoss = _damage * 750;
					DS_var_Blood = DS_var_Blood - _bloodLoss;
				} else {
					_bloodLoss = _damage * 8250;
					DS_var_Blood = DS_var_Blood - _bloodLoss;
				};
			};
		};
	} else {
		_bloodLoss = _damage * 1000;
		DS_var_Blood = DS_var_Blood - _bloodLoss;
	};
	if(_selectionName == "legs") then {
		if(!isNil {_damage}) then {
			if(_damage > 0.3) then {
				[_unit] spawn {
					params["_unit"];
					_unit setHitPointDamage ["HitLegs",1];
				};
			};
		};
	};
	if(_selectionName == "head") then {
		if(lifeState _unit != "INCAPACITATED") then {
			[floor(5 + random(5))] spawn ds_fnc_knockOut;
		};
	};
};
((_damage >= 1) && _allowArmaDamage && _allowDamage);