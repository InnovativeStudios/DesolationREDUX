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
			class initClient {};
		};
		class Client_Spawning
		{
			file = "DSZombz\Client\Spawning";
			isclient = 1;
			class simManager {};
		};
		// SERVER CODE
		class Server 
		{
			file = "DSZombz\Server";
			isserver = 1;
			class initServer {};
		};
		class Server_Network
		{
			file = "DSZombz\Server\Network";
			isserver = 1;
			class simUpdateRequest {};
		};
		class Server_Spawning
		{
			file = "DSZombz\Server\Spawning";
			isserver = 1;
			class spawnZombie {};
			class initRoaming {};
			class despawnZombie {};
		};
		class Server_Locality
		{
			file = "DSZombz\Server\Locality";
			isserver = 1;
			class fromClient {};
			class toClient {};
		};
		class Server_Init
		{
			file = "DSZombz\Server\Init";
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
			class getNearMen {};
			class isPlayerNear {};
		};
	};
};

class CfgZombies 
{
	class C_man_1 {
		AgroMode = "FULL"; //agro mode
	}; 
};