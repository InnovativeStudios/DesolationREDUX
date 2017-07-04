#include "constants.hpp"

class CfgPatches
{
	class DesoDB {units[] = {};};
	
};

class Plugins
{
	class DesoDB
	{
		name = "DesoDB";
		desc = "Desolation Redux's custom Database connection plugin";
		tag = "DB";
	};
};

class CfgFunctions
{
	class DB
	{
		class Core 
		{
			file = "DesoDB";
			isserver = 1;
			class initServer {};
		};
		class Database 
		{
			file = "DesoDB\Database";
			isserver = 1;
			class sendRequest {};
			class buildDLLRequest {};
			class buildDBRequest {};
			class buildIORequest {};
			class buildRequest {};
		};
		class Functions 
		{
			file = "DesoDB\Functions";
			isserver = 1;
			class getWorldUUID {};
			class getPoolSize {};
			class hpFloatArray {};
		};
		class Serialization
		{
			file = "DesoDB\Serialization";
			isserver = 1;
			
			class spawnObject {};
			class updateObject {};
		};
		class Serialization_Players
		{
			file = "DesoDB\Serialization\Players";
			isserver = 1;
			
			class createPlayer {};
			class killPlayer {};
			class loadPlayer {};
			class savePlayer {};
		};
		class Serialization_Objects
		{
			file = "DesoDB\Serialization\Objects";
			isserver = 1;
			
			
			class dumpObjects {};
			class killVehicle {};
			class spawnBuilding {};
			class spawnVehicle {};
			class updateBuilding {};
			class updateVehicle {};
			
		};
	};
};