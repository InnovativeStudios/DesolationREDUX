/*
	Credits: Killzone Kid, original author of the code this is based on.
	Source: http://killzonekid.com/arma-scripting-tutorials-how-to-override-lmb/
*/

DSR_isSwinging = false;

DSR_swingActions = [];
DSR_swingWeapons = [];

player addAction ["",{
	
	_weapon = currentWeapon player;
	_index = DSR_swingWeapons find _weapon;
	_data = DSR_swingActions select _index;
	
	_animation = _data select 0;
	_function = _data select 1;
	_delay1 = _data select 2;
	_delay2 = _data select 3;
	
	
	if(!DSR_isSwinging) then { 
		DSR_isSwinging = true; 
		player playActionNow _animation; 
		[] spawn { 
			uiSleep _delay1; 
			call (missionNamespace getVariable [_function,{}]); 
			uiSleep _delay2;
			DSR_isSwinging = false; 
		}; 
	};
	
}, "", -100, false, true, "DefaultAction", "currentWeapon player in DSR_swingWeapons"];


["DSR_Melee_Axe","dsr_AxeSlashGst","DS_fnc_onAxeSwing"] call DS_fnc_registerMeleeAction;
["DSR_Melee_Fire_Axe","dsr_AxeSlashGst","DS_fnc_onAxeSwing"] call DS_fnc_registerMeleeAction;
["DSR_Melee_Katana","dsr_KatanaSlashGst","DS_fnc_onKatanaSwing"] call DS_fnc_registerMeleeAction;
//todo
["DSR_Melee_Bat","dsr_KatanaSlashGst","DS_fnc_onKatanaSwing"] call DS_fnc_registerMeleeAction;
["DSR_Melee_Fishingrod","dsr_KatanaSlashGst","DS_fnc_onKatanaSwing"] call DS_fnc_registerMeleeAction;
