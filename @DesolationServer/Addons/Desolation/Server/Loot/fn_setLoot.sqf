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
params["_container","_loot"];
private["_containerdata","_magazines","_items","_weapons","_backpacks","_alreadySpawnedContainers","_cType","_cLoot"];

_containerdata = _loot select 0;
_magazines = _loot select 1;
_items = _loot select 2;
_weapons = _loot select 3;
_backpacks = _loot select 4;



{
	if(count(_x) > 1) then {
		_container addMagazineAmmoCargo [_x select 0, 1, _x select 1];
	} else {
		_container addMagazineAmmoCargo [_x select 0, 1, 1];
	};
} forEach _magazines;
{
	_container addItemCargoGlobal [_x,1];
} forEach _items;
{
	_class = _x select 0;
	_muzzle = _x select 1;
	_side = _x select 2;
	_optic = _x select 3;
	_magazineInfo = _x select 4;
	_launch = [];
	_bipod = _x select 5;
	if(typename(_bipod) == typename([])) then {
			_bipod = _x select 6;
			_launch = _x select 5;
	};

	_container addWeaponCargoGlobal [_class, 1];
	_container addItemCargoGlobal [_side, 1];
	_container addItemCargoGlobal [_bipod,1];
	if(count(_magazineInfo) > 0) then {
		_container addMagazineAmmoCargo [_magazineInfo select 0,_magazineInfo select 1];
	};
	if(count(_launch) > 0) then {
		_container addMagazineAmmoCargo [_launch select 0,_launch select 1];
	};

} forEach _weapons;
{
	_container addBackpackCargoGlobal [_x,1];
} forEach _backpacks;

_alreadySpawnedContainers = [];
{
	_cType = _x select 0;
	_cLoot = _x select 1;

	{
		if((_x select 0) == _cType) then {
			if !((_x select 1) in _alreadySpawnedContainers) then {
				_alreadySpawnedContainers pushBack (_x select 1);
				if(count(_cLoot) > 0) then { //this should never trigger tho... (this does trigger when everyContainer is an empty [])
					[_x select 1,_cLoot] call DS_fnc_setLoot;
				} else {
					systemchat "SET LOOT ERROR: empty container loot array, wtf?";
				};
			};
		};
	} forEach (everyContainer _container);

} forEach _containerdata;