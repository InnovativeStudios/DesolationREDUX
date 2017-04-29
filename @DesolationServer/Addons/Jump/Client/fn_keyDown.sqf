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
	if(vehicle player == player) then { 
		if(isTouchingGround player) then { 
			if(stance player == "STAND") then { 
				if(speed player > 11) then { 
					if !(missionNamespace getVariable ["JMP_var_Jumping",false]) then { 
						_found = true; 
						JMP_var_Jumping = true; 
						[] spawn { 
							_height = 3.5-((load player));  
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
				} else { 
					if !(missionNamespace getVariable ["JMP_var_Jumping",false]) then { 

						_climbDZ = 0; 
						_x = (eyepos player) select 0; 
						_y = (eyepos player) select 1; 
						_dX = ((vectorDir player) select 0)/2; 
						_dY = ((vectorDir player) select 1)/2; 
						_sH = (eyepos player) select 2; 

						_p3 = [_x,_y,_sH] vectorAdd ((vectorDir player) vectorMultiply 2); 
						_p4 = _p3 vectorAdd [0,0,2]; 

						_obj2 = lineIntersectsObjs [_p3,_p4,objNull,objNull,false]; 

						for "_i" from 0 to 0.6 step 0.02 do { 
							_h = _sH + _i; 

							_p1 = [_x,_y,_h]; 
							_p2 = [_x + _dX,_y + _dY,_h]; 

							_obj1 = lineIntersectsObjs [_p1,_p2,player,objNull,false]; 




							if(count(_obj1) == 0) exitWith { 
								_climbDZ = _i; 
								{ 
									if(_x in _obj2) exitWith { 
										_climbDZ = -1; 
									}; 
								} forEach _obj1; 
							}; 
						}; 


						if(_climbDZ > 0) then { 
							JMP_var_Jumping = true;
							[] spawn {
								waitUntil{animationState player find "aovrpercmstp" == 0};
								_wep = currentWeapon player;
								if(_wep != "") then {
									player action ["SwitchWeapon",player,player,-1];
								};
								[player,"climb_over_tall"] remoteExecCall ["switchMove",0]; 
								waituntil{animationState player == "climb_over_tall"};
								waitUntil{animationState player != "climb_over_tall"};
								if(_wep != "") then {
									if(_wep == primaryWeapon player) then {
										player action ["SwitchWeapon",player,player,0];
									};
									if(_wep == handGunWeapon player) then {
										player action ["SwitchWeapon",player,player,6];
									};
								};
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