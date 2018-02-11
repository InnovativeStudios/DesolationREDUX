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

params["_heliCrashPos","_crashName"];


_minBodies = getNumber (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "maxBodies");
_maxBodies = getNumber (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "minBodies");
_bodyCount = random _maxBodies;
if (_bodyCount < _minBodies) then {_bodyCount = _minBodies + (random (_maxBodies - _minBodies));};
_bodyCount = round(_bodyCount);

if (_bodyCount > 0) then {
	_group = createGroup West;

	for "_i" from 1 to _bodyCount do {
		_body = objNull;

		_bodyPos = [_heliCrashPos, 2, 10, 0, 1, 0, 0] call BIS_fnc_findSafePos;
		_body = _group createUnit ["B_Soldier_F",_bodyPos,[],0,"NONE"];
		_body setDir (random 360);
		removeFromRemainsCollector [_body];

		removeGoggles _body;
		removeAllWeapons _body;
		removeVest _body;
		removeUniform _body;
		removeHeadgear _body;
		removeBackpack _body;
		removeAllAssignedItems _body;
		removeallitems _body;

		// get config values
		_uniformLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Uniforms");
		_vestLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Vests");
		_backpackLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Backpacks");
		_headgearLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Headgears");

		_weaponLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Weapons");
		_sidearmLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Handguns");

		_magazineLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Magazines");
		_itemLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Items");
		_linkedLoot = getArray (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "Linkeditems");

		// OUTFIT
		if !(_uniformLoot isEqualTo []) then {
			_uniformLoot = selectRandom _uniformLoot;
			_body forceAddUniform _uniformLoot;
		};

		if !(_vestLoot isEqualTo []) then {
			_vestLoot = selectRandom _vestLoot;
			_body addVest _vestLoot;
		};

		if !(_backpackLoot isEqualTo []) then {
			_backpackLoot = selectRandom _backpackLoot;
			_body addbackpack _backpackLoot;
		};

		if !(_headgearLoot isEqualTo []) then {
			_headgearLoot = selectRandom _headgearLoot;
			_body addHeadgear _headgearLoot;
		};


		// WEAPONS
		_maxMags = getNumber (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "MaxMagAmountWithWeapon");
		_minMags = getNumber (configFile >> "CfgHeliCrashes" >> "CrashTypes">> _crashName >> "loot" >> "MinMagAmountWithWeapon");
		if !(_weaponLoot isEqualTo []) then {
			_weaponLoot = selectRandom _weaponLoot;
			_body addweapon _weaponLoot;
			
			if (_maxMags == 0) exitWith {};
			private ["_magCount", "_magazines", "_magazine","_m"];

			_magCount = round (random _maxMags);
			if (_magCount < _minMags) then {_magCount = round (_minMags + (random (_maxMags - _minMags)));};
			_magazines = getArray(configFile >> "CfgWeapons" >> (primaryWeapon _body) >> "Magazines");
			_magazine = _magazines select floor (random(count(_magazines)));

			_body addPrimaryWeaponItem _magazine;
			for "_m" from 1 to (_magCount - 1) do {
				_body addMagazine _magazine;
			};
		};

		if !(_sidearmLoot isEqualTo []) then {
			_sidearmLoot = selectRandom _sidearmLoot;
			_body addWeapon _sidearmLoot;

			if (_maxMags == 0) exitWith {};
			private ["_magCount", "_magazines", "_magazine","_m"];

			_magCount = round (random _maxMags);
			if (_magCount < _minMags) then {_magCount = round (_minMags + (random (_maxMags - _minMags)));};
			_magazines = getArray(configFile >> "CfgWeapons" >> (handgunWeapon _body) >> "Magazines");
			_magazine = _magazines select floor (random(count(_magazines)));

			_body addHandgunItem _magazine;
			for "_m" from 1 to (_magCount - 1) do {
				_body addMagazine _magazine;
			};
		};


		// ITEMS
		if !(_magazineLoot isEqualTo []) then {
			{
				_body addMagazine _x;
			} forEach _magazineLoot;
		};

		if !(_itemLoot isEqualTo []) then {
			{
				_body addItem _x;
			} forEach _itemLoot;
		};
		if !(_linkedLoot isEqualTo []) then {
			{
				_body linkItem _x;
			} forEach _linkedLoot;
		};
	
		_body setdamage 1;
	};
	deleteGroup _group;
};

true