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
params["_data","_client"];
private["_charuuid","_charshareuuid","_persuuid","_objectuuid","_unit","_anim","_dir","_positiontype","_positionx","_positiony","_positionz","_classname","_hitpoints","_nonpersvars","_persvars","_textures","_invuniform","_invvest","_invbackpack","_uniform","_vest","_backpack","_headgear","_goggles","_primary","_secondary","_handgun","_toolsone","_toolsone","_currentWeapon","_loadout","_name","_damage"];

_uid = getPlayerUID _client;


_anim = _data deleteAt 0;
_dir = _data deleteAt 0;
_positiontype = _data deleteAt 0;
_positionx = _data deleteAt 0;
_positiony = _data deleteAt 0;
_positionz = _data deleteAt 0;
_charuuid = _data deleteAt 0;

_classname = _data deleteAt 0;
_hitpoints = _data deleteAt 0;
_nonpersvars = _data deleteAt 0;
_textures = _data deleteAt 0;
_loadout = _data deleteAt 0;
_currentWeapon = _data deleteAt 0;
_charshareuuid = _data deleteAt 0;

_persvars = _data deleteAt 0;
_persuuid = _data deleteAt 0;

_objectuuid = _data deleteAt 0;

_unit = (createGroup CIVILIAN) createUnit [_classname, [_positionx,_positiony,_positionz], [],0, "NONE"];
_unit allowDamage false;
_unit hideObjectGlobal true;

{
	_unit setVariable [_positionx select 0,_positionx select 1,true];
} forEach _nonpersvars;
{
	_unit setVariable [_positionx select 0,_positionx select 1,true];
} forEach _persvars;


_unit setVariable ["pUUID",_client getVariable "pUUID",true];
_unit setVariable ["cUUID",_charuuid];

_unit setDir _dir;
_unit setPosATL [_positionx,_positiony,_positionz]; 

[_unit,_anim] remoteExecCall ["switchMove",0];

{
	_name = _positionx;
	_damage = (_hitpoints select 2) select _forEachIndex;
	_unit setHitPointDamage [_name,_damage];
} forEach (_hitpoints select 0);

_unit addMPEventHandler ["MPKilled", DS_fnc_onPlayerKilled];
[_unit,_loadout,[]] call DS_fnc_setupLoadout;

{
	_unit setObjectTextureGlobal [_forEachIndex,_positionx];
} forEach _textures;

_unit hideObjectGlobal false;
_unit allowDamage true;

// Temp workaround for shotguns until config is fixed
_unit addEventHandler ["Fired",{
    params["_unit","_weapon","_muzzle","_mod","_ammo","_magazine","_projectile"];
    if(!isNull _projectile) then {
        if(_ammo == "12Guage_Buck" && _weapon == "dsr_sgun_m500") then {
            _velocity = velocity _projectile;
            
            _magnatude = vectorMagnitude _velocity;
            _velocityNormal = vectorNormalized  _velocity;
            
            _dir = acos(_velocityNormal select 1);
            
            
            for "_i" from 1 to 9 do {
            
                _dX = (_velocityNormal select 0) + (random(0.0871557*2)-0.0871557); 
                _dY = (_velocityNormal select 1) + (random(0.0871557*2)-0.0871557); 
                _dZ = (_velocityNormal select 2) + (random(0.0871557*2)-0.0871557); 
                
                
                _bVel = (vectorNormalized [_dX,_dY,_dZ]) vectorMultiply _magnatude;
                
                _bullet = "12Guage_Slug" createVehicle [0,0,1000];
                _bullet setShotParents [vehicle _unit,_unit];
                _bullet setVelocity _bVel;
                _bullet setposatl getposatl _projectile;
                
                
            };
            
            
        };
    };
}];


[_unit,_goggles] remoteExecCall ["DS_fnc_finishSpawn",_client];

waitUntil{getPlayerUID _unit == _uid && (tolower(goggles _unit) == toLower(_goggles))};
deleteVehicle _client;
