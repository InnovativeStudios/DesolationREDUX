
params["_object_uuid","_className","_priority","_visible","_accesscode","_locked","_player_uuid","_hitpoints","_damage","_fuel","_fuelcargo","_repaircargo","_items","_magazinesturrent","_variables","_animation_sources","_textures","_direction","_positionType","_position","_positionadvanced","_reservedone","_reservedtwo"];


_request = [PROTOCOL_DBCALL_FUNCTION_QUIET_CREATE_OBJECT,[
	PROTOCOL_DBCALL_ARGUMENT_OBJECTUUID,_object_uuid,
	PROTOCOL_DBCALL_ARGUMENT_CLASSNAME,_className,
	PROTOCOL_DBCALL_ARGUMENT_PRIORITY,_priority,
	PROTOCOL_DBCALL_ARGUMENT_VISIBLE,_visible,
	PROTOCOL_DBCALL_ARGUMENT_ACCESSCODE, _accesscode,
	PROTOCOL_DBCALL_ARGUMENT_LOCKED,_locked,
	PROTOCOL_DBCALL_ARGUMENT_PLAYER_UUID,_player_uuid,
	PROTOCOL_DBCALL_ARGUMENT_HITPOINTS,_hitpoints,
	PROTOCOL_DBCALL_ARGUMENT_DAMAGE,_damage,
	PROTOCOL_DBCALL_ARGUMENT_FUEL,_fuel,
	PROTOCOL_DBCALL_ARGUMENT_FUELCARGO,_fuelcargo,
	PROTOCOL_DBCALL_ARGUMENT_REPAIRCARGO,_repaircargo,
	PROTOCOL_DBCALL_ARGUMENT_ITEMS,_items,
	PROTOCOL_DBCALL_ARGUMENT_MAGAZINESTURRET, _magazinesturrent,
	PROTOCOL_DBCALL_ARGUMENT_VARIABLES, _variables,
	PROTOCOL_DBCALL_ARGUMENT_ANIMATIONSTATE, _animation_sources,
	PROTOCOL_DBCALL_ARGUMENT_TEXTURES, _textures,
	PROTOCOL_DBCALL_ARGUMENT_DIRECTION, _direction,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONTYPE, _positionType,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONX, _position select 0,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONY, _position select 1,
	PROTOCOL_DBCALL_ARGUMENT_POSITIONZ, _position select 2,
				PROTOCOL_DBCALL_ARGUMENT_POSITIONADVANCED,_positionadvanced,
				PROTOCOL_DBCALL_ARGUMENT_RESERVEDONE, _reservedone,
				PROTOCOL_DBCALL_ARGUMENT_RESERVEDTWO, _reservedtwo
]];
[_request] call DB_fnc_sendRequest;