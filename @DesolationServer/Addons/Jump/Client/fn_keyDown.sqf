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

/*
	Jump: on key pressed event
*/
params["_key"];

_found = false;
if(_key in (actionKeys "getover")) then {
	if(toLower(["Enabled","JMP"] call BASE_fnc_getCfgValue) == "true") then {
		if(vehicle player == player) then {
			if(isTouchingGround player) then {
				if(stance player == "STAND") then {
					if(speed player > 11) then {
						if !(missionNamespace getVariable ["JMP_var_Jumping",false]) then {
							_found = true;
							JMP_var_Jumping = true;
							[] spawn {
								_height = 4-((load player)); 
								_vel = velocity player;
								_dir = direction player;
								_speed = 0.4;
								player setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+(cos _dir*_speed),_height];
								
								_holding = currentWeapon player;

								if (_holding == "") then {
									player playActionNow "dsr_noWeap_Jump";
								} else {
									if (_holding == (primaryWeapon player)) then {
										player playActionNow "dsr_rifle_Jump";
									} else {
										if (_holding == (handGunWeapon player)) then {
											player playActionNow "dsr_pistol_Jump";
										} else {
											if (_holding == (secondaryWeapon player)) then {
												player playActionNow "dsr_rpg_Jump";
											};
										};
									};
								};

								uiSleep 1;
								JMP_var_Jumping = false;
							};
						};
					};
				};
			};
		};
	};
};
_found;