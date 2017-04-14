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
params["_crate"];

_owner = _crate getVariable ["oOWNER",""];

_entry = _crate getVariable "SVAR_buildParams";
_items = _entry select 0;
_model = _entry select 2;
diag_log _model;

_array = [];
{
	_mag = _x select 0;
	_count = _x select 1;
	for "_i" from 1 to _count do {
		_array pushback toLower(_mag);
	};
} forEach _items;
_ammo = magazinesAmmoCargo _crate;
_newammo = [];
clearMagazineCargoGlobal _crate;
{
	_mag = toLower(_x select 0);
	_count = _x select 1;
	 
	_index = _array find _mag;
	if(_index != -1) then {
		_array deleteAt _index;
	} else {
		_newammo pushback (_x + [1]);
	};
	 
} forEach _ammo;	
{
	_crate addMagazineAmmoCargo _x
} forEach _newammo;

_loot = [_crate] call DS_fnc_getLoot; //TODO save this loot to groundWeaponHolder

_holder = "groundWeaponHolder" createVehicle (position _crate);
[_holder,_loot] call DS_fnc_setLoot;

_pos = getposatl _crate;
_dir = getdir _crate;

deleteVehicle _crate;


_obj = _model createVehicle [0,0,0];
_obj setdir _dir;
_obj setposatl _pos;
_crate setVectorUp [0,0,1];

_obj setVariable ["oOWNER",_owner,true];
for "_i" from 1 to 5 do {
	_obj setVariable["bis_disabled_Door_" + str(_i),1,true]; // disable door access
};

scopeName "exitCheck";
{
	_uuid = _x getVariable ["pUUID",""];
	if(_uuid != "") then {
		if(_uuid == _owner) then {
			[[_obj]] remoteExec ["DS_fnc_registerOwner",_x];
			breakTo "exitCheck"; // exit forEach loop, we found the owner
		};
	};
} forEach allPlayers;


["spawnBuilding","",[_obj]] call DS_fnc_dbRequest;
_oUUID = _obj getVariable ["oUUID",""];

DS_var_Buildings pushback _obj;
DS_var_BuildingUUIDS pushback _oUUID;
