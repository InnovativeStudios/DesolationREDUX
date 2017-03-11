params["_item","_object","_player"];


_posASL = AGLtoASL (_player modelToWorld [0,3,0]);

_obj = _object createVehicle [0,0,0];
_obj setPosASL _posASL;

// register building in building DB
["spawnBuilding","",[_obj]] call DS_fnc_dbRequest;
_oUUID = _obj getVariable ["oUUID",""];

DS_var_Buildings pushback _obj;
DS_var_BuildingUUIDS pushback _oUUID;


[_obj,_item] remoteExec ["DS_fnc_onPlacableLift",_player];