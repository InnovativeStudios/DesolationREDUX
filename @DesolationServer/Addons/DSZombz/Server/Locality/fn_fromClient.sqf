params["_client","_zed"];

if(local _zed) exitWith {diag_log "DSZombz Error 1 > CLIENT TRANSFERING ZOMBIE THAT IS ALREADY LOCAL"}; //Already transfered.

_zed setOwner clientOwner; //trasnfer that zombie back to me