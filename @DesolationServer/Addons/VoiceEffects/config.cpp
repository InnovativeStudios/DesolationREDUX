class CfgPatches
{
	class VoiceEffects {};
};

class Plugins
{
	class VoiceEffects
	{
		name = "Voice Effects";
		desc = "Adds Keybinds for player voice audio effects";
		tag = "VE";
	};
};

class CfgPluginKeybinds {
	class Voice1 {
		displayName = "Voice: Sector Is Clear";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice1";
		defaultKeys[] = {{0x3B,0}};
		code = "call VE_fnc_Voice1;";
	};
	class Voice2 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice2";
		defaultKeys[] = {{0x3C,0}};
		code = "call VE_fnc_Voice2;";
	};
	class Voice3 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice3";
		defaultKeys[] = {{0x3D,0}};
		code = "call VE_fnc_Voice3;";
	};
	class Voice4 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice4";
		defaultKeys[] = {{0x3E,0}};
		code = "call VE_fnc_Voice4;";
	};
	class Voice5 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice5";
		defaultKeys[] = {{0x3F,0}};
		code = "call VE_fnc_Voice5;";
	};
	class Voice6 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice6";
		defaultKeys[] = {{0x40,0}};
		code = "call VE_fnc_Voice6;";
	};
	class Voice7 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice7";
		defaultKeys[] = {{0x41,0}};
		code = "call VE_fnc_Voice7;";
	};
	class Voice8 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice8";
		defaultKeys[] = {{0x42,0}};
		code = "call VE_fnc_Voice8;";
	};
	class Voice9 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice9";
		defaultKeys[] = {{0x43,0}};
		code = "call VE_fnc_Voice9;";
	};
	class Voice10 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice10";
		defaultKeys[] = {{0x44,0}};
		code = "call VE_fnc_Voice10;";
	};
	class Voice11 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice11";
		defaultKeys[] = {{0x57,0}};
		code = "call VE_fnc_Voice11;";
	};
	class Voice12 {
		displayName = "Voice: TODO";
		tooltip = "The player says 'Sector is clear!'";
		tag = "VE";
		variable = "Voice12";
		defaultKeys[] = {{0x58,0}};
		code = "call VE_fnc_Voice12;";
	};
};

class CfgFunctions
{
	class VE
	{
		class Client 
		{
			file = "VoiceEffects\Client";
			isclient = 1;
			class Voice1 {};
		};
	};
};