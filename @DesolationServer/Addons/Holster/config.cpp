class CfgPatches
{
	class Holster {};
};

class Plugins
{
	class Holster
	{
		name = "Holster";
		desc = "Allows players to holster their weapons";
		tag = "HOL";
	};
};

class CfgPluginKeybinds {
	class Holster {
		displayName = "Holster Weapon";
		tooltip = "Moves your current weapon onto your back";
		tag = "HOL";
		variable = "Holster";
		defaultKeys[] = {{0x05,0}};
		code = "call HOL_fnc_onToggled;";
	};
};

class CfgFunctions
{
	class HOL
	{
		class Client 
		{
			file = "Holster\Client";
			isclient = 1;
			class onToggled {};
		};
	};
};