class CfgPatches
{
	class DSAchievements {};
};

class Plugins
{
	class DSAchievements
	{
		name = "Achievement System for Redux";
		desc = "Adds basic achievements that tie into the player progression system.";
		tag = "DSA";
	};
};

class CfgFunctions
{
	class DSA
	{
		class Client_GUI 
		{
			file = "DSAchievements\Client\GUI";
			isclient = 1;
			class showNotification {};
		};
		class Client {
			file = "DSAchievements\Client";
			isclient = 1;
			class initClient {};
		};
		class Client_Achievements
		{
			file = "DSAchievements\Client\Achievements";
			isclient = 1;
			class checkAchievements {};
			class onAchievementCompleted {};
		};
		class Client_Callbacks
		{
			file = "DSAchievements\Client\Callbacks";
			isclient = 1;
			class handleCallback {};
			class registerCallbackType {};
		};
		class Client_Tasks
		{
			file = "DSAchievements\Client\Tasks";
			isclient = 1;
			class IncrementTask {};
			class playerKilled {};
			class treeChopped {};
			class zombieKilled {};
		};
		
		class Server {
			file = "DSAchievements\Server";
			isserver = 1;
			class initServer {};
		};
	};
};

//all tasks. this can be used as a base class 
class All_Tasks {
	player_kills = 0;
	zombie_kills = 0;
	trees_chopped = 0;
};

// server sided config
class CfgAchievements {
	class TreeChop1 {
		title = "Chop 10 trees";
		description = "I chopped a tree!";
		points = 10;
		
		class Tasks : All_Tasks {
			trees_chopped = 10;
		};
	};
	class TreeChop2 {
		title = "Chop 50 trees";
		description = "Lumberjack!";
		points = 10;
		
		class Tasks : All_Tasks {
			trees_chopped = 50;
		};
	};
	class TreeChop3 {
		title = "Chop 100 trees";
		description = "Soo many trees.";
		points = 10;
		
		class Tasks : All_Tasks {
			trees_chopped = 100;
		};
	};
	class TreeChop4 {
		title = "Chop 500 trees";
		description = "Master of the forest!";
		points = 50;
		
		class Tasks : All_Tasks {
			trees_chopped = 500;
		};
	};
	class TreeChop5 {
		title = "Chop 1000 trees";
		description = "Fern Gulley asshole.";
		points = 100;
		
		class Tasks : All_Tasks {
			trees_chopped = 1000;
		};
	};
};
