params["_client","_zed"];

if(local (group _zed)) exitWith {diag_log "DSZombz Error 1 > CLIENT TRANSFERING ZOMBIE THAT IS ALREADY LOCAL"}; //Already transfered.

(group _zed) setGroupOwner clientOwner; //trasnfer that zombie back to me