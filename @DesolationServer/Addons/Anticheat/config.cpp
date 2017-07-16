class CfgPatches
{
	class Anticheat {units[] = {};};
};

class Plugins
{
	class Anticheat
	{
		name = "Lystic Anticheat";
		desc = "Anticheat & Admin Tool for Redux By Lystic";
		tag = "LYS";
	};
};

class CfgFunctions
{
	class LYS
	{
		class Server 
		{
			file = "Anticheat";
			isserver = 1;
			class initServer {};
		};
	};
};