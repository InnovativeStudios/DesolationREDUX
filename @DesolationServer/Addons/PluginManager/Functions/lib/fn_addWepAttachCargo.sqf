params ["_inventory","_weaponInfo"];
player globalchat "test1";

_weaponClassRaw = _weaponInfo select 0;
_muzzle = _weaponInfo select 1;
_side = _weaponInfo select 2;
_optics = _weaponInfo select 3;
_mag = _weaponInfo select 4;
_under = _weaponInfo select 5;
_attachments=[_muzzle,_side,_optics,_mag,_under];

if ((count _weaponInfo)== 7) then {
player globalchat "test2";
_weaponClassRaw = _weaponInfo select 0;
_muzzle = _weaponInfo select 1;
_side = _weaponInfo select 2;
_optics = _weaponInfo select 3;
_mag = _weaponInfo select 4;
_mag2 = _weaponInfo select 5;
_under = _weaponInfo select 6;
_attachments=[_muzzle,_side,_optics,_mag,_mag2,_under];
};



_weaponClass = [_weaponClassRaw] call BIS_fnc_baseWeapon; 
_dummyGroup = createGroup civilian;
"C_Soldier_vr_f" createUnit [[0,0,0],_dummyGroup];
_dummyUnit = (units _dummyGroup) select 0;
player globalchat str(_dummyUnit);
_dummyUnit disableAi "all";
_dummyUnit hideObject true;

_dummyUnit addWeapon _weaponClass;
_dummyUnit setammo [_weaponClass,0];
{
_attachment = _x;
player globalchat str(_attachments);
ScopeName "AttachmentLoop1";
switch (_attachment) do
	{
		case "":{breakto "AttachmentLoop1";};
		case []:{breakto "AttachmentLoop1";};
		default {_dummyUnit addWeaponItem [_weaponClass,_attachment];};
	};
}foreach _attachments;

player globalchat str(_weaponClass);
player globalchat "test5";
[_dummyUnit,_inventory,_weaponClass,_dummyGroup] spawn 
{
params ["_dummyUnit","_inventory","_weaponClass","_dummyGroup"];
_dummyUnit action ["DropWeapon",_inventory,_weaponClass];
player globalchat "test6";
sleep 0.9;
deleteVehicle _dummyUnit;
deleteGroup _dummyGroup;
};
