/*
	Credits: Killzone Kid, original author of the code this is based on.
	Source: http://killzonekid.com/arma-scripting-tutorials-how-to-override-lmb/
*/

DSR_isSwinging = false;

player addAction ["",{
	if(!DSR_isSwinging) then { 
		DSR_isSwinging = true; 
		player playActionNow "dsr_AxeSlashGst"; 
		[] spawn { 
			uiSleep 0.9; 
			call DS_fnc_onAxeSwing; 
			uiSleep 0.6
			DSR_isSwinging = false; 
		}; 
	};
}, "", -100, false, true, "DefaultAction", "(currentWeapon player == 'DSR_Melee_Axe') || (currentWeapon player == 'DSR_Melee_Fire_Axe')"];


//Todo eventually make this the pickaxe anim
player addAction ["",{
	player playMoveNow "dsr_AxeSlashGst";
	[] spawn {
		uiSleep 1;
		player forceWeaponFire [weaponState player select 1, weaponState player select 2];
		call DS_fnc_onAxeSwing;
	};
}, "", -100, false, true, "DefaultAction", "(currentWeapon player == 'DSR_Melee_Pickaxe')"];

//Todo eventually make this the bat anim
player addAction ["",{
	player playMoveNow "dsr_AxeSlashGst";
	[] spawn {
		uiSleep 1;
		player forceWeaponFire [weaponState player select 1, weaponState player select 2];
	};
}, "", -100, false, true, "DefaultAction", "(currentWeapon player == 'DSR_Melee_Bat')"];

//Todo eventually make this the fishingrod anim
player addAction ["",{
	player playMoveNow "dsr_AxeSlashGst";
	[] spawn {
		uiSleep 1;
		player forceWeaponFire [weaponState player select 1, weaponState player select 2];
		call DS_fnc_onFishingrodSwing;
	};
}, "", -100, false, true, "DefaultAction", "(currentWeapon player == 'DSR_Melee_Fishingrod')"];
