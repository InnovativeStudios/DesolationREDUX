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
		class Client_Sensing
		{
			file = "DSZombz\Client\Sensing";
			isclient = 1;
			class zombieCanSee {};
			class zombieCanSmell {};
		};
		class Client_Agroing
		{
			file = "DSZombz\Client\Agroing";
			isclient = 1;
			class agroCheck {};
			class agroZombie {};
			class deagroZombie {};
		};
		class Client_Actions
		{
			file = "DSZombz\Client\Actions";
			isclient = 1;
			class zombieAttack {};
		};
		// SERVER CODE
		class Server 
		{
			file = "DSZombz\Server";
			isserver = 1;
			class initServer {};
		};
		class Server_Events 
		{
			file = "DSZombz\Server\Events";
			isserver = 1;
			class killZombie {};
		};
		class Server_Spawning
		{
			file = "DSZombz\Server\Spawning";
			isserver = 1;
			class spawnZombie {};
			class spawnManager {};
			class despawnZombie {};
		};
		class Server_Locality
		{
			file = "DSZombz\Server\Locality";
			isserver = 1;
			class fromClient {};
			class toClient {};
		};
		class Server_Initialization
		{
			file = "DSZombz\Server\Initialization";
			isserver = 1;
			class readConfig {};
			class selectLocations {};
		};
		
		// BOTH CODE
		class Both 
		{
			file = "DSZombz\Both";
			isclient = 1;
			class getNearMen {};
			class getNearPlayers {};
			class isPlayerNear {};
			class initRoaming {};
		};
	};
};

class CfgZombies 
{
	class C_man_1 {
		AgroMode = "PASSIVE"; //agro mode (AGRESSIVE / NORMAL / PASSIVE)
	}; 
};