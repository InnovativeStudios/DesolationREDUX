class CfgPatches
{
	class GlitchPunisher {};
};

class Plugins
{
	class GlitchPunisher
	{
		name = "GlitchPunisher";
		desc = "Functions for handling glitch detection";
		tag = "GLP";
	};
};
class CfgPluginEvents {
	class PlayerEvents {
		overrides = 0;
		class Events {
			class GLP_GetOutMan {
				type = "GetOutMan";
				function = "GLP_fnc_GetOutMan";
			};
		};
	};
};
		
class CfgFunctions
{
	class GLP
	{
		class Client 
		{
			file = "GlitchPunisher\Client";
			isclient = 1;
			class checkGlitch {};
			class initClient {};
		};
		class Client_PluginEvents 
		{
			file = "GlitchPunisher\Client\PluginEvents";
			isclient = 1;
			class GetOutMan {};
		};
	};
};