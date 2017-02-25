params["_client","_zed"];

_cOwner = owner _client;

if(owner _zed == _cOwner) exitWith {diag_log "DSZombz Error 2 > TRANSFERING ZED TO CLIENT WHERE ITS ALREADY LOCAL"}; //Already transfered.

_zed setOwner _cOwner; //trasnfer that zombie back to me