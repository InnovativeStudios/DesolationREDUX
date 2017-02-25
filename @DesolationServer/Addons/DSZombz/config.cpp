class CfgPatches
{
	class DSZombz {};
};

class Plugins
{
	class DSZombz
	{
		name = "DSZombz";
		desc = "Recoded SM_Zombz AI";
		tag = "DSZ";
	};
};

class CfgFunctions
{
	class DSZ
	{
		// CLIENT CODE
		class Client 
		{
			file = "DSZombz\Client";
			isclient = 1;
			class SOMETHING_HERE {};
		};
		// SERVER CODE
		class Server 
		{
			file = "DSZombz\Server";
			isserver = 1;
			class initServer {};
		};
		class Server_Locality
		{
			file = "DSZombz\Server\Locality";
			isserver = 1;
			class fromClient {};
			class toClient {};
		};
		class Server_Spawning
		{
			file = "DSZombz\Server\Spawning";
			isserver = 1;
			class spawnZombieFromCfg {};
			class readConfig {};
			class selectLocations {};
			class publish {};
		};
		
		// BOTH CODE
		class Both 
		{
			file = "DSZombz\Both";
			isclient = 1;
			class SOMETHING_HERE {};
		};
	};
};

class CfgZombies 
{
	class SM_Zombz_walker1 {
		AgroMode = "FULL"; //agro mode
	}; 
};