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
		code = "call REP_fnc_doSelectedAction";
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
			isclient = 1;
			class initClient {};
		};
		class Client_Actions_Vehicles {
			file = "Repair\Client\Actions\Vehicles";
			isclient = 1;
			class repairBody {};
			class repairEngine {};
			class repairFueltank {};
			class repairGlass {};
			class repairWheel {};
		};
		class Client_Actions_Players {
			file = "Repair\Client\Actions\Players";
			isclient = 1;
		};
		class Client_Keybinds {
			file = "Repair\Client\Actions\Lift";
			isclient = 1;
			class toggleActions {};
			class doSelectedAction {};
		}
		class Client_Actions_Lift {
			file = "Repair\Client\Actions\Lift";
			isclient = 1;
			class liftObject {};
		};
		class Client_System {
			file = "Repair\Client\System";
			isclient = 1;
			class isPosTarget {};
			class get3DPartName {};
			class calculationThread {};
			class display2DMenu {};
		};
		// server functions
		class Server {
			file = "Repair\Server";
			isserver = 1;
			class initServer {};
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
			
			//todo add more for helicopters and planes
			class RepairWheel {
				condition = "_selection find 'wheel' != -1";
				text = "Repair Wheel";
				
				action = "[_cursor,_index] call REP_fnc_repairWheel;";
				
			};
			class RepairGlass {
				condition = "_selection find 'glass' != -1";
				text = "Repair Glass";
				
				action = "[_cursor,_index] call REP_fnc_repairGlass;";
			};
			class RepairEngine {
				condition = "_selection find 'engine' != -1";
				text = "Repair Engine";
				
				action = "[_cursor,_index] call REP_fnc_repairEngine;";
			};
			class RepairFueltank {
				condition = "_selection find 'fuel' != -1";
				text = "Repair Fuel Tank";
				
				action = "[_cursor,_index] call REP_fnc_repairFueltank;";
			};
			class RepairBody {
				condition = "_selection find 'body' != -1";
				text = "Repair Body";
				
				action = "[_cursor,_index] call REP_fnc_repairBody;";
			};
		
		};
	};
	class Liftables {
		condition = "!(isNil 'OM_fnc_canLift') && ([_cursor] call OM_fnc_canLift)"; //nil check added incase ObjectMovement was removed
		
		renderType = 1;
	
		class Actions {
			
			class Lift {
				condition = "true";
				text = "Lift";
				
				action = "[_cursor] call REP_fnc_liftObject"; // our custom lift function will redirect the object to the correct lift system (building / item)
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
				
				action = "[_cursor,_index] call REP_fnc_applyBandage;";
			};
			class Bloodbag {
				condition = "true"; //todo blood value check
				text = "Give Blood";
				
				action = "[_cursor,_index] call REP_fnc_applyBloodbag;";
			};
			class Splint {
				condition = "true"; //todo broken leg check
				text = "Apply Splint";
				
				action = "[_cursor,_index] call REP_fnc_applySplint;";
			};
		};
	};
};

class Cfg3DIcons {
	class action {
		name = "Actions";
		icon = "\a3\ui_f\data\igui\cfg\weaponcursors\gl_gs.paa";
	};
	class missiles {
		name = "Missiles";
		icon = "\dsr_ui\Assets\actions\Missiles.paa";
	};
	class glass {
		name = "Glass";
		icon = "\dsr_ui\Assets\actions\glass.paa";
	};
	class wheel {
		name = "Wheel";
		icon = "\dsr_ui\Assets\actions\wheel.paa";
	};
	class engine {
		name = "Engine";
		icon = "\dsr_ui\Assets\actions\engine.paa";
	};
	class fuel {
		name = "Fuel";
		icon = "\dsr_ui\Assets\actions\fuel.paa";
	};
	class body {
		name = "Body";
		icon = "\dsr_ui\Assets\actions\body.paa";
	};
	class avionics {
		name = "Avionics";
		icon = "\dsr_ui\Assets\actions\avionics.paa";
	};
	class gear {
		name = "Gear";
		icon = "\dsr_ui\Assets\actions\gear.paa";
	};
	class winch {
		name = "Winch";
		icon = "\dsr_ui\Assets\actions\winch.paa";
	};
	class hull {
		name = "Hull";
		icon = "\dsr_ui\Assets\actions\hull.paa";
	};
	class turret {
		name = "Turret";
		icon = "\dsr_ui\Assets\actions\turret.paa";
	};
	class gun {
		name = "Gun";
		icon = "\dsr_ui\Assets\actions\gun.paa";
	};
	class transmission {
		name = "Transmission";
		icon = "\dsr_ui\Assets\actions\transmission.paa";
	};
	class stabilizer {
		name = "Stabilizer";
		icon = "\dsr_ui\Assets\actions\stabilizer.paa";
	};
	class rotor {
		name = "Rotor";
		icon = "\dsr_ui\Assets\actions\stabilizer.paa";
	};
	class track {
		name = "Track";
		icon = "\dsr_ui\Assets\actions\track.paa";
	};
	class tail {
		name = "Tail";
		icon = "\dsr_ui\Assets\actions\tail.paa";
	};
	class port {
		name = "Port";
		icon = "\dsr_ui\Assets\actions\port.paa";
	};
	class blade {
		name = "Blade";
		icon = "\dsr_ui\Assets\actions\blade.paa";
	};
	class starter {
		name = "Starter";
		icon = "\dsr_ui\Assets\actions\starter.paa";
	};
	class door {
		name = "Door";
		icon = "\dsr_ui\Assets\actions\door.paa";
	};
	class elevator {
		name = "Elevator";
		icon = "\dsr_ui\Assets\actions\elevator.paa";
	};
	class light {
		name = "Light";
		icon = "\dsr_ui\Assets\actions\light.paa";
	};
	class flap {
		name = "Flap";
		icon = "\dsr_ui\Assets\actions\flap.paa";
	};
	class hatch {
		name = "Hatch";
		icon = "\dsr_ui\Assets\actions\hatch.paa";
	};
	class ramp {
		name = "Ramp";
		icon = "\dsr_ui\Assets\actions\ramp.paa";
	};
};

