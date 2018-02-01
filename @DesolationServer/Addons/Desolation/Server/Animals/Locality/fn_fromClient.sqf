params["_animal"];

if(local (group _animal)) exitWith {diag_log "ANIMALS > ERROR: ANIMAL ALREADY LOCAL TO SERVER fn_fromClient.sqf"};

(group _animal) setGroupOwner clientOwner; 