class CfgPatches
{
	class PluginManager
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Functions_F","A3_Data_F"};
		fileName = "PluginManager.pbo";
		author[]= {"Kegan"};
	};
};

class Plugins
{
	class PluginManager
	{
		name = "Plugin Manager";
		desc = "Master PBO for handling plugins";
		tag = "BASE";
	};
};

class CfgFunctions 
{
	init = "PluginManager\initFunctions.sqf";
	class BASE 
	{
		// PluginManager functions
		class Functions 
		{
			file = "PluginManager\Functions\core";
			class preInit 
			{
				preInit = 1;
			};			
			class compileCfg {};
			class setupEvents {};
			class initActions {};
			class initKeybinds {};
			class start 
			{
				preInit = 1;
			};
		};
		// Server functions
		class Server_Map
		{
			isserver = 1;
			file = "PluginManager\Map";
			class spawnMapEdits {};
		};
		class Server_Events 
		{
			isserver = 1;
			file = "PluginManager\Events";
			class initMissionEventsServer {};
			class broadcastEvents {};
		};
		// Client functions
		class Client_Events 
		{
			isclient = 1;
			file = "PluginManager\Events";
			class initMissionEventsClient {};
			class initPlayerEvents {};
		};
		class Client 
		{
			isclient = 1;
			file = "PluginManager\Client";
			class getCfgValue {};
			class randomAreaLocation {};
			class hasSuffix {};
			class addEventHandler {};
			class removeEventHandler {};
			class initEventHandlers {};
			class initKeybindUI {};
			class startActionManager {};
		};
		//function library for plugin makers to use, Documentation found inside functions/wiki
		class Lib
		{
			isclient = 1;
			isserver = 1;
			file = "PluginManager\Functions\lib";
			//inventory functions
			class getAllCargo {};
			class getAllCargoBase {};
			class getItemCargo {};
			class getMagCargo {};
			class getWepCargoBase {};
			class getUnitLoadout {};
			class setAllCargo {};
			class setAllCargoBase {};
			class setItemCargo {};
			class setItemCargoLocal {};
			class setMagCargo{};
			class setWepCargo {};
			class setWepCargoBase {};
			class setUnitLoadout {};
			class addWepAttachCargo {};
		};
	};
};
class CfgPluginMapEditsConfig 
{
	class dynamicObjects {};
};
class CfgPluginMapEdits {};	
class CfgPluginReplacements {};