params["_classname","_newItem",["_tool",""]];

if((_tool != "") && (({_x == _tool} count(magazines player)) == 0)) exitWith {
	systemchat ("Oh No! You need: " + _tool)
};

_failure = {
	private["_type"];
	_type = _this select 0;
	if(_type != "Player Moved") then {
		systemchat _type;
	};
};
_success = {
	systemchat "Crafted";
};

[_classname,true,_success,_failure,_newItem] call DS_fnc_useItem;