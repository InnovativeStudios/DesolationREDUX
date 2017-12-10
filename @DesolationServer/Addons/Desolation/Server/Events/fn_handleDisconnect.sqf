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

_unit = _this select 0;
_unitID = _this select 1;
_unitUID = _this select 2;
_unitName = _this select 3;

_return = false;
if(alive _unit) then {
	//--- prevent on disconnect killed
	_unit allowDamage false;
	_unit hideObjectGlobal true;


    if !(isNil {_unit getVariable "DS_var_inCombat"}) then {
        diag_log format ["Desolation> PLAYER %1 COMBAT LOGGED!!", _unitName];
		
		[_unit] spawn {
			params["_unit"];
			_netId = netId _unit;
			diag_log format ["%1", _netId]; 
			
			_unitPos = getposATL (objectFromNetId _netId);
			_unitLoadout = getunitloadout (objectFromNetId _netId);
		
			_group = createGroup Civilian;
			_ai = _group createUnit ["C_man_1",_unitPos,[],0,"FORM"];
			
			removeFromRemainsCollector [_ai];
			
			_ai setBehaviour "CARELESS";
			_ai disableAI "AUTOTARGET";
			_ai disableAI "MOVE";
			_ai setUnitPos "UP";
			
			// set ai gear
			removeGoggles _ai;
			removeAllWeapons _ai;
			removeVest _ai;
			removeUniform _ai;
			removeHeadgear _ai;
			removeBackpack _ai;
			removeAllAssignedItems _ai;
			removeallitems _ai;
        
			_ai setUnitLoadout _unitLoadout;
        
			[_ai,"ApanPknlMstpSnonWnonDnon_G01"] remoteExecCall ["switchMove",0];

			uiSleep 30;
			if (alive _ai) then {
				deleteVehicle _ai;
				deletegroup _group;
			} else {
				_unit setVariable ["SVAR_DS_var_isDead", true, true];
			};
		};
	};
    
	diag_log ("Desolation> Saving Disconnected Player (" + _unitName + ")");

	_unit setVariable ["DCed",true];
	if(alive _unit) then {
		//--- if the unit DCed while alive, they are logging out, not ded
		[_unit,false] spawn DS_fnc_requestSave;
	};
	_return = true; //keep the body in game while saving happens
};
_return;