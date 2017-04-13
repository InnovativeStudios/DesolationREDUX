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

params["_building","_MinPiles","_buildingTypes","_Config_Options","_savedLoot"];
private["_building_type","_positions","_building_table","_loot_rarity","_loot_types","_Config","_ConfigEntry","_lChance","_sChance","_tChance","_gChance","_spawn_positions","_pos","_bLootPiles","_object","_number_of_items_in_pile","_spawnedGear","_spawnedCount","_type","_max","_roll","_value","_exit","_index","_count","_limit","_rarity","_itemArray","_item","_class","_mags","_mag"];

_building_type = typeof(_building);

_positions = getArray(configFile >> "CfgItemSpawns" >> "Buildings" >> _building_type >> "positions");
_building_table = getText(configFile >> "CfgItemSpawns" >> "Buildings" >> _building_type >> "table");

_loot_rarity = getArray(configFile >> "CfgItemSpawns" >> "lootRarity");
_loot_types = getArray(configFile >> "CfgItemSpawns" >> "lootTypes");

_Config = _Config_Options select (_buildingTypes find _building_table);

_ConfigEntry = configFile >> "CfgItemSpawns" >> "Loot" >> _building_table;

if(_savedLoot isEqualTo ["FRESH LOOT"]) then {
	// Fresh Spawn
	_lChance = _Config select 0; // chance for building to spawn loot
	_sChance = _Config select 1; // chance for pile to spawn loot
	_tChance = _Config select 2; // chance for rarity types
	_gChance = _Config select 3; // chance for gear types


	if(random(100) <= _lChance) then {
		//--- building is spawning loot
		_spawn_positions = [];

		// spawn minumum number of piles
		for "_i" from 1 to _MinPiles do {
			if(count(_positions) == 0) exitWith {};
			_spawn_positions pushBack (_positions deleteAt floor(random(count(_positions))));
		};
		while{count(_positions) > 0} do {
			_pos = _positions deleteAt floor(random(count(_positions)));
			if(count(_pos nearObjects ["GroundWeaponHolder",0.2]) == 0) then {
				if(random(100) < _sChance) then {
					_spawn_positions pushBack _pos;
				};
			};
		};

		_bLootPiles = [];

		{
			_pos = ASLtoATL(AGLtoASL(_building modelToWorld _x));
			_object = "GroundWeaponHolder" createVehicle [0,0,0];
			_object setposATL _pos;
			_object setDir random(360);
			
			_bLootPiles pushBack _object;

			_number_of_items_in_pile = 1 + floor(random(3)); //TODO: make this configurable

			_spawnedGear = []; //--- keeps track of items spawned so we don't go over limit
			_spawnedCount = [];
			for "_i" from 1 to _number_of_items_in_pile do {
				_type = "";
				while{true} do {
					_max = 0;
					{_max = _max + _x;} forEach _gChance;
					_roll = random(_max);
					_value = 0;
					{
						_value = _value + _x;
						if(_roll <= _value) exitWith {
							_type = _loot_types select _forEachIndex;
						};
					} forEach _gChance;

					_exit = false;
					_index = _spawnedGear find _type;
					if(_index == -1) then {
						_spawnedGear pushback _type;
						_spawnedCount pushBack 1;
						_exit = true;
					} else {
						_count = _spawnedCount select _index;
						_limit = ["Max" + _type + "s"] call DS_fnc_getCfgValue;
						if(!isNil {_limit}) then {
							if(_count < _limit) then {
								_spawnedCount set[_index,_count+1];
								_exit = true;
							};
						} else {
							_spawnedCount set[_index,_count+1];
							_exit = true;
						};
					};

					if(_exit) exitWith {};
				};

				if(_i == 1) then {
					if(toLower(_type) != "handgun") then {
						_spawnedGear pushback "Handgun";
						_spawnedCount pushBack 1;
					};
					if(tolower(_type) != "weapon") then {
						_spawnedGear pushback "Weapon";
						_spawnedCount pushBack 1;
					};
				};
				_rarity = "";
				_max = 0;
				{_max = _max + _x;} forEach _tChance;
				_roll = random(_max);
				_value = 0;
				{
					_value = _value + _x;
					if(_roll <= _value) exitWith {
						_rarity = _loot_rarity select _forEachIndex;
					};
				} forEach _tChance;

				_itemArray = getArray(_ConfigEntry >> _type >> _rarity);

				_item = "";
				_max = 0;
				{_max = _max + (_x select 1);} forEach _itemArray;

				_roll = random(_max);
				_value = 0;
				{
					_value = _value + (_x select 1);
					if(_roll <= _value) exitWith {
						_item = _x select 0;
					};
				} forEach _itemArray;
				// TODO: fix this shit code
				if(isClass (configFile >> "CfgWeapons" >> _item)) then {
					if((toLower(_item) find "tacs_" == 0) || (toLower(_item) find "item" == 0) || (toLower(_item) find "h_" == 0) || (toLower(_item) find "u_" == 0) || (toLower(_item) find "v_" == 0) || (toLower(_item) find "minedetector" == 0) || (toLower(_item) find "binocular" == 0) || (toLower(_item) find "rangefinder" == 0) || (toLower(_item) find "NVGoggles" == 0) || (toLower(_item) find "laserdesignator" == 0) || (toLower(_item) find "firstaidkit" == 0) || (toLower(_item) find "medkit" == 0) || (toLower(_item) find "toolkit" == 0) || (toLower(_item) find "muzzle_" == 0) || (toLower(_item) find "optic_" == 0) || (toLower(_item) find "acc_" == 0) || (toLower(_item) find "bipod_" == 0)) then {
						_object addItemCargoGlobal [_item,1];
					} else {
						if(toLower(_type) in ["handgun","weapon"]) then {
							_chance = ["ChanceToSpawnWithMag"] call DS_fnc_getCfgValue;
							if(random(100) < _chance) then {
								_mags = getArray(configFile >> "CfgWeapons" >> _item >> "Magazines");
								_mag = _mags select floor(random(count(_mags)));
								_maxAmmo = getNumber(configFile >> "CfgMagazines" >> _mag >> "count");
								_object addMagazineAmmoCargo [_mag,1,ceil(random(_maxAmmo))];
								_i = _i + 1;
							};
						};
						_object addWeaponCargoGlobal [_item,1];
					};
				};
				if(isClass (configFile >> "CfgVehicles" >> _item)) then {
					_object addBackpackCargoGlobal [_item,1];
				};
				if(isClass (configFile >> "CfgMagazines" >> _item)) then {
					_maxAmmo = getNumber(configFile >> "CfgMagazines" >> _item >> "count");
					_object addMagazineAmmoCargo [_item,1,ceil(random(_maxAmmo))];
				};
			};
		} forEach _spawn_positions;

		_building setVariable ["LOOT_PILES",_bLootPiles];
	};
} else {
	// Spawn saved loot

	_bLootPiles = [];
	{
		_pos = _x select 0;
		_loot = _x select 1;

		_object = "GroundWeaponHolder" createVehicle [0,0,0];
		_object setposATL _pos;
		_object setDir random(360);
		_bLootPiles pushBack _object;
		[_object,_loot] call DS_fnc_setLoot;
	} forEach _savedLoot;
	_building setVariable ["LOOT_PILES",_bLootPiles];
};
