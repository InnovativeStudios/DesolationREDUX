params["_client","_zed"];

_cOwner = owner _client;

if(groupOwner (group _zed) == _cOwner) exitWith {diag_log "DSZombz Error 2 > TRANSFERING ZED TO CLIENT WHERE ITS ALREADY LOCAL"}; //Already transfered.

(group _zed) setGroupOwner _cOwner;