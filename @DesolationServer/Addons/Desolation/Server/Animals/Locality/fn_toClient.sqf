params["_client","_animal"];

_cOwner = owner _client;

if(groupOwner (group _animal) == _cOwner) exitWith {diag_log "ANIMALS > ERROR: ANIMAL ALREADY LOCAL TO CLIENT fn_toClient.sqf"};

(group _animal) setGroupOwner _cOwner;