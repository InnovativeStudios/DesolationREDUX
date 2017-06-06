params["_pts"];
private["_value"];
_value = player getVariable ["PVAR_DS_Progression_Pts",0];
_value = _value + _pts;
player setVariable ["PVAR_DS_Progression_Pts",_value,true];