params["_door"];
_owner = _door getVariable ["oOWNER",""];
if(_owner == "") exitWith {false};

_me = player getVariable ["pUUID",""];
(_me == _owner);