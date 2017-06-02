class CfgPatches
{
	class DSQuests {};
};

class Plugins
{
	class DSQuests
	{
		name = "Quest System for Redux";
		desc = "Adds basic quests that tie into the player progression system.";
		tag = "DSQ";
	};
};

class CfgFunctions
{
	class DSQ
	{
		class Client 
		{
			file = "DSQuests\Client";
			isclient = 1;
			
		};
	};
};