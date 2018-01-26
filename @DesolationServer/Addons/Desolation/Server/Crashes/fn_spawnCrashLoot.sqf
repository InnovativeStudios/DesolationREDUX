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

//PLEASE NOTE: Lootcrate spawning is only temporary and will be replaced with random loot piles/ lootable crew corpses...

_heliCrashPos = _this select 0;
_crashName = _this select 1;

_min = 2; // TODO: get value from config
_max = 5; // TODO: get value from config
_mid = ((_min + _max) / 2);

_bodyCount = round (random [_min,_mid,_max]);
while {_bodyCount > 0} do {

	// get config values
	_weaponLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "weapons");
	_backpackLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "backpacks");
	//_uniformLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "uniforms");
	//_vestLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "vests");
	_magazineLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "magazines");
	_itemLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "items");

	_bodyPos = [_heliCrashPos, 2, 10, 0, 1, 0, 0] call BIS_fnc_findSafePos;
	_body = objNull;
	_group = objNull;
	_group = createGroup West;
	_body = _group createUnit ["B_Soldier_F",_bodyPos,[],0,"NONE"];
	_body setDir (random 360);
	_body setdamage 1;

	removeGoggles _body;
	removeAllWeapons _body;
	removeVest _body;
	removeUniform _body;
	removeHeadgear _body;
	removeBackpack _body;
	removeAllAssignedItems _body;
	removeallitems _body;

	_body forceAddUniform "U_B_CombatUniform_mcam";
	/*if !(_uniformLoot isEqualTo []) then {
		_uniformLoot = selectRandom _uniformLoot;
		_body forceAddUniform _uniformLoot;
	};*/

	_body addVest "V_PlateCarrierGL_rgr";
	/*if !(_vestLoot isEqualTo []) then {
		_vestLoot = selectRandom _vestLoot;
		_body addVest _vestLoot;
	};*/

	if !(_weaponLoot isEqualTo []) then {
		_weaponLoot = selectRandom _weaponLoot;
		_body addweapon _weaponLoot;
	};

	if !(_backpackLoot isEqualTo []) then {
		_backpackLoot = selectRandom _backpackLoot;
		_body addbackpack _backpackLoot;
	};

	if !(_magazineLoot isEqualTo []) then {
		{
			_body addMagazine _x;
		} foreach _magazineLoot;
	};

	if !(_itemLoot isEqualTo []) then {
		{
			_body addItem _x;
		} foreach _itemLoot;
	};
	
	[_body] spawn {
		params["_body"];
		removeFromRemainsCollector [_body];
	};
	removeFromRemainsCollector [_body];
	_bodyCount = _bodyCount - 1;
};
true