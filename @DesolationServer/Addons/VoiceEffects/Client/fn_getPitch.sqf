private["_value"];
_value = player getVariable ["SVAR_VoiceEffects_Pitch",-1];
if(_value < 0) then {
	_value = 0.85 + random(0.6);
	player setVariable ["SVAR_VoiceEffects_Pitch",_value,true];
};
_value