/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 - 2018 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */
params["_unit","_equipmentArray"];

uiSleep 5;
removeHeadgear _unit;
removeGoggles _unit;
removeVest _unit;
removeBackpack _unit;
removeUniform _unit;
removeAllWeapons _unit;
removeAllAssignedItems _unit;

if !(_equipmentArray isEqualTo []) then {
	
	//--- load the chosen loadout	
	sleep 1;
	_unit setUnitLoadout _equipmentArray;
	_dataHas = getUnitLoadout _unit;
	if !(_dataHas isEqualTo _equipmentArray) then {
		_loop = true;
		_cycles = 3;
		while {_loop} do {
			if (_cycles > 0) then {
				_unit setUnitLoadout _equipmentArray;
				_cycles = _cycles - 1;
				sleep 2;
				if (_dataHas isEqualTo _equipmentArray) exitWith {_loop = false;};
			} else {
				_loop = false;
				//TODO: throw player back to lobby (requires _equipmentArray to work before enabling)!
			};
		};
	};
} else {

	//--- load fresh loadout
	_uniform = (["Uniform","DS"] call BASE_fnc_getCfgValue) splitString ",";
	if!(_uniform isEqualTo []) then {
		_uniform = selectRandom _uniform;
		_unit addUniform _uniform;
	};
	
	_headgear = (["Headgear","DS"] call BASE_fnc_getCfgValue) splitString ",";
	if!(_headgear isEqualTo []) then {
		_headgear = selectRandom _headgear;
		_unit addHeadgear _headgear;
	};

	_goggles = (["Goggles","DS"] call BASE_fnc_getCfgValue) splitString ",";
	if!(_goggles isEqualTo []) then {
		_goggles = selectRandom _goggles;
		_unit addGoggles _goggles;
	};
	
	_vest = (["Vest","DS"] call BASE_fnc_getCfgValue) splitString ",";
	if!(_vest isEqualTo []) then {
		_vest = selectRandom _vest;
		_unit addVest _vest;
	};
	
	_backpack = (["Backpack","DS"] call BASE_fnc_getCfgValue) splitString ",";
	if!(_backpack isEqualTo []) then {
		_backpack = selectRandom _backpack;
		_unit addBackpack _backpack;
	};
	
	_HandgunWpn = (["HandgunWpn","DS"] call BASE_fnc_getCfgValue) splitString ",";
	if!(_HandgunWpn isEqualTo []) then {
		_HandgunWpn = selectRandom _HandgunWpn;
		_unit addWeapon _HandgunWpn;
	};
	
	_PrimaryWpn = (["PrimaryWpn","DS"] call BASE_fnc_getCfgValue) splitString ",";
	if!(_PrimaryWpn isEqualTo []) then {
		_PrimaryWpn = selectRandom _PrimaryWpn;
		_unit addWeapon _PrimaryWpn;
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
	
	_PrimaryWpnAttachments = (["PrimaryWpnAttachments","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit addPrimaryWeaponItem _x;
	} forEach _PrimaryWpnAttachments;
	
	_HandgunWpnAttachments = (["HandgunWpnAttachments","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit addHandgunItem _x;
	} forEach _HandgunWpnAttachments;
	
	_RemoveItems = (["RemoveItems","DS"] call BASE_fnc_getCfgValue) splitString ",";
	{
		_unit unlinkItem _x;
	} forEach _RemoveItems;
};