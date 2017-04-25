/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */

_sourcesinfo = player getVariable ["DS_var_BleedSourcesInfo",[]];
if(count(_sourcesinfo) > 0) then {
	if !(DS_var_isBleeding) then {
		DS_var_isBleeding = true;
	};
} else {
	if (DS_var_isBleeding) then {
		DS_var_isBleeding = false;
	};
};
[_sourcesinfo] call ds_fnc_onBleedTick;

if(rating player < 0) then {
	player addRating 9999999;
};


call ds_fnc_onInfectionTick;
call ds_fnc_onHungerTick;
call ds_fnc_onThirstTick;
call ds_fnc_onEffectTick;
call ds_fnc_onUpdateTick;


if((DS_var_LastVitaminTime + (15*60)) < diag_tickTime) then {
	player enableFatigue false;
} else {
	player enableFatigue true;
};



_ctrl = uiNamespace getVariable ["TEMP_ICON",controlNull];

_level = 74; //static for now (no temp system implemented)

_0 = abs(_level - 0);
_1 = abs(_level - 25);
_2 = abs(_level - 50);
_3 = abs(_level - 75);
_4 = abs(_level - 100);

_min = (((_0 min _1) min _2) min _3) min _4;
if(_min == _0) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\temperature_0.paa";
};
if(_min == _1) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\temperature_25.paa";
};
if(_min == _2) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\temperature_50.paa";
};
if(_min == _3) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\temperature_100.paa";
};
if(_min == _4) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\hunger_100.paa";
};


if((player getHitPointDamage 'HitLegs') > 0) then {
	//-- show bone icon
	_ctrl = uiNamespace getVariable ["BONE_ICON",controlNull];
	if(!isNull _ctrl) then {
		if (!ctrlShown _ctrl) then {
			_ctrl ctrlShow true;
		};
	};
} else {
	//-- hide bone icon
	_ctrl = uiNamespace getVariable ["BONE_ICON",controlNull];
	if(!isNull _ctrl) then {
		if (ctrlShown _ctrl) then {
			_ctrl ctrlShow false;
		};
	};
};