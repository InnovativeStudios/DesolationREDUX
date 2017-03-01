params["_zed"];

if(local (group _zed)) exitWith {diag_log "DSZombz Error 1 > CLIENT TRANSFERING ZOMBIE THAT IS ALREADY LOCAL"};

(group _zed) setGroupOwner clientOwner; 
_zed setOwner clientOwner; 