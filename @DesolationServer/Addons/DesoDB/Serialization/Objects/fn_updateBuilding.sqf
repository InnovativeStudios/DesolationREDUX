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
 
 /// used in Desolation spawnPlayer request
 
#include "\DesoDB\constants.hpp" 
 
 
params["_building"];
// default buildings are the object type of 2
_objectType = 2;


//--- request a locality switch from the owning client & transfer back upon completion? (maybe needed)
_object_uuid = _building getVariable ["oUUID",""];

// unused params (DO NOT CHANGE) - well they are not realy unused and i changed them d'oh! (Legodev)
_hitpoints = []; 
_locked = 0;
_priority = _building getVariable ["DSR_priority",1001];
_fuel = 1;
_fuelcargo = 0;  // for example an barrel for fuel storage could use this!
_repaircargo = 0;
_reservedone = [];
_reservedtwo = []; 
_magazinesturrent = []; 

// type
_className = typeof _building;

// owner and unlock code
_accesscode = _building getVariable ["DSR_accesscode",""];
_player_uuid = _building getVariable ["oOWNER",""];

// damage
_damage = damage _building;

// container items
_items = ([_building] call DS_fnc_getLoot);  // gets loot contained within object if it is a container

// get server owner custom variables
_variables = [];
{
	if(toLower(_x) find "svar_" == 0) then {
		_variables pushback [_x,_building getVariable [_x,""]];
	};
} forEach (allVariables _building);

// animations and textures
_animation_sources = [];
_textures = getObjectTextures _building;

// position stuff
_direction = getDir _building;
_positionType = 1;
_position = getPosATL _building;
_positionadvanced = [
	["DSR_vectorUp",str(vectorUp _building)], //high precision vectorup
	["DSR_vectorDir",str(vectorDir _building)], //high precision vectordir
	["DSR_position",(getPosATL _building) call DB_fnc_hpFloatArray] //high precision position
]; 




// only send request if it is needed
_oldData = _building getVariable ["DBVar_AllData",[]];
_newData = [
	_object_uuid,
	_className,
	_priority,
	_objectType,
	_accesscode,
	_locked,
	_player_uuid,
	_hitpoints,
	_damage,
	_fuel,
	_fuelcargo,
	_repaircargo,
	_items,
	_magazinesturrent,
	_variables,
	_animation_sources,
	_textures,
	_direction,
	_positionType,
	_position,
	_positionadvanced,
	_reservedone,
	_reservedtwo
];
if !(_oldData isEqualTo _newData) then {
	_newData call DB_fnc_updateObject;
};
_building setVariable ["DBVar_AllData",_newData];



