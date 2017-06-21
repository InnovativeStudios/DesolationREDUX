_value = player getVariable ["SVAR_VoiceEffects_Pitch",-1];
if(_value < 0) then {
	_value = random(2);
	player setVariable ["SVAR_VoiceEffects_Pitch",_value,true];
};
_value