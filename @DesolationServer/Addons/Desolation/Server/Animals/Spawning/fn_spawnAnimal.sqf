params["_animalHolder","_owner"];

_animalIndex = _animalHolder getVariable ["animalIndex",-1];
if((_animalIndex < 0) || (_animalIndex >= count(DS_var_spawnData))) exitWith {};
_animalHolder setVariable ["isSpawned",true];

_animalData = DS_var_spawnData select _animalIndex;

if(count(_animalData) == 0) exitWith {diag_log "ANIMALS > Error: Attempted to spawn dead animal";}; 

_class = _animalData select 0;
_pos = _animalData select 1;
_agroType = _animalData select 2;
_locationpos = _animalData select 3;
_roamDist = _animalData select 4;


_group = createGroup amb;
if(isNull _group) exitWith {
	"ANIMALS > FATAL ERROR: NOT ENOUGH GROUPS FOR ANIMALS";
};

_animal = _group createUnit [_class, _pos, [], 0, "NONE"];
_animal enableFatigue false;


_animal addMPEventHandler ["MPKilled",{
	params["_animal","_killer"];
	if(local _killer) then {
		if(!isNil "DS_fnc_addPoints") then {
			[1] call DS_fnc_addPoints;
		};
	};
	if(isServer) then {
		_animalIndex = _animal getVariable ["animalIndex",-1];
		[_animal,_animalIndex] spawn DS_fnc_killAnimal;
	};
}];

_animal setVariable ["animalIndex",_animalIndex]; //todo: cehck to see if this is used by clients
_animal setVariable ["animalInformation",[_agroType,_locationpos,_roamDist],true];
DS_var_spawnedAnimals pushback _animal;

[_owner,_animal] call DS_fnc_toClient;
[_locationpos,_roamDist,group _animal] call DS_fnc_initRoaming;
