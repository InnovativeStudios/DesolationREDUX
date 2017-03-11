class CfgPatches
{
	class Repair {};
};

class Plugins
{
	class Repair
	{
		name = "Repair System";
		desc = "Allows players to repair and remove/replace parts of objects";
		tag = "REP";
	};
};

class CfgPluginKeybinds {
	class Toggle3DAction 
	{
		displayName = "Toggle 3D Actions";
		tooltip = "Toggle 3D actions to be able to easily use any actions in 3D";
		tag = "REP";
		variable = "Toggle3DAction";
		defaultKeys[] = {{0x0F,0}};
		code = "call REP_fnc_toggleActions;";
	};
	class do3DAction
	{
		displayName = "Use 3D Action";
		tooltip = "Allows you to use the highlighted action";
		tag = "REP";
		variable = "do3DAction";
		defaultKeys[] = {{0x39,0}};
		code = "[] spawn REP_fnc_do3DAction; REP_var_3DActionsEnabled";
	};
};

class CfgFunctions
{
	class REP
	{
		// client functions
		class Client 
		{
			file = "Repair\Client";
			class toggleActions {};
			isclient = 1;
		};
		class Client_Actions {
			file = "Repair\Client\Actions";
			isclient = 1;
			class removePart {};
			class repairPart {};
			class refuelVehicle {};
			class doAction {};
			class doActionTarget {};
		};
		class Client_System {
			file = "Repair\Client\System";
			isclient = 1;
			class draw3DActions {};
			class get3DPartName {};
			class calculate3DActions {};
			class do3DAction {};
		};
		// server functions
		class Server {
			file = "Repair\Server";
			isserver = 1;
		};
		class Server_Actions {
			file = "Repair\Server\Actions";
			isserver = 1;
			class removePartReq {};
			class repairPartReq {};
			class refuelReq {};
		};
	};
};

class Cfg3DActions {
	class Vehicles {
		condition = "_cursor in vehicles"; //condition  on what cursor object to use these actions for
		
		renderType = 0; //0 = hitpoints / 1 = model center
		
		class Actions {
			
			// all possible actions for all icons
			
			class RepairWheel {
				condition = "_selection find 'wheel' != -1";
				text = "Repair Wheel";
				
			};
			class RepairGlass {
				condition = "_selection find 'glass' != -1";
				text = "Repair Glass";
				
			};
			class RepairEngine {
				condition = "_selection find 'engine' != -1";
				text = "Repair Engine";
				
			};
			class RepairFueltank {
				condition = "_selection find 'fuel' != -1";
				text = "Repair Fuel Tank";
				
			};
			class RepairBody {
				condition = "_selection find 'body' != -1";
				text = "Repair Body";
				
			};
		
		};
	};
	class Liftables {
		condition = "[_cursor] call OM_fnc_canLift";
		
		renderType = 1;
	
		class Actions {
			
			class Lift {
				condition = true;
				text = "Lift";
			};
		
		};
	};	
	class Players {
		condition = "_cursor in allPlayers";
		
		renderType = 1;
		
		class Actions {
			
			class Bandage {
				condition = "true"; //todo cursor is bleeding check
				text = "Bandage";
				
			};
			class Bloodbag {
				condition = "true"; //todo blood value check
				text = "Give Blood";
			};
			class Splint {
				condition = "true"; //todo broken leg check
				text = "Apply Splint";
			};
		};
	};
};

