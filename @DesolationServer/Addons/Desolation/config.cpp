class CfgPatches
{
	class Desolation {units[] = {};};
};
class Plugins
{
	class Desolation
	{
		name = "Desolation Redux";
		desc = "ArmA 3 Zombie Survival Mod";
		tag = "DS";
	};
};


class CfgPluginActions {
	class Padlocks {
		text = "Unlock";
		Condition = "([_cursor] call DS_fnc_isUnlockable) || ([_cursor] call DS_fnc_isBuildingOwner)";
		
		class Actions {
			class Unlock {
				text = "Unlock";
				condition = "(_cursor getVariable ['bis_disabled_Door_1',1]) != 0";
				action = "createDialog 'DS_Padlock';";
				
			};
			class ChangeLock {
				text = "Reset lock";
				condition = "[_cursor] call DS_fnc_isBuildingOwner";
				action = "createDialog 'DS_Padlock'; call DS_fnc_initLockReset;";
			};
		};
	};
};

class CfgPluginEvents {
	class PlayerEvents {
		overrides = 1;
		class Events {
			class DS_InvTake {
				type = "Take";
				function = "DS_fnc_InvTake";
			};
			class DS_InvPut {
				type = "Put";
				function = "DS_fnc_InvPut";
			};
			class DS_AnimChanged {
				type = "AnimChanged";
				function = "DS_fnc_AnimChanged";
			};
			class DS_InventoryClosed {
				type = "InventoryClosed";
				function = "DS_fnc_InventoryClosed";
			};
			class DS_InventoryOpened {
				type = "InventoryOpened";
				function = "DS_fnc_InventoryOpened";
			};
			class DS_HandleDamage {
				type = "HandleDamage";
				function = "DS_fnc_HandleDamage";
			};
			class DS_Killed {
				type = "Killed";
				function = "DS_fnc_Killed";
			};
			class DS_FiredNear {
				type = "FiredNear";
				function = "DS_fnc_FiredNear";
			};
		};
	};
	class MissionEventsServer {
		overrides = 0;
		class Events {
			
		};
	};
	class MissionEventsClient {
		overrides = 1;
		class Events {
			class DS_Draw3D {
				type = "Draw3D";
				function = "DS_fnc_Draw3D";
			};
		};
	};
};

class CfgPluginKeybinds 
{
	class OpenJournalIndex 
	{
		displayName = "Open Building Journal";
		tooltip = "Open the journal containing buildables";
		tag = "DS";
		variable = "OpenBuildingJournal";
		defaultKeys[] = {{0x24,0}};
		code = "call DS_fnc_openJournal;";
	};
	class ToggleLight 
	{
		displayName = "Toggle Light";
		tooltip = "Turn camping light in hands on/off";
		tag = "DS";
		variable = "ToggleLight";
		defaultKeys[] = {{0x26,0}};
		code = "call DS_fnc_toggleLight;";
	};
};

class CfgFunctions
{
	class DS
	{
		class Client_Electric_Batteries {
			file = "Desolation\Client\Electric\Batteries";
			isclient = 1;
			class isBatteryInUse {};
			class usePowerCell {};
		};
		class Client_Electric_NVGoggles {
			file = "Desolation\Client\Electric\NVGoggles";
			isclient = 1;
			class initNVGs {};
			class canPowerNVG {};
		};
		class Client_Hands {
			file = "Desolation\Client\Hands";
			isclient = 1;
			class initHoldables {};
			class toggleLight {};
			class takeIntoHand {};
		};
		class Client_Progression {
			file = "Desolation\Client\Progression";
			isclient = 1;
			class addPoints {};
		};
		class Client_PluginEvents {
			file = "Desolation\Client\PluginEvents";
			isclient = 1;
			class Draw3D {};
			class InvTake {};
			class InvPut {};
			class AnimChanged {};
			class InventoryClosed {};
			class InventoryOpened {};
			class Killed {};
			class HandleDamage {};
			class FiredNear {};
		};
		class Client_Weapon {
			file = "Desolation\Client\Weapon";
			isclient = 1;
			class swingEvent {};
			class registerMeleeAction {};
		};
		class Client_Weapon_Events {
			file = "Desolation\Client\Weapon\Events";
			isclient = 1;
			class onSwing {};
		};
		class Client_Weapon_Network {
			file = "Desolation\Client\Weapon\Network";
			isclient = 1;
			class onMeleeHit {};
		};
		class Client_Actions_Vehicle {
			file = "Desolation\Client\Actions\Repair";
			isclient = 1;
			class removePart {};
			class repairPart {};
			class refuelVehicle {};
		};
		class Client_Crafting {
			file = "Desolation\Client\Crafting";
			isclient = 1;
			class onCraftClick {};
		};
		class Client_Building_Events {
			file = "Desolation\Client\Building\Events";
			isclient = 1;
			class onBuildClick {};
			class onBuildableLift {};
			class onPlacableLift {};
			class onCrateFilled {};
		};
		class Client_Building_PreviewHandling {
			file = "Desolation\Client\Building\PreviewHandling";
			isclient = 1;
			class liftBuildable {};
			class registerDropped {};
		};
		class Client_Building {
			file = "Desolation\Client\Building";
			isclient = 1;
			class initBuilding {};
			class registerOwner {};
		};
		class Client_Building_Locking {
			file = "Desolation\Client\Building\Locking";
			isclient = 1;
			class initLockReset {};
			class lockReset {};
			class unlock {};
		};
		class Client_Building_Locking_Checks {
			file = "Desolation\Client\Building\Locking\Checks";
			isclient = 1;
			class isBuildingOwner {};
			class isUnlockable {};
		};
		class Client_Spawning {
			file = "Desolation\Client\Spawning";
			isclient = 1;
			class findSpawnPosition {};
			class onRegionSelected {};
			class freshSpawn {};
			class finishSpawn {};
			class showRegionNotification {};
		};
		class Client_Events {
			file = "Desolation\Client\Events";
			isclient = 1;
			class registerPlayer {};
			class registerNewPlayer {};
		};
		class Client_Functions {
			file = "Desolation\Client\Functions";
			isclient = 1;
			class infoText {};
			class notWhitelisted {};
			class crashSmoke {};
			class receiveTransmition {};
			class calcGrayscale {};
			class getCfgValue {};
			class shuffleArray {};
			class handleCallback {};
			class genRandMapPos {};
		};
		class Client_Actions_System {
			file = "Desolation\Client\Actions\System";
			isclient = 1;
			class toggleActions {};
			class draw3DActions {};
			class get3DPartName {};
			class calculate3DActions {};
			class do3DAction {};
		};
		class Client_Actions_Items {
			file = "Desolation\Client\Actions\Items";
			isclient = 1;
			class doAction {};
			class convertAssign {};
			class convertItem {};
			class doActionTarget {};
			class combineMags {};
			class useItem {};
			class useItemTarget {};
			class drink {};
			class eat {};
			class fillblood {};
			class fillhcarbon {};
			class fillwater {};
			class lightfire {};
			class useantibiotic {};
			class usebandage {};
			class useblood {};
			class usedefib {};
			class usedisinfectant {};
			class usehandwarmer {};
			class usepainkillers {};
			class usevitamins {};
			class usewpt {};
			class usesplint {};
			class useCure {};
			class useImmune {};
			class useZiptie {};
			class openZiptie {};
		};
		class Client_Interface {
			file = "Desolation\Client\Interface";
			isclient = 1;
			class onEscape {};
			class initHud {};
			class openJournal {};
		};
		class Client {
			file = "Desolation\Client";
			isclient = 1;
			class initClient {};
		};
		class Client_Status {
			file = "Desolation\Client\Status";
			isclient = 1;
			class initHealthSys {};
			class onBleedTick {};
			class onBloodReceive {};
			class onDrink {};
			class onEat {};
			class onEffectTick {};
			class onInfectionTick {};
			class onHungerTick {};
			class onThirstTick {};
			class onUpdateTick {};
			class onTick {};
		};
		class Client_Medical {
			file = "Desolation\Client\Medical";
			isclient = 1;
			class knockOut {};
			class stopBleeding {};
		};
		class Client_Medical_Bleeding {
			file = "Desolation\Client\Medical\Bleeding";
			isclient = 1;
			class createBleedSource {};
			class initBleedingSystem {};
			class onHitPartReceived {};
			class removeAllBleedSources {};
			class updateBleedSource {};
		};
		class Client_Inventory {
			file = "Desolation\Client\Inventory";
			isclient = 1;
			class closeButtons {};
			class saveData {};
			class initInvHandler {};
			class itemClick {};
			class setupInvEvents {};
		};
		class Server_Actions_Vehicle {
			file = "Desolation\Server\actions\repair";
			isserver = 1;
			class removePartReq {};
			class repairPartReq {};
			class refuelReq {};
		};
		class Server_Database {
			file = "Desolation\Server\Database";
			isserver = 1;
			class dbOnSpawnResponse {};
		};
		class Server_Airdrop {
			file = "Desolation\Server\Airdrop";
			isserver = 1;
			class addCrateItems {};
			class DoDrop {};
			class initAirdrops {};
			class spawnCrate {};
			class genCrateItems {};
		};
		class Server_Events {
			file = "Desolation\Server\Events";
			isserver = 1;
			class onPlayerKilled {};
			class handleDisconnect {};
			class playerDisconnected {};
		};
		class Server_Players {
			file = "Desolation\Server\Players";
			isserver = 1;
			class requestLoadSpawn {};
			class requestFreshSpawn {};
			class requestSpawn {};
			class requestSave {};
			class setupLoadout {};
		};
		class Server_Loot {
			file = "Desolation\Server\Loot";
			isserver = 1;
			class lootManager {};
			class spawnLoot {};
			class setLoot {};
			class getLoot {};
			class despawnLoot {};
		};
		class Server_Audio {
			file = "Desolation\Server\Audio";
			isserver = 1;
			class playOverRadio {};
		};
		class Server_Crashes {
			file = "Desolation\Server\Crashes";
			isserver = 1;
			class spawnCrashes {};
			class spawnCrashLoot {};
			class initHeliCrashes {};
			class heliCrashAnim {};
		};
		class Server_Vehicles {
			file = "Desolation\Server\Objects";
			isserver = 1;
			class spawnObjects {};
			class simManager {};
		};
		class Server_Crafting {
			file = "Desolation\Server\Crafting";
			isserver = 1;
			class initCraftingSys {};
		};
		class Server_Building_Events {
			file = "Desolation\Server\Building\Events";
			isserver = 1;
			class requestBuild {};
			class requestItemPlace {};
			class finishBuild {};
		};
		class Server_Building_PreviewHandling {
			file = "Desolation\Server\Building\PreviewHandling";
			isserver = 1;
			class buildableDropped {};
			class buildableLifted {};
		};
		class Server_Building {
			file = "Desolation\Server\Building";
			isserver = 1;
			class requestOwned {};
			class initBuildingSys {};
		};
		class Server_Locking {
			file = "Desolation\Server\Locking";
			isserver = 1;
			class checkServerLock {};
			class initLock {};
		};
		class Server {
			file = "Desolation\Server";
			isserver = 1;
			class initServer {};
		};
	};
};
class CfgHeliCrashes {
	class Settings {
		MinTimeBetweenCrashes = 5;
		MaxTimeBetweenCrashes = 20;
		NumberOfCrashesToSpawn = 5;
		MaxSearchDistance = 5000;
	};
	class CrashTypes {
		class Military {
			HeliClass = "DSR_UH1H_F";
			WreckClass = "DSR_Object_Wreck4";
			WreckSmoke = 1;
			SpawnAltitude = 600;
			SmokePos[] = {0,0,0};
			SmokeSize = 7;
			Locations[] =
			{
				{4060.2971,2753.147},
				{3014.8438,12482.121},
				{7501.166,9649.7529},
				{10790.136,4316.1323}
			};
			
			class loot {
				maxLootpiles = 10;
				weapons[] = {
					"DSR_SGun_M500",
					"DSR_arifle_FNFAL_F"
				};
				magazines[] = {
					"20Rnd_762x51_Mag",
					"20Rnd_762x51_Mag",
					"20Rnd_762x51_Mag",
					"6Rnd_12g_Buck",
					"6Rnd_12g_Buck",
					"DSR_Item_MRE"
				};
				items[] = {
					"U_I_G_Story_Protagonist_F",
					"V_PlateCarrier_Kerry",
					"H_Shemag_olive"
				};
				backpacks[] = {
					"DSR_Coyote_Backpack"
				};
			};
		};
		class Military2 {
			HeliClass = "DSR_UH1H_F";
			WreckClass = "DSR_Object_Wreck4";
			WreckSmoke = 1; 
			SpawnAltitude = 600;
			SmokePos[] = {0,0,0};
			SmokeSize = 7;
			Locations[] =
			{
				{4060.2971,2753.147},
				{3014.8438,12482.121},
				{7501.166,9649.7529},
				{10790.136,4316.1323}
			};
			
			class loot {
				maxLootpiles = 10;
				weapons[] = {
					"DSR_arifle_SCARH_F",
					"DSR_srifle_CZ750_F"
				};
				magazines[] = {
					"20Rnd_762x51_Mag",
					"20Rnd_762x51_Mag",
					"20Rnd_762x51_Mag",
					"7Rnd_308win_mag",
					"7Rnd_308win_mag",
					"7Rnd_308win_mag",
					"DSR_Item_Bloodbag_Full",
					"DSR_Item_Bandage",
					"DSR_Item_MRE"
				};
				items[] = {
					"tacs_Uniform_Combat_LS_BS_TP_TB",
					"V_PlateCarrier2_blk",
					"H_HelmetSpecB_snakeskin"
				};
				backpacks[] = {
					"DSR_Carryall_HunterF"
				};
			};
		};
		class Military3 {
			HeliClass = "DSR_UH1H_F";
			WreckClass = "DSR_Object_Wreck4";
			WreckSmoke = 1;
			SpawnAltitude = 600;
			SmokePos[] = {0,0,0};
			SmokeSize = 7;
			Locations[] =
			{
				{4060.2971,2753.147},
				{3014.8438,12482.121},
				{7501.166,9649.7529},
				{10790.136,4316.1323}
			};
			
			class loot {
				maxLootpiles = 10;
				weapons[] = {
					"DSR_Srifle_LRR"
				};
				magazines[] = {
					"7Rnd_408_Mag",
					"7Rnd_408_Mag",
					"7Rnd_408_Mag",
					"ItemMap",
					"DSR_Item_Bloodbag_Full",
					"DSR_Item_Bandage",
					"DSR_Item_MRE"
				};
				items[] = {
					"tacs_Uniform_Combat_LS_BS_TP_TB",
					"tacs_Vest_PlateCarrierFull_Green",
					"H_HelmetSpecB_snakeskin"
				};
				backpacks[] = {
					"tacs_Backpack_Carryall_DarkBlack"
				};
			};
		};
		class Military4 {
			HeliClass = "DSR_UH1H_F";
			WreckClass = "DSR_Object_Wreck4";
			SpawnAltitude = 600;
			SmokePos[] = {0,0,0};
			SmokeSize = 7;
			Locations[] =
			{
				{4060.2971,2753.147},
				{3014.8438,12482.121},
				{7501.166,9649.7529},
				{10790.136,4316.1323}
			};
			
			class loot {
				maxLootpiles = 10;
				weapons[] = {
					"DSR_arifle_FNFAL_F",
					"DSR_Arifle_CZ805_A2"
				};
				magazines[] = {
					"20Rnd_762x51_Mag",
					"20Rnd_762x51_Mag",
					"20Rnd_762x51_Mag",
					"30Rnd_556x45_Stanag",
					"30Rnd_556x45_Stanag",
					"30Rnd_556x45_Stanag",
					"DSR_Item_MRE"
				};
				items[] = {
					"U_B_survival_uniform",
					"tacs_Vest_PlateCarrier_MARPAT",
					"H_Cap_tan_specops_US"
				};
				backpacks[] = {
					"DSR_Largegunbag"
				};
			};
		};
		
		
		class Medical {
			HeliClass = "DSR_UH1H_F";
			WreckClass = "DSR_Object_Wreck4";
			WreckSmoke = 1; //1 for true 0 for false!
			SpawnAltitude = 600;
			//particle effects config (size and origin)
			SmokePos[] = {0,0,0};
			SmokeSize = 7;
			Locations[] =
			{
				{2794.793,6132.3345},
				{12407.456,3987.5303},
				{11379.448,11809.968},
				{10190.923,2723.2224}
			};
			
			class loot {
				maxLootpiles = 10;//not implemented yet
				weapons[] = {

				};
				magazines[] = {
					"DSR_Item_Bloodbag_Full",
					"DSR_Item_Bloodbag_Full",
					"DSR_Item_Morphine",
					"DSR_Item_Morphine",
					"DSR_Item_Morphine",
					"DSR_Item_Bandage",
					"DSR_Item_Bandage",
					"DSR_Item_Bandage",
					"DSR_Item_Painkillers",
					"DSR_Item_Painkillers",
					"DSR_Item_Painkillers"
				};
				items[] = {
				};
				backpacks[] = {
				};
			};
		};
		class Medical2 {
			HeliClass = "DSR_UH1H_F";
			WreckClass = "DSR_Object_Wreck4";
			WreckSmoke = 1; //1 for true 0 for false!
			SpawnAltitude = 600;
			//particle effects config (size and origin)
			SmokePos[] = {0,0,0};
			SmokeSize = 7;
			Locations[] =
			{
				{2794.793,6132.3345},
				{12407.456,3987.5303},
				{11379.448,11809.968},
				{10190.923,2723.2224}
			};
			
			class loot {
				maxLootpiles = 10;//not implemented yet
				weapons[] = {

				};
				magazines[] = {
					"DSR_Item_Bloodbag_Full",
					"DSR_Item_Bloodbag_Full",
					"DSR_Item_Bloodbag_Full",
					"DSR_Item_Bloodbag_Full",
					"DSR_Item_Morphine",
					"DSR_Item_Morphine",
					"DSR_Item_Bandage",
					"DSR_Item_Bandage",
					"DSR_Item_Bandage",
					"DSR_Item_Painkillers",
					"DSR_Item_Painkillers"
				};
				items[] = {
				};
				backpacks[] = {
				};
			};
		};
	};
};
class CfgAirdropSpawns {
	class MedicDrop {
		name = "Medical Drop";
		weapons[] = {
			
		};
		magazines[] = {
			"DSR_Item_Antibiotic",
			"DSR_Item_Bloodbag_Full",
			"DSR_Item_Bloodbag_Full",
			"DSR_Item_Bloodbag_Full",
			"DSR_Item_Bandage",
			"DSR_Item_Bandage",
			"DSR_Item_Bandage",
			"DSR_Item_Disinfectant",
			"DSR_Item_Painkillers",
			"DSR_Item_Painkillers"
		};
		items[] = {
			"FirstAidKit"
		};
		backpacks[] = {
			
		};
	};
	class AmmoDrop {
		name = "Ammunition Drop";
		weapons[] = {
			
		};
		magazines[] = {
			"7Rnd_308win_mag",
			"7Rnd_308win_mag",
			"10Rnd_762x54_Mag",
			"6Rnd_12g_Buck",
			"6Rnd_44_Mag",
			"6Rnd_44_Mag",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"32Rnd_9x19mm_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag"
		};
		items[] = {
			
		};
		backpacks[] = {
			
		};
	};
	class BuildingDrop {
		name = "Building Supplies Drop";
		weapons[] = {
			
		};
		magazines[] = {
			"DSR_Melee_Axe",
			"DSR_Melee_Axe",
			"DSR_Melee_Pickaxe",
			"DSR_Item_Bricks",
			"DSR_Item_Bricks",
			"DSR_Item_Toolbox",
			"DSR_Item_Saw",
			"DSR_Item_Hardware",
			"DSR_Item_Hardware",
			"DSR_Item_Hardware",
			"DSR_Item_Hardware",
			"DSR_Item_Scrap_Metal",
			"DSR_Item_Scrap_Metal",
			"DSR_Item_Padlock",
			"DSR_Item_Tarp",
			"DSR_Item_Tarp",
			"DSR_Item_Duct_Tape",
			"DSR_Item_Fabric_Scraps",
			"DSR_Item_Fabric_Scraps",
			"DSR_Item_Electrical_Comp",
			"DSR_Item_Engine_Block",
			"DSR_Item_Tire_RepairKit",
			"DSR_Item_Tire_RepairKit",
			"DSR_Item_Gascan_Small_Full",
			"DSR_Item_Wrench",
			"DSR_Item_Glass_Part",
			"DSR_Item_Glass_Part"
		};
		items[] = {
			
		};
		backpacks[] = {
			"DSR_Carryall_HKitty"
		};
	};
	class FoodDrop {
		name = "Food Supplies Drop";
		weapons[] = {
			
		};
		magazines[] = {
			"DSR_Item_Beans",
			"DSR_Item_Cereal",
			"DSR_Item_Powdered_Milk",
			"DSR_Item_Rice",
			"DSR_Item_Bacon",
			"DSR_Item_Waterbottle_Full",
			"DSR_Item_Canteen_Full",
			"DSR_Item_Spirit",
			"DSR_Item_Franta",
			"DSR_Item_Can_Opener",
			"DSR_Item_Water_Purification_Tablets",
			"DSR_Item_Vitamins"
		};
		items[] = {
			
		};
		backpacks[] = {
			
		};
	};
};
class CfgItemSpawns {
	buildingTypes[] = {"Military","Civilian","Industrial","Commercial","Medical","Mechanical"};
	lootRarity[] = {"rare","semirare","average","semicommon","common"};
	lootTypes[] = {"Weapon","Handgun","Magazine","Food","Drink","Medical","Junk","Backpack","Uniform","Vest","Helmet","Cosmetic","GeneralItem","Construction","Book","Electronic","CarPart","Attachment"};

	class Loot {
        class Military {
            class Weapon {
				//god tier navid spmg m320 fully auto 50rnd I0UHNFFJIBOOOOOOM BOOM BOOM NO SKILL RETARD
                rare[] = {
                    {"DSR_LMG_Mk200",6},            
                    {"DSR_Srifle_LRR",6},
                    {"DSR_srifle_CZ750_F",12},
					{"DSR_srifle_SV98",6},
					{"DSR_arifle_FNFAL_F",20},
					{"DSR_Arifle_M4_300",20}, 
					{"DSR_Srifle_DMR_03",10},           
                    {"DSR_Srifle_DMR_03_Khaki",10},
					{"DSR_arifle_SCARH_F",10}
                };
				//sniper rifle / high end
                semirare[] = {
                    {"DSR_srifle_CZ750_F",15},           
                    {"DSR_srifle_MK12_F",15},           
                    {"DSR_srifle_SVD_F",15},
                    {"DSR_arifle_FNFAL_F",10},
					{"DSR_Arifle_M4_300",10},   
					{"DSR_arifle_SCARH_F",10},   	 	    
					{"DSR_srifle_M110_F",10},
					{"DSR_srifle_SV98",15}
                };
				//assault rifle
                average[] = {
					         
                    {"DSR_arifle_AKM_F",10},	
                    {"DSR_arifle_ak74_F",10},
					{"DSR_srifle_MK12_F",10},
					{"DSR_arifle_SCAR_F",15},
					{"DSR_arifle_SCARH_F",5},
                    {"DSR_Arifle_M16A2",35},		//because ben will q.q
                    {"DSR_Arifle_CZ805_A2",5},
                    {"DSR_Arifle_M4A3",10}
                };
				//smg
                semicommon[] = {
					{"DSR_smg_MP5A5_F",34},           
                    {"DSR_SMG_MP40",33},
                    {"DSR_hgun_PDW2000",33}
                };
				//shotgun
                common[] = {
					{"DSR_SGun_M500",75},
					{"DSR_Melee_Axe",25}
                    
                };
            }; 
            class Handgun {
                rare[] = {
					{"DSR_hgun_M9_F",1},	
					{"DSR_hgun_G17_F",1}, 
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semirare[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                average[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semicommon[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                common[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
            };
			class Magazine {
				rare[] = {
                    {"200Rnd_65x39_cased_Box",1},       
                    {"7Rnd_408_Mag",1},          
                    {"30Rnd_762x51_M80A1_Mag",1},           
                    {"30Rnd_762x35mm_300_ACC_FMJ_mag",1},
                    {"20Rnd_762x51_Mag",1},
					{"30Rnd_762x39_Mag_F",1},           
                    {"10Rnd_762x54_Mag",1},           
                    {"30Rnd_545x39_Mag_F",1},
                    {"30Rnd_556x45_Stanag",1},
					{"30Rnd_65x39_caseless_mag",1},
					{"7Rnd_308win_mag",1},   					
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1}
                };
                semirare[] = {
                    {"30Rnd_762x51_M80A1_Mag",1},           
                    {"30Rnd_762x35mm_300_ACC_FMJ_mag",1},
                    {"20Rnd_762x51_Mag",1},
					{"30Rnd_762x39_Mag_F",1},           
                    {"10Rnd_762x54_Mag",1},           
                    {"30Rnd_545x39_Mag_F",1},
                    {"30Rnd_556x45_Stanag",1},
					{"30Rnd_65x39_caseless_mag",1},  
					{"7Rnd_308win_mag",1},   
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1}				
                };
                average[] = {
                    {"30Rnd_545x39_Mag_F",1},
                    {"30Rnd_556x45_Stanag",1},
					{"30Rnd_65x39_caseless_mag",1},
					{"7Rnd_308win_mag",1},   					
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1}
                }; 
                semicommon[] = {
					{"30Rnd_545x39_Mag_F",1},
                    {"30Rnd_556x45_Stanag",1},
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
					{"7Rnd_308win_mag",1},   
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1}
                };
                common[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},
					{"7Rnd_308win_mag",1},   
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1}
                }; 
			};
            class Food {
                rare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semirare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                average[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semicommon[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
                common[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},   
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
            };
            class Drink {
                rare[] = {           
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semirare[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
				};
                average[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semicommon[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                common[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
            };
            class Medical {
                rare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semirare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                average[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semicommon[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                common[] = {
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
				};
            };
            class Junk {
                rare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},       
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Backpack {
                rare[] = {          
                    {"DSR_Alice_Backpack",1},
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Coyote_Backpack",1},           
                    {"DSR_Czech_Camo",1},           
                    {"DSR_Largegunbag",1},
                    {"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"tacs_Backpack_Carryall_DarkBlack",1},           
                    {"tacs_Backpack_Kitbag_DarkBlack",1},
                    {"B_Carryall_cbr",1},
					{"B_Carryall_oli",1},           
                    {"B_Carryall_khk",1},           
                    {"B_Carryall_mcamo",1},
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_cbr",1},
                    {"B_Kitbag_sgg",1},
					{"B_Kitbag_rgr",1},           
                    {"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semirare[] = {
                    {"DSR_Alice_Backpack",1},
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Coyote_Backpack",1},           
                    {"DSR_Czech_Camo",1},           
                    {"DSR_Largegunbag",1},
                    {"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"tacs_Backpack_Carryall_DarkBlack",1},           
                    {"tacs_Backpack_Kitbag_DarkBlack",1},
                    {"B_Carryall_cbr",1},
					{"B_Carryall_oli",1},           
                    {"B_Carryall_khk",1},           
                    {"B_Carryall_mcamo",1},
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_cbr",1},
                    {"B_Kitbag_sgg",1},
					{"B_Kitbag_rgr",1},           
                    {"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                average[] = {
                    {"DSR_Alice_Backpack",1},
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"tacs_Backpack_Kitbag_DarkBlack",1},
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_cbr",1},
                    {"B_Kitbag_sgg",1},
					{"B_Kitbag_rgr",1},           
                    {"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semicommon[] = {
                    {"DSR_Alice_Backpack",1},
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"tacs_Backpack_Kitbag_DarkBlack",1},
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_cbr",1},
                    {"B_Kitbag_sgg",1},
					{"B_Kitbag_rgr",1},           
                    {"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                common[] = {
                    {"DSR_Alice_Backpack",1},
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"tacs_Backpack_Kitbag_DarkBlack",1},
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_cbr",1},
                    {"B_Kitbag_sgg",1},
					{"B_Kitbag_rgr",1},           
                    {"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
            };
            class Uniform {
                rare[] = {
                    {"U_I_pilotCoveralls",1},           
                    {"U_I_G_Story_Protagonist_F",1},           
                    {"U_B_CombatUniform_mcam",1},
                    {"U_B_CombatUniform_mcam_tshirt",1},
					{"U_B_survival_uniform",1},           
                    {"U_B_T_Soldier_F",1},           
                    {"U_B_T_Soldier_AR_F",1},
                    {"tacs_Uniform_Combat_LB_BS_GP_BB",1},
					{"tacs_Uniform_Combat_LS_BS_TP_TB",1},           
                    {"tacs_Uniform_Combat_LS_GS_BP_BB",1},           
                    {"tacs_Uniform_Combat_LS_GS_TP_BB",1},
                    {"tacs_Uniform_Garment_LS_GS_BP_BB",1},
					{"tacs_Uniform_Garment_LS_BS_GP_BB",1},           
                    {"tacs_Uniform_Garment_LS_ES_BP_BB",1},
                    {"tacs_Uniform_Garment_RS_OS_TP_TB",1}
                };
                semirare[] = {
					{"U_I_pilotCoveralls",1},           
                    {"U_I_G_Story_Protagonist_F",1},           
                    {"U_B_CombatUniform_mcam",1},
                    {"U_B_CombatUniform_mcam_tshirt",1},
					{"U_B_survival_uniform",1},           
                    {"U_B_T_Soldier_F",1},           
                    {"U_B_T_Soldier_AR_F",1},
                    {"tacs_Uniform_Combat_LB_BS_GP_BB",1},
					{"tacs_Uniform_Combat_LS_BS_TP_TB",1},           
                    {"tacs_Uniform_Combat_LS_GS_BP_BB",1},           
                    {"tacs_Uniform_Combat_LS_GS_TP_BB",1},
                    {"tacs_Uniform_Garment_LS_GS_BP_BB",1},
					{"tacs_Uniform_Garment_LS_BS_GP_BB",1},           
                    {"tacs_Uniform_Garment_LS_ES_BP_BB",1},
                    {"tacs_Uniform_Garment_RS_OS_TP_TB",1}
                };
                average[] = {
					{"U_I_pilotCoveralls",1},           
                    {"U_I_G_Story_Protagonist_F",1},           
                    {"U_B_CombatUniform_mcam",1},
                    {"U_B_CombatUniform_mcam_tshirt",1},
					{"U_B_survival_uniform",1},           
                    {"U_B_T_Soldier_F",1},           
                    {"U_B_T_Soldier_AR_F",1},
                    {"tacs_Uniform_Combat_LB_BS_GP_BB",1},
					{"tacs_Uniform_Combat_LS_BS_TP_TB",1},           
                    {"tacs_Uniform_Combat_LS_GS_BP_BB",1},           
                    {"tacs_Uniform_Combat_LS_GS_TP_BB",1},
                    {"tacs_Uniform_Garment_LS_GS_BP_BB",1},
					{"tacs_Uniform_Garment_LS_BS_GP_BB",1},           
                    {"tacs_Uniform_Garment_LS_ES_BP_BB",1},
                    {"tacs_Uniform_Garment_RS_OS_TP_TB",1}
                };
                semicommon[] = {
                    {"U_I_pilotCoveralls",1},           
                    {"U_I_G_Story_Protagonist_F",1},           
                    {"U_B_CombatUniform_mcam",1},
                    {"U_B_CombatUniform_mcam_tshirt",1},
					{"U_B_survival_uniform",1},           
                    {"U_B_T_Soldier_F",1},           
                    {"U_B_T_Soldier_AR_F",1},
                    {"tacs_Uniform_Combat_LB_BS_GP_BB",1},
					{"tacs_Uniform_Combat_LS_BS_TP_TB",1},           
                    {"tacs_Uniform_Combat_LS_GS_BP_BB",1},           
                    {"tacs_Uniform_Combat_LS_GS_TP_BB",1},
                    {"tacs_Uniform_Garment_LS_GS_BP_BB",1},
					{"tacs_Uniform_Garment_LS_BS_GP_BB",1},           
                    {"tacs_Uniform_Garment_LS_ES_BP_BB",1},
                    {"tacs_Uniform_Garment_RS_OS_TP_TB",1}
                };
                common[] = {
                    {"U_I_pilotCoveralls",1},           
                    {"U_I_G_Story_Protagonist_F",1},           
                    {"U_B_CombatUniform_mcam",1},
                    {"U_B_CombatUniform_mcam_tshirt",1},
					{"U_B_survival_uniform",1},           
                    {"U_B_T_Soldier_F",1},           
                    {"U_B_T_Soldier_AR_F",1},
                    {"tacs_Uniform_Combat_LB_BS_GP_BB",1},
					{"tacs_Uniform_Combat_LS_BS_TP_TB",1},           
                    {"tacs_Uniform_Combat_LS_GS_BP_BB",1},           
                    {"tacs_Uniform_Combat_LS_GS_TP_BB",1},
                    {"tacs_Uniform_Garment_LS_GS_BP_BB",1},
					{"tacs_Uniform_Garment_LS_BS_GP_BB",1},           
                    {"tacs_Uniform_Garment_LS_ES_BP_BB",1},
                    {"tacs_Uniform_Garment_RS_OS_TP_TB",1}
                };
            };
            class Vest {
                rare[] = {
                    {"V_PlateCarrier1_rgr",1},           
                    {"V_PlateCarrier1_blk",1},           
                    {"V_PlateCarrier2_rgr",1},
                    {"V_PlateCarrier2_blk",1},
					{"V_PlateCarrier_Kerry",1},           
                    {"V_HarnessO_brn",5},           
                    {"V_HarnessO_gry",5},
                    {"tacs_Vest_PlateCarrierFull_Black",1},
					{"tacs_Vest_PlateCarrierFull_Green",1},           
                    {"tacs_Vest_PlateCarrier_MARPAT",1},           
                    {"tacs_Vest_PlateCarrier_Coyote",1}
                };
                semirare[] = {
                    {"V_PlateCarrier1_rgr",1},           
                    {"V_PlateCarrier1_blk",1},           
                    {"V_PlateCarrier2_rgr",1},
                    {"V_PlateCarrier2_blk",1},
					{"V_PlateCarrier_Kerry",1},           
                    {"V_HarnessO_brn",5},           
                    {"V_HarnessO_gry",5},
                    {"tacs_Vest_PlateCarrierFull_Black",1},
					{"tacs_Vest_PlateCarrierFull_Green",1},           
                    {"tacs_Vest_PlateCarrier_MARPAT",1},           
                    {"tacs_Vest_PlateCarrier_Coyote",1}
                };
                average[] = {
                    {"V_PlateCarrier1_rgr",1},           
                    {"V_PlateCarrier1_blk",1},           
                    {"V_PlateCarrier2_rgr",1},
                    {"V_PlateCarrier2_blk",1},
					{"V_PlateCarrier_Kerry",1},           
                    {"V_HarnessO_brn",5},           
                    {"V_HarnessO_gry",5},
                    {"tacs_Vest_PlateCarrierFull_Black",1},
					{"tacs_Vest_PlateCarrierFull_Green",1},           
                    {"tacs_Vest_PlateCarrier_MARPAT",1},           
                    {"tacs_Vest_PlateCarrier_Coyote",1}
                };
                semicommon[] = {
                    {"V_PlateCarrier1_rgr",1},           
                    {"V_PlateCarrier1_blk",1},           
                    {"V_PlateCarrier2_rgr",1},
                    {"V_PlateCarrier2_blk",1},
					{"V_PlateCarrier_Kerry",1},           
                    {"V_HarnessO_brn",5},           
                    {"V_HarnessO_gry",5},
                    {"tacs_Vest_PlateCarrierFull_Black",1},
					{"tacs_Vest_PlateCarrierFull_Green",1},           
                    {"tacs_Vest_PlateCarrier_MARPAT",1},           
                    {"tacs_Vest_PlateCarrier_Coyote",1}
                };
                common[] = {
                    {"V_PlateCarrier1_rgr",1},           
                    {"V_PlateCarrier1_blk",1},           
                    {"V_PlateCarrier2_rgr",1},
                    {"V_PlateCarrier2_blk",1},
					{"V_PlateCarrier_Kerry",1},           
                    {"V_HarnessO_brn",5},           
                    {"V_HarnessO_gry",5},
                    {"tacs_Vest_PlateCarrierFull_Black",1},
					{"tacs_Vest_PlateCarrierFull_Green",1},           
                    {"tacs_Vest_PlateCarrier_MARPAT",1},           
                    {"tacs_Vest_PlateCarrier_Coyote",1}
                };
            };
            class Helmet {
                rare[] = {
                    {"H_Beret_02",1},           
                    {"H_Booniehat_mcamo",1},           
                    {"H_Booniehat_tan",1},
                    {"H_Cap_tan_specops_US",1},
					{"H_HelmetB",1},           
                    {"H_HelmetB_snakeskin",1},           
                    {"H_HelmetSpecB",1},
                    {"H_HelmetSpecB_blk",1},
					{"H_HelmetSpecB_snakeskin",1},           
                    {"H_MilCap_gry",1},           
                    {"H_MilCap_mcamo",1},
                    {"H_Shemag_olive",1},
					{"H_Shemag_olive_hs",1},
					{"H_ShemagOpen_tan ",1},           
                    {"H_Cap_surfer",1},           
                    {"tacs_Helmet_Ballistic_DarkBlack",1},
					{"tacs_Hat_Boonie_RangerGreen",1},
					{"tacs_Hat_Boonie_UCP",1},           
                    {"tacs_Hat_Boonie_Woodland",1}
                };
                semirare[] = {
                    {"H_Beret_02",1},           
                    {"H_Booniehat_mcamo",1},           
                    {"H_Booniehat_tan",1},
                    {"H_Cap_tan_specops_US",1},
					{"H_HelmetB",1},           
                    {"H_HelmetB_snakeskin",1},           
                    {"H_HelmetSpecB",1},
                    {"H_HelmetSpecB_blk",1},
					{"H_HelmetSpecB_snakeskin",1},           
                    {"H_MilCap_gry",1},           
                    {"H_MilCap_mcamo",1},
                    {"H_Shemag_olive",1},
					{"H_Shemag_olive_hs",1},
					{"H_ShemagOpen_tan ",1},           
                    {"H_Cap_surfer",1},           
                    {"tacs_Helmet_Ballistic_DarkBlack",1},
					{"tacs_Hat_Boonie_RangerGreen",1},
					{"tacs_Hat_Boonie_UCP",1},           
                    {"tacs_Hat_Boonie_Woodland",1}
                };
                average[] = {
                    {"H_Beret_02",1},           
                    {"H_Booniehat_mcamo",1},           
                    {"H_Booniehat_tan",1},
                    {"H_Cap_tan_specops_US",1},
					{"H_HelmetB",1},           
                    {"H_HelmetB_snakeskin",1},           
                    {"H_HelmetSpecB",1},
                    {"H_HelmetSpecB_blk",1},
					{"H_HelmetSpecB_snakeskin",1},           
                    {"H_MilCap_gry",1},           
                    {"H_MilCap_mcamo",1},
                    {"H_Shemag_olive",1},
					{"H_Shemag_olive_hs",1},
					{"H_ShemagOpen_tan ",1},           
                    {"H_Cap_surfer",1},           
                    {"tacs_Helmet_Ballistic_DarkBlack",1},
					{"tacs_Hat_Boonie_RangerGreen",1},
					{"tacs_Hat_Boonie_UCP",1},           
                    {"tacs_Hat_Boonie_Woodland",1}
                };
                semicommon[] = {
                    {"H_Beret_02",1},           
                    {"H_Booniehat_mcamo",1},           
                    {"H_Booniehat_tan",1},
                    {"H_Cap_tan_specops_US",1},
					{"H_HelmetB",1},           
                    {"H_HelmetB_snakeskin",1},           
                    {"H_HelmetSpecB",1},
                    {"H_HelmetSpecB_blk",1},
					{"H_HelmetSpecB_snakeskin",1},           
                    {"H_MilCap_gry",1},           
                    {"H_MilCap_mcamo",1},
                    {"H_Shemag_olive",1},
					{"H_Shemag_olive_hs",1},
					{"H_ShemagOpen_tan ",1},           
                    {"H_Cap_surfer",1},           
                    {"tacs_Helmet_Ballistic_DarkBlack",1},
					{"tacs_Hat_Boonie_RangerGreen",1},
					{"tacs_Hat_Boonie_UCP",1},           
                    {"tacs_Hat_Boonie_Woodland",1}
                };
                common[] = {
                    {"H_Beret_02",1},           
                    {"H_Booniehat_mcamo",1},           
                    {"H_Booniehat_tan",1},
                    {"H_Cap_tan_specops_US",1},
					{"H_HelmetB",1},           
                    {"H_HelmetB_snakeskin",1},           
                    {"H_HelmetSpecB",1},
                    {"H_HelmetSpecB_blk",1},
					{"H_HelmetSpecB_snakeskin",1},           
                    {"H_MilCap_gry",1},           
                    {"H_MilCap_mcamo",1},
                    {"H_Shemag_olive",1},
					{"H_Shemag_olive_hs",1},
					{"H_ShemagOpen_tan ",1},           
                    {"H_Cap_surfer",1},           
                    {"tacs_Helmet_Ballistic_DarkBlack",1},
					{"tacs_Hat_Boonie_RangerGreen",1},
					{"tacs_Hat_Boonie_UCP",1},           
                    {"tacs_Hat_Boonie_Woodland",1}
                };
            };
            class Cosmetic {
                rare[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semirare[] = {
					{"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                average[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semicommon[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                common[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
            };
            class GeneralItem {
                rare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semirare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                average[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semicommon[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                common[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
            };
            class Construction {
                rare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semirare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                average[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semicommon[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                common[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
            };
            class Book {
                rare[] = {
                    {"DSR_Item_Crushed_Can",5},  
					{"DSR_Item_Fabric_Scraps",2},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",2},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",2},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",2},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",2},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Electronic {
                rare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semirare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                average[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semicommon[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                common[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
            };
            class CarPart {
                rare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semirare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                average[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semicommon[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                common[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
            };
            class Attachment {
                rare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},           
                    {"optic_LRPS",1},
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semirare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},   
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                average[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},             
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semicommon[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                common[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
            };
        };
        class Civilian {
            class Weapon {
                rare[] = {
					{"DSR_srifle_CZ550_F",2},
					{"DSR_srifle_ENFIELD_F",3},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",2},
					{"DSR_Melee_Axe",3},
					{"DSR_Melee_Fire_Axe",3},
					{"DSR_Melee_Bat_Barb",3},
					{"DSR_Melee_Bat_Lucille",3},
					{"DSR_Melee_Bat_Nails",3},
					{"DSR_Melee_Bat_Norm",3}
                };
                semirare[] = {
					{"DSR_srifle_CZ550_F",2},
					{"DSR_srifle_ENFIELD_F",3},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",2},
					{"DSR_Melee_Axe",3},
					{"DSR_Melee_Fire_Axe",3},
					{"DSR_Melee_Bat_Barb",3},
					{"DSR_Melee_Bat_Lucille",3},
					{"DSR_Melee_Bat_Nails",3},
					{"DSR_Melee_Bat_Norm",3}
                };
                average[] = {
					{"DSR_srifle_CZ550_F",2},
					{"DSR_srifle_ENFIELD_F",3},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",2},
					{"DSR_Melee_Axe",3},
					{"DSR_Melee_Fire_Axe",3},
					{"DSR_Melee_Bat_Barb",3},
					{"DSR_Melee_Bat_Lucille",3},
					{"DSR_Melee_Bat_Nails",3},
					{"DSR_Melee_Bat_Norm",3}
                };
                semicommon[] = {
					{"DSR_srifle_CZ550_F",2},
					{"DSR_srifle_ENFIELD_F",3},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",2},
					{"DSR_Melee_Axe",3},
					{"DSR_Melee_Fire_Axe",3},
					{"DSR_Melee_Bat_Barb",3},
					{"DSR_Melee_Bat_Lucille",3},
					{"DSR_Melee_Bat_Nails",3},
					{"DSR_Melee_Bat_Norm",3}
                };
                common[] = {
					{"DSR_srifle_CZ550_F",2},
					{"DSR_srifle_ENFIELD_F",3},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",2},
					{"DSR_Melee_Axe",3},
					{"DSR_Melee_Fire_Axe",3},
					{"DSR_Melee_Bat_Barb",3},
					{"DSR_Melee_Bat_Lucille",3},
					{"DSR_Melee_Bat_Nails",3},
					{"DSR_Melee_Bat_Norm",3}
                };
            }; 
            class Handgun {
                rare[] = {
					{"DSR_hgun_M9_F",1},	
					{"DSR_hgun_G17_F",1}, 
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semirare[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                average[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semicommon[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                common[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
            };
			class Magazine {
				rare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                semirare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                average[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
                semicommon[] = {
					{"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                common[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
			};
            class Food {
                rare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semirare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                average[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
                semicommon[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
                common[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},   
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
            };
            class Drink {
                rare[] = {           
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semirare[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
				};
                average[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semicommon[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                common[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
            };
            class Medical {
                rare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semirare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                     {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                average[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semicommon[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                common[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
				};
            };
            class Junk {
                rare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Backpack {
                rare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",2},
					{"DSR_Tactical_Blue",2},           
                    {"DSR_Tactical_Orange",2},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",3},
					{"B_FieldPack_oli",3},           
                    {"B_HuntingBackpack",3},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",3},           
                    {"B_OutdoorPack_blu",3},
                    {"B_OutdoorPack_tan",3},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semirare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",2},
					{"DSR_Tactical_Blue",2},           
                    {"DSR_Tactical_Orange",2},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",3},
					{"B_FieldPack_oli",3},           
                    {"B_HuntingBackpack",3},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",3},           
                    {"B_OutdoorPack_blu",3},
                    {"B_OutdoorPack_tan",3},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                average[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",2},
					{"DSR_Tactical_Blue",2},           
                    {"DSR_Tactical_Orange",2},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",3},
					{"B_FieldPack_oli",3},           
                    {"B_HuntingBackpack",3},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",3},           
                    {"B_OutdoorPack_blu",3},
                    {"B_OutdoorPack_tan",3},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semicommon[] = {
                    {"DSR_Tactical_Black",2},
					{"DSR_Tactical_Blue",2},           
                    {"DSR_Tactical_Orange",2},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",3},
					{"B_FieldPack_oli",3},           
                    {"B_HuntingBackpack",3},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",3},           
                    {"B_OutdoorPack_blu",3},
                    {"B_OutdoorPack_tan",3},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                common[] = {
                    {"DSR_Tactical_Black",2},
					{"DSR_Tactical_Blue",2},           
                    {"DSR_Tactical_Orange",2},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",3},
					{"B_FieldPack_oli",3},           
                    {"B_HuntingBackpack",3},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",3},           
                    {"B_OutdoorPack_blu",3},
                    {"B_OutdoorPack_tan",3},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
            };
            class Uniform {
                rare[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semirare[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                average[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semicommon[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                common[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
            };
            class Vest {
                rare[] = {
                    {"V_Rangemaster_Belt",2},           
                    {"V_BandollierB_khk",2},
                    {"V_BandollierB_cbr",2},
					{"V_BandollierB_rgr",2},           
                    {"V_BandollierB_blk",2},           
                    {"V_BandollierB_oli",2},
                    {"V_Chestrig_khk",2},
					{"V_Chestrig_rgr",2},           
                    {"V_Chestrig_blk",2},           
                    {"V_Chestrig_oli",2},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semirare[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                average[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semicommon[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                common[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
            };
            class Helmet {
                rare[] = {
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semirare[] = {
                     {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                average[] = {
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semicommon[] = {
                     {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                common[] = {
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
            };
            class Cosmetic {
                rare[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semirare[] = {
					{"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                average[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semicommon[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                common[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
            };
            class GeneralItem {
                rare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semirare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                average[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semicommon[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                common[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
            };
            class Construction {
                rare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semirare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                average[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semicommon[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                common[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",2},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
            };
            class Book {
                rare[] = {
                    {"DSR_Item_Crushed_Can",5},  
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Electronic {
                rare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semirare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                average[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semicommon[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                common[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
            };
            class CarPart {
                rare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semirare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                average[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semicommon[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                common[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
            };
            class Attachment {
                rare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},           
                    {"optic_LRPS",1},
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semirare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},   
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                average[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},             
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semicommon[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                common[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
            };
        };
        class Industrial {
            class Weapon {
                rare[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                semirare[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                average[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                semicommon[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                common[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
            }; 
            class Handgun {
                rare[] = {
					{"DSR_hgun_M9_F",1},	
					{"DSR_hgun_G17_F",1}, 
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semirare[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                average[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semicommon[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                common[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
            };
			class Magazine {
				rare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                semirare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                average[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
                semicommon[] = {
					{"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                common[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
			};
            class Food {
                rare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semirare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                average[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semicommon[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
                common[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},   
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
            };
            class Drink {
                rare[] = {           
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semirare[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
				};
                average[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semicommon[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                common[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
            };
            class Medical {
                rare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semirare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                   {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                average[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semicommon[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                common[] = {
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
				};
            };
            class Junk {
                rare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Backpack {
                rare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semirare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                average[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semicommon[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                common[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
            };
            class Uniform {
                rare[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semirare[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                average[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semicommon[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                common[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
            };
            class Vest {
                rare[] = {
                    {"V_Rangemaster_Belt",2},           
                    {"V_BandollierB_khk",2},
                    {"V_BandollierB_cbr",2},
					{"V_BandollierB_rgr",2},           
                    {"V_BandollierB_blk",2},           
                    {"V_BandollierB_oli",2},
                    {"V_Chestrig_khk",2},
					{"V_Chestrig_rgr",2},           
                    {"V_Chestrig_blk",2},           
                    {"V_Chestrig_oli",2},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semirare[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                average[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semicommon[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                common[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
            };
            class Helmet {
                rare[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semirare[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                average[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semicommon[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                common[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
            };
            class Cosmetic {
                rare[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semirare[] = {
					{"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                average[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semicommon[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                common[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
            };
            class GeneralItem {
                rare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semirare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                average[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semicommon[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                common[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
            };
            class Construction {
                rare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",2},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",3},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semirare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},   
					{"DSR_Item_Scrap_Metal",8},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                    
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                average[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},
					{"DSR_Item_Scrap_Metal",8},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                     
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semicommon[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},  
					{"DSR_Item_Scrap_Metal",8},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                    
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                common[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},     
					{"DSR_Item_Scrap_Metal",8},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                  
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
            };
            class Book {
                rare[] = {
                    {"DSR_Item_Crushed_Can",5},  
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Electronic {
                rare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semirare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                average[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semicommon[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                common[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
            };
            class CarPart {
                rare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semirare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                average[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semicommon[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                common[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
            };
            class Attachment {
                rare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},           
                    {"optic_LRPS",1},
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semirare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},   
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                average[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},             
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semicommon[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                common[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
            };
        };
        class Commercial {
            class Weapon {
                rare[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                semirare[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                average[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                semicommon[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                common[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
            }; 
            class Handgun {
                rare[] = {
					{"DSR_hgun_M9_F",1},	
					{"DSR_hgun_G17_F",1}, 
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semirare[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                average[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semicommon[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                common[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
            };
			class Magazine {
				rare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                semirare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                average[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
                semicommon[] = {
					{"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                common[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
			};
            class Food {
                rare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semirare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                average[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semicommon[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
                common[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},   
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
            };
            class Drink {
                rare[] = {           
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semirare[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
				};
                average[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semicommon[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                common[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
            };
            class Medical {
                rare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semirare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                   {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                average[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semicommon[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                common[] = {
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
				};
            };
            class Junk {
                rare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Backpack {
                rare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semirare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                average[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semicommon[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                common[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
            };
            class Uniform {
                rare[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semirare[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                average[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semicommon[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                common[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
            };
            class Vest {
                rare[] = {
                    {"V_Rangemaster_Belt",2},           
                    {"V_BandollierB_khk",2},
                    {"V_BandollierB_cbr",2},
					{"V_BandollierB_rgr",2},           
                    {"V_BandollierB_blk",2},           
                    {"V_BandollierB_oli",2},
                    {"V_Chestrig_khk",2},
					{"V_Chestrig_rgr",2},           
                    {"V_Chestrig_blk",2},           
                    {"V_Chestrig_oli",2},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semirare[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                average[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semicommon[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                common[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
            };
            class Helmet {
                rare[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semirare[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                average[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semicommon[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                common[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
            };
            class Cosmetic {
                rare[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semirare[] = {
					{"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                average[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semicommon[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                common[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
            };
            class GeneralItem {
                rare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semirare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                average[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semicommon[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                common[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
            };
            class Construction {
                rare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semirare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                average[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semicommon[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                common[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
            };
            class Book {
                rare[] = {
                    {"DSR_Item_Crushed_Can",5},  
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Electronic {
                rare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semirare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                average[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semicommon[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                common[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
            };
            class CarPart {
                rare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semirare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                average[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semicommon[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                common[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
            };
            class Attachment {
                rare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},           
                    {"optic_LRPS",1},
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semirare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},   
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                average[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},             
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semicommon[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                common[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
            };
        };
        class Medical {
            class Weapon {
                rare[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                semirare[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                average[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                semicommon[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                common[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
            }; 
            class Handgun {
                rare[] = {
					{"DSR_hgun_M9_F",1},	
					{"DSR_hgun_G17_F",1}, 
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semirare[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                average[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semicommon[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                common[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
            };
			class Magazine {
				rare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                semirare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                average[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
                semicommon[] = {
					{"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                common[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
			};
            class Food {
                rare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semirare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                average[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semicommon[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
                common[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},   
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
            };
            class Drink {
                rare[] = {           
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semirare[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
				};
                average[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semicommon[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                common[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
            };
            class Medical {
                rare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semirare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                   {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                average[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semicommon[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                common[] = {
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
				};
            };
            class Junk {
                rare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Backpack {
                rare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semirare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                average[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semicommon[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                common[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
            };
            class Uniform {
                rare[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semirare[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                average[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semicommon[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                common[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
            };
            class Vest {
                rare[] = {
                    {"V_Rangemaster_Belt",2},           
                    {"V_BandollierB_khk",2},
                    {"V_BandollierB_cbr",2},
					{"V_BandollierB_rgr",2},           
                    {"V_BandollierB_blk",2},           
                    {"V_BandollierB_oli",2},
                    {"V_Chestrig_khk",2},
					{"V_Chestrig_rgr",2},           
                    {"V_Chestrig_blk",2},           
                    {"V_Chestrig_oli",2},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semirare[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                average[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semicommon[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                common[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
            };
            class Helmet {
                rare[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semirare[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                average[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semicommon[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                common[] = {
                    {"DSR_police_cap",1},           
                    {"DSR_Worker_cap1",1},
                    {"DSR_Worker_cap2",1},
					{"DSR_Worker_cap3",1},           
                    {"DSR_Worker_cap4",1},           
                    {"DSR_Villager_cap1",1},
                    {"DSR_Villager_cap2",1},
					{"DSR_Villager_cap3",1},           
                    {"DSR_Villager_cap4",1},           
                    {"DSR_Profiteer_cap1",1},
                    {"DSR_Profiteer_cap2",1},
					{"DSR_Profiteer_cap3",1},           
                    {"DSR_Profiteer_cap4",1},
                    {"DSR_Woodlander_cap1",1},
					{"DSR_Woodlander_cap2",1},           
                    {"DSR_Woodlander_cap3",1},           
                    {"DSR_Woodlander_cap4",1},
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
            };
            class Cosmetic {
                rare[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semirare[] = {
					{"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                average[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semicommon[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                common[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
            };
            class GeneralItem {
                rare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semirare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                average[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semicommon[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                common[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
            };
            class Construction {
                rare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semirare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                average[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semicommon[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                common[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
            };
            class Book {
                rare[] = {
                    {"DSR_Item_Crushed_Can",5},  
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Electronic {
                rare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semirare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                average[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semicommon[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                common[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
            };
            class CarPart {
                rare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semirare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                average[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semicommon[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                common[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
            };
            class Attachment {
                rare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},           
                    {"optic_LRPS",1},
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semirare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},   
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                average[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},             
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semicommon[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                common[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
            };
        };
        class Mechanical {
            class Weapon {
                rare[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                semirare[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
                    {"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                average[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                semicommon[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
                common[] = {
					{"DSR_srifle_CZ550_F",1},
					{"DSR_srifle_ENFIELD_F",1},  
					{"DSR_SMG_01",1},           
                    {"DSR_SMG_02",1},           
                    {"DSR_SMG_MP40",1},
                    {"DSR_hgun_PDW2000",1},
					{"DSR_SGun_M500",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Melee_Fire_Axe",1},
					{"DSR_Melee_Bat_Barb",1},
					{"DSR_Melee_Bat_Lucille",1},
					{"DSR_Melee_Bat_Nails",1},
					{"DSR_Melee_Bat_Norm",1}
                };
            }; 
            class Handgun {
                rare[] = {
					{"DSR_hgun_M9_F",1},	
					{"DSR_hgun_G17_F",1}, 
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semirare[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                average[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                semicommon[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
                common[] = {
					{"DSR_hgun_M9_F",1},
					{"DSR_hgun_G17_F",1},
					{"DSR_hgun_makarov_F",1}, 
                    {"DSR_hgun_ACPC2",1},           
                    {"DSR_hgun_P07",1},           
                    {"DSR_hgun_Pistol_Heavy_01",1},
                    {"DSR_hgun_Pistol_Heavy_02",1},
					{"DSR_hgun_Rook",1},           
                    {"DSR_hgun_Pistol_01",1},           
                    {"DSR_44magnum",1}
                };
            };
			class Magazine {
				rare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                semirare[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                average[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
                semicommon[] = {
					{"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                };
                common[] = {
                    {"30Rnd_45ACP_Mag_SMG_01",1},           
                    {"30rnd_9x21_Mag_SMG_02",1},
                    {"30Rnd_9x21_Mag",1},
					{"32Rnd_9x19mm_Mag",1},           
                    {"16Rnd_9x21_Mag",1},           
                    {"6Rnd_12g_Slug",1},
                    {"6Rnd_12g_Buck",1},
					{"9Rnd_45ACP_Mag",1},           
                    {"11Rnd_45ACP_Mag",1},           
                    {"6Rnd_45ACP_Cylinder",1},
                    {"10Rnd_9x21_Mag",1},
					{"6Rnd_44_Mag",1},
					{"10Rnd_243win_mag",1},
					{"10Rnd_303_Mag",1}
                }; 
			};
            class Food {
                rare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semirare[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                average[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},              
                    {"DSR_Item_tuna",1},
                    {"DSR_Item_MRE",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1},           
                    {"DSR_Item_Ration",1}
                };
                semicommon[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
                common[] = {
                    {"DSR_Item_Bacon",1},           
                    {"DSR_Item_Beans",1},           
                    {"DSR_Item_Cereal",1},
                    {"DSR_Item_Deviled_Ham",1},
					{"DSR_Item_Rice",1},   
					{"DSR_Item_Bag_Rice",1},
                    {"DSR_Item_tuna",1},
					{"DSR_Item_Can_Chicken",1},           
                    {"DSR_Item_Can_Clams",1},    
					{"DSR_Item_Powdered_Milk",1},           
                    {"DSR_Item_Instant_Coffee",1}
                };
            };
            class Drink {
                rare[] = {           
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semirare[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Full",1},           
                    {"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
				};
                average[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                semicommon[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
                common[] = {
                    {"DSR_Item_Waterbottle_Dirty",1},
                    {"DSR_Item_Waterbottle_Empty",1},
					{"DSR_Item_Canteen_Dirty",1},           
                    {"DSR_Item_Canteen_Empty",1},
                    {"DSR_Item_Spirit",1},
					{"DSR_Item_Franta",1},           
                    {"DSR_Item_Rusty_Spirit",1}
                };
            };
            class Medical {
                rare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semirare[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                   {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                average[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                semicommon[] = {
                    {"DSR_Item_Antibiotic",1},           
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
                };
                common[] = {
                    {"DSR_Item_Bandage",1},
                    {"DSR_Item_Bloodbag_Empty",1},
					{"DSR_Item_Bloodbag_Full",1},           
                    {"DSR_Item_Disinfectant",1},
                    {"DSR_Item_Handwarmer",1},
					{"DSR_Item_Painkillers",1},           
                    {"DSR_Item_Vitamins",1},           
                    {"DSR_Item_Syringe",1},
                    {"DSR_Item_Morphine",1}
				};
            };
            class Junk {
                rare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
					{"DSR_Item_Ziptie",1},
					{"DSR_Item_PortableLight_Double",1},
					{"DSR_Item_PortableLight_Single",1},
					{"DSR_Melee_Axe",1},
					{"DSR_Item_Scrap_Metal",1},        
                    {"DSR_Item_Camping_Light",1},
                    {"DSR_Item_Labtop",1},
					{"DSR_Item_Camping_Chair",1},           
                    {"DSR_Item_Pillow",1},           
                    {"DSR_Item_Handwarmer",1},
                    {"DSR_Item_Water_Purification_Tablets",1},        
                    {"DSR_Item_Matches",1},
                    {"DSR_Item_Bucket_Empty",1},
					{"DSR_Item_Spanner",1},           
                    {"DSR_Item_Watercan_Empty",1},           
                    {"DSR_Item_Watercan_full",1},
                    {"DSR_Item_Shears",1},
					{"DSR_Item_Lighter",1},           
                    {"DSR_Item_Scissor_Jack",1},           
                    {"DSR_Item_Cooking_Pot",1},
                    {"DSR_Item_Poptobismol",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Electrical_Comp",1},
                    {"DSR_Item_Hardware",1},
					{"DSR_Item_Padlock",1},           
                    {"DSR_Item_Seeds_Potato",1},           
                    {"DSR_Item_Seeds_Tomato",1},
                    {"DSR_Item_Seeds_Peas",1},
					{"DSR_Item_Seeds_Lettuce",1},           
                    {"DSR_Item_Seeds_Corn",1},           
                    {"DSR_Item_Seeds_Watermelon",1},
                    {"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Tarp",1},             
                    {"DSR_Item_Fabric_Scraps",1},
                    {"DSR_Item_Fertilizer",1},
					{"DSR_Item_Battery_Charged",1},           
                    {"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Camera",1},
					{"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},             
                    {"DSR_Item_Tent_A_Packed",1},           
                    {"DSR_Item_Tent_Dome_Packed",1},
                    {"DSR_Item_Sleeping_Mat",1},
					{"DSR_Item_Sleeping_Bag",1},           
                    {"DSR_Item_Butane_Torch",1},
                    {"DSR_Item_Can_Opener",1},               
                    {"DSR_Item_Metal_Wire",1},
                    {"DSR_Item_Drill",1},
					{"DSR_Item_Tin_Container",1},           
                    {"DSR_Item_Nail_File",1},           
                    {"DSR_Item_Hammer",1},
                    {"DSR_Item_Tape_Measure",1},
					{"DSR_Item_Multimeter",1},           
                    {"DSR_Item_Pliers",1},           
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Wrench",1},           
                    {"DSR_Item_Plastic_Jug",1},           
                    {"DSR_Item_Suitcase",1},
                    {"DSR_Item_Crushed_Can",1},
					{"DSR_Item_Photos",1},           
                    {"DSR_Item_Notepad",1},           
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Backpack {
                rare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semirare[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                average[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                semicommon[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
                common[] = {
                    {"DSR_Carryall_Blue",1},           
                    {"DSR_Carryall_HunterF",1},           
                    {"DSR_Carryall_Green",1},
                    {"DSR_Carryall_WHiker",1},
					{"DSR_Carryall_MHiker",1},           
                    {"DSR_Carryall_Hunter",1},           
                    {"DSR_Carryall_HKitty",1},
                    {"DSR_Carryall_Orange",1},
					{"DSR_Carryall_Purple",1},           
                    {"DSR_Carryall_Red",1},           
                    {"DSR_Carryall_Yellow",1},
                    {"DSR_Tactical_Black",1},
					{"DSR_Tactical_Blue",1},           
                    {"DSR_Tactical_Orange",1},           
                    {"DSR_Civil_Assault_Backpack",1},
					{"DSR_Medical_Backpack",1},
					{"DSR_Rpg_Backpack",1},           
                    {"B_FieldPack_cbr",1},
					{"B_FieldPack_oli",1},           
                    {"B_HuntingBackpack",1},           
                    {"B_Kitbag_sgg",1},
					{"B_OutdoorPack_blk",1},           
                    {"B_OutdoorPack_blu",1},
                    {"B_OutdoorPack_tan",1},
					{"DSR_Assaultpack_Coyote",1},           
                    {"DSR_Assaultpack_Blue",1},
                    {"DSR_Assaultpack_Green",1},
					{"DSR_Assaultpack_Grey",1},
					{"DSR_Assaultpack_Purple",1},
					{"DSR_Assaultpack_Red",1}
                };
            };
            class Uniform {
                rare[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semirare[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                average[] = {
					{"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                semicommon[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
                common[] = {
                    {"U_I_C_Soldier_Bandit_2_F",1},           
                    {"U_I_G_resistanceLeader_F",1},           
                    {"U_C_Poloshirt_blue",1},
                    {"U_C_Poloshirt_salmon",1},
					{"U_C_Poloshirt_burgundy",1},           
                    {"U_C_Poor_1",1},           
                    {"U_C_Journalist",1},
                    {"U_OrestesBody",1},
					{"U_BG_Guerilla3_1",1},           
                    {"U_BG_Guerilla2_3",1},           
                    {"U_BG_Guerilla2_1",1},
                    {"U_BG_Guerilla2_2",1},
					{"tacs_Uniform_Combat_LS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_LS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_LS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_LS_CPS_BP_BB",1},
					{"tacs_Uniform_Combat_RS_CDBS_GP_TB",1},           
                    {"tacs_Uniform_Combat_RS_CLBS_GP_BB",1},           
                    {"tacs_Uniform_Combat_RS_CLRS_TP_BB",1},
                    {"tacs_Uniform_Combat_RS_CPS_BP_BB",1},
					{"tacs_Uniform_Tshirt_JP_BS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_LS_LP_BB",1},           
                    {"tacs_Uniform_Tshirt_JP_GS_LP_BB",1},
                    {"tacs_Uniform_Tshirt_JP_WS_LP_BB",1},
					{"tacs_Uniform_Polo_TP_BS_LP_BB",1},           
                    {"tacs_Uniform_Polo_TP_LS_GP_BB",1},           
                    {"tacs_Uniform_Polo_TP_OS_LP_BB",1},
                    {"tacs_Uniform_Polo_CP_LS_TP_OB",1},
					{"tacs_Uniform_Polo_CP_RS_LP_BB",1},           
                    {"tacs_Suit_VIP",1}
                };
            };
            class Vest {
                rare[] = {
                    {"V_Rangemaster_Belt",2},           
                    {"V_BandollierB_khk",2},
                    {"V_BandollierB_cbr",2},
					{"V_BandollierB_rgr",2},           
                    {"V_BandollierB_blk",2},           
                    {"V_BandollierB_oli",2},
                    {"V_Chestrig_khk",2},
					{"V_Chestrig_rgr",2},           
                    {"V_Chestrig_blk",2},           
                    {"V_Chestrig_oli",2},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semirare[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                average[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                semicommon[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
                common[] = {
                    {"V_Rangemaster_Belt",1},           
                    {"V_BandollierB_khk",1},
                    {"V_BandollierB_cbr",1},
					{"V_BandollierB_rgr",1},           
                    {"V_BandollierB_blk",1},           
                    {"V_BandollierB_oli",1},
                    {"V_Chestrig_khk",1},
					{"V_Chestrig_rgr",1},           
                    {"V_Chestrig_blk",1},           
                    {"V_Chestrig_oli",1},
                    {"V_TacVest_khk",1},
					{"V_TacVest_oli",1},           
                    {"V_TacVest_blk",1},
                    {"V_TacVest_blk_POLICE",1},
					{"V_TacVestIR_blk",1},           
                    {"V_HarnessO_brn",1},           
                    {"V_HarnessO_gry",1},
                    {"V_Press_F",1},
					{"tacs_Vest_Tactical_DarkBlack",1}
                };
            };
            class Helmet {
                rare[] = {
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semirare[] = {
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                average[] = {
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                semicommon[] = {
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
                common[] = {
                    {"H_Watchcap_blk",1},
					{"H_Watchcap_cbr",1},           
                    {"H_Watchcap_camo",1},           
                    {"H_Watchcap_khk ",1},
                    {"H_Beret_blk",1},
					{"H_Cap_grn_BI ",1},           
                    {"H_Cap_blk",1},
                    {"H_Cap_blu",1},
					{"H_Cap_red",1},           
                    {"H_Cap_police",1},           
                    {"H_Cap_surfer ",1},
                    {"H_Cap_tan ",1},
					{"H_Cap_usblack",1},           
                    {"H_Cap_press",1},           
                    {"H_Cap_oli ",1},
					{"H_Hat_brown",1},           
                    {"H_Helmet_Skate",1},           
                    {"H_Shemag_olive ",1},
                    {"H_ShemagOpen_tan ",1},
					{"H_RacingHelmet_1_F ",1},           
                    {"H_RacingHelmet_2_F ",1},           
                    {"H_RacingHelmet_3_F ",1},
                    {"H_RacingHelmet_4_F ",1},
					{"H_RacingHelmet_1_black_F ",1},           
                    {"H_RacingHelmet_1_blue_F ",1},
                    {"H_RacingHelmet_1_green_F ",1},
					{"H_RacingHelmet_1_red_F ",1},           
                    {"H_RacingHelmet_1_white_F ",1},           
                    {"H_RacingHelmet_1_yellow_F ",1},
                    {"H_RacingHelmet_1_orange_F",1},
					{"tacs_Cap_Backwards_BlackLogo",1},           
                    {"tacs_Cap_Backwards_TanLogo",1}
                };
            };
            class Cosmetic {
                rare[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semirare[] = {
					{"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                average[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                semicommon[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
                common[] = {
                    {"DSR_mask_metal",1},           
                    {"DSR_mask_metal_bone",1},
                    {"DSR_mask_metal_camoArmy",1},
					{"DSR_mask_metal_paintOrange",1},           
                    {"DSR_mask_metal_sunburst",1},   
					{"G_Balaclava_blk",1},           
                    {"G_Balaclava_oli",1},           
                    {"G_Aviator",1},
                    {"G_Bandanna_beast",1},
					{"G_Balaclava_TI_G_blk_F",1},
					{"G_Bandanna_oli",1}
                };
            };
            class GeneralItem {
                rare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semirare[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                average[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                semicommon[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
                common[] = {
					{"DSR_Flashlight",25},  
                    {"ItemMap",25},           
                    {"Binocular",25},           
                    {"ItemRadio",10},
                    {"ItemWatch",15}
                };
            };
            class Construction {
                rare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",2},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",3},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},    
					{"DSR_Item_Scrap_Metal",3},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                      
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semirare[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},   
					{"DSR_Item_Scrap_Metal",8},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                    
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                average[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},
					{"DSR_Item_Scrap_Metal",8},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                     
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                semicommon[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},  
					{"DSR_Item_Scrap_Metal",8},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                    
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
                common[] = {
                    {"DSR_Melee_Axe",1}, 
					{"DSR_Melee_Pickaxe",1},
                    {"DSR_Item_Saw",1},           
                    {"DSR_Item_Toolbox",1},
                    {"DSR_Item_Bricks",1},
					{"DSR_Item_Plastic_Drum",1},           
                    {"DSR_Item_Duct_Tape",1},           
                    {"DSR_Item_Hardware",1},
                    {"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},     
					{"DSR_Item_Scrap_Metal",8},
                    {"DSR_Item_Metal_Wire",1},           
                    {"DSR_Item_Grinder",1},
                    {"DSR_Item_Hammer",1},
					{"DSR_Item_Wrench",1},
					{"DSR_Item_Pliers",1},                  
                    {"DSR_Item_Screw_Driver_Phillips",1},
					{"DSR_Item_Tape_Measure",1}
                };
            };
            class Book {
                rare[] = {
                    {"DSR_Item_Crushed_Can",5},  
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semirare[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                average[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                semicommon[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
                common[] = {
                    {"DSR_Item_Crushed_Can",5},
					{"DSR_Item_Fabric_Scraps",3},           
                    {"DSR_Item_Can_Opener",1},           
                    {"DSR_Item_Matches",1},
					{"DSR_Item_Tarp",1}, 
					{"DSR_Item_Wrench",1},   
                    {"DSR_Item_Pen_Black",1},
                    {"DSR_Item_Pen_Red",1},
					{"DSR_Item_Pencil_Blue",1},
                    {"DSR_Item_Pencil_Green",1},
					{"DSR_Item_Pencil_Red",1},           
                    {"DSR_Item_Pencil_Yellow",1}
                };
            };
            class Electronic {
                rare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semirare[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                average[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                semicommon[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
                common[] = {
                    {"DSR_Item_Camera",1},           
                    {"DSR_Item_Phoneold",1},           
                    {"DSR_Item_Phonesmart",1},         
                    {"DSR_Item_Extension_Cord",1},
                    {"DSR_Item_Battery_Charged",1},
					{"DSR_Item_Battery_Dead",1},           
                    {"DSR_Item_Electrical_Comp",1},   
                    {"DSR_Item_Portable_Generator",1}
                };
            };
            class CarPart {
                rare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semirare[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                average[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                semicommon[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
                common[] = {
                    {"DSR_Item_Engine_Block",10},           	
                    {"DSR_Item_Gas_Tank",5},           
                    {"DSR_Item_Glass_Part",10},
					{"DSR_Item_Gascan_Large_Full",5},
					{"DSR_Item_Gascan_Small_Full",10},
                    {"DSR_Item_Tire",15},
					{"DSR_Item_Main_Rotor",5},           
                    {"DSR_Item_Tail_Rotor",5},           
                    {"DSR_Item_Toolbox",10},
                    {"DSR_Item_Wrench",5},
					{"DSR_Item_Tire_RepairKit",15},
					{"DSR_Item_Car_Battery",5}
                };
            };
            class Attachment {
                rare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},           
                    {"optic_LRPS",1},
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semirare[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},   
                    {"optic_KHS_old",1},
					{"optic_KHS_blk",1},            
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                average[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},             
                    {"muzzle_snds_ACP",1},           
                    {"muzzle_snds_L",1},
					{"DSR_optic_PSO",1},
					{"DSR_optic_PSO3",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                semicommon[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
                common[] = {
                    {"optic_aco",1},          
                    {"optic_Arco_Blk_F",1},           
                    {"optic_SOS",1},
					{"optic_Hamr",1},           
                    {"optic_MRCO",1},
					{"DSR_optic_Kobra_red",1},
					{"DSR_optic_Kobra_green",1}
                };
            };
        };
    };
	class Buildings {
		class Land_NAV_Lighthouse2 {
			table = "Military";
			positions[] = {{-1.11377,-1.48682,2.41768},{-0.117676,0.0644531,-6.7829}
			};
		};
		
		class Land_NAV_Lighthouse {
			table = "Military";
			positions[] = {{-1.18262,-1.47314,2.41768},{-0.0981445,-0.241211,-6.7829}
			};
		};
		
		class Land_Majak {
			table = "Military";
			positions[] = {{-0.233887,1.18701,-8.07446},{1.60449,-0.822754,1.72104}
			};
		};
		
		class Land_Majak_v_celku {
			table = "Military";
			positions[] = {{1.36377,-6.80273,3.72537},{0.00439453,-4.53857,-6.07013}
			};
		};
		
		class Land_tent_east {
			table = "Military";
			positions[] = {{2.38379,-2.12842,-1.75578},{-3.35693,1.79541,-1.75579}
			};
		};
		
		class CampEast_EP1  {
			table = "Military";
			positions[] = {{1.80957,-2.83521,-1.25191},{-1.64502,-2.09741,-1.25194},{-1.77686,2.25,-1.25194}
			};
		};

		class Land_Ind_Shed_01_EP1 {
			table = "Industrial";
			positions[] = {{-7.79321,4.93457,-3.33529},{7.87134,11.2715,-3.33529},{7.83423,-8.58789,-3.33527},{-7.64038,-8.85791,-3.33529}
			};
		};
		
		class Land_Ind_Shed_02_EP1 {
			table = "Industrial";
			positions[] = {{3.91968,-8.97266,-2.08116},{3.9292,3.23779,-2.08117},{4.4707,12.1157,-2.08114}
			};
		};

		class Land_Airport_01_controlTower_F {
			table = "Military";
			positions[] = {{-3.00696, 3.91602, 4.21086}, {3.06915, 3.89941, 4.23131}, {0.0256958, -2.06201, 4.21085}, {0.376404, 1.16602, 4.65663}, {-1.27332, 0.373535, 7.91646}
			};
		};

		class Land_Airport_02_terminal_F {
			table = "Commercial";
			positions[] = {{3.36981, 10.9082, -1.40149}, {0.277771, 4.55811, -1.40149}, {2.60266, -0.411133, -1.40149}, {5.20868, 3.13037, -1.40149}, {9.82227, 1.33496, -1.40149}, {10.3759, -2.8335, -1.40149}, {-3.33417, -9.50488, -1.40149}, {-19.4422, -10.1187, -1.40149}, {12.8807, -10.3208, -1.40149}, {22.9008, -5.79883, -1.40149}, {21.9941, 10.5249, -1.40149}
			};
		};

		class Land_Airport_01_terminal_F {
			table = "Commercial";
			positions[] = {{-14.3466, -0.588379, -4.02741}, {-11.2858, 2.41602, -4.02741}, {-8.2597, 4.43359, -3.98237}, {-5.414, 7.771, -3.98237}, {8.09961, 8.10889, -4.01762}, {6.22021, -7.17871, -4.00997}, {9.02838, -10.4839, -4.00997}, {5.16388, 5.54004, -4.02803}, {-1.08685, 1.23682, -4.10765}, {3.38068, -4.2085, -4.12297}
			};
		};

		class Land_Airport_01_hangar_F {
			table = "Mechanical";
			positions[] = {{12.7657, -8.04395, -2.68443}, {12.7607, 12.7231, -2.68448}, {-13.3329, 13.9307, -2.68448}, {-12.2171, -7.75732, -2.68444}, {0.403809, 13.1753, -2.68448}, {13.1948, -2.32715, -2.68444}
			};
		};

		class Land_House_Big_04_F {
			table = "Civilian";
			positions[] = {{3.31604, 6.40625, -2.94933}, {-8.47241, 6.26709, -2.95065}, {-8.08984, -6.6377, -2.94858}, {1.90912, -6.72803, -2.94858}, {-8.40582, -6.66602, 0.276856}, {11.6814, -7.04492, 0.276991}, {-0.609863, -7.23633, 0.27781}, {-8.26996, 6.34521, 0.303274}, {4.09497, 6.37451, 0.302769}, {3.77234, 1.79395, 0.301416}, {-5.09198, 4.31494, 0.301416}, {-4.98438, 1.64209, 0.301415}, {-5.69537, -4.48975, -2.94858}, {3.39117, -3.10498, -2.94858}
			};
		};

		class Land_MultistoryBuilding_03_F
		{
			table = "Commercial";
			positions[] = {{-2.22174, 7.31934, -25.9053}, {-5.63617, 4.71777, -25.9053}, {-1.87103, 4.64307, -25.9053}, {-7.48083, -0.407715, -24.22}, {-7.4483, -3.91064, -24.2191}
			};
		};

		class Land_House_Small_04_F
		{
			table = "Civilian";
			positions[] = {{-3.64771, 3.82129, -0.866206}, {-3.73071, -2.66895, -0.866206}, {0.299927, 3.69971, -0.866206}, {-1.31946, -3.97314, -0.866206}, {3.38403, -1.32324, -0.866206}, {-0.83905, -6.95166, -0.866206}
			};
		};

		class Land_House_Small_05_F
		{
			table = "Civilian";
			positions[] = {{-2.06793, -3.41797, -1.08627}, {0.886169, 4.17969, -1.08733}, {-2.90967, 3.9873, -1.08697}, {-2.92603, -0.64502, -1.08615}
			};
		};

		class Land_Shop_City_01_F
		{
			table = "Commercial";
			positions[] = {{1.18323, 0.0922852, -4.91619}, {6.22626, 4.52588, -4.9378}, {2.29846, 4.09277, -4.94828}
			};
		};

		class Land_Shop_City_02_F
		{
			table = "Commercial";
			positions[] = {{-0.675201, -5.24316, -4.36327}, {-2.94293, -7.92676, -4.36245}, {-10.3821, -2.96924, -4.35083}, {-8.8096, -7.85156, -4.35083}, {1.24158, -7.73242, -4.3625}, {1.84985, -2.86328, -4.36363}, {7.10519, -3.02295, -4.36247}, {1.10577, -0.0512695, -4.36428}, {6.86386, 1.68848, -4.36254}, {4.33301, 7.78174, -4.368}, {6.64581, 9.625, -4.36479}
			};
		};

		class Land_FireEscape_01_short_F
		{
			table = "Civilian";
			positions[] = {{-1.92456, -2.33057, 5.87384}, {-0.687744, 1.20215, 4.12385}, {-1.83334, -2.31396, 2.36634}, {-1.86963, -2.36035, -1.14366}, {-1.8194, 1.26514, 0.616343}
			};
		};

		class Land_FireEscape_01_tall_F
		{
			table = "Civilian";
			positions[] = {{-0.839661, -0.429199, 5.98783}, {-1.03955, 3.11719, 4.23783}, {-1.88132, -0.458496, 2.48032}, {-1.98297, 3.11963, -2.77967}, {-1.7475, -0.564453, -1.02967}
			};
		};

		class Land_House_Big_05_F
		{
			table = "Civilian";
			positions[] = {{-8.4136, -4.73389, -1.50791}, {-2.1731, -4.72119, -1.50986}, {5.57956, -4.89111, -1.10227}, {4.74078, 5.41748, -1.1154}, {-2.39563, 5.27197, -1.50986}, {-8.5723, 5.36475, -1.50889}
			};
		};

		class Land_Addon_01_F
		{
			table = "Civilian";
			positions[] = {{-0.162262, -3.75, -1.17012}, {-0.0673828, 3.73633, -1.17012}
			};
		};

		class Land_Addon_04_F
		{
			table = "Civilian";
			positions[] = {{-5.5575, -6.90771, 0.333342}, {-4.92792, 4.2417, 0.333342}, {5.39682, -0.76123, 0.333343}, {2.92578, -6.26123, 0.333342}, {-3.0574, 1.4624, 0.333342}, {-0.601196, -0.920898, 0.333342}, {5.26059, 4.20752, 0.333342}
			};
		};

		class Land_Shop_City_05_F
		{
			table = "Commercial";
			positions[] = {{0.827393, -10.8149, -7.26246}, {-1.22951, -12.0522, -7.27676}
			};
		};

		class Land_Shop_City_03_F
		{
			table = "Commercial";
			positions[] = {{1.4767, -7.66504, -4.96703}, {5.70377, -2.34131, -4.95675}, {1.59322, 2.7832, -4.97481}, {3.5081, 9.0791, -4.97082}
			};
		};

		class Land_Shop_City_06_F
		{
			table = "Commercial";
			positions[] = {{-5.3772, -6.00781, -4.04819}, {-5.99379, 0.533691, -4.0484}, {-3.99609, 7.38623, -4.04862}, {1.19998, 8.27539, -2.34276}, {-4.85144, 7.39014, -0.319801}, {7.30609, 3.1167, -0.319942}, {-4.53831, 2.94531, -0.318829}, {-1.19354, 7.81641, -0.319835}
			};
		};

		class Land_Shop_City_07_F
		{
			table = "Commercial";
			positions[] = {{2.7469, 2.46387, 0.0339336}, {1.1144, 7.68164, 0.0339508}, {-3.86372, 7.56201, 3.63137}, {-2.88173, -5.72949, 3.63136}, {2.03906, -0.931641, 3.63136}, {2.27966, -6.27881, 3.63136}
			};
		};

		class Land_MultistoryBuilding_01_F
		{
			table = "Commercial";
			positions[] = {{10.3646, -11.7373, -21.0179}, {10.9926, -2.41699, -21.018}, {10.8797, 3.23242, -21.018}, {19.1703, 3.99951, -21.0179}, {19.2338, -12.2734, -21.018}, {-18.4634, 16.6816, -21.0179}, {-5.52731, 16.2871, -21.0179}, {-18.555, -11.5474, -21.0179}, {-18.4026, 2.79199, -21.0179}, {-11.7448, -8.86279, 19.2657}, {-12.1009, 9.86328, 19.2656}, {17.3746, -10.2432, 19.2657}, {9.97755, 1.6665, 19.2657}, {18.8899, 10.8208, 19.2657}
			};
		};

		class Land_MultistoryBuilding_04_F
		{
			table = "Commercial";
			positions[] = {{8.58585, -11.7158, -36.3151}, {-2.73436, -11.4868, -36.3152}, {-11.4193, -11.5947, -36.3152}, {-10.7024, 0.208008, -36.3152}, {-10.8938, 10.6709, -36.3152}, {-4.59261, 10.0254, 22.396}, {9.54498, 10.1509, 22.396}, {10.3787, -5.79199, 22.396}
			};
		};

		class Land_School_01_F
		{
			table = "Civilian";
			positions[] = {{12.5829, -4.72314, -1.3499}, {5.64906, -4.41797, -1.3499}, {-2.35116, -4.51416, -1.34991}, {-13.0124, -4.5957, -1.3499}, {-13.5541, 3.14209, -1.25486}, {-13.1472, -1.72852, -1.25354}, {-7.8992, -1.9585, -1.24099}, {-2.83229, -1.9165, -1.24139}, {-0.00878716, 3.48877, -1.25486}, {5.56185, -1.90625, -1.24072}, {13.2059, 3.23486, -1.24905}, {13.2425, -1.62842, -1.24132}, {0.097558, -1.6709, -1.24214}
			};
		};

		class Land_House_Big_03_F {
			table = "Civilian";
			positions[] = {{2.81361, -1.31836, -3.17496}, {5.83369, -4.93799, -3.17496}, {9.58751, -1.87451, -3.17496}, {10.1001, 5.53369, -3.20496}, {3.31785, 5.73145, -3.20496}, {10.4125, 0.702148, -3.17496}, {1.97136, 3.28271, -3.17496}, {-11.5872, -4.88965, -0.111648}, {-12.0157, 4.62109, -0.111648}, {-7.68954, -5.24902, -0.111648}, {2.43372, -5.17139, -0.111647}, {9.50365, -4.35547, -0.111646}, {9.58155, 5.29199, -0.111646}, {2.44902, 5.5708, -0.111649}, {3.10835, -2.11768, -0.0905371}, {7.9266, -1.31445, -0.090538}, {7.36005, 3.07031, -0.090538}, {2.70773, 2.98096, -0.090538}
			};
		};

		class Land_MobileCrane_01_F
		{
			table = "Industrial";
			positions[] = {{7.85629, 5.55029, -19.4707}, {12.0654, 5.69873, -19.4707}, {10.0373, 2.60645, -19.0873}, {6.98733, -2.43115, -19.0873}, {13.9328, -2.59424, -14.0242}, {13.9299, 2.29443, -14.0242}, {8.70084, 2.69189, -14.0242}, {8.80087, -2.91406, -14.0242}, {11.6297, -5.54541, -19.4707}, {7.02059, 2.59668, -19.0873}, {10.1519, -2.59424, -19.0873}
			};
		};

		class Land_MobileCrane_01_hook_F
		{
			table = "Industrial";
			positions[] = {{11.0956, -5.58643, -19.4707}, {6.91805, -2.21387, -19.0873}, {6.82528, 2.53857, -19.0873}, {13.3552, -2.09229, -14.0242}, {8.42605, -2.42188, -14.0242}, {13.9843, 2.74951, -14.0242}, {8.44981, 2.72217, -14.0242}, {10.0628, 2.66943, -19.0873}, {12.0439, 5.68994, -19.4707}, {7.33242, 5.74414, -19.4707}, {7.36204, -5.54248, -19.4707}
			};
		};

		class Land_House_Native_01_F
		{
			table = "Civilian";
			positions[] = {{-3.92445, 2.28174, -3.10247}, {3.39246, -1.94092, -3.10247}, {-3.28581, -1.92529, -3.10247}, {3.17792, 2.13477, -3.10247}, {-0.199219, -2.16943, -3.10247}
			};
		};

		class Land_House_Native_02_F
		{
			table = "Civilian";
			positions[] = {{1.9373, 1.4082, -2.41631}, {1.87907, -1.9209, -2.41631}, {-3.27092, 1.9707, -2.41631}, {-3.23453, -2.0166, -2.41631}
			};
		};

		class Land_Temple_Native_01_F
		{
			table = "Civilian";
			positions[] = {{3.20041, -2.3374, -5.95458}, {-3.14743, -2.46436, -5.95458}, {2.58812, 0.324219, -5.95457}, {2.43742, 3.89014, -5.95457}, {-2.53903, 0.67041, -5.95458}, {-2.64441, 4.02686, -5.95457}, {-3.061, 6.80176, -5.95458}, {3.79857, 6.44727, -5.95457}
			};
		};

		class Land_DPP_01_mainFactory_F
		{
			table = "Industrial";
			positions[] = {{-21.92, 4.79346, -9.16247}, {-21.8768, -14.186, -9.18247}, {15.5463, -18.0396, -4.11747}, {17.3237, -14.4956, -4.11747}, {17.8664, -10.7212, -4.11747}, {15.7866, -7.29785, -4.11747}, {12.6862, -4.30322, -4.25747}, {12.8652, -2.36035, -4.25747}, {12.7665, 4.97803, -4.25747}, {12.8564, 6.83545, -5.54747}, {19.0106, -5.35059, -5.54747}, {18.969, 2.31885, -5.54747}, {20.6808, -4.05322, -7.44347}, {20.4157, 1.51514, -7.44347}, {21.2942, 4.77588, -7.44347}, {19.0013, 5.16553, -7.64927}, {8.50312, 8.93994, -0.31447}, {10.524, -1.4873, -0.314478}, {4.05009, 8.87256, 1.14823}, {-0.406693, -0.691895, 1.14823}, {-7.21104, 2.40869, 1.14823}, {-4.97194, -10.0967, 1.14823}, {1.74726, -14.9678, 1.14823}
			};
		};

		class Land_DPP_01_smallFactory_F
		{
			table = "Industrial";
			positions[] = {{10.0669, -5.00342, 0.989646}, {10.1559, 2.146, 0.989654}, {0.462799, 3.25684, 2.4038}, {-2.98578, 3.05713, 2.40379}
			};
		};

		class Land_dp_smallFactory_F
		{
			table = "Industrial";
			positions[] = {{10.0669, -5.00342, 0.989646}, {10.1559, 2.146, 0.989654}, {0.462799, 3.25684, 2.4038}, {-2.98578, 3.05713, 2.40379}
			};
		};

		class Land_i_Shed_Ind_F
		{
			table = "Industrial";
			positions[] = {{14.0747, 6.86572, -1.56921}, {-1.59459, -0.653809, -1.56921}, {-3.98872, 6.8667, -1.56921}, {10.0919, -0.314453, -1.56921}, {-5.87579, -0.795898, -1.56921}, {-5.62433, 1.68408, -1.56921}
			};
		};

		class Land_SM_01_shed_F
		{
			table = "Industrial";
			positions[] = {{14.0747, 6.86572, -1.56921}, {-1.59459, -0.653809, -1.56921}, {-3.98872, 6.8667, -1.56921}, {10.0919, -0.314453, -1.56921}, {-5.87579, -0.795898, -1.56921}, {-5.62433, 1.68408, -1.56921}
			};
		};

		class Land_SM_01_shed_unfinished_F
		{
			table = "Industrial";
			positions[] = {{-7.00366, 6.81445, -1.61709}, {-5.36069, 1.57568, -1.61709}, {-5.80513, -1.16357, -1.61709}, {3.29742, 0.314453, -1.61709}, {14.6968, -0.174316, -1.61709}, {3.89108, 7.02344, -1.61709}
			};
		};

		class Land_SY_01_conveyor_end_F
		{
			table = "Industrial";
			positions[] = {{3.50247, 2.69287, -3.35729}, {3.48972, -2.6001, 1.40514}, {1.32748, 2.69922, 5.25539}, {-1.38519, 2.59424, 5.25539}, {-1.37393, -1.79199, 5.25539}
			};
		};

		class Land_SY_01_crusher_F
		{
			table = "Industrial";
			positions[] = {{-7.73892, 1.16895, -1.09281}, {7.70358, 16.8159, -1.07898}, {-7.75183, 15.2749, -1.07731}, {7.88333, 2.37988, -1.08442}, {0.680634, 1.1582, -1.09289}, {-6.45386, 11.2256, 11.4876}, {6.70441, 9.83057, 11.5466}, {0.257385, 9.21436, -11.2428}
			};
		};

		class Land_SY_01_reclaimer_F
		{
			table = "Industrial";
			positions[] = {{-12.5131, 0.818359, -2.44122}, {-14.1992, 4.99902, -2.43626}
			};
		};
		
		class Land_Barn_W_01 
		{
			table = "Industrial";
			positions[] = {{4.80933,-16.4067,-2.63218},{-3.96802,-18.3599,-2.63184},{1.125,-2.99658,-2.63452},{4.46094,16.3979,-2.6379},{-4.21777,16.0718,-2.63784}
			};
		};
		
		class Land_Barn_W_02 
		{
			table = "Industrial";
			positions[] = {{4.07202,-5.87305,-2.30336},{-5.76001,-6.05322,-2.31093},{3.42773,4.25879,-2.31514},{-4.55078,4.34424,-2.3084}
			};
		};
		
		class Land_Ind_Pec_01 
		{
			table = "Industrial";
			positions[] = {{1.99097,-11.2202,-22.5782},{4.33423,-6.77637,-17.5766},{-6.45752,4.51611,-22.5782},{-1.75439,-3.19727,-3.965},{-1.13135,-6.21826,6.08639},{0.0241699,-9.7417,14.5424},{4.77417,-2.64502,14.5425},{-0.303223,-14.2153,1.0274}
			};
		};
		
		class Land_Ind_Expedice_1 
		{
			table = "Industrial";
			positions[] = {{13.1108,-12.583,-5.7587},{-0.0917969,-1.2749,-3.48817},{-1.82178,13.0806,-3.48817},{2.92163,17.8716,-5.68533},{-11.9666,-12.8394,-3.48816}
			};
		};

		class Land_SCF_01_boilerBuilding_F
		{
			table = "Industrial";
			positions[] = {{20.4062, 1.76416, -13.1931}, {12.6199, 2.29736, -13.1931}, {19.1641, 12.5249, -13.1931}, {13.0838, 13.4111, -13.1931}, {19.3361, 6.896, -13.193}, {21.7828, 1.04639, -8.64783}, {11.6639, 1.13867, -8.64783}, {11.6371, -1.03662, -5.52507}, {11.9275, -8.00977, -5.52507}, {-2.03784, 23.6602, -13.1631}, {18.4623, 9.35156, -8.62783}
			};
		};

		class Land_SCF_01_chimney_F
		{
			table = "Industrial";
			positions[] = {{-2.89178, -3.82471, -8.19502}, {-1.37646, 4.09912, -8.19501}, {-5.56982, 0.607422, -8.19502}, {-2.37286, -3.05908, 24.3167}, {-0.946167, 2.91748, 24.3167}
			};
		};

		class Land_SCF_01_clarifier_F
		{
			table = "Industrial";
			positions[] = {{5.16095, -5.48291, -2.02836}, {5.43793, 1.60498, 0.396125}, {-0.846191, -4.61816, 0.396124}, {-7.2016, 2.52979, 0.396124}, {2.42871, 5.18262, 0.396125}, {-1.64771, 0.993652, 8.5348}
			};
		};

		class Land_SCF_01_condenser_F
		{
			table = "Industrial";
			positions[] = {{3.0542, -1.01611, 1.98746}, {6.01874, 0.0473633, 1.98747}, {3.11456, 3.13037, 1.98746}, {-7.3927, 13.7788, -1.52646}, {-4.51294, 7.1416, -1.52646}, {-7.06055, 10.3657, -1.52646}
			};
		};

		class Land_SCF_01_crystallizerTowers_F
		{
			table = "Industrial";
			positions[] = {{-9.3371, -3.31641, -9.8089}, {-3.36139, -2.99854, -6.95771}, {4.14148, -3.05127, -6.95771}, {-0.121643, -0.0981445, -7.18977}, {1.98773, 2.02637, 12.1745}, {6.20105, -3.16553, 12.1745}, {-6.76501, -0.98584, 12.9881}, {-2.0943, 2.76416, 12.37}
			};
		};

		class Land_SCF_01_crystallizer_F
		{
			table = "Industrial";
			positions[] = {{2.2359, 8.30762, -5.88057}, {8.7561, 7.07324, -2.84587}, {2.21698, 8.77686, -0.447963}, {8.15094, 1.03223, -0.440189}, {0.874512, 1.38867, -0.440188}, {7.10388, 4.74316, -0.440193}, {-8.89655, 1.19043, -0.440192}, {-7.01703, 4.94238, -0.440189}, {1.51508, 6.84766, 4.98345}, {-8.77814, 4.89258, 5.00417}, {-8.59552, -0.862305, 5.01047}, {4.62744, -0.416016, 5.00403}, {5.25385, 4.87744, 5.00415}
			};
		};

		class Land_SCF_01_diffuser_F
		{
			table = "Industrial";
			positions[] = {{-6.1275, 16.5728, -2.34902}, {-7.93939, 23.563, -2.34902}, {6.34424, 23.2031, -2.34902}, {6.09753, 9.38672, -2.34902}, {1.71259, 5.66504, 0.989358}, {-3.52942, 5.32617, 0.983278}, {6.54865, -8.6416, -2.34902}, {6.21283, -22.5537, 2.35732}, {3.62836, -21.2036, 2.35732}, {-5.05341, -21.7944, 2.35732}, {-7.55786, -19.8203, 2.35732}, {-3.86725, -17.2979, 4.55072}, {0.824524, -13.2207, 4.55072}, {4.81476, -19.0898, 4.55072}, {4.96899, -13.124, 4.55072}
			};
		};

		class Land_SCF_01_feeder_F
		{
			table = "Industrial";
			positions[] = {{4.57166, 17.146, -3.2917}, {-1.12738, 17.4243, -3.2917}, {-4.72894, 11.957, -3.2917}
			};
		};

		class Land_SCF_01_generalBuilding_F
		{
			table = "Industrial";
			positions[] = {{13.7668, 3.3667, -4.84506}, {5.23486, -14.1592, -4.82014}, {2.16504, -16.2207, -0.336995}, {3.49451, -20.2495, -0.336994}, {5.50555, -23.8975, -0.330949}, {1.70123, -21.7822, -4.82014}, {-4.39288, -15.479, -4.82014}, {-5.02173, -21.3472, -4.82014}, {-5.44708, -23.9912, -0.328772}, {-3.40857, -15.0322, -0.336995}, {-4.04376, -19.9419, -0.333236}, {-7.72589, -8.42334, -0.306211}, {-2.13281, -21.9604, 9.71007}, {-2.1366, -3.09473, 9.71008}
			};
		};

		class Land_SCF_01_storageBin_big_F
		{
			table = "Industrial";
			positions[] = {{4.19385, -9.50781, 8.08185}, {-7.11786, 7.35254, 8.08648}, {-7.30212, -6.74121, 8.09786}, {1.07813, -2.38184, 8.36898}, {5.74097, 7.80664, 8.11623}
			};
		};

		class Land_SCF_01_storageBin_medium_F
		{
			table = "Industrial";
			positions[] = {{-3.46143, 5.7192, 6.799}, {4.72754, -1.49947, 6.88451}, {-4.22803, -3.10316, 6.85781}};
		};

		class Land_SCF_01_storageBin_small_F
		{
			table = "Industrial";
			positions[] = {{-0.780762, 3.31348, 7.58101}, {1.15662, -0.510254, 7.53981}
			};
		};

		class Land_SCF_01_warehouse_F
		{
			table = "Industrial";
			positions[] = {{4.28088, -12.4028, -4.56458}, {8.55493, -13.3931, -4.56458}, {16.1413, 14.8442, -4.53404}, {-9.50293, 16.6538, -4.56258}, {-11.0309, 13.7896, -4.56258}
			};
		};

		class Land_SCF_01_washer_F
		{
			table = "Industrial";
			positions[] = {{-5.66089, -10.9932, -1.77585}, {-4.77167, 8.43359, -1.77585}, {0.351501, 9.09912, -1.77585}, {3.99756, 7.39648, -1.77585}, {5.72986, 2.22656, 2.2026}, {5.43201, 0.609375, -1.77584}, {5.75275, -11.5483, -1.77584}, {-5.56262, 1.96045, 2.20261}, {-2.67273, 7.06201, 3.2295}, {2.84528, 7.07959, 3.2295}, {-5.63361, -4.71387, -1.77585}
			};
		};

		class Land_Warehouse_03_F
		{
			table = "Industrial";
			positions[] = {{-10.0099, 4.12891, -2.36559}, {4.32355, -0.524414, -2.36164}, {6.4068, 4.54395, -2.36594}, {6.07056, 4.87842, 0.188947}, {7.8252, 1.41455, 0.199012}, {5.80853, -0.0791016, -2.36267}, {-3.52875, 4.18555, -2.36564}
			};
		};

		class Land_MilOffices_V1_F
		{
			table = "Military";
			positions[] = {{-16.1816, 10.5855, -2.8682}, {-15.25, 7.0052, -2.8682}, {-14.397, 4.58313, -2.8682}, {-15.9063, 0.529099, -2.8682}, {-16.1011, -1.63214, -2.8682}, {-13.9727, -4.74777, -2.8682}, {-11.3452, -4.54674, -2.8682}, {-9.02881, -4.78514, -2.8682}, {-6.62061, -1.74809, -2.8682}, {-4.65186, -4.65324, -2.8682}, {-2.29053, -2.09383, -2.8682}, {-0.324707, -4.71222, -2.8682}, {0.648926, -1.75002, -2.8682}, {4.48535, 10.3548, -2.8682}, {4.16016, 7.36406, -2.8682}, {-0.951172, 10.0732, -2.8682}, {-2.95361, 10.4825, -2.8682}, {-5.6792, 7.17572, -2.8682}, {-10.2358, 10.4713, -2.8682}, {-8.00684, 7.69765, -2.8682}, {15.668, 2.64484, -2.8682}, {15.8232, 10.4867, -2.8682}, {6.89941, 9.9433, -2.8682}, {15.6289, 5.74121, -2.8682}, {8.72412, -1.60283, -2.8682}, {8.59863, -4.65935, -2.8682}};
		};

		class Land_Barracks_01_dilapidated_F
		{
			table = "Military";
			positions[] = {{-1.69293, -3.85742, 0.535027}, {-12.5613, 0.0180664, 0.604081}, {-12.6066, -1.79248, 0.604081}, {-7.84314, -3.68848, 0.604081}, {-8.02209, 3.86475, 0.604081}, {-12.5088, 1.94385, 0.604081}, {0.59137, 3.8667, 0.604081}, {-5.06348, 2.19873, 0.604081}, {6.8587, -3.54736, 0.604081}, {3.14551, -3.66699, 0.604081}, {6.78778, 3.72412, 0.604081}, {3.31708, 2.07324, 0.604081}, {13.371, 2.21875, 0.604082}, {9.73486, 3.48438, 0.604081}, {15.7028, 5.6084, 3.85243}, {-13.0049, 5.65723, 3.85243}, {-12.5955, 3.93408, 3.93806}, {-7.83679, 3.90479, 3.93806}, {-12.5541, 0.0922852, 3.93806}, {-12.6505, -1.86865, 3.93806}, {-7.92334, -3.67725, 3.93806}, {-2.42621, -4.33789, 3.93752}, {-5.72375, -4.66895, 3.93806}, {0.371094, 3.86523, 3.93806}, {-5.55957, 1.91016, 3.93806}, {9.55927, -3.80859, 3.93806}, {13.5131, -3.75439, 3.93806}, {13.6052, 3.84033, 3.93806}, {9.46393, 1.98193, 3.93806}, {2.94727, 1.94189, 3.93806}, {7.06958, 3.84863, 3.93806}, {3.01563, -3.69629, 3.93806}, {7.1875, -3.72266, 3.93806}, {9.89056, -3.63623, 0.604081}, {13.7531, -3.41455, 0.604081}
			};
		};

		class Land_Barracks_01_grey_F
		{
			table = "Military";
			positions[] = {{-1.69293, -3.85742, 0.535027}, {-12.5613, 0.0180664, 0.604081}, {-12.6066, -1.79248, 0.604081}, {-7.84314, -3.68848, 0.604081}, {-8.02209, 3.86475, 0.604081}, {-12.5088, 1.94385, 0.604081}, {0.59137, 3.8667, 0.604081}, {-5.06348, 2.19873, 0.604081}, {6.8587, -3.54736, 0.604081}, {3.14551, -3.66699, 0.604081}, {6.78778, 3.72412, 0.604081}, {3.31708, 2.07324, 0.604081}, {13.371, 2.21875, 0.604082}, {9.73486, 3.48438, 0.604081}, {15.7028, 5.6084, 3.85243}, {-13.0049, 5.65723, 3.85243}, {-12.5955, 3.93408, 3.93806}, {-7.83679, 3.90479, 3.93806}, {-12.5541, 0.0922852, 3.93806}, {-12.6505, -1.86865, 3.93806}, {-7.92334, -3.67725, 3.93806}, {-2.42621, -4.33789, 3.93752}, {-5.72375, -4.66895, 3.93806}, {0.371094, 3.86523, 3.93806}, {-5.55957, 1.91016, 3.93806}, {9.55927, -3.80859, 3.93806}, {13.5131, -3.75439, 3.93806}, {13.6052, 3.84033, 3.93806}, {9.46393, 1.98193, 3.93806}, {2.94727, 1.94189, 3.93806}, {7.06958, 3.84863, 3.93806}, {3.01563, -3.69629, 3.93806}, {7.1875, -3.72266, 3.93806}, {9.89056, -3.63623, 0.604081}, {13.7531, -3.41455, 0.604081}
			};
		};

		class Land_Barracks_01_camo_F
		{
			table = "Military";
			positions[] = {{-1.69293, -3.85742, 0.535027}, {-12.5613, 0.0180664, 0.604081}, {-12.6066, -1.79248, 0.604081}, {-7.84314, -3.68848, 0.604081}, {-8.02209, 3.86475, 0.604081}, {-12.5088, 1.94385, 0.604081}, {0.59137, 3.8667, 0.604081}, {-5.06348, 2.19873, 0.604081}, {6.8587, -3.54736, 0.604081}, {3.14551, -3.66699, 0.604081}, {6.78778, 3.72412, 0.604081}, {3.31708, 2.07324, 0.604081}, {13.371, 2.21875, 0.604082}, {9.73486, 3.48438, 0.604081}, {15.7028, 5.6084, 3.85243}, {-13.0049, 5.65723, 3.85243}, {-12.5955, 3.93408, 3.93806}, {-7.83679, 3.90479, 3.93806}, {-12.5541, 0.0922852, 3.93806}, {-12.6505, -1.86865, 3.93806}, {-7.92334, -3.67725, 3.93806}, {-2.42621, -4.33789, 3.93752}, {-5.72375, -4.66895, 3.93806}, {0.371094, 3.86523, 3.93806}, {-5.55957, 1.91016, 3.93806}, {9.55927, -3.80859, 3.93806}, {13.5131, -3.75439, 3.93806}, {13.6052, 3.84033, 3.93806}, {9.46393, 1.98193, 3.93806}, {2.94727, 1.94189, 3.93806}, {7.06958, 3.84863, 3.93806}, {3.01563, -3.69629, 3.93806}, {7.1875, -3.72266, 3.93806}, {9.89056, -3.63623, 0.604081}, {13.7531, -3.41455, 0.604081}
			};
		};

		class Land_BagBunker_01_large_green_F
		{
			table = "Military";
			positions[] = {{-3.14728, -3.43408, -0.839155}, {-1.14655, 1.00586, -0.836318}, {3.11304, -3.87305, -0.834461}, {0.91864, 0.737793, -0.831506}, {-1.09125, 3.10645, -0.846669}
			};
		};

		class Land_HBarrier_01_tower_green_F
		{
			table = "Military";
			positions[] = {{0.400085, 1.87744, 0.482887}, {-0.725647, -2.3208, 0.482884}, {-0.749512, 1.93896, -2.29711}, {-0.959229, -2.50342, -2.29711}
			};
		};

		class Land_HBarrier_01_big_tower_green_F
		{
			table = "Military";
			positions[] = {{-0.0388794, -2.06543, -0.0721803}, {-0.5849, 1.0791, -0.0721803}
			};
		};

		class Land_Cargo_House_V4_F
		{
			table = "Military";
			positions[] = {{1.93024, 3.46777, -0.134219}, {-1.99597, 0.757813, -0.270255}
			};
		};

		class Land_Cargo_HQ_V4_F
		{
			table = "Military";
			positions[] = {{-2.59113, -4.27148, -0.748882}, {-2.59424, 2.74121, -0.748883}, {6.12561, -1.43262, -0.748886}, {4.92139, 3.66553, -0.748884}, {2.82428, -4.5127, -0.673725}, {6.75214, 0.595215, -3.27373}, {3.83301, -4.36865, -3.27373}, {-1.38422, -4.49805, -3.27373}, {-1.2486, 2.95898, -3.27373}, {3.09406, 3.60059, -3.27373}
			};
		};

		class Land_Cargo_Patrol_V4_F
		{
			table = "Military";
			positions[] = {{1.79944, 0.629883, -2.9121}, {1.91803, -1.25488, -0.560959}, {-1.87482, 1.36816, -0.764956}, {-1.87756, -1.37646, -0.560959}
			};
		};

		class Land_Cargo_Tower_V4_F
		{
			table = "Military";
			positions[] = {{-3.17126, 4.56006, 5.00328}, {4.43848, 3.68555, 5.00327}, {4.6236, -2.42139, 5.00327}, {-3.37885, -5.12842, 4.90572}, {-3.29187, -1.0376, 5.00328}, {0.343079, 1.63135, 5.07844}, {-5.09668, 4.59131, 2.47844}, {-4.39246, -5.45313, 2.61447}, {-1.25903, -0.762695, 2.47844}, {6.07666, 4.14551, 2.6936}, {4.90717, -1.02637, 2.47844}, {1.21716, -0.616699, -0.121563}, {-4.05151, -3.43164, -0.121563}, {-3.77576, 4.30664, 0.108913}, {4.41241, 4.19043, -0.121563}, {-3.32153, 1.43799, -4.29724}, {-2.58942, 3.13281, -4.29724}, {1.42841, 2.67432, -8.24476}
			};
		};

		class Land_PillboxBunker_01_big_F
		{
			table = "Military";
			positions[] = {{-2.7843, 4.40234, -0.79799}, {0.65155, 4.40039, -0.79799}, {3.16467, -0.414063, -0.79799}, {-0.919983, 1.5918, 1.43985}
			};
		};

		class Land_PillboxBunker_01_hex_F
		{
			table = "Military";
			positions[] = {{-1.9942, -0.828613, -0.959151}, {-2.32397, 1.28271, -0.97937}
			};
		};

		class Land_PillboxBunker_01_rectangle_F
		{
			table = "Military";
			positions[] = {{-0.931946, 1.00244, -0.390276}, {-1.341, -0.984375, 0.111176}
			};
		};

		class Land_Cathedral_01_F
		{
			table = "Civilian";
			positions[] = {{12.4813, -13.7446, -10.1117}, {11.6747, -9.44678, -11.2517}, {12.2565, -17.9878, -11.2227}, {3.78693, -14.6914, -12.7812}, {-3.62018, -15.4463, -12.7812}, {-12.1761, -18.0459, -11.2227}, {-12.5489, -13.8569, -10.1117}, {-11.6001, -9.25293, -11.2517}, {-7.80066, -13.1929, -8.7991}, {2.38251, -13.2998, -7.80105}, {-3.08685, -14.3218, -7.80105}, {7.91278, -13.8066, -8.7991}, {8.16644, -0.892578, -9.3812}, {-8.27832, -1.06299, -9.3812}
			};
		};

		class Land_Church_01_F
		{
			table = "Civilian";
			positions[] = {{8.10126, -0.416504, -9.91359}, {8.00543, 7.06006, -9.86603}, {-7.94092, 1.38867, -9.84217}, {-7.92584, 8.74805, -9.84217}
			};
		};

		class Land_Church_02_F
		{
			table = "Civilian";
			positions[] = {{2.1095, -17.0308, -3.31493}, {-1.98883, -17.0156, -3.31492}
			};
		};

		class Land_Mausoleum_01_F
		{
			table = "Civilian";
			positions[] = {{1.35419, -1.64746, -1.89905}, {-1.00244, 1.26172, -1.88787}
			};
		};

		class Land_GuardHouse_01_F
		{
			table = "Civilian";
			positions[] = {{4.39807, 1.53076, -0.987735}, {-1.53021, 2.07129, -0.987734}, {3.81836, -4.1709, -1.00742}, {-1.42365, -0.541016, -1.00742}, {-1.45483, -4.01563, -1.00742}
			};
		};

		class Land_FuelStation_01_shop_F
		{
			table = "Commercial";
			positions[] = {{1.34039, -0.319824, -2.01301}, {-4.40387, -2.54102, -2.01301}, {-4.43878, -0.146484, -2.01301}, {-4.48163, 4.30127, -2.01301}, {1.37292, 1.87549, -2.01301}
			};
		};

		class Land_FuelStation_02_workshop_F
		{
			table = "Mechanical";
			positions[] = {{-4.65692, 7.44629, -1.2575}, {-2.69397, -0.881348, -1.2575}, {3.96014, -0.874023, -1.2575}, {1.59766, 7.14111, -1.2575}, {4.02576, 3.44238, -1.2575}
			};
		};

		class Land_Hotel_01_F
		{
			table = "Commercial";
			positions[] = {{3.96973, -4.05664, -5.28721}, {3.93524, 4.78174, -5.28721}, {0.112183, 2.06885, -5.28721}, {-5.19159, 5.24316, -5.28721}, {-5.53912, -4.07227, -5.28721}, {-8.18829, 0.800781, -1.56211}, {-7.80768, 7.61572, -1.56212}, {6.01831, 7.55127, -1.56212}, {5.84296, -5.86084, -1.56211}, {-7.78247, -6.09717, -1.56211}, {-3.86163, 0.643066, -1.56212}, {-0.725769, 4.19727, -1.56212}, {2.85748, 0.849121, -1.56212}, {-1.03076, -3.27588, -1.56211}, {1.3125, 0.710449, 1.68788}, {-0.789001, 4.49854, 1.68789}, {-4.82312, 0.928711, 1.68788}, {5.86011, 7.3125, 4.51359}, {6.05499, 7.36133, 1.68789}, {-2.10968, 7.91797, 1.68789}, {-7.46893, 7.12549, 1.68789}, {6.11334, -6.15576, 1.68788}, {-7.67957, -5.83838, 1.68788}, {-7.62677, 1.54541, 1.68788}, {-7.32611, 7.44043, 4.51359}, {-7.36676, -5.59521, 4.51364}, {5.93842, -5.94629, 4.51364}, {-0.767456, 4.4707, 4.51355}, {-5.61255, -1.47998, 4.51355}, {3.86053, -4.14502, 4.51363}, {1.37054, -1.40869, 4.51358}
			};
		};

		class Land_Hotel_02_F
		{
			table = "Commercial";
			positions[] = {{6.9483, -0.910156, -3.38828}, {3.59357, 3.63965, -3.38828}, {-7.33313, -1.19873, -3.38828}, {-2.39691, 1.2168, -3.38828}, {-1.81409, 12.2061, -3.38828}, {-2.21124, -9.90088, -3.38828}, {-7.5498, 1.07813, 0.107927}, {0.997925, 2.77393, 0.107927}, {4.06665, -0.816406, 0.226008}
			};
		};

		class Land_Offices_01_V1_F
		{
			table = "Commercial";
			positions[] = {{11.7757, 6.68115, -7.06043}, {9.26523, 1.76611, -7.06043}, {-14.7141, 5.92773, -7.06043}, {0.595245, -5.12402, -7.06043}, {6.3175, -6.09131, -3.16043}, {6.37814, 2.47754, -3.1612}, {5.75436, -6.26221, 0.736337}, {5.70242, 2.3208, 0.755594}, {10.5309, -5.43262, 4.66112}, {10.5088, -1.64355, 4.65775}, {5.68307, 2.51416, 4.65285}, {10.9102, -5.58057, 9.85026}, {10.6314, 5.40381, 9.84746}, {-4.27469, -9.28857, 9.86152}, {-10.3628, -0.207031, 9.86283}, {-10.9413, -5.81445, 9.85157}, {-15.5463, -9.02832, 9.85218}, {-11.9033, 6.12891, 9.8623}};
		};

		class Land_Supermarket_01_F
		{
			table = "Commercial";
			positions[] = {{6.30194, -11.0469, -1.53671}, {-4.51752, -11.3296, -1.53671}, {0.467468, -10.2432, -1.53671}, {-4.89508, -7.5459, -1.48064}, {-0.474976, -0.0825195, -1.48064}, {-3.8714, 1.80322, -1.48064}, {4.35724, -2.51172, -1.48064}, {7.13202, 2.08887, -1.48064}, {6.94672, 7.76709, -1.48064}, {3.10266, 7.8999, -1.48064}, {-4.03607, 11.3711, -1.48064}, {-3.44031, 8.20215, -1.48064}, {4.05859, 11.8423, -1.48064}
			};
		};

		class Land_Warehouse_02_F
		{
			table = "Industrial";
			positions[] = {{-2.4668, -12.4736, -3.92001}, {7.32794, -12.4351, -3.92001}, {14.8786, -12.542, -3.92001}
			};
		};

		class Land_StorageTank_01_small_F
		{
			table = "Industrial";
			positions[] = {{-16.3601, 0.801758, -1.05007}, {0.522583, 1.60889, 4.88674}, {0.0722656, -0.759766, 4.88674}, {-1.02252, 1.0459, 4.88673}
			};
		};

		class Land_StorageTank_01_large_F
		{
			table = "Industrial";
			positions[] = {{1.97491, 4.17188, 0.684248}, {8.29785, -9.72461, 0.684288}, {-11.0208, -3.45361, 0.684258}, {1.8186, 17.9902, 1.2294}, {19.0656, 0.043457, 2.1993}, {-6.35602, -16.9229, 1.24216}, {15.979, -9.30664, 1.22207}
			};
		};

		class Land_SM_01_reservoirTower_F
		{
			table = "Industrial";
			positions[] = {{0.744629, 2.54785, -1.95139}, {-0.625549, -2.69141, -1.95139}, {-2.89954, 1.08691, -1.95139}
			};
		};

		class Land_WaterTower_01_F
		{
			table = "Industrial";
			positions[] = {{-0.0684204, -0.130371, 3.76693}
			};
		};

		class Land_House_Small_02_F
		{
			table = "Civilian";
			positions[] = {{-3.23962, -4.72266, -0.71564}, {-0.786072, -4.95947, -0.71564}, {-0.187805, 1.87402, -0.71564}, {-3.37006, 4.82764, -0.71564}, {-3.28796, 1.29834, -0.71564}
			};
		};

		class Land_House_Big_02_F
		{
			table = "Civilian";
			positions[] = {{7.52789, -7.47266, -1.44289}, {7.94958, 7.4585, -1.44289}, {-4.53009, 8.71436, -1.44289}, {-2.10052, 5.26074, -1.44289}, {0.351624, 1.78467, -1.44289}, {4.65405, 3.19971, -1.44289}, {-9.56982, 3.0293, -1.44289}, {-5.66528, -0.0429688, -1.44289}
			};
		};

		class Land_House_Small_03_F
		{
			table = "Civilian";
			positions[] = {{1.85565, -1.06055, -1.32402}, {-1.10022, 4.04395, -1.32402}, {-3.39624, 4.35059, -1.32402}, {-5.51508, -1.06006, -1.32402}, {-3.18793, -1.27197, -1.32402}
			};
		};

		class Land_House_Small_06_F
		{
			table = "Civilian";
			positions[] = {{-3.56342, 1.42627, -1.00212}, {-3.30609, -4.31396, -1.00212}, {1.72375, -4.1626, -1.00212}, {-3.36035, 4.01172, -1.00212}
			};
		};

		class Land_House_Big_01_F
		{
			table = "Civilian";
			positions[] = {{-0.168579, -2.8916, -1.01287}, {-6.79626, -3.13574, -1.01287}, {6.28888, -2.93799, -1.01287}, {6.88696, 4.87793, -1.01287}, {0.589661, 4.896, -1.01287}, {0.561768, -0.488281, -1.01287}, {6.22552, -0.22168, -1.01287}
			};
		};

		class Land_Shed_07_F
		{
			table = "Industrial";
			positions[] = {{3.49219, -1.09473, -1.39405}, {3.34741, 1.29395, -1.39405}, {-3.42761, -0.976074, -1.39405}
			};
		};

		class Land_Shed_05_F
		{
			table = "Industrial";
			positions[] = {{-2.00177, 0.643066, -0.89049}, {1.9892, -1.92578, -0.89049}, {-2.02496, -2.06836, -0.89049}, {1.84515, 0.745605, -0.89049}
			};
		};

		class Land_Shed_02_F
		{
			table = "Industrial";
			positions[] = {{-1.11359, 1.68359, -0.847519}, {0.985229, -0.0498047, -0.844183}
			};
		};

		class Land_Shed_03_F
		{
			table = "Industrial";
			positions[] = {{-0.726868, -0.477051, -0.707936}, {1.9704, -0.0673828, -0.707935}
			};
		};

		class Land_Slum_02_F
		{
			table = "Civilian";
			positions[] = {{3.38623, -0.645996, 0.183215}, {-1.6817, -3.64404, 0.183216}, {2.09442, -3.65576, 0.183216}, {-1.79016, 3.66748, 0.183216}, {1.58813, 2.20703, 0.183216}
			};
		};

		class Land_Slum_01_F
		{
			table = "Civilian";
			positions[] = {{-2.13098, 1.81494, 0.641667}, {4.75482, -1.82471, 0.668514}, {-0.47876, 1.56104, 0.668515}, {4.61261, 1.65479, 0.668515}
			};
		};

		class Land_GarageShelter_01_F
		{
			table = "Mechanical";
			positions[] = {{4.01392, 2.63623, -1.25478}, {0.764343, -1.36768, -1.25478}, {-3.85114, 2.88916, -1.25478}, {-1.22278, -1.68896, -1.25478}
			};
		};

		class Land_Shop_Town_03_F
		{
			table = "Commercial";
			positions[] = {{-0.00872803, -8.08594, -3.36008}, {-5.54944, -8.7085, -3.36202}, {-5.9541, -0.202637, -3.35966}, {-2.71411, -2.58154, -3.35966}, {-0.143982, -0.276855, -3.35966}, {5.16455, -5.21777, -3.35966}, {5.52393, -0.544434, -3.35966}, {-5.91083, 5.50439, -3.35966}, {0.127686, 7.56934, -3.35966}, {2.57611, 2.4585, -3.35966}, {5.67163, 7.2915, -3.35966}
			};
		};

		class Land_Shop_Town_05_F
		{
			table = "Commercial";
			positions[] = {{7.25494, -6.48438, -2.70163}, {-4.45245, -6.21143, -2.70163}, {2.8161, -6.51611, -2.70163}
			};
		};

		class Land_Shop_Town_01_F
		{
			table = "Commercial";
			positions[] = {{3.24677, -6.03857, -3.24511}, {-3.33325, -5.69287, -3.24511}, {-3.68738, 1.44141, -3.24511}, {3.55231, -2.40527, -3.24511}, {-3.48401, -3.26318, -3.24511}, {-3.72571, 4.51416, -3.24511}
			};
		};

		class Land_House_Small_01_F
		{
			table = "Civilian";
			positions[] = {{5.71362, 2.77393, -0.700801}, {1.74152, 2.91113, -0.700801}, {1.97015, -3.09521, -0.700801}, {5.78699, -2.71338, -0.700801}, {-5.24707, 2.52246, -0.700801}, {-0.623718, 2.41797, -0.700801}, {-5.39386, -2.89844, -0.700801}, {-1.83771, -2.96729, -0.700801}
			};
		};

		class Land_Slum_03_F
		{
			table = "Civilian";
			positions[] = {{-5.96301, -3.12549, -0.649454}, {4.46039, -2.96729, -0.649454}, {-6.04901, 0.859863, -0.649454}, {-0.613708, -0.942871, -0.649454}, {-4.32275, 1.02051, -0.649454}, {-4.48254, 6.70654, -0.649455}, {-0.675964, 3.31787, -0.649454}, {1.74304, 2.79688, -0.649454}, {3.23267, 6.64746, -0.649455}, {2.06952, -0.73877, -0.649455}
			};
		};

		class Land_Shop_Town_04_F
		{
			table = "Commercial";
			positions[] = {{-3.46161, -6.2124, -2.43639}, {3.01746, -6.52197, -2.43639}
			};
		};

		class Land_Shop_Town_02_F
		{
			table = "Commercial";
			positions[] = {{-3.1637, -4.87451, -2.14306}, {3.44916, -4.88867, -2.14306}
			};
		};

		class Land_Shed_01_F
		{
			table = "Mechanical";
			positions[] = {{1.75861, 1.10742, -0.914464}, {0.0146484, 1.12256, -0.914464}, {-1.73743, 1.06445, -0.914464}
			};
		};

		class Land_Shed_04_F
		{
			table = "Mechanical";
			positions[] = {{-0.0791626, 0.706543, -0.721425}
			};
		};
		class Land_Shed_W4
		{
			table = "Mechanical";
			positions[] =
			{
				{1.73682,3.6377,-1.31815},
				{-1.80176,2.46289,-1.31815},
				{-1.05566,-1.75488,-1.31815},
				{2.06885,-1.13672,-1.31815}
			};
		};

		class Land_Shed_W01
		{
			table = "Mechanical";
			positions[] =
			{
				{1.5249,0.228516,-1.34076},
				{-1.34961,0.0869141,-1.34076}
			};
		};
	
		class Land_Shed_W02
		{
			table = "Mechanical";
			positions[] =
			{
				{0.447266,2.37109,0.100006},
				{-1.81152,0.0478516,0.100006}
			};
		};
	
		class Land_Shed_M01
		{
			table = "Mechanical";
			positions[] =
			{
				{-0.984375,-0.0146484,-1.11377}
			};
		};
	
		class Land_Shed_M03
		{
			table = "Mechanical";
			positions[] =
			{
				{-0.32959,-0.160156,-0.93576}
			};
		};
	
		class Land_Shed_W03
		{
			table = "Mechanical";
			positions[] =
			{
				{-1.51318,0.166016,-0.782166},
				{1.52832,1.12695,-0.782166}
			};
		};
	};
};
class CfgVehicleSpawns {
	class Buildings {
		class Land_GarageShelter_01_F {
			locations[] = {{2.60669,0.034668,-1.25005}
			};
			directions[] = {180};
		};
		class Land_House_Big_03_F {
			locations[] = {{6.77026,-3.16113,-3.38936}
			};
			directions[] = {90.9637};
		};
		class Land_House_Small_04_F {
			locations[] = {{-1.33447,-5.72168,-1.05337}
			};
			directions[] = {251.81};
		};
		class Land_House_Small_05_F {
			locations[] = {{-2.72168,-1.87256,-1.23374}
			};
			directions[] = {261.001};
		};
		class Land_School_01_F {
			locations[] = {{0.00146484,-4.24023,-1.57045},{6.99841,-3.93652,-1.57045},{13.7524,-3.68555,-1.61162},{-13.9556,-3.69434,-1.57045}
			};
			directions[] = {124.82,124.82,103.163,258.837};
		};
		class Land_House_Small_06_F {
			locations[] = {{3.64514,3.64111,-1.39313}
			};
			directions[] = {74.936};
		};
		class Land_Shed_06_F {
			locations[] = {{2.33594,-1.5708,-1.215},{0.574951,3.30811,-1.215}
			};
			directions[] = {240.455,305.884};
		};
		class Land_Shed_07_F {
			locations[] = {{3.24463,0.289063,-1.19334}
			};
			directions[] = {272.99};
		};
		class Land_Addon_03_F {
			locations[] = {{-2.08667,2.85498,-1.37288}
			};
			directions[] = {0};
		};
		class Land_Addon_04_F {
			locations[] = {{2.33545,5.64941,-3.09596}
			};
			directions[] = {81.9683};
		};
		class Land_FuelStation_01_workshop_F {
			locations[] = {{-3.58813,-1.25781,-2.53379},{2.52588,-1.18896,-2.53379}
			};
			directions[] = {143.066,180.008};
		};
		class Land_FuelStation_01_roof_F {
			locations[] = {{0.929199,-4.22705,-2.96874},{0.552246,4.25635,-2.8793}
			};
			directions[] = {88.727,272.412};
		};
		class Land_FuelStation_02_workshop_F {
			locations[] = {{-2.76379,2.68311,-1.36458}
			};
			directions[] = {178.493};
		};
		class Land_MetalShelter_02_F {
			locations[] = {{-3.0094,6.31982,-2.53849},{-7.5896,4.13184,-2.58269}
			};
			directions[] = {359.991,178.967};
		};
		class Land_FuelStation_02_roof_F {
			locations[] = {{-6.66699,2.45654,-2.40688},{-5.28308,6.86328,-2.44445}
			};
			directions[] = {269.099,91.9652};
		};
		class Land_MetalShelter_01_F {
			locations[] = {{4.56799,-5.29004,-1.56836},{4.73572,-2.22607,-1.56836},{4.77979,1.12451,-1.56836},{4.92883,4.04102,-1.56836}
			};
			directions[] = {87.6316,48.0039,113.241,270.58};
		};
		class Land_Hotel_01_F {
			locations[] = {{-7.40234,-1.85645,-5.50127}
			};
			directions[] = {0};
		};
		class Land_MultistoryBuilding_01_F {
			locations[] = {{13.4235,-11.8364,-20.8827},{12.6835,2.3208,-20.9196},{12.5496,-3.13721,-20.9196},{12.3575,-7.44141,-20.9196}
			};
			directions[] = {90.781,129.967,90.733,90.733};
		};
		class Land_MultistoryBuilding_03_F {
			locations[] = {{-8.17847,1.75049,-25.8977},{-9.08691,1.72754,-25.8977}
			};
			directions[] = {352.662,352.662};
		};
		class Land_Shop_City_03_F {
			locations[] = {{5.67883,-2.56006,-5.107},{4.36108,-0.0917969,-5.10371},{0.976074,5.04053,-5.10353},{1.17896,-5.74658,-5.10401}
			};
			directions[] = {235.877,182.882,176.143,182.882};
		};
		class Land_Shop_City_02_F {
			locations[] = {{1.24805,-10.1792,-4.38337},{2.22461,-10.3315,-4.42472},{3.02271,-10.3169,-4.46243},{3.79883,-10.2437,-4.41579}
			};
			directions[] = {105.568,110.874,109.866,113.647};
		};
		class Land_WoodenShelter_01_F {
			locations[] = {{-0.422852,0.0537109,-1.11249}
			};
			directions[] = {176.774};
		};
		class Land_Shop_City_01_F {
			locations[] = {{-2.70569,-3.08887,-5.17591}
			};
			directions[] = {89.0095};
		};
		class Land_Shop_City_06_F {
			locations[] = {{-6.39063,0.680664,-4.38325}
			};
			directions[] = {160.655};
		};
		class Land_MultistoryBuilding_04_F {
			locations[] = {{-13.0975,6.24316,-36.7282},{-13.3356,-0.482422,-36.7282}
			};
			directions[] = {298.955,298.955};
		};
		class Land_Shop_City_05_F {
			locations[] = {{-9.073,-36.6758,-7.46471},{1.22034,-11.5459,-7.46157}
			};
			directions[] = {252.344,183.441};
		};
		class Land_Shop_City_07_F {
			locations[] = {{0.416138,2.33691,-3.30909},{0.440308,5.61621,-3.30862}
			};
			directions[] = {1.38711,1.38811};
		};
		class Land_Warehouse_03_F {
			locations[] = {{8.05029,-0.370117,-2.40732}
			};
			directions[] = {359.972};
		};
		class Land_Warehouse_02_F {
			locations[] = {{0.86377,-17.8154,-5.21577},{11.4291,-17.7988,-5.21577}
			};
			directions[] = {180.796,180.796};
		};
		class Land_WarehouseShelter_01_F {
			locations[] = {{3.39453,-4.16992,-2.85872},{-3.43152,-4.43555,-2.85872}
			};
			directions[] = {181.698,360};
		};
		class Land_SCF_01_crystallizer_F {
			locations[] = {{-5.53345,2.90527,-9.01621},{5.87866,2.62793,-9.01621}
			};
			directions[] = {269.076,90.0837};
		};
		class Land_SCF_01_shed_F {
			locations[] = {{6.4209,-14.1689,-7.21736},{-6.74841,9.47168,-7.21736},{-1.7666,-0.806641,-7.22136},{0.930054,-2.94141,-7.22136}
			};
			directions[] = {0.012765,181.84,26.8011,206.934};
		};
		class Land_SM_01_shed_F {
			locations[] = {{10.884,6.22168,-1.46795},{-0.851929,5.87891,-1.46795}
			};
			directions[] = {268.495,268.495};
		};
		class Land_SM_01_shed_unfinished_F {
			locations[] = {{8.71277,2.2627,-1.51584}
			};
			directions[] = {285.81};
		};
		class Land_SM_01_shelter_wide_F {
			locations[] = {{5.31702,-8.24023,-3.57053},{-5.41321,4.35547,-3.57053}
			};
			directions[] = {1.90951,181.259};
		};
		class Land_SM_01_shelter_narrow_F {
			locations[] = {{0.432373,-7.63574,-2.1163},{0.480225,0.078125,-2.1163}
			};
			directions[] = {104.319,359.576};
		};
		class Land_Airport_01_terminal_F {
			locations[] = {{-1.7406,6.71484,-4.2641},{1.72998,7.27832,-4.26409},{5.48486,8.80859,-4.24886}
			};
			directions[] = {0.802014,180.148,275.272};
		};
		class Land_HelipadEmpty_F {
			locations[] = {{0,0,0}};
			directions[] = {0};
		};
		class Land_HelipadCircle_F {
			locations[] = {{0,0,0}};
			directions[] = {0};
		};
		class Land_HelipadCivil_F {
			locations[] = {{0,0,0}};
			directions[] = {0};
		};
		class Land_HelipadRescue_F {
			locations[] = {{0,0,0}};
			directions[] = {0};
		};
		class Land_HelipadSquare_F {
			locations[] = {{0,0,0}};
			directions[] = {0};
		};
		class Land_Airport_01_hangar_F {
			locations[] = {{8.36755,7.4707,-2.70845},{-7.8866,6.66309,-2.70776}
			};
			directions[] = {194.775,160.588};
		};
		class Land_Airport_02_hangar_right_F {
			locations[] = {{-3.37866,-5.04492,-7.71338}
			};
			directions[] = {186.313};
		};
		class Land_Airport_02_hangar_left_F {
			locations[] = {{7.65942,-8.44434,-7.72021}
			};
			directions[] = {180.777};
		};
		class Land_Airport_02_terminal_F {
			locations[] = {{-2.01501,9.99609,-1.49814}
			};
			directions[] = {300.168};
		};
		class Land_Cargo_Tower_V4_F {
			locations[] = {{3.18994,0.212891,-12.8885}
			};
			directions[] = {251.457};
		};
		class Land_PierWooden_01_ladder_F {
			locations[] = {{-0.116943,5.49609,17.7449}
			};
			directions[] = {0};
		};
		class Land_PierWooden_01_dock_F {
			locations[] = {{-0.219727,1.1084,16.9505}
			};
			directions[] = {0};
		};
		class Land_PierWooden_02_ladder_F {
			locations[] = {{0.832275,4.97949,18.4322}
			};
			directions[] = {65.557};
		};
		class Land_PierWooden_02_hut_F {
			locations[] = {{-7.90356,-1.03809,17.3928}
			};
			directions[] = {320.569};
		};
		class Land_PierWooden_03_F {
			locations[] = {
				{-0.210693,13.5029,18.7532}
			};
			directions[] = {322.913};
		};
		class Land_PierWooden_02_barrel_F {
			locations[] = {
				{0.31543,1.93018,21.1919}
			};
			directions[] = {-94.5725};
		};
		class Land_PierConcrete_01_4m_ladders_F {
			locations[] = {
				{7.16699,-0.768555,10.8084}
			};
			directions[] = {-179.47};
		};
	};
	class Vehicles {
		class C_Truck_02_box_F {
			class Spawns {
				class Land_SM_01_shelter_narrow_F {};
				class Land_SM_01_shelter_wide_F {};
				class Land_SCF_01_shed_F {};
				class Land_SCF_01_crystallizer_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_01_roof_F {};
			};
		};
		class C_Truck_02_covered_F {
			class Spawns {
				class Land_SM_01_shelter_narrow_F {};
				class Land_SM_01_shelter_wide_F {};
				class Land_SM_01_shed_unfinished_F {};
				class Land_SM_01_shed_F {};
				class Land_SCF_01_shed_F {};
				class Land_SCF_01_crystallizer_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_i_Shed_Ind_F {};
			};
		};
		class C_Truck_02_transport_F {
			class Spawns {
				class Land_SM_01_shelter_narrow_F {};
				class Land_SM_01_shelter_wide_F {};
				class Land_SM_01_shed_unfinished_F {};
				class Land_SM_01_shed_F {};
				class Land_SCF_01_shed_F {};
				class Land_SCF_01_crystallizer_F {};
				class Land_WarehouseShelter_01_F {};
				class Land_Warehouse_02_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_i_Shed_Ind_F {};
				
			};
		};
		class C_Truck_02_fuel_F {
			class Spawns {
				class Land_SM_01_shelter_narrow_F {};
				class Land_SM_01_shelter_wide_F {};
				class Land_SCF_01_shed_F {};
				class Land_SCF_01_crystallizer_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_i_Shed_Ind_F {};
				
			};
		};
		class C_Van_01_box_F {
			class Spawns {
				class Land_SM_01_shelter_narrow_F {};
				class Land_WarehouseShelter_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_01_roof_F {};
			};
		};
		class C_Van_01_transport_F {
			class Spawns {
				class Land_SM_01_shelter_narrow_F {};
				class Land_WarehouseShelter_01_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_02_roof_F {};
			};
		};
		class C_Van_01_fuel_F {
			class Spawns {
				class Land_SM_01_shelter_narrow_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_01_roof_F {};
			};
		};
		class B_LSV_01_unarmed_F {
			class Spawns {
				class Land_Cargo_Tower_V4_F {};
			};
		};
		class DSR_Hatchback_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class DSR_Hatchback_Black_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class DSR_Hatchback_Blue_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class DSR_Hatchback_Green_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class DSR_Hatchback_Silver_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class C_Offroad_02_unarmed_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class C_SUV_01_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class C_Hatchback_01_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class DSR_SUV_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_SM_01_shelter_narrow_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class C_Offroad_01_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_SM_01_shelter_narrow_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class C_Hatchback_01_sport_F {
			class Spawns {
				class Land_Airport_01_terminal_F {};
				class Land_MultistoryBuilding_01_F {};
				class Land_FuelStation_02_roof_F {};
				class Land_FuelStation_02_workshop_F {};
				class Land_FuelStation_01_roof_F {};
				class Land_FuelStation_01_workshop_F {};
				class Land_House_Big_03_F {};
				class Land_GarageShelter_01_F {};
			};
		};
		class C_Quadbike_01_F {
			class Spawns {
				class Land_Shed_07_F {};
			};
		};
		class DSR_Bike_White_F {
			class Spawns {
				class Land_Airport_02_terminal_F {};
				class Land_Warehouse_03_F {};
				class Land_Shop_City_07_F {};
				class Land_Shop_City_05_F {};
				class Land_MultistoryBuilding_04_F {};
				class Land_Shop_City_06_F {};
				class Land_Shop_City_01_F {};
				class Land_Shop_City_02_F {};
				class Land_Shop_City_03_F {};
				class Land_MultistoryBuilding_03_F {};
				class Land_Hotel_01_F {};
				class Land_Addon_04_F {};
				class Land_Addon_03_F {};
				class Land_House_Small_04_F {};
				class Land_House_Small_05_F {};
				class Land_School_01_F {};
				class Land_House_Small_06_F {};
			};
		};

		class DSR_Bike_Green_F {
			class Spawns {
				class Land_Airport_02_terminal_F {};
				class Land_Warehouse_03_F {};
				class Land_Shop_City_07_F {};
				class Land_Shop_City_05_F {};
				class Land_MultistoryBuilding_04_F {};
				class Land_Shop_City_06_F {};
				class Land_Shop_City_01_F {};
				class Land_Shop_City_02_F {};
				class Land_Shop_City_03_F {};
				class Land_MultistoryBuilding_03_F {};
				class Land_Hotel_01_F {};
				class Land_Addon_04_F {};
				class Land_Addon_03_F {};
				class Land_House_Small_04_F {};
				class Land_House_Small_05_F {};
				class Land_School_01_F {};
				class Land_House_Small_06_F {};
			};
		};
		class C_Plane_Civil_01_F {
			class Spawns {
				class Land_Airport_02_hangar_left_F {};
				class Land_Airport_02_hangar_right_F {};
				class Land_Airport_01_hangar_F {};
			};
		};
		class C_Plane_Civil_01_racing_F {
			class Spawns {
				class Land_Airport_02_hangar_left_F {};
				class Land_Airport_02_hangar_right_F {};
				class Land_Airport_01_hangar_F {};
			};
		};
		class DSR_AN2_F {
			class Spawns {
				class Land_Airport_02_hangar_left_F {};
				class Land_Airport_02_hangar_right_F {};
				class Land_Airport_01_hangar_F {};
			};
		};
		class C_Heli_Light_01_civil_F {
			class Spawns {
				class Land_HelipadCircle_F { };
				class Land_HelipadCivil_F { };
				class Land_HelipadRescue_F { };
				class Land_HelipadSquare_F { };
				class Land_HelipadEmpty_F { };
			};
		};
		class DSR_UH1H_F {
			class Spawns {
				class Land_HelipadCircle_F { };
				class Land_HelipadCivil_F { };
				class Land_HelipadRescue_F { };
				class Land_HelipadSquare_F { };
				class Land_HelipadEmpty_F { };
			};
		};
		class DSR_UH1H_camo_F {
			class Spawns {
				class Land_HelipadCircle_F { };
				class Land_HelipadCivil_F { };
				class Land_HelipadRescue_F { };
				class Land_HelipadSquare_F { };
				class Land_HelipadEmpty_F { };
			};
		};
		class DSR_UH1H_tka_F {
			class Spawns {
				class Land_HelipadCircle_F { };
				class Land_HelipadCivil_F { };
				class Land_HelipadRescue_F { };
				class Land_HelipadSquare_F { };
				class Land_HelipadEmpty_F { };
			};
		};
		class DSR_FishingBoat_F {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class DSR_Dingy_F {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class DSR_Raft_F {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class C_Boat_Civil_01_F {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class C_Boat_Civil_01_police_F {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class C_Rubberboat {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class C_Boat_Transport_02_F {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class C_Scooter_Transport_01_F {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class O_Lifeboat {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
		class I_Boat_Transport_01_F {
			class Spawns {
				class Land_PierWooden_02_barrel_F {};
				class Land_PierConcrete_01_4m_ladders_F {};
				class Land_PierWooden_01_ladder_F {};
				class Land_PierWooden_02_ladder_F {};
				class Land_PierWooden_02_hut_F {};
				class Land_PierWooden_03_F {};
				class Land_PierWooden_01_dock_F {};
			};
		};
	};
};

class CfgBuildables {
    class Houses {
		condition = "true"; 
		preview = "\dsr_ui\Assets\object_previews\preview_house_lv1.paa";  
		name = "Type 1 Houses"; 
		class Buildables {
			class DSR_Object_House_Lv1 {
				parts[] = {
					{"DSR_Item_Padlock",1},
					{"DSR_Item_Lumber",30},
					{"DSR_Item_Plywood",7},
					{"DSR_Item_Hardware",5},
					{"DSR_Item_Logs",15}
				};
				name = "Lvl 1 House V1";
				model = "DSR_Object_House_Lv1";
				crateObject = "DSR_Object_House_Lv1_Preview2";
				description = "The small shack is small... and a shack... a good starting house for losers.";
				preview = "\dsr_ui\Assets\object_previews\preview_house_lv1.paa";
				condition = "true";
			};
			class DSR_Object_House_Lv1_2 {
				parts[] = {
					{"DSR_Item_Padlock",1},
					{"DSR_Item_Tarp",1},
					{"DSR_Item_Bricks",3},
					{"DSR_Item_Lumber",30},
					{"DSR_Item_Plywood",7},
					{"DSR_Item_Hardware",5},
					{"DSR_Item_Logs",15}
				};
				name = "Lvl 1 House V2";
				model = "DSR_Object_House_Lv1_2";
				crateObject = "DSR_Object_House_Lv1_2_Preview2";
				description = "The small shack is small... and a shack... a good starting house for losers.";
				preview = "\dsr_ui\Assets\object_previews\preview_house_lv1_2.paa";
				condition = "true";
			};
			class DSR_Object_House_Lv2 {
				parts[] = {
					{"DSR_Item_Padlock",1},
					{"DSR_Item_Lumber",60},
					{"DSR_Item_Plywood",14},
					{"DSR_Item_Hardware",10},
					{"DSR_Item_Logs",45}
				};
				name = "Lvl 2 House V1";
				model = "DSR_Object_House_Lv2";
				crateObject = "DSR_Object_House_Lv2_Preview2";
				description = "Large wood shack.";
				preview = "\dsr_ui\Assets\object_previews\preview_house_lv2.paa";
				condition = "(player getVariable ['PVAR_DS_Progression_Building_Level',0]) > 0";
			};
			class DSR_Object_House_Lv3 {
				parts[] = {
					{"DSR_Item_Padlock",1},
					{"DSR_Item_Lumber",120},
					{"DSR_Item_Plywood",34},
					{"DSR_Item_Hardware",20},
					{"DSR_Item_Scrap_Metal",2},
					{"DSR_Item_Logs",85}
				};
				name = "Lvl 3 House V1";
				model = "DSR_Object_House_Lv3";
				crateObject = "DSR_Object_House_Lv3_Preview2";
				description = "A small Wood Cabin.";
				preview = "\dsr_ui\Assets\object_previews\preview_house_lv3.paa";
				condition = "(player getVariable ['PVAR_DS_Progression_Building_Level',0]) > 1";
			};
		};
	};
	class Stockade {
		condition = "true"; 
		preview = "\dsr_ui\Assets\object_previews\preview_stockade_rampart.paa";  
		name = "Stockade Items";  
		class Buildables {
			class DSR_Object_Stockade_Wall {
				parts[] = {
					{"DSR_Item_Lumber",23},
					{"DSR_Item_Hardware",4}
				};
				name = "Stockade Wall";
				model = "DSR_Object_Stockade_Wall";
				crateObject = "DSR_Object_Stockade_Wall_Preview2";
				description = "Basic stockade wall piece";
				preview = "\dsr_ui\Assets\object_previews\preview_stockade_wall.paa";
				condition = "true";
			};
			class DSR_Object_Stockade_Rampart {
				parts[] = {
					{"DSR_Item_Lumber",23},
					{"DSR_Item_Hardware",6},
					{"DSR_Item_Scrap_Metal",1}
				};
				name = "Stockade Wall (Window)";
				model = "DSR_Object_Stockade_Wall_Window";
				crateObject = "DSR_Object_Stockade_Wall_Window_Preview2";
				description = "Basic stockade wall piece";
				preview = "\dsr_ui\Assets\object_previews\preview_stockade_window.paa";
				condition = "true";
			};
			class StockadeRampart {
				parts[] = {
					{"DSR_Item_Lumber",45},
					{"DSR_Item_Hardware",6}
				};
				name = "Stockade Wall (Ramp)";
				model = "DSR_Object_Stockade_Rampart";
				crateObject = "DSR_Object_Stockade_Rampart_Preview2";
				description = "Stockade Wall with Rampart and Ramp";
				preview = "\dsr_ui\Assets\object_previews\preview_stockade_rampart.paa";
				condition = "true";
			};
			class DSR_Object_Stockade_Rampart_2 {
				parts[] = {
					{"DSR_Item_Lumber",38},
					{"DSR_Item_Hardware",5}
				};
				name = "Stockade Wall (Walkway)";
				model = "DSR_Object_Stockade_Rampart_2";
				crateObject = "DSR_Object_Stockade_Rampart_2_Preview2";
				description = "Stockade Wall with Rampart";
				preview = "\dsr_ui\Assets\object_previews\preview_stockade_rampart_2.paa";
				condition = "true";
			};
			class DSR_Object_Stockade_Gate {
				parts[] = {
					{"DSR_Item_Padlock",1},
					{"DSR_Item_Lumber",30},
					{"DSR_Item_Hardware",4},
					{"DSR_Item_Scrap_Metal",2},
					{"DSR_Item_Logs",2}
				};
				name = "Stockade Gate";
				model = "DSR_Object_Stockade_Gate";
				crateObject = "DSR_Object_Stockade_Gate_Preview2";
				description = "Stockade Wall with Rampart";
				preview = "\dsr_ui\Assets\object_previews\preview_stockade_gate.paa";
				condition = "true";
			};
			class DSR_Object_Stockade_Tower {
				parts[] = {
					{"DSR_Item_Lumber",40},
					{"DSR_Item_Hardware",10},
					{"DSR_Item_Scrap_Metal",4},
					{"DSR_Item_Logs",10}
				};
				name = "Stockade Guard Tower";
				model = "DSR_Object_Stockade_Tower";
				crateObject = "DSR_Object_Stockade_Tower_Preview2";
				description = "Stockade Guard Tower";
				preview = "\dsr_ui\Assets\object_previews\preview_stockade_tower.paa";
				condition = "true";
			};
		};
	};
	class Misc {
		condition = "true"; 
		preview = "\dsr_ui\Assets\object_previews\preview_water_catch.paa";  
		name = "Miscellaneous";  
		class Buildables {
			
			class DSR_Object_Storage_Small {
				parts[] = {
					{"DSR_Item_Lumber",4},
					{"DSR_Item_Hardware",1},
					{"DSR_Item_Scrap_Metal",1}
				};
				name = "Small Crate";
				model = "DSR_Object_Storage_Small";
				description = "A small storage container";
				preview = "\dsr_ui\Assets\object_previews\preview_storage_small.paa";
				crateObject = "DSR_Object_Storage_Small_Preview2";
				condition = "true";
			};
			class DSR_Object_Storage_Large {
				parts[] = {
					{"DSR_Item_Lumber",6},
					{"DSR_Item_Hardware",2},
					{"DSR_Item_Scrap_Metal",2}
				};
				name = "Large Crate";
				model = "DSR_Object_Storage_Large";
				description = "A large storage container";
				preview = "\dsr_ui\Assets\object_previews\preview_storage_large.paa";
				crateObject = "DSR_Object_Storage_Large_Preview2";
				condition = "true";
			};
			class Land_FirePlace_F {
				parts[] = {
					{"DSR_Item_Logs",4}
				};
				name = "Campfire";
				model = "Land_FirePlace_F";
				description = "A Simple Campfire";
				preview = "\dsr_ui\Assets\object_previews\preview_campfire.paa";
				crateObject = "DSR_Object_Storage_Small_Preview2";
				condition = "true";
			};
			class DSR_Object_Campfire_Tripod {
				parts[] = {
					{"DSR_Item_Logs",4},
					{"DSR_Item_Scrap_Metal",2}
				};
				name = "Campfire w/ Tripod";
				model = "DSR_Object_Campfire_Tripod";
				description = "A Survival Campfire";
				preview = "\dsr_ui\Assets\object_previews\preview_campfire_tripod.paa";
				crateObject = "DSR_Object_Storage_Small_Preview2";
				condition = "true";
			};
			class DSR_Object_Workbench {
				parts[] = {
					{"DSR_Item_Lumber",10},
					{"DSR_Item_Hardware",1},
					{"DSR_Item_Scrap_Metal",1}
				};
				name = "Workbench";
				model = "DSR_Object_Workbench";
				crateObject = "DSR_Object_Workbench_Preview2";
				description = "Crafting Workbench";
				preview = "\dsr_ui\Assets\object_previews\preview_workbench.paa";
				condition = "true";
			};
			class DSR_Object_Water_Catchment {
				parts[] = {
					{"DSR_Item_Logs",6},
					{"DSR_Item_Duct_Tape",1},
					{"DSR_Item_Tarp",1},
					{"DSR_Item_Plastic_Drum",1}
				};
				name = "Water Catch";
				model = "DSR_Object_Water_Catchment";
				crateObject = "DSR_Object_Water_Catchment_Preview2";
				description = "System for catching rain water";
				preview = "\dsr_ui\Assets\object_previews\preview_water_catch.paa";
				condition = "true";
			};
			class DSR_Object_Storage_Shed {
				parts[] = {
					{"DSR_Item_Padlock",1},
					{"DSR_Item_Lumber",50},
					{"DSR_Item_Plywood",6},
					{"DSR_Item_Hardware",10},
					{"DSR_Item_Scrap_Metal",10},
					{"DSR_Item_Logs",20}
				};
				name = "Storage Shed";
				model = "DSR_Object_Storage_Shed";
				crateObject = "DSR_Object_Storageshed_Preview2";
				description = "A place to store stuff.";
				preview = "\dsr_ui\Assets\object_previews\preview_storage_shed.paa";
				condition = "true";
			};
			class DSR_Object_Cot_Preview {
				parts[] = {
					{"DSR_Item_Scrap_Metal",4},
					{"DSR_Item_Tarp",1}
				};
				name = "Sleeping Cot";
				model = "DSR_Object_Cot";
				crateObject = "DSR_Object_Cot_Preview";
				description = "A place to sleep, when implemented.";
				preview = "\dsr_ui\Assets\object_previews\preview_cot.paa";
				condition = "true";
			};
			class DSR_Object_Anvil_Log {
				parts[] = {
					{"DSR_Item_Logs",1},
					{"DSR_Item_Scrap_Metal",10}
				};
				name = "Smithing Anvil";
				model = "DSR_Object_Anvil_Log";
				crateObject = "DSR_Object_Anvil_Log_Preview";
				description = "A place to metalwork, once implemented.";
				preview = "\dsr_ui\Assets\object_previews\preview_anvil&log.paa";
				condition = "true";
			};
			class DSR_Object_Woodplot_Small {
				parts[] = {
					{"DSR_Item_Plywood",4},
					{"DSR_Item_Hardware",3},
					{"DSR_Item_Fertilizer",2}
				};
				name = "Farming Plot (Small)";
				model = "DSR_Object_Woodplot_Small";
				crateObject = "DSR_Object_Woodplot_Small_Preview";
				description = "A place to farm, once implemented.";
				preview = "\dsr_ui\Assets\object_previews\preview_farmplot_small.paa";
				condition = "true";
			};
			class DSR_Object_Woodplot_Med {
				parts[] = {
					{"DSR_Item_Plywood",8},
					{"DSR_Item_Hardware",6},
					{"DSR_Item_Fertilizer",4}
				};
				name = "Farming Plot (Medium)";
				model = "DSR_Object_Woodplot_Med";
				crateObject = "DSR_Object_Woodplot_Med_Preview";
				description = "A place to farm, once implemented.";
				preview = "\dsr_ui\Assets\object_previews\preview_farmplot_med.paa";
				condition = "true";
			};
			class DSR_Object_Woodplot_Large {
				parts[] = {
					{"DSR_Item_Plywood",12},
					{"DSR_Item_Hardware",9},
					{"DSR_Item_Fertilizer",6}
				};
				name = "Farming Plot (Large)";
				model = "DSR_Object_Woodplot_Large";
				crateObject = "DSR_Object_Woodplot_Large_Preview";
				description = "A place to farm, once implemented.";
				preview = "\dsr_ui\Assets\object_previews\preview_farmplot_large.paa";
				condition = "true";
			};
		};
	};
};
class CfgCraftables {
	class Materials {
		condition = "true"; 
		preview = "\dsr_items\icons\dsr_item_hardware.paa";
		name = "Materials"; 
		class Craftables {
			class Lumber {
				input[] = {
					{"DSR_Item_Logs",1},
					{"DSR_Item_Saw",1}
				};
				output[] = {
					{"DSR_Item_Lumber",1},
					{"DSR_Item_Saw",1}
				};
				requiredBuildings[] = {};
				
				name = "Lumber";
				description = "General Purpose Lumber.";
				preview = "\dsr_items\icons\dsr_item_lumber.paa";
				condition = "true";
			};
			class Plywood {
				input[] = {
					{"DSR_Item_Lumber",4},
					{"DSR_Item_Saw",1},
					{"DSR_Item_Toolbox",1}
				};
				output[] = {
					{"DSR_Item_Plywood",1},
					{"DSR_Item_Saw",1},
					{"DSR_Item_Toolbox",1}
				};
				requiredBuildings[] = {"DSR_Object_Workbench"};
				
				name = "Plywood";
				description = "General Purpose Plywood.";
				preview = "\dsr_items\icons\dsr_item_plywood.paa";
				condition = "true";
			};
			class ScrapMetal {
				input[] = {
					{"DSR_Item_Crushed_Can",6},
					{"DSR_Item_Butane_Torch",1}
				};
				output[] = {
					{"DSR_Item_Scrap_Metal",1},
					{"DSR_Item_Butane_Torch",1}
				};
				requiredBuildings[] = {"DSR_Object_Anvil_Log"};
				
				name = "Scrap Metal";
				description = "General Purpose Scrap Metal.";
				preview = "\dsr_items\icons\dsr_item_scrap_metal.paa";	
				condition = "true";
			};
		};
	};
	class Tools {
		condition = "true"; 
		preview = "\dsr_items\icons\dsr_item_toolbox.paa";
		name = "Tools"; 
		class Craftables {
			class FishingRod {
				input[] = {
					{"DSR_Item_Fishingrod_Broken",1},
					{"DSR_Item_Duct_Tape",1}
				};
				output[] = {
					{"DSR_Melee_Fishingrod",1}
				};
				requiredBuildings[] = {};
				
				name = "Fishing Rod";
				description = "Great for catching small fishies.";
				preview = "\dsr_ui\Assets\houseLvl1Preview_ca.paa";
				condition = "true";
			};
		};
	};
	class Food {
		condition = "false"; 
		preview = "\dsr_items\icons\dsr_item_tuna.paa";	
		name = "Food"; 
		class Craftables {
			
		};
	};
	class Gear {
		condition = "false";
		preview = "\dsr_ui\Assets\houseLvl1Preview_ca.paa"; 
		name = "Gear";
		class Craftables {
			
		};
	};
	class Weapons {
		condition = "false"; 
		preview = "\dsr_weapons\smg\mp5a5\data\ui\w_hkm5_a5_ca.paa"; 
		name = "Weapons"; 
		class Craftables {
			
		};
	};
	class Medical {
		condition = "true"; 
		preview = "\dsr_items\icons\dsr_item_antibiotics.paa";
		name = "Medical"; 
		class Craftables {
			class Splint {
				input[] = {
					{"dsr_item_Lumber",1},
					{"DSR_Item_Bandage",2}
				};
				output[] = {
					{"DSR_Item_Splint",1}
				};
				requiredBuildings[] = {};
				
				name = "Splint";
				description = "Fixes broken legs.";
				preview = "\dsr_items\icons\dsr_item_splint.paa";
				condition = "true";
			};
			class Bandage {
				input[] = {
					{"DSR_Item_Fabric_Scraps",2},
					{"DSR_Item_Duct_Tape",1}
				};
				output[] = {
					{"DSR_Item_Makeshift_Bandage",1}
				};
				requiredBuildings[] = {};
				
				name = "Makeshift Bandage";
				description = "Stops bleeding wounds.";
				preview = "\dsr_items\icons\dsr_item_makeshift_bandage.paa";
				condition = "true";
			};
		};
	};
};
