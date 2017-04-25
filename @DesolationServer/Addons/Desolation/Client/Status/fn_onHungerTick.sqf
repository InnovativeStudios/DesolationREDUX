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

_dHunger = 1/90; //--- (100 total hunger) (2.5 hours till starvation)

DS_var_lastAte = DS_var_lastAte + 1;


if(DS_var_lastAte > 5400) then { // 1.5 hour grace
	DS_var_Hunger = (DS_var_Hunger - _dHunger) max 0;
	if(!DS_var_isStarving) then {
		DS_var_isStarving = true;
	};
} else {
	if(DS_var_isStarving) then {
		DS_var_isStarving = false;
	};
};

_ctrl = uiNamespace getVariable ["HUNGER_ICON",controlNull];

_level = DS_var_Hunger;

_0 = abs(_level - 0);
_1 = abs(_level - 25);
_2 = abs(_level - 50);
_3 = abs(_level - 75);
_4 = abs(_level - 100);

_min = (((_0 min _1) min _2) min _3) min _4;
if(_min == _0) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\hunger_0.paa";
};
if(_min == _1) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\hunger_25.paa";
};
if(_min == _2) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\hunger_50.paa";
};
if(_min == _3) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\hunger_75.paa";
};
if(_min == _4) then {
	_ctrl ctrlSetText "dsr_ui\Assets\hud\hunger_100.paa";
};