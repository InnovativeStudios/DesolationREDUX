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
params["_unit",["_equipmentArray",[]],["_defaultData",[]]];

if !(_equipmentArray isEqualTo []) then
{
	//--- load the chosen loadout
	removeHeadgear _unit:
	removeGoggles _unit;
	removeVest _unit;
	removeBackpack _unit;
	removeUniform _unit;
	removeAllWeapons _unit:
	removeAllAssignedItems _unit;
	
	sleep 1;
	_unit setUnitLoadout _equipmentArray;
	_dataHas = getUnitLoadout _unit;
	if !(_dataHas isEqualTo _equipmentArray) then {
		diag_log "FATAL ERROR: SET UNIT LOADOUT FAILED";
		_loop = true;
		while {_loop} do {
			_cycles = 3;
			if (_cycles > 0) then {
				_unit setUnitLoadout _equipmentArray;
				_cycles = _cycles - 1;
				sleep 2;
				if (_dataHas isEqualTo _equipmentArray) then {_loop = false;};
			} else {
				_loop = false;
				//TODO: throw player back to lobby (reques _equipmentArray to work before enabling)!
			};
		};
	};
}
else
{
	removeHeadgear _unit;
	removeUniform _unit;
	removeGoggles _unit;
	
	_unit addUniform (_defaultData select 0);
	_unit addHeadgear (_defaultData select 1);
	
	
	_vest = ["Vest","DS"] call BASE_fnc_getCfgValue;
	if(_vest != "") then {
		_unit addVest _vest;
	};
	
	_backpack = ["Backpack","DS"] call BASE_fnc_getCfgValue;
	if(_backpack != "") then {
		_unit addBackpack _backpack;
	};
	
	_Items = (["Items","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit addItem _x;
	} forEach _Items;
	
	_linked = (["Linked","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit linkItem _x;
	} forEach _Items;
	
	
	_Magazines = (["Magazines","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit addMagazine _x;
	} forEach _Magazines;
	
	_PrimaryWpn = ["PrimaryWpn","DS"] call BASE_fnc_getCfgValue;
	if(_PrimaryWpn != "") then {
		_unit addWeapon _PrimaryWpn;
	};
	_PrimaryWpnAttachments = (["PrimaryWpnAttachments","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit addPrimaryWeaponItem _x;
	} forEach _PrimaryWpnAttachments;
	
	_HandgunWpn = ["HandgunWpn","DS"] call BASE_fnc_getCfgValue;
	if(_HandgunWpn != "") then {
		_unit addWeapon _HandgunWpn;
	};
	_HandgunWpnAttachments = (["HandgunWpnAttachments","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit addHandgunItem _x;
	} forEach _HandgunWpnAttachments;
	
	_RemoveItems = (["RemoveItems","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit unlinkItem _x;
	} forEach _RemoveItems;
};