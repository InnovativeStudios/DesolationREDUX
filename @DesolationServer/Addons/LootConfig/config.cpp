// Loot positions for Arma3 buildings: Line "10920"!
// Loot positions for CUP buildings: Line "11790"!






class CfgPatches
{
	class Desolation {units[] = {};};
};
class Plugins
{
	class Desolation
	{
		name = "Loot config";
		desc = "Loot config";
		tag = "LT";
	};
};

class CfgItemSpawns {
	buildingTypes[] = {"Military","Civilian","Industrial","Commercial","Medical","Mechanical"};
	lootRarity[] = {"rare","semirare","average","semicommon","common"};
	lootTypes[] = {"Weapon","Handgun","Magazine","Food","Drink","Medical","Junk","Backpack","Uniform","Vest","Helmet","Cosmetic","GeneralItem","Construction","Book","Electronic","CarPart","Attachment"};



// ADD MOD ITEMS/WEAPONS HERE IN THE SAME CLASS WITH ARMA WEAPONS!

/* EXAMPLE:
    class Loot {
        class Military {
            class Weapon {
                rare[] = {
                    {"DSR_LMG_Mk200",20},
                    {"CUP_LMG",20},
                    {"CUP_SNIPER",20},
                    {"RHS_SMG",20},
                    {"RHS_LAUNCHER",20}
                };
                semirare[] = {
                    {"DSR_PISTOL",20},
                    {"CUP_PISTOL",20},
                    {"CUP_SMG",20},
                    {"RHS_PISTOL",20},
                    {"RHS_SMG",20}
                };
                etc...
            };
            class Magaine {
                rare[] = {
                     {"200Rnd_65x39_cased_Box",1},
                     {"DSR_MAGAZINE",1}, 
                     {"CUP_MAGAZINE",1},  
                     {"RHS_MAGAZINE",1},
                     {"NI_MAGAZINE",1},  
                };
                etc...
            };
            etc...
        };
        etc...
    };
};

The number behind the item name means the rarity of the item when loot spawns from (rare []) table:
    for example if the total % is 100% like this:
    {"DSR_LMG_Mk200",70},            
    {"DSR_Srifle_LRR",30}
    it means that the mk200 has 50% better chanche to spawn.
    if the total % goes over 100% for example the total percentage is 200% you can multiply all % in your mind with 2.
*/

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
	    
	    
	    
	    // ARMA3 BUILDINGS
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
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		// CUP BUILDINGS
		class Land_Mil_ControlTower {
			table = "Military";
			positions[] = {{-8.22168,-0.140625,-9.58661},{-10.207,-1.84741,-8.83647},{-7.39258,-3.73926,-9.58661},{-3.20215,-0.0449219,-9.58661},{9.73633,-2.84473,-9.58661},{5.83984,1.53564,-9.59478},{9.06445,5.13062,-9.63014},{9.94824,4.79028,-7.44014},{5.60547,3.9458,-5.46514},{0.400391,5.68677,-5.46514},{2.39746,2.01782,-1.07014},{5.90234,3.46143,-1.07014},{6.4082,3.45898,2.85083},{2.11914,-0.48584,2.86106}
			};
		};
		
		class Land_Mil_ControlTower_dam {
			table = "Military";
			positions[] = {{-8.22168,-0.140625,-9.58661},{-10.207,-1.84741,-8.83647},{-7.39258,-3.73926,-9.58661},{-3.20215,-0.0449219,-9.58661},{9.73633,-2.84473,-9.58661},{5.83984,1.53564,-9.59478},{9.06445,5.13062,-9.63014},{9.94824,4.79028,-7.44014},{5.60547,3.9458,-5.46514},{0.400391,5.68677,-5.46514},{2.39746,2.01782,-1.07014},{5.90234,3.46143,-1.07014},{6.4082,3.45898,2.85083},{2.11914,-0.48584,2.86106}
			};
		};
		
		class Land_Mil_ControlTower_EP1 {
			table = "Military";
			positions[] = {{-8.22168,-0.140625,-9.58661},{-10.207,-1.84741,-8.83647},{-7.39258,-3.73926,-9.58661},{-3.20215,-0.0449219,-9.58661},{9.73633,-2.84473,-9.58661},{5.83984,1.53564,-9.59478},{9.06445,5.13062,-9.63014},{9.94824,4.79028,-7.44014},{5.60547,3.9458,-5.46514},{0.400391,5.68677,-5.46514},{2.39746,2.01782,-1.07014},{5.90234,3.46143,-1.07014},{6.4082,3.45898,2.85083},{2.11914,-0.48584,2.86106}
			};
		};
		
		class Land_Mil_ControlTower_dam_EP1 {
			table = "Military";
			positions[] = {{-8.22168,-0.140625,-9.58661},{-10.207,-1.84741,-8.83647},{-7.39258,-3.73926,-9.58661},{-3.20215,-0.0449219,-9.58661},{9.73633,-2.84473,-9.58661},{5.83984,1.53564,-9.59478},{9.06445,5.13062,-9.63014},{9.94824,4.79028,-7.44014},{5.60547,3.9458,-5.46514},{0.400391,5.68677,-5.46514},{2.39746,2.01782,-1.07014},{5.90234,3.46143,-1.07014},{6.4082,3.45898,2.85083},{2.11914,-0.48584,2.86106}
			};
		};
		
		class Land_HouseBlock_A1 {
			table = "Commercial";
			positions[] = {{-4.72949,3.77222,-8.80222},{-3.36133,-2.54077,-8.81419}
			};
		};
		
		class Land_HouseBlock_A1_1 {
			table = "Commercial";
			positions[] = {{-3.47168,-3.68384,-4.70119},{-4.50781,1.9873,-4.73066}
			};
		};
		
		class Land_HouseBlock_A3 {
			table = "Commercial";
			positions[] = {{-1.10156,-3.92651,-5.44316},{1.00684,3.24316,-5.44316}
			};
		};
		
		class Land_HouseBlock_B6 {
			table = "Commercial";
			positions[] = {{-5.07813,2.83984,-7.62031},{-3.41699,-3.28857,-7.6203}
			};
		};
		
		class Land_A_Office01 {
			table = "Commercial";
			positions[] = {{-12.832,1.0647,0.512359},{-15.874,6.60791,-1.98145},{-15.7334,-4.31763,-2.04166},{-5.58887,-3.77563,-2.04166},{-5.70215,4.45361,0.526055},{-12.7412,1.15869,-2.04166},{-7.68457,4.12378,-2.04166},{-6.12598,6.36353,-2.04166},{3.83496,4.29639,-2.04166},{0.613281,5.99634,-2.04166},{2.30273,-1.36792,-2.02821},{7.40918,-3.65454,-2.04166},{9.69922,-0.807617,-2.04166},{14.8271,1.30396,-2.04166},{12.5996,6.3689,-2.04166},{14.8506,3.82104,-2.04166},{4.86035,-4.06738,-2.02852},{-2.85449,3.97632,0.458343},{7.85059,-3.52637,0.458337},{14.3975,-3.28516,0.458336},{13.9834,5.7666,0.458337},{4.85254,3.47388,6.19124},{-2.34961,1.04663,6.19125},{4.95117,-4.10156,6.19124}
			};
		};
		
		class Land_A_Office01_EP1 {
			table = "Commercial";
			positions[] = {{14.7554,0.228394,-4.40952},{12.3267,-4.97058,-4.40046},{13.8853,-1.83557,-4.40589},{9.98438,2.75415,-4.41611},{8.5752,5.45886,-4.41759},{3.83252,5.73425,-4.41517},{-0.0581055,5.62219,-4.41328},{4.02002,2.72583,-4.41616},{-2.37646,-2.97925,-4.40966},{-7.40283,4.97449,-4.4091},{-13.6914,0.264404,-4.40816},{4.62451,3.95154,-1.92106},{0.396973,4.4375,-1.92106},{2.56299,2.47998,-1.92106},{2.36475,-2.94604,-1.90761},{-6.56689,3.86829,-1.92106},{-12.0352,0.0371094,-1.92106},{7.77832,-4.81262,-1.92093},{9.66357,-2.55554,-1.92087},{15.4458,2.73193,-1.92106},{13.147,5.35962,-1.92106},{-5.03516,-4.80042,-1.92106},{-14.1851,-4.06873,-1.867},{-15.3389,3.97607,-1.84645},{-8.59375,3.04626,0.578946},{-2.43213,2.85767,0.578944},{15.228,-4.40503,0.578959},{4.84717,2.67346,6.31185},{2.63672,-2.33337,6.82704},{-2.20508,-4.53333,6.31184}
			};
		};
		
		class Land_A_Office02 {
			table = "Commercial";
			positions[] = {{-0.822266,-4.85229,-8.15203},{4.9209,-6.82349,-8.15312},{5.08496,-4.73291,-8.15196},{-0.585938,-6.82983,-8.15312}
			};
		};
		
		class Land_A_Office02_dam {
			table = "Commercial";
			positions[] = {{-0.822266,-4.85229,-8.15203},{4.9209,-6.82349,-8.15312},{5.08496,-4.73291,-8.15196},{-0.585938,-6.82983,-8.15312}
			};
		};
		
		class Land_A_Pub_01 {
			table = "Commercial";
			positions[] = {{-1.4668,-5.69727,-5.74766},{-7.22852,-6.11621,-5.74766},{-7.38477,-1.48413,-5.28108},{-4.60449,0.881104,-5.74766},{-1.05078,-0.915771,-5.74766},{2.14453,0.765381,-5.74764},{1.58301,-5.9043,-5.01843},{6.27539,-1.7771,-5.02248},{1.38281,5.37964,-5.00179},{-0.555664,2.69727,-5.33458},{-7.21875,-6.32813,-1.76266},{-7.40332,0.64624,-1.76266},{-3.82227,0.67627,-1.76266},{-0.976563,-3.69824,-1.76266},{-2.09473,0.787598,-1.76266},{0.557617,-0.898926,-1.76266},{3.25879,-0.703125,-1.76266},{2.76074,-3.38672,-1.76266},{6.12109,5.21094,-1.40792},{1.89941,6.38745,-1.30648},{-0.136719,2.59131,-1.76266}
			};
		};
		
		class Land_HouseB_Tenement {
			table = "Commercial";
			positions[] = {{10.1094,-6.41406,-20.7287},{-5.63379,-5.93335,-20.7278},{-10.2168,5.73633,-20.7334},{-10.1191,-0.377197,-20.2909},{4.64063,-2.01489,-20.2878},{2.83203,-1.96948,-20.2916},{13.6543,6.0647,-20.2885},{13.3301,0.897705,-20.2895},{13.5078,11.553,-20.283},{7.53223,11.6665,-20.2864},{4.56152,8.31421,-20.7334}
			};
		};
		
		class Land_A_Castle_Bergfrit {
			table = "Military";
			positions[] = {{-2.31543,4.36475,16.8801},{3.13477,-4.56323,16.8546},{2.8252,4.10547,16.8546},{-2.37305,-4.22803,13.4824},{3.18848,-4.32593,11.0188},{1.7334,-2.77808,8.76548},{-2.42773,3.84351,8.76548},{-2.45996,-3.56714,6.31758},{2.59277,-3.51196,3.85398},{2.60449,2.33154,1.83828},{-2.28418,3.86206,-0.627577},{-0.942383,2.36182,-2.83782},{2.48633,-0.63623,-2.83782},{-1.56641,-2.72656,-2.83782}
			};
		};
		
		class Land_A_Castle_Bergfrit_dam {
			table = "Military";
			positions[] = {{-2.31543,4.36475,16.8801},{3.13477,-4.56323,16.8546},{2.8252,4.10547,16.8546},{-2.37305,-4.22803,13.4824},{3.18848,-4.32593,11.0188},{1.7334,-2.77808,8.76548},{-2.42773,3.84351,8.76548},{-2.45996,-3.56714,6.31758},{2.59277,-3.51196,3.85398},{2.60449,2.33154,1.83828},{-2.28418,3.86206,-0.627577},{-0.942383,2.36182,-2.83782},{2.48633,-0.63623,-2.83782},{-1.56641,-2.72656,-2.83782}
			};
		};
		
		class Land_A_Castle_Donjon {
			table = "Military";
			positions[] = {{-3.73145,-3.31519,12.6907},{0.913086,4.18848,12.6316}
			};
		};
		
		class Land_A_Castle_Donjon_dam {
			table = "Military";
			positions[] = {{-3.73145,-3.31519,12.6907},{0.913086,4.18848,12.6316}
			};
		};
		
		class Land_A_Castle_Gate {
			table = "Military";
			positions[] = {{4.61719,-2.89966,-2.95027},{7.2373,0.652344,-2.86209},{4.90137,4.11963,-2.88065},{-0.227539,2.51318,-3.13009},{-7.14648,3.0022,6.82458},{5.98145,-3.02148,7.02897}
			};
		};
		
		class Land_A_Castle_Stairs_A {
			table = "Military";
			positions[] = {{0.759766,-1.45898,0.721134},{0.120117,1.30029,0.895649},{8.15918,1.66528,7.08757}
			};
		};
		
		class Land_Ind_Expedice_1 {
			table = "Industrial";
			positions[] = {{-12.1357,-19.0247,-3.48816},{-12.4053,-2.58325,-3.48818},{2.9707,-20.0593,-3.48816},{13.1074,-12.5486,-5.75868},{8.18945,-15.1877,-5.7587},{3.3291,17.6516,-3.48816},{3.36426,4.32471,-3.48816},{1.99707,0.697754,-5.68533},{3.06543,16.5149,-5.68534},{1.62207,6.83813,-5.68533},{-0.577148,4.47803,9.70873},{-0.806641,16.3188,9.70872}
			};
		};
		
		class Land_Ind_Expedice_2 {
			table = "Industrial";
			positions[] = {{7.40723,-0.59082,1.3532},{-9.77441,-0.741943,1.3532}
			};
		};
		
		class Land_Ind_Expedice_3 {
			table = "Industrial";
			positions[] = {{-2.56641,-16.9731,2.22119},{0.286133,-6.82593,2.1777},{0.211914,5.20898,2.15679},{-2.40039,17.7319,2.13403},{-4.82227,10.6279,-1.17236},{-3.8291,-9.22778,-1.07928}
			};
		};
		
		class Land_Ind_Garage01 {
			table = "Industrial";
			positions[] = {{-0.723633,2.7688,-1.22727},{2.33105,-1.37329,-1.23875}
			};
		};
		
		class Land_Ind_Garage01_EP1 {
			table = "Industrial";
			positions[] = {{-0.723633,2.7688,-1.22727},{2.33105,-1.37329,-1.23875}
			};
		};
		
		class Land_Ind_SiloVelke_01 {
			table = "Industrial";
			positions[] = {{-10.8066,0.703857,11.8898},{-5.86035,3.31689,11.8898},{3.14551,7.19385,11.8898},{2.58984,-5.34839,11.8898},{3.05762,-7.1958,-5.4539},{2.43457,8.00269,-5.4539},{1.73926,0.277832,-5.4539},{-1.10156,-6.45728,21.9979},{-10.6729,0.304199,21.9979},{-0.635742,8.32715,21.9979}
			};
		};
		
		class Land_Ind_SiloVelke_02 {
			table = "Industrial";
			positions[] = {{-15.6787,6.78101,17.7242},{-14.3877,-6.52441,17.7242},{-3.06641,1.03662,17.7242},{13.3662,6.20972,17.7242},{11.6631,-6.26001,17.7242}
			};
		};
		
		class Land_Ind_Mlyn_01 {
			table = "Industrial";
			positions[] = {{-7.52344,8.20093,-20.7892},{-8.52051,8.75366,-17.7274},{-7.35547,2.44727,-14.8849},{-8.20508,8.67163,-11.8277},{-7.46387,2.53931,-8.87847},{-8.41699,8.59033,-5.82723},{-8.14355,2.68579,-2.82434},{-8.38867,8.5957,0.226891},{-2.5625,8.58081,0.226891},{-7.92285,2.5293,3.16632},{-2.4707,8.53345,6.28002},{-8.75684,8.66895,6.28002},{-6.92969,2.59937,9.21946}
			};
		};
		
		class Land_Ind_Mlyn_02 {
			table = "Industrial";
			positions[] = {{-5.88965,7.17603,4.81837},{-5.71777,-16.8657,4.78228},{-5.82813,-10.7432,4.75629}
			};
		};
		
		class Land_Ind_Mlyn_03 {
			table = "Industrial";
			positions[] = {{7.30371,6.40503,-4.17363},{-7.15234,6.88794,-4.17363},{-6.85254,-1.05542,-4.17363},{4.9834,-5.24585,9.02327},{-5.71875,-5.42383,9.02327}
			};
		};
		
		class Land_Ind_Mlyn_04 {
			table = "Industrial";
			positions[] = {{-2.47461,-9.57251,4.79357},{-2.38867,5.33008,4.79357}
			};
		};
		
		class Land_Ind_Pec_01 {
			table = "Industrial";
			positions[] = {{6.53223,-1.20679,14.6871},{-0.484375,-7.98315,14.6949},{5.3252,-2.28198,6.22904},{-6.2373,-6.88916,6.23554},{0.232422,-13.6924,1.18316},{-1.2168,-2.89771,1.17255},{-5.59766,-13.4353,-3.81126},{-1.76367,-3.10132,-3.80074},{5.18262,-12.9326,-3.80642},{9.76172,-9.47681,-17.3458},{5.19043,-12.6736,-22.4202},{-5.4668,-5.44165,-22.4127},{-5.25684,11.1528,-22.4297},{2.27637,8.60278,-22.4269}
			};
		};
		
		class Land_Ind_Pec_03 {
			table = "Industrial";
			positions[] = {{-13.959,-8.95483,0.961739},{-8.57031,-17.7681,0.961739},{-13.8428,-17.8918,0.961738},{-4.03223,-24.4443,5.75881},{8.89941,-7.60132,5.75881},{-2.85547,10.4004,5.7588},{4.47754,26.1057,4.02439},{-2.14941,20.1545,4.02439},{4.06445,19.7666,4.02438},{12.416,14.2559,5.75881},{12.8545,-24.8608,5.75881}
			};
		};
		
		class Land_Ind_Pec_03a {
			table = "Industrial";
			positions[] = {{-13.959,-8.95483,0.961739},{-8.57031,-17.7681,0.961739},{-13.8428,-17.8918,0.961738},{-4.03223,-24.4443,5.75881},{8.89941,-7.60132,5.75881},{-2.85547,10.4004,5.7588},{4.47754,26.1057,4.02439},{-2.14941,20.1545,4.02439},{4.06445,19.7666,4.02438},{12.416,14.2559,5.75881},{12.8545,-24.8608,5.75881}
			};
		};
		
		class Land_Ind_Pec_03b {
			table = "Industrial";
			positions[] = {{-13.959,-8.95483,0.961739},{-8.57031,-17.7681,0.961739},{-13.8428,-17.8918,0.961738},{-4.03223,-24.4443,5.75881},{8.89941,-7.60132,5.75881},{-2.85547,10.4004,5.7588},{4.47754,26.1057,4.02439},{-2.14941,20.1545,4.02439},{4.06445,19.7666,4.02438},{12.416,14.2559,5.75881},{12.8545,-24.8608,5.75881}
			};
		};
		
		class Land_R_Shed_Ind02 {
			table = "Industrial";
			positions[] = {{3.33594,9.24146,-4.62743},{-2.65918,-8.05811,-4.62743},{2.37695,-3.67358,-4.62743},{-1.15723,7.49683,-4.62743}
			};
		};
		
		class Land_ind_silomale {
			table = "Industrial";
			positions[] = {{7.20898,-10.9326,12.936},{8.08496,8.96045,12.936},{-7.62695,-8.9126,12.936},{-7.69824,8.8252,12.936}
			};
		};
		
		class Land_Ind_MalyKomin {
			table = "Industrial";
			positions[] = {{-0.948242,0.208008,-7.70076},{2.13574,0.95166,-7.70076}
			};
		};
		
		class Land_Ind_Vysypka {
			table = "Industrial";
			positions[] = {{0.292969,-15.4355,-4.96773},{0.103516,-9.80859,-4.96782},{-7.28711,-12.9048,-4.96807},{0.416992,5.3252,-4.96786},{0.196289,-0.742188,-4.96787},{-7.97656,2.58057,-4.96978},{-8.02051,16.7705,-4.97282},{-6.42773,26.7178,-4.97867},{0.607422,25.5532,-4.97298},{6.9502,18.1885,-4.97115},{9.84473,3.06738,-4.97115},{9.8916,-11.2856,-4.96908},{5.73633,-21.1167,-4.97114}
			};
		};
		
		class Land_Mil_Barracks_i {
			table = "Military";
			positions[] = {{5.11719,-2.0752,-1.09967},{2.87891,-1.30078,-0.703244},{2.82715,-1.27686,0.0940509},{-0.349609,-1.52539,-0.689853},{-0.421875,-1.54199,0.0929079},{-3.5791,-1.91602,-0.69595},{-3.5752,-0.854492,0.0975461},{-6.70313,-1.44141,-0.702389},{-6.91895,-0.918945,0.0985079},{-8.62109,2.05615,-1.09967},{-0.00585938,2.1748,-1.09967}
			};
		};
		
		class Land_Mil_Barracks_i_EP1 {
			table = "Military";
			positions[] = {{5.11719,-2.0752,-1.09967},{2.87891,-1.30078,-0.703244},{2.82715,-1.27686,0.0940509},{-0.349609,-1.52539,-0.689853},{-0.421875,-1.54199,0.0929079},{-3.5791,-1.91602,-0.69595},{-3.5752,-0.854492,0.0975461},{-6.70313,-1.44141,-0.702389},{-6.91895,-0.918945,0.0985079},{-8.62109,2.05615,-1.09967},{-0.00585938,2.1748,-1.09967}
			};
		};
		
		class Land_Mil_Barracks {
			table = "Military";
			positions[] = {{6.12695,3.49219,-1.94031},{-6.90332,3.47412,-1.94031},{-6.82031,-3.29883,-1.94031},{6.12891,-3.23145,-1.94031},{-0.327148,3.42041,-1.94031},{-3.62012,-3.30566,-1.94031},{0.984375,-3.36475,-1.46377}
			};
		};
		
		class Land_Mil_Barracks_EP1 {
			table = "Military";
			positions[] = {{6.12695,3.49219,-1.94031},{-6.90332,3.47412,-1.94031},{-6.82031,-3.29883,-1.94031},{6.12891,-3.23145,-1.94031},{-0.327148,3.42041,-1.94031},{-3.62012,-3.30566,-1.94031},{0.984375,-3.36475,-1.46377}
			};
		};
		
		class Land_fortified_nest_big {
			table = "Military";
			positions[] = {{-3.06738,-3.59668,-0.689236},{0.936523,0.859863,-0.690333},{3.23047,-3.55078,-0.691777},{-1.31152,0.966797,-0.690523}
			};
		};
		
		class Land_fortified_nest_big_EP1 {
			table = "Military";
			positions[] = {{-3.06738,-3.59668,-0.689236},{0.936523,0.859863,-0.690333},{3.23047,-3.55078,-0.691777},{-1.31152,0.966797,-0.690523}
			};
		};
		
		class Fort_CAmp {
			table = "Military";
			positions[] = {{-3.06738,-3.59668,-0.689236},{0.936523,0.859863,-0.690333},{3.23047,-3.55078,-0.691777},{-1.31152,0.966797,-0.690523}
			};
		};
		
		class Land_Fort_Watchtower {
			table = "Military";
			positions[] = {{-0.0664063,1.74072,0.568197},{-0.72168,-2.53564,0.568197},{-0.55957,-2.01221,-2.14194},{-0.0234375,1.98828,-2.15983}
			};
		};
		
		class Land_Fort_Watchtower_EP1 {
			table = "Military";
			positions[] = {{-0.0664063,1.74072,0.568197},{-0.72168,-2.53564,0.568197},{-0.55957,-2.01221,-2.14194},{-0.0234375,1.98828,-2.15983}
			};
		};
		
		class Land_Mil_Guardhouse {
			table = "Military";
			positions[] = {{-2.49023,2.72461,-1.67083},{-0.832031,2.9834,-1.67083},{3.8457,0.0834961,-1.67083},{-1.85352,-2.5376,-1.67083},{4.33789,-2.50635,-1.41409}
			};
		};
		
		class Land_Mil_Guardhouse_EP1 {
			table = "Military";
			positions[] = {{-2.49023,2.72461,-1.67083},{-0.832031,2.9834,-1.67083},{3.8457,0.0834961,-1.67083},{-1.85352,-2.5376,-1.67083},{4.33789,-2.50635,-1.41409}
			};
		};
		
		class Land_Mil_House {
			table = "Military";
			positions[] = {{-13.6689,-4.75928,-5.01606},{-5.03906,-2.66162,-5.01606},{-5.02832,-6.24902,-4.60692},{-4.79102,4.29932,-5.01606},{-5.02734,0.72998,-4.60904},{-13.6338,-0.469727,-4.60284},{-13.752,3.93408,-4.59781},{-2.41895,-6.49756,-5.01606},{9.25391,4.52246,-5.01606},{15.0713,-1.93213,-5.01606},{6.51855,-3.9292,-4.26},{1.79395,-6.27881,-4.26578},{1.6123,4.479,-5.01606},{5.66309,-1.97998,-5.01606},{-0.697266,4.41895,-0.685484},{-4.97461,4.54834,-0.69799},{-4.82324,-0.272461,-0.69799},{-5.29688,-6.36279,-0.225319},{-13.8125,-4.7876,-0.644518},{-13.2783,4.021,-0.224593},{11.4932,1.09863,-5.58876},{14.9688,4.48291,-5.62063}
			};
		};
		
		class Land_Mil_House_EP1 {
			table = "Military";
			positions[] = {{-13.6689,-4.75928,-5.01606},{-5.03906,-2.66162,-5.01606},{-5.02832,-6.24902,-4.60692},{-4.79102,4.29932,-5.01606},{-5.02734,0.72998,-4.60904},{-13.6338,-0.469727,-4.60284},{-13.752,3.93408,-4.59781},{-2.41895,-6.49756,-5.01606},{9.25391,4.52246,-5.01606},{15.0713,-1.93213,-5.01606},{6.51855,-3.9292,-4.26},{1.79395,-6.27881,-4.26578},{1.6123,4.479,-5.01606},{5.66309,-1.97998,-5.01606},{-0.697266,4.41895,-0.685484},{-4.97461,4.54834,-0.69799},{-4.82324,-0.272461,-0.69799},{-5.29688,-6.36279,-0.225319},{-13.8125,-4.7876,-0.644518},{-13.2783,4.021,-0.224593},{11.4932,1.09863,-5.58876},{14.9688,4.48291,-5.62063}
			};
		};
		
		class Land_Mil_House_dam {
			table = "Military";
			positions[] = {{-13.6689,-4.75928,-5.01606},{-5.03906,-2.66162,-5.01606},{-5.02832,-6.24902,-4.60692},{-4.79102,4.29932,-5.01606},{-5.02734,0.72998,-4.60904},{-13.6338,-0.469727,-4.60284},{-13.752,3.93408,-4.59781},{-2.41895,-6.49756,-5.01606},{9.25391,4.52246,-5.01606},{15.0713,-1.93213,-5.01606},{6.51855,-3.9292,-4.26},{1.79395,-6.27881,-4.26578},{1.6123,4.479,-5.01606},{5.66309,-1.97998,-5.01606},{-0.697266,4.41895,-0.685484},{-4.97461,4.54834,-0.69799},{-4.82324,-0.272461,-0.69799},{-5.29688,-6.36279,-0.225319},{-13.8125,-4.7876,-0.644518},{-13.2783,4.021,-0.224593},{11.4932,1.09863,-5.58876},{14.9688,4.48291,-5.62063}
			};
		};
		
		class Land_Mil_House_dam_EP1 {
			table = "Military";
			positions[] = {{-13.6689,-4.75928,-5.01606},{-5.03906,-2.66162,-5.01606},{-5.02832,-6.24902,-4.60692},{-4.79102,4.29932,-5.01606},{-5.02734,0.72998,-4.60904},{-13.6338,-0.469727,-4.60284},{-13.752,3.93408,-4.59781},{-2.41895,-6.49756,-5.01606},{9.25391,4.52246,-5.01606},{15.0713,-1.93213,-5.01606},{6.51855,-3.9292,-4.26},{1.79395,-6.27881,-4.26578},{1.6123,4.479,-5.01606},{5.66309,-1.97998,-5.01606},{-0.697266,4.41895,-0.685484},{-4.97461,4.54834,-0.69799},{-4.82324,-0.272461,-0.69799},{-5.29688,-6.36279,-0.225319},{-13.8125,-4.7876,-0.644518},{-13.2783,4.021,-0.224593},{11.4932,1.09863,-5.58876},{14.9688,4.48291,-5.62063}
			};
		};
		
		class Land_Church_03 {
			table = "Civilian";
			positions[] = {{-7.52441,4.05957,-14.3035},{-2.10742,7.49463,-14.3035},{5.29297,7.64844,-14.3035},{10.0566,3.31201,-13.7602},{9.72754,-3.48291,-13.7602},{5.7373,-7.33398,-14.3035},{-2.06934,-7.26611,-14.3035},{3.83301,-1.60449,-14.3035},{3.41113,2.37646,-14.3035},{-0.00976563,-2.42725,-14.3035},{-1.96777,2.854,-14.3035}
			};
		};
		
		class Land_Church_03_dam {
			table = "Civilian";
			positions[] = {{-7.52441,4.05957,-14.3035},{-2.10742,7.49463,-14.3035},{5.29297,7.64844,-14.3035},{10.0566,3.31201,-13.7602},{9.72754,-3.48291,-13.7602},{5.7373,-7.33398,-14.3035},{-2.06934,-7.26611,-14.3035},{3.83301,-1.60449,-14.3035},{3.41113,2.37646,-14.3035},{-0.00976563,-2.42725,-14.3035},{-1.96777,2.854,-14.3035}
			};
		};
		
		class Land_Farm_Cowshed_a {
			table = "Industrial";
			positions[] = {{8.68848,-2.3208,-3.08908},{3.45508,2.75293,-3.08908},{-3.47949,-2.31055,-3.01344},{-1.52832,-5.75586,-3.08908},{9.51563,-5.50342,-3.08908}
			};
		};
		
		class Land_Farm_Cowshed_a_dam {
			table = "Industrial";
			positions[] = {{8.68848,-2.3208,-3.08908},{3.45508,2.75293,-3.08908},{-3.47949,-2.31055,-3.01344},{-1.52832,-5.75586,-3.08908},{9.51563,-5.50342,-3.08908}
			};
		};
		
		class Land_Farm_Cowshed_b {
			table = "Industrial";
			positions[] = {{-10.1885,2.69336,-3.10254},{-4.56348,-2.68701,-3.03851},{-3.39746,2.8999,-3.03597},{5.11133,-2.53125,-3.0218},{8.13965,-2.61182,-3.10254}
			};
		};
		
		class Land_Farm_Cowshed_b_dam {
			table = "Industrial";
			positions[] = {{-10.1885,2.69336,-3.10254},{-4.56348,-2.68701,-3.03851},{-3.39746,2.8999,-3.03597},{5.11133,-2.53125,-3.0218},{8.13965,-2.61182,-3.10254}
			};
		};
		
		class Land_Farm_Cowshed_c {
			table = "Industrial";
			positions[] = {{-2.47461,2.72217,-3.12728},{2.63477,0.970215,-3.12728}
			};
		};
		
		class Land_Farm_Cowshed_c_dam {
			table = "Civilian";
			positions[] = {{-2.47461,2.72217,-3.12728},{2.63477,0.970215,-3.12728}
			};
		};
		
		class Land_Barn_W_01 {
			table = "Civilian";
			positions[] = {{4.93359,-18.3354,-2.57832},{-5.17285,-18.7734,-2.58027},{5.66895,-7.7793,-2.57089},{-4.95703,1.04248,-2.63522},{5.82324,18.9131,-2.63834},{-5.10254,18.4175,-2.58104}
			};
		};
		
		class Land_Barn_W_01_dam {
			table = "Civilian";
			positions[] = {{4.93359,-18.3354,-2.57832},{-5.17285,-18.7734,-2.58027},{5.66895,-7.7793,-2.57089},{-4.95703,1.04248,-2.63522},{5.82324,18.9131,-2.63834},{-5.10254,18.4175,-2.58104}
			};
		};
		
		class Land_Barn_W_02 {
			table = "Civilian";
			positions[] = {{3.68164,-5.66504,-2.2583},{-5.77344,6.16895,-2.26387},{4.18262,6.76758,-2.26605},{-5.10254,-5.89355,-2.25228}
			};
		};
		
		class Land_Shed_wooden {
			table = "Industrial";
			positions[] = {{2.12012,-0.969727,-1.29297},{-0.716797,0.989258,-1.29297}
			};
		};
		
		class Land_Shed_W01 {
			table = "Industrial";
			positions[] = {{-1.52637,0.361816,-1.41277}
			};
		};
		
		class Land_Nav_Boathouse {
			table = "Industrial";
			positions[] = {{-5.37891,6.61963,3.73675},{5.26367,5.25293,3.73481},{5.33984,-1.34668,3.72887},{7.58887,-2.24561,3.73362},{7.4248,9.3374,3.72884},{-7.00586,9.30371,3.73547},{-7.45996,-1.63037,3.73038},{4.75684,7.37207,6.3176},{-2.21094,7.34619,6.3176}
			};
		};
		
		class Land_A_Hospital {
			table = "Medical";
			positions[] = {{-15.9902,-2.12988,-7.3411},{-12.2412,-1.70361,-7.3411},{-15.8174,-5.35889,-7.3411},{-7.15723,-2.0708,-7.3411},{4.02832,-1.99609,-7.3411},{7.28711,-2.10449,-7.3411},{17.5107,-5.20557,-7.3411},{11.8486,-3.40918,-7.3411}
			};
		};
		
		class Land_A_Hospital_dam {
			table = "Medical";
			positions[] = {{-15.9902,-2.12988,-7.3411},{-12.2412,-1.70361,-7.3411},{-15.8174,-5.35889,-7.3411},{-7.15723,-2.0708,-7.3411},{4.02832,-1.99609,-7.3411},{7.28711,-2.10449,-7.3411},{17.5107,-5.20557,-7.3411},{11.8486,-3.40918,-7.3411}
			};
		};
		
		class Land_Rail_House_01 {
			table = "Industrial";
			positions[] = {{3.61523,2.9375,-1.2841},{-2.32227,2.9873,-1.2841}
			};
		};
		
		class Land_Misc_deerstand {
			table = "Military";
			positions[] = {{-0.575195,-1.18018,0.988353},{0.675781,-0.0512695,0.980138}
			};
		};
		
		class Land_rail_station_big {
			table = "Commercial";
			positions[] = {{-8.22266,-5.04834,-5.04582},{7.26074,3.33057,-5.04582},{8.59375,-4.91357,-5.04582},{1.90332,-0.933105,-4.97995},{-4.625,-2.31885,-4.97526},{-4.45898,4.22021,-4.97468},{2.20117,2.65771,-4.97376}
			};
		};
		
		class Land_wagon_box {
			table = "Industrial";
			positions[] = {{0.322266,4.55615,-0.778011},{0.392578,-4.28125,-0.778122}
			};
		};
		
		class Land_HouseV_1I1 {
			table = "Civilian";
			positions[] = {{-0.00976563,-2.15674,-2.87566}
			};
		};
		
		class Land_HouseV_1I1_dam {
			table = "Civilian";
			positions[] = {{-0.00976563,-2.15674,-2.87566}
			};
		};
		
		class Land_HouseV_1I3 {
			table = "Civilian";
			positions[] = {{2.20117,-0.994629,-2.19006}
			};
		};
		
		class Land_HouseV_1I4 {
			table = "Civilian";
			positions[] = {{-0.440918,3.63293,-2.72511},{-1.62402,-2.79089,-2.03926},{-4.05811,-3.89441,-2.76638},{0.046875,-4.53833,-2.76983}
			};
		};
		
		class Land_HouseV_3I3 {
			table = "Civilian";
			positions[] = {{4.3877,2.27148,-1.55208},{1.08203,3.07227,-1.77801}
			};
		};
		
		class Land_HouseV_3I4 {
			table = "Civilian";
			positions[] = {{5.52539,2.79297,-2.5733},{-4.52539,4.45361,-2.74851}
			};
		};
		
		class Land_HouseV_2L {
			table = "Civilian";
			positions[] = {{-3.99609,-3.84326,-3.98948},{4.32031,1.83643,-3.92848}
			};
		};
		
		class Land_HouseV_2L_dam {
			table = "Civilian";
			positions[] = {{-3.99609,-3.84326,-3.98948},{4.32031,1.83643,-3.92848}
			};
		};
		
		class Land_HouseV_1L1 {
			table = "Civilian";
			positions[] = {{1.18164,5.85938,-1.10944}
			};
		};
		
		class Land_HouseV_1T {
			table = "Civilian";
			positions[] = {{3.36133,-1.50684,-3.07073},{-4.8916,6.5,-3.08092}
			};
		};
		
		class Land_houseV_2T1 {
			table = "Civilian";
			positions[] = {{2.24023,-4.65576,-3.2318},{6.10547,-3.49316,-3.23187},{-4.69434,5.31494,-3.23187}
			};
		};
		
		class Land_houseV_2T2 {
			table = "Civilian";
			positions[] = {{-3.95605,1.07471,-4.03663},{6.26172,5.01318,-4.55972}
			};
		};
		
		class Land_HouseV2_01A {
			table = "Civilian";
			positions[] = {{-2.07715,-3.48486,-5.68029}
			};
		};
		
		class Land_HouseV2_01A_dam {
			table = "Civilian";
			positions[] = {{-2.07715,-3.48486,-5.68029}
			};
		};
		
		class Land_HouseV2_01B {
			table = "Civilian";
			positions[] = {{-3.68457,-2.31055,-5.17653}
			};
		};
		
		class Land_HouseV2_01B_dam {
			table = "Civilian";
			positions[] = {{-3.68457,-2.31055,-5.17653}
			};
		};
		
		class Land_HouseV2_02_Interier {
			table = "Commercial";
			positions[] = {{-8.35547,-1.74121,-5.53212},{-3.86133,6.21533,-5.53212},{-3.59277,1.58252,-5.53212},{8.86035,-2.13672,-4.71619},{6.44238,1.32715,-4.61201},{8.34473,6.22656,-5.53212},{2.77832,1.27295,-5.53212}
			};
		};
		
		class Land_HouseV2_02_Interier_dam {
			table = "Commercial";
			positions[] = {{-8.35547,-1.74121,-5.53212},{-3.86133,6.21533,-5.53212},{-3.59277,1.58252,-5.53212},{8.86035,-2.13672,-4.71619},{6.44238,1.32715,-4.61201},{8.34473,6.22656,-5.53212},{2.77832,1.27295,-5.53212}
			};
		};
		
		class Land_HouseV2_02 {
			table = "Commercial";
			positions[] = {{0.109375,7.12744,-6.16686},{-0.0351563,-7.17529,-6.16686}
			};
		};
		
		class Land_HouseV2_03 {
			table = "Commercial";
			positions[] = {{10.0234,-9.17334,-5.45344},{1.28027,-8.68652,-5.54016},{-14.1387,-8.62695,-5.53093},{-18.2344,0.970215,-5.89},{0.782227,8.06982,-5.85754},{18.0322,1.18701,-5.4517}
			};
		};
		
		class Land_HouseV2_03B {
			table = "Commercial";
			positions[] = {{-0.212891,-9.18115,-5.49408},{7.96484,1.1748,-5.48925},{-8.02344,3.20752,-5.49408}
			};
		};
		
		class Land_HouseV2_03B_dam {
			table = "Commercial";
			positions[] = {{-0.212891,-9.18115,-5.49408},{7.96484,1.1748,-5.48925},{-8.02344,3.20752,-5.49408}
			};
		};
		
		class Land_HouseV2_04_interier {
			table = "Commercial";
			positions[] = {{5.75586,-5.125,-5.74384},{7.2793,-1.53906,-5.74266},{0.349609,1.23438,-2.94489},{4.79492,2.61426,-5.08219},{7.47852,6.53613,-5.74017},{1.90625,2.68652,-5.0542},{3.37305,6.64502,-5.74003},{-1.30078,2.9668,-5.7412},{-3.72852,6.875,-4.99274},{-5.72656,2.56641,-4.91507}
			};
		};
		
		class Land_HouseV2_04_interier_dam {
			table = "Commercial";
			positions[] = {{5.75586,-5.125,-5.74384},{7.2793,-1.53906,-5.74266},{0.349609,1.23438,-2.94489},{4.79492,2.61426,-5.08219},{7.47852,6.53613,-5.74017},{1.90625,2.68652,-5.0542},{3.37305,6.64502,-5.74003},{-1.30078,2.9668,-5.7412},{-3.72852,6.875,-4.99274},{-5.72656,2.56641,-4.91507}
			};
		};
		
		class Land_HouseV2_04 {
			table = "Commercial";
			positions[] = {{5.62988,-3.24609,-5.74127},{5.60449,9.08252,-5.74374}
			};
		};
		
		class Land_HouseV2_05 {
			table = "Civilian";
			positions[] = {{-4.9248,-0.342285,-2.95148},{5.40918,6.94092,-2.57568}
			};
		};
		
		class WarfareBAirport {
			table = "Military";
			positions[] = {{-13.0039,20.7949,-5.87397},{10.0215,20.8091,-5.87397},{13.0918,7.44434,-5.87397},{13.7119,-17.5605,-5.87397},{-12.2744,-18.5757,-5.87397},{-12.3418,-6.97266,-5.87397}
			};
		};
		
		class Land_Ss_hangar {
			table = "Military";
			positions[] = {{-13.0039,20.7949,-5.87397},{10.0215,20.8091,-5.87397},{13.0918,7.44434,-5.87397},{13.7119,-17.5605,-5.87397},{-12.2744,-18.5757,-5.87397},{-12.3418,-6.97266,-5.87397}
			};
		};
		
		class Land_Mil_hangar_EP1 {
			table = "Military";
			positions[] = {{-13.0039,20.7949,-5.87397},{10.0215,20.8091,-5.87397},{13.0918,7.44434,-5.87397},{13.7119,-17.5605,-5.87397},{-12.2744,-18.5757,-5.87397},{-12.3418,-6.97266,-5.87397}
			};
		};
		
		class Land_Ss_hangard {
			table = "Military";
			positions[] = {{-13.0039,20.7949,-5.87397},{10.0215,20.8091,-5.87397},{13.0918,7.44434,-5.87397},{13.7119,-17.5605,-5.87397},{-12.2744,-18.5757,-5.87397},{-12.3418,-6.97266,-5.87397}
			};
		};
		
		class Land_Panelak3 {
			table = "Civilian";
			positions[] = {{5.69141,-4.37061,15.4978},{5.89355,4.06934,15.4978},{-6.63477,4.54883,15.4978},{-2.51563,-2.32471,15.4978},{0.078125,-2.79883,12.649},{3.18848,-4.11377,12.649},{2.72266,4.58252,12.649},{5.94141,4.13623,12.649},{4.55957,-1.17139,12.649},{6.54883,-3.38721,12.649},{5.36035,1.92676,12.649},{0.176758,-0.972656,12.649},{-2.19238,1.90332,12.649},{-2.75781,4.39697,12.649},{-6.70508,4.86182,12.649},{-4.63184,-1.13867,12.649},{-5.05371,2.02539,12.649},{-6.45313,-3.46631,12.649},{-3.0918,-4.00342,12.649},{-0.738281,4.15137,11.2682},{-0.609375,4.03955,8.55749},{-0.592773,4.14453,5.85747},{-0.600586,4.10889,3.15395},{-0.570313,4.22217,0.497544},{-0.591797,4.23584,-2.20305},{-0.484375,4.26465,-4.91676},{-0.567383,4.26318,-7.62858},{-0.616211,4.1084,-10.3698},{3.2334,4.59277,-10.3955},{3.78223,-2.28564,-10.3955},{0.229492,-2.87646,-10.3955},{0.0664063,-4.58203,-10.3266},{0.249023,-0.915527,-8.95765},{-0.139648,-0.567383,-6.25681},{0.0830078,-2.78857,-6.25674},{1.95605,2.11572,-6.25666},{2.70801,4.74756,-6.25665},{6.25488,4.14648,-6.25666},{4.5791,-1.32764,-6.25665},{5.36523,1.92285,-6.25666},{6.5625,-3.39014,-6.25666},{3.19141,-4.12402,-6.25665},{-2.21387,1.83398,-6.25682},{-2.75391,4.37451,-6.25675},{-6.40234,4.58691,-6.25661},{-4.68066,-1.09131,-6.25678},{-4.99414,2.09521,-6.25671},{-6.46387,-3.50146,-6.25676},{-3.09863,-4.07324,-6.25678},{0.175781,-0.941895,-3.557},{0.0869141,-2.81934,-3.557},{2.71582,4.63184,-3.557},{5.92969,4.14404,-3.557},{4.55566,-1.16211,-3.557},{5.38184,1.89746,-3.557},{6.54199,-3.41406,-3.557},{3.2041,-4.17285,-3.557},{-3.08008,-4.01123,-3.557},{-2.73828,4.43896,-3.557},{-6.7002,4.60889,-3.557},{-4.63867,-1.13525,-3.557},{-5.04297,2.03809,-3.557},{-6.44824,-3.45605,-3.557},{0.194336,-0.999512,-0.856},{0.102539,-2.87305,-0.856},{2.7207,4.66162,-0.856},{5.9707,4.14551,-0.856},{4.52539,-1.25049,-0.856},{5.33691,1.91162,-0.856},{6.53711,-3.38184,-0.856},{3.17578,-4.104,-0.856},{-3.10645,-4.00098,-0.856},{-2.76855,4.45264,-0.856},{-6.58594,4.60107,-0.856},{-4.6416,-1.18506,-0.856},{-4.9707,2.02051,-0.856},{-6.39355,-3.50928,-0.856},{0.0673828,-2.86816,1.845},{0.130859,-0.90625,1.76734},{-3.0918,-4.00342,1.845},{-2.18555,1.88086,1.845},{-2.76465,4.38965,1.845},{-6.61133,4.55957,1.845},{-4.6582,-1.11084,1.845},{-4.91016,2.09521,1.845},{-6.44141,-3.50293,1.845},{2.70898,4.6499,1.845},{6.20898,4.06445,1.845},{4.48242,-1.35498,1.845},{5.39551,1.94287,1.845},{6.55078,-3.41699,1.845},{3.20605,-4.0918,1.845},{0.0791016,-0.788086,4.46964},{0.0683594,-2.81689,4.546},{2.7168,4.63232,4.546},{5.92871,4.15625,4.546},{4.57129,-1.17139,4.546},{5.39453,1.88965,4.546},{6.53613,-3.44189,4.546},{3.18457,-4.1582,4.546},{0.112305,-0.835449,7.17646},{3.20996,-4.13135,7.247},{2.7334,4.61621,7.247},{5.9834,4.10352,7.247},{4.5293,-1.2373,7.247},{5.3584,1.93994,7.247},{6.54492,-3.43311,7.247},{-3.0957,-4.03076,7.247},{-2.76465,4.44775,7.247},{-2.20605,1.89111,7.247},{-5.03027,2.05029,7.247},{-4.6123,-1.12012,7.247},{-6.44141,-3.50879,7.247},{-6.63574,4.71826,7.247},{0.101563,-0.759766,9.88405},{-2.77637,4.40234,9.948},{-2.19238,1.93945,9.948},{-5.00098,2.10059,9.948},{-4.6377,-1.21045,9.948},{-3.13965,-4.2207,9.948},{-6.43555,-3.46533,9.948},{-6.70508,4.76318,9.948},{2.70313,4.5542,9.948},{5.93555,4.125,9.948},{4.5752,-1.12695,9.948},{5.37109,1.90674,9.948},{6.53809,-3.46338,9.948},{3.19238,-4.20898,9.948},{0.0966797,-2.78711,9.948}
			};
		};
		
		class Land_Panelak3_grey {
			table = "Civilian";
			positions[] = {{5.69141,-4.37061,15.4978},{5.89355,4.06934,15.4978},{-6.63477,4.54883,15.4978},{-2.51563,-2.32471,15.4978},{0.078125,-2.79883,12.649},{3.18848,-4.11377,12.649},{2.72266,4.58252,12.649},{5.94141,4.13623,12.649},{4.55957,-1.17139,12.649},{6.54883,-3.38721,12.649},{5.36035,1.92676,12.649},{0.176758,-0.972656,12.649},{-2.19238,1.90332,12.649},{-2.75781,4.39697,12.649},{-6.70508,4.86182,12.649},{-4.63184,-1.13867,12.649},{-5.05371,2.02539,12.649},{-6.45313,-3.46631,12.649},{-3.0918,-4.00342,12.649},{-0.738281,4.15137,11.2682},{-0.609375,4.03955,8.55749},{-0.592773,4.14453,5.85747},{-0.600586,4.10889,3.15395},{-0.570313,4.22217,0.497544},{-0.591797,4.23584,-2.20305},{-0.484375,4.26465,-4.91676},{-0.567383,4.26318,-7.62858},{-0.616211,4.1084,-10.3698},{3.2334,4.59277,-10.3955},{3.78223,-2.28564,-10.3955},{0.229492,-2.87646,-10.3955},{0.0664063,-4.58203,-10.3266},{0.249023,-0.915527,-8.95765},{-0.139648,-0.567383,-6.25681},{0.0830078,-2.78857,-6.25674},{1.95605,2.11572,-6.25666},{2.70801,4.74756,-6.25665},{6.25488,4.14648,-6.25666},{4.5791,-1.32764,-6.25665},{5.36523,1.92285,-6.25666},{6.5625,-3.39014,-6.25666},{3.19141,-4.12402,-6.25665},{-2.21387,1.83398,-6.25682},{-2.75391,4.37451,-6.25675},{-6.40234,4.58691,-6.25661},{-4.68066,-1.09131,-6.25678},{-4.99414,2.09521,-6.25671},{-6.46387,-3.50146,-6.25676},{-3.09863,-4.07324,-6.25678},{0.175781,-0.941895,-3.557},{0.0869141,-2.81934,-3.557},{2.71582,4.63184,-3.557},{5.92969,4.14404,-3.557},{4.55566,-1.16211,-3.557},{5.38184,1.89746,-3.557},{6.54199,-3.41406,-3.557},{3.2041,-4.17285,-3.557},{-3.08008,-4.01123,-3.557},{-2.73828,4.43896,-3.557},{-6.7002,4.60889,-3.557},{-4.63867,-1.13525,-3.557},{-5.04297,2.03809,-3.557},{-6.44824,-3.45605,-3.557},{0.194336,-0.999512,-0.856},{0.102539,-2.87305,-0.856},{2.7207,4.66162,-0.856},{5.9707,4.14551,-0.856},{4.52539,-1.25049,-0.856},{5.33691,1.91162,-0.856},{6.53711,-3.38184,-0.856},{3.17578,-4.104,-0.856},{-3.10645,-4.00098,-0.856},{-2.76855,4.45264,-0.856},{-6.58594,4.60107,-0.856},{-4.6416,-1.18506,-0.856},{-4.9707,2.02051,-0.856},{-6.39355,-3.50928,-0.856},{0.0673828,-2.86816,1.845},{0.130859,-0.90625,1.76734},{-3.0918,-4.00342,1.845},{-2.18555,1.88086,1.845},{-2.76465,4.38965,1.845},{-6.61133,4.55957,1.845},{-4.6582,-1.11084,1.845},{-4.91016,2.09521,1.845},{-6.44141,-3.50293,1.845},{2.70898,4.6499,1.845},{6.20898,4.06445,1.845},{4.48242,-1.35498,1.845},{5.39551,1.94287,1.845},{6.55078,-3.41699,1.845},{3.20605,-4.0918,1.845},{0.0791016,-0.788086,4.46964},{0.0683594,-2.81689,4.546},{2.7168,4.63232,4.546},{5.92871,4.15625,4.546},{4.57129,-1.17139,4.546},{5.39453,1.88965,4.546},{6.53613,-3.44189,4.546},{3.18457,-4.1582,4.546},{0.112305,-0.835449,7.17646},{3.20996,-4.13135,7.247},{2.7334,4.61621,7.247},{5.9834,4.10352,7.247},{4.5293,-1.2373,7.247},{5.3584,1.93994,7.247},{6.54492,-3.43311,7.247},{-3.0957,-4.03076,7.247},{-2.76465,4.44775,7.247},{-2.20605,1.89111,7.247},{-5.03027,2.05029,7.247},{-4.6123,-1.12012,7.247},{-6.44141,-3.50879,7.247},{-6.63574,4.71826,7.247},{0.101563,-0.759766,9.88405},{-2.77637,4.40234,9.948},{-2.19238,1.93945,9.948},{-5.00098,2.10059,9.948},{-4.6377,-1.21045,9.948},{-3.13965,-4.2207,9.948},{-6.43555,-3.46533,9.948},{-6.70508,4.76318,9.948},{2.70313,4.5542,9.948},{5.93555,4.125,9.948},{4.5752,-1.12695,9.948},{5.37109,1.90674,9.948},{6.53809,-3.46338,9.948},{3.19238,-4.20898,9.948},{0.0966797,-2.78711,9.948}
			};
		};
		
		class Land_Panelak {
			table = "Civilian";
			positions[] = {{6.54492,3.64746,5.62442},{6.60938,-5.48047,5.62443},{-6.0166,-5.38477,5.62442},{-5.00586,3.04492,5.62442},{0.814453,2.77588,-1.22343},{0.0166016,-2.11328,0.0699835},{-2.12207,0.87793,0.0699835},{-2.64941,3.52783,0.0699835},{-6.59277,3.53223,0.0699835},{-4.98145,-2.44385,0.069984},{-5.17676,1.0957,0.0699835},{-6.31641,-4.62109,0.0699835},{-3.06738,-5.33447,0.0699835},{3.18066,-5.03711,0.0699835},{2.77734,3.25244,0.0699835},{6.55957,3.60889,0.0699835},{4.69824,-1.67627,0.0699835},{6.76855,-4.79834,0.0699835},{0.0341797,2.70557,1.40874},{-0.112305,-1.771,2.77},{2.71191,-1.99121,2.77001},{2.64355,3.62012,2.77001},{4.97656,2.62158,3.43663},{4.7832,-1.56396,2.77001},{6.37695,-4.38623,2.77},{3.2041,-4.88574,2.77},{-2.95215,-5.18115,2.77},{-2.70313,3.31104,2.77001},{-6.67969,3.72998,2.77001},{-5.08887,-2.14746,2.77001},{-5.25684,0.959961,2.77001},{-5.28418,-4.12598,3.09194}
			};
		};
		
		class Land_Panelak_Grey {
			table = "Civilian";
			positions[] = {{6.54492,3.64746,5.62442},{6.60938,-5.48047,5.62443},{-6.0166,-5.38477,5.62442},{-5.00586,3.04492,5.62442},{0.814453,2.77588,-1.22343},{0.0166016,-2.11328,0.0699835},{-2.12207,0.87793,0.0699835},{-2.64941,3.52783,0.0699835},{-6.59277,3.53223,0.0699835},{-4.98145,-2.44385,0.069984},{-5.17676,1.0957,0.0699835},{-6.31641,-4.62109,0.0699835},{-3.06738,-5.33447,0.0699835},{3.18066,-5.03711,0.0699835},{2.77734,3.25244,0.0699835},{6.55957,3.60889,0.0699835},{4.69824,-1.67627,0.0699835},{6.76855,-4.79834,0.0699835},{0.0341797,2.70557,1.40874},{-0.112305,-1.771,2.77},{2.71191,-1.99121,2.77001},{2.64355,3.62012,2.77001},{4.97656,2.62158,3.43663},{4.7832,-1.56396,2.77001},{6.37695,-4.38623,2.77},{3.2041,-4.88574,2.77},{-2.95215,-5.18115,2.77},{-2.70313,3.31104,2.77001},{-6.67969,3.72998,2.77001},{-5.08887,-2.14746,2.77001},{-5.25684,0.959961,2.77001},{-5.28418,-4.12598,3.09194}
			};
		};
		
		class Land_Panelak2 {
			table = "Civilian";
			positions[] = {{3.94824,-5.06104,-3.6495},{0.0654297,-7.00684,-3.6495},{3.84961,2.02051,-3.6495},{0.259766,1.81104,-3.6495},{-0.0234375,-3.38818,-2.21758},{0.118164,1.41797,-0.876834},{-0.0146484,-3.21582,0.482524},{0.0634766,-5.21387,0.538357},{2.72168,1.85693,0.538975},{6.3418,2.04688,0.533824},{4.56348,-3.50732,0.536463},{4.86426,-0.337402,0.534374},{6.61035,-6.0293,0.533583},{3.00879,-6.42725,0.548841},{-2.90723,-6.58105,0.482544},{-6.0752,-6.13281,0.482548},{-4.69434,-0.358398,0.4826},{-4.89551,-3.75439,0.482547},{-6.77246,1.98438,0.536131},{-2.8418,2.13379,0.482577},{0.129883,1.34131,1.84229},{-0.0449219,-3.17529,3.16656},{0.0351563,-5.27295,3.21674},{2.80859,1.80762,3.21766},{3.12598,-6.53418,3.2218},{4.4248,-3.83643,3.2269},{4.68848,-0.460938,3.21685},{6.56543,-5.86377,3.21693},{-3.12793,-6.81152,3.21968},{-2.81348,1.84521,3.22233},{-4.6875,-3.51416,3.22019},{-4.88184,-0.387207,3.22077},{-5.98242,-5.62402,3.21974},{0.117188,1.22266,4.52637},{-0.189453,-3.13916,5.9086},{0.0351563,-5.27979,5.9086},{2.70117,1.8667,5.9086},{6.06543,1.97949,5.9086},{4.3584,-3.81982,5.9086},{5.08594,-0.379395,5.9086},{6.72656,-5.87305,5.9086},{3.00684,-6.30762,5.9086},{-2.75684,-6.37598,5.9086},{-2.71289,1.93555,5.9086},{-4.56641,-3.56006,5.9086},{-4.88867,-0.345215,5.9086},{-6.51953,-5.83496,5.9086},{0.137695,1.13135,7.22737},{-0.0498047,-3.14844,8.5378},{0.0410156,-5.2583,8.60262},{2.60352,1.94482,8.61185},{4.73535,-3.58496,8.60164},{4.84473,-0.355469,8.60635},{6.63867,-5.88574,8.60735},{3.01563,-6.44775,8.61226},{-2.83008,-6.39453,8.60414},{-2.69434,1.8999,8.58849},{-4.38379,-3.68457,8.6114},{-4.90918,-0.303711,8.60659},{-6.33594,-5.88867,8.60881},{6.94629,2.38379,11.4472},{-6.37598,-7.31934,11.4479}
			};
		};
		
		class Land_Panelak2_Grey {
			table = "Civilian";
			positions[] = {{3.94824,-5.06104,-3.6495},{0.0654297,-7.00684,-3.6495},{3.84961,2.02051,-3.6495},{0.259766,1.81104,-3.6495},{-0.0234375,-3.38818,-2.21758},{0.118164,1.41797,-0.876834},{-0.0146484,-3.21582,0.482524},{0.0634766,-5.21387,0.538357},{2.72168,1.85693,0.538975},{6.3418,2.04688,0.533824},{4.56348,-3.50732,0.536463},{4.86426,-0.337402,0.534374},{6.61035,-6.0293,0.533583},{3.00879,-6.42725,0.548841},{-2.90723,-6.58105,0.482544},{-6.0752,-6.13281,0.482548},{-4.69434,-0.358398,0.4826},{-4.89551,-3.75439,0.482547},{-6.77246,1.98438,0.536131},{-2.8418,2.13379,0.482577},{0.129883,1.34131,1.84229},{-0.0449219,-3.17529,3.16656},{0.0351563,-5.27295,3.21674},{2.80859,1.80762,3.21766},{3.12598,-6.53418,3.2218},{4.4248,-3.83643,3.2269},{4.68848,-0.460938,3.21685},{6.56543,-5.86377,3.21693},{-3.12793,-6.81152,3.21968},{-2.81348,1.84521,3.22233},{-4.6875,-3.51416,3.22019},{-4.88184,-0.387207,3.22077},{-5.98242,-5.62402,3.21974},{0.117188,1.22266,4.52637},{-0.189453,-3.13916,5.9086},{0.0351563,-5.27979,5.9086},{2.70117,1.8667,5.9086},{6.06543,1.97949,5.9086},{4.3584,-3.81982,5.9086},{5.08594,-0.379395,5.9086},{6.72656,-5.87305,5.9086},{3.00684,-6.30762,5.9086},{-2.75684,-6.37598,5.9086},{-2.71289,1.93555,5.9086},{-4.56641,-3.56006,5.9086},{-4.88867,-0.345215,5.9086},{-6.51953,-5.83496,5.9086},{0.137695,1.13135,7.22737},{-0.0498047,-3.14844,8.5378},{0.0410156,-5.2583,8.60262},{2.60352,1.94482,8.61185},{4.73535,-3.58496,8.60164},{4.84473,-0.355469,8.60635},{6.63867,-5.88574,8.60735},{3.01563,-6.44775,8.61226},{-2.83008,-6.39453,8.60414},{-2.69434,1.8999,8.58849},{-4.38379,-3.68457,8.6114},{-4.90918,-0.303711,8.60659},{-6.33594,-5.88867,8.60881},{6.94629,2.38379,11.4472},{-6.37598,-7.31934,11.4479}
			};
		};
		
		class Land_A_BuildingWIP {
			table = "Industrial";
			positions[] = {{-16.9541,-12.811,-6.50166},{-16.4502,-15.4707,-6.5093},{-23.6582,-9.30127,-6.52178},{-20.5166,-0.592773,-6.52799},{-24.2109,-3.50879,-6.52919},{-20.5205,2.59717,-6.43314},{-24.2539,5.12988,-6.42339},{-23.9297,11.0342,-6.4664},{-17.3115,11.7549,-6.43021},{-2.67383,11.1689,-6.52157},{0.442383,10.895,-6.48189},{-11.8467,-9.375,-6.48303},{-14.2998,-9.60693,-6.49935},{-14.3164,-1.78223,-6.50391},{-14.3467,4.02051,-6.47594},{-9.3418,1.37842,-6.53031},{-0.196289,2.09277,-6.424},{9.82617,4.87012,-6.39943},{6.79785,11.7637,-6.4159},{14.3867,3.36719,-6.50847},{13.9121,-2,-6.52498},{15.2686,-8.8374,-6.52884},{3.31445,-6.12695,-6.50025},{-3.32422,-9.04053,-6.48223},{-7.40332,-8.99756,-6.47643},{19.5947,-0.915039,-6.53359},{20.8564,1.83691,-4.52736},{20.5791,-4.46484,-2.53435},{17.5684,-0.348633,-2.53435},{12.0693,-6.31299,-2.53279},{1.92871,-9.42871,-2.53522},{-9.95313,-5.4834,-2.53339},{-14.7969,-9.2002,-2.53512},{-24.002,-9.24121,-2.53316},{-20.5566,-2.15039,-2.53326},{-23.9932,3.1543,-2.53326},{-15.3271,-12.728,-2.5363},{-11.5557,-8.66602,-2.53489},{-23.5986,11.6587,-2.53326},{-16.4834,11.4639,-2.53326},{-10.5361,11.3906,-2.53326},{-6.22168,11.6274,-1.48501},{1.26563,8.46094,-2.53326},{13.5537,9.94287,-2.53326},{20.6611,1.65234,-0.517698},{13.5938,-8.03809,1.47959},{8.80566,8.75537,1.51087},{-0.592773,10.6494,1.51674},{-2.38184,-4.04004,1.51405},{-6.58691,-9.5625,1.50773},{-22.7832,-8.74707,1.48338},{-23.2432,9.96191,1.51377},{-16.7822,-12.7148,1.47924},{-14.7617,-16.5356,3.48434},{-15.124,-13.5234,5.46539},{-22.8711,9.77637,5.46317},{0.629883,10.2974,5.42968},{6.51563,-7.46387,5.38186},{-23.1182,-7.93408,5.47517}
			};
		};
		
		class Land_A_BuildingWIP_EP1 {
			table = "Industrial";
			positions[] = {{-16.9541,-12.811,-6.50166},{-16.4502,-15.4707,-6.5093},{-23.6582,-9.30127,-6.52178},{-20.5166,-0.592773,-6.52799},{-24.2109,-3.50879,-6.52919},{-20.5205,2.59717,-6.43314},{-24.2539,5.12988,-6.42339},{-23.9297,11.0342,-6.4664},{-17.3115,11.7549,-6.43021},{-2.67383,11.1689,-6.52157},{0.442383,10.895,-6.48189},{-11.8467,-9.375,-6.48303},{-14.2998,-9.60693,-6.49935},{-14.3164,-1.78223,-6.50391},{-14.3467,4.02051,-6.47594},{-9.3418,1.37842,-6.53031},{-0.196289,2.09277,-6.424},{9.82617,4.87012,-6.39943},{6.79785,11.7637,-6.4159},{14.3867,3.36719,-6.50847},{13.9121,-2,-6.52498},{15.2686,-8.8374,-6.52884},{3.31445,-6.12695,-6.50025},{-3.32422,-9.04053,-6.48223},{-7.40332,-8.99756,-6.47643},{19.5947,-0.915039,-6.53359},{20.8564,1.83691,-4.52736},{20.5791,-4.46484,-2.53435},{17.5684,-0.348633,-2.53435},{12.0693,-6.31299,-2.53279},{1.92871,-9.42871,-2.53522},{-9.95313,-5.4834,-2.53339},{-14.7969,-9.2002,-2.53512},{-24.002,-9.24121,-2.53316},{-20.5566,-2.15039,-2.53326},{-23.9932,3.1543,-2.53326},{-15.3271,-12.728,-2.5363},{-11.5557,-8.66602,-2.53489},{-23.5986,11.6587,-2.53326},{-16.4834,11.4639,-2.53326},{-10.5361,11.3906,-2.53326},{-6.22168,11.6274,-1.48501},{1.26563,8.46094,-2.53326},{13.5537,9.94287,-2.53326},{20.6611,1.65234,-0.517698},{13.5938,-8.03809,1.47959},{8.80566,8.75537,1.51087},{-0.592773,10.6494,1.51674},{-2.38184,-4.04004,1.51405},{-6.58691,-9.5625,1.50773},{-22.7832,-8.74707,1.48338},{-23.2432,9.96191,1.51377},{-16.7822,-12.7148,1.47924},{-14.7617,-16.5356,3.48434},{-15.124,-13.5234,5.46539},{-22.8711,9.77637,5.46317},{0.629883,10.2974,5.42968},{6.51563,-7.46387,5.38186},{-23.1182,-7.93408,5.47517}
			};
		};
		
		class Land_A_CraneCon {
			table = "Industrial";
			positions[] = {{-8.32813,-0.0859375,-16.7789},{-8.43066,-1.60059,5.78485},{-7.66016,1.45117,5.78485}
			};
		};
		
		class Land_IndPipe1_stair {
			table = "Industrial";
			positions[] = {{-0.0380859,-0.279785,0.872054}
			};
		};
		
		class Land_IndPipe1_stair_EP1 {
			table = "Industrial";
			positions[] = {{-0.0380859,-0.279785,0.872054}
			};
		};
		
		class Land_IndPipe2_big_18ladder {
			table = "Industrial";
			positions[] = {{-0.126953,6.95068,2.29432},{-0.03125,-0.63916,2.29432},{-0.0947266,-4.79883,2.23802}
			};
		};
		
		class Land_IndPipe2_big_18ladder_EP1 {
			table = "Industrial";
			positions[] = {{-0.126953,6.95068,2.29432},{-0.03125,-0.63916,2.29432},{-0.0947266,-4.79883,2.23802}
			};
		};
		
		class Land_IndPipe2_big_18 {
			table = "Industrial";
			positions[] = {{-0.126953,6.95068,2.29432},{-0.03125,-0.63916,2.29432},{-0.0947266,-4.79883,2.23802}
			};
		};
		
		class Land_IndPipe2_big_18_EP1 {
			table = "Industrial";
			positions[] = {{-0.126953,6.95068,2.29432},{-0.03125,-0.63916,2.29432},{-0.0947266,-4.79883,2.23802}
			};
		};
		
		class Land_IndPipe2_big_9 {
			table = "Industrial";
			positions[] = {{0.0966797,-1.89209,2.19278}
			};
		};
		
		class Land_IndPipe2_big_9_EP1 {
			table = "Industrial";
			positions[] = {{0.0966797,-1.89209,2.19278}
			};
		};
		
		class Land_IndPipe2_bigBuild1_L {
			table = "Industrial";
			positions[] = {{5.14941,-0.609863,2.21367}
			};
		};
		
		class Land_IndPipe2_bigBuild1_L_EP1 {
			table = "Industrial";
			positions[] = {{5.14941,-0.609863,2.21367}
			};
		};
		
		class Land_IndPipe2_bigBuild1_R {
			table = "Industrial";
			positions[] = {{-5.67773,0.335938,2.27281}
			};
		};
		
		class Land_IndPipe2_bigBuild1_R_EP1 {
			table = "Industrial";
			positions[] = {{-5.67773,0.335938,2.27281}
			};
		};
		
		class Land_IndPipe2_T_L {
			table = "Industrial";
			positions[] = {{-0.136719,1.16699,2.20739}
			};
		};
		
		class Land_IndPipe2_T_L_EP1 {
			table = "Industrial";
			positions[] = {{-0.136719,1.16699,2.20739}
			};
		};
		
		class Land_Hangar_2 {
			table = "Industrial";
			positions[] = {{-12.8799,8.72412,-2.56462},{12.6396,9.80518,-2.56462},{1.41309,-7.96045,-2.56462},{11.748,-2.69971,-2.56462},{-11.6953,-6.25977,-2.56462}
			};
		};
		
		class Land_Tovarna2 {
			table = "Industrial";
			positions[] = {{9.36719,-2.34717,-4.61687},{8.9502,4.61816,-4.61747},{5.53418,-4.02539,-4.62024},{-1.9043,6.54932,-5.62714},{1.66602,6.61084,-5.62714},{-5.84082,-0.892578,-5.62714},{-11.9648,-8.46777,-5.62714},{-9.21094,7.05322,-5.62714},{-12.6035,2.11133,-5.62714},{-4.49023,5.16895,-5.62714},{-4.18262,2.40332,-3.96888},{-12.2998,1.82617,-2.3102},{-12.875,8.12305,-2.29942},{-3.94336,9.01904,-2.30095},{-4.14355,5.07129,-2.30157},{-7.25781,8.55273,-2.30927},{-3.93262,2.42676,-0.429338},{-12.6201,1.67334,1.59262},{-8.90527,8.05518,1.59004},{-4.16113,5.13477,1.56308},{-7.24219,9.0415,1.5587},{-4.13184,1.89893,3.08803},{-6.75195,0.317871,3.42286},{-6.6875,-0.94873,0.388959},{-11.042,-1.09229,0.370306},{-13.166,-8.98145,0.363091},{0.0976563,-9.00781,0.368404},{2.41113,-8.87402,3.36621},{2.48047,4.22168,0.36335},{2.52832,6.93506,3.36865}
			};
		};
		
		class Land_hopper_old_PMC {
			table = "Industrial";
			positions[] = {{-1.42773,-0.0610352,6.56679}
			};
		};
		
		class Land_Repair_center {
			table = "Mechanical";
			positions[] = {{-2.69629,4.22998,-1.52991},{-2.7168,-1.57031,-1.52991}
			};
		};
		
		class Land_Repair_center_EP1 {
			table = "Mechanical";
			positions[] = {{-2.69629,4.22998,-1.52991},{-2.7168,-1.57031,-1.52991}
			};
		};
		
		class Land_Kamenolom_budova {
			table = "Industrial";
			positions[] = {{-7.22656,-5.979,-7.48133},{-7.12207,14.1851,-7.48133},{-0.510742,-10.5713,-7.48133},{-0.787109,-15.7207,-7.48133},{6.90723,8.64893,-7.48133}
			};
		};
		
		class Land_Ind_Quarry {
			table = "Industrial";
			positions[] = {{-7.22656,-5.979,-7.48133},{-7.12207,14.1851,-7.48133},{-0.510742,-10.5713,-7.48133},{-0.787109,-15.7207,-7.48133},{6.90723,8.64893,-7.48133}
			};
		};
		
		class Land_pila {
			table = "Industrial";
			positions[] = {{9.22852,5.62891,-5.83539},{2.35938,-12.374,-5.8354},{-10.4785,8.79395,2.27536},{-9.89355,6.35303,2.27536}
			};
		};
		
		class Land_Ind_SawMill {
			table = "Industrial";
			positions[] = {{9.22852,5.62891,-5.83539},{2.35938,-12.374,-5.8354},{-10.4785,8.79395,2.27536},{-9.89355,6.35303,2.27536}
			};
		};
		
		class Land_Ind_Workshop01_01 {
			table = "Industrial";
			positions[] = {{-0.930664,1.3667,-0.833678},{-0.955078,-3.03076,-1.29575},{1.99414,-1.27783,-1.29075}
			};
		};
		
		class Land_Ind_Workshop01_L {
			table = "Industrial";
			positions[] = {{-0.28418,6.3584,-1.30746},{-1.88477,-4.69824,-1.31186},{3.82031,-3.77734,-1.31495},{-0.391602,1.01563,-1.30964}
			};
		};
		
		class Land_Ind_Workshop01_02 {
			table = "Industrial";
			positions[] = {{1.26855,3.06934,-1.42633},{-1.14941,-3.25537,-1.43456},{1.53516,-2.97803,-1.43404}
			};
		};
		
		class Land_Ind_Workshop01_03 {
			table = "Industrial";
			positions[] = {{-1.87598,-5.01172,-1.37899},{1.06738,5.19873,-1.37813},{-2.19043,1.25977,-1.37782},{1.14746,-3.604,-1.37375}
			};
		};
		
		class Land_Ind_Workshop01_04 {
			table = "Industrial";
			positions[] = {{1.09766,1.30176,-1.53051},{0.34082,-5.74707,-1.52539},{-1.47852,5.58057,-1.52935}
			};
		};
		
		class Land_Ind_TankBig {
			table = "Industrial";
			positions[] = {{3.95898,-2.59521,5.34484},{0.685547,4.27832,5.34484},{-4.95313,-1.65479,5.34484}
			};
		};
		
		class Land_Komin {
			table = "Industrial";
			positions[] = {{1.6582,1.08154,12.4547},{-1.73535,0.447754,12.4547}
			};
		};
		
		class Land_Ind_Stack_Big {
			table = "Industrial";
			positions[] = {{-2.58203,-1.32666,-23.2509},{1.32031,-0.713867,-28.2957},{0.450195,2.2583,-6.0043},{-0.780273,6.1167,-6.0043},{-2.83301,2.31201,-6.0043}
			};
		};
		
		class Land_Shed_Ind02 {
			table = "Industrial";
			positions[] = {{3.5625,9.09229,-4.62743},{-2.92773,3.27002,-4.62743},{3.04883,-7.31689,-4.62743},{4.44336,-9.2207,-1.27536},{4.62012,9.79834,-1.28388},{-3.79883,2.521,-1.28592},{-0.371094,11.752,-1.27792},{-3.86426,-9.18066,-1.28909}
			};
		};
		
		class Land_Shed_Ind02_dam {
			table = "Industrial";
			positions[] = {{3.5625,9.09229,-4.62743},{-2.92773,3.27002,-4.62743},{3.04883,-7.31689,-4.62743},{4.44336,-9.2207,-1.27536},{4.62012,9.79834,-1.28388},{-3.79883,2.521,-1.28592},{-0.371094,11.752,-1.27792},{-3.86426,-9.18066,-1.28909}
			};
		};
		
		class Land_Ind_IlluminantTower {
			table = "Military";
			positions[] = {{-0.0126953,0.645508,-9.65606},{1.21094,-0.513184,10.3499},{-1.06934,1.81934,10.3499}
			};
		};
		
		class Land_Vez_svetla {
			table = "Military";
			positions[] = {{-0.0126953,0.645508,-9.65606},{1.21094,-0.513184,10.3499},{-1.06934,1.81934,10.3499}
			};
		};
		
		class Land_Hlidac_budka {
			table = "Military";
			positions[] = {{2.25293,0.352051,-0.785055},{-2.29492,2.23779,-0.785055}
			};
		};
		
		class Land_Hlidac_Budka_EP1 {
			table = "Military";
			positions[] = {{2.25293,0.352051,-0.785055},{-2.29492,2.23779,-0.785055}
			};
		};
		
		class Land_Vez {
			table = "Military";
			positions[] = {{-0.0615234,1.37939,1.36187}
			};
		};
		
		class Land_Hlaska {
			table = "Military";
			positions[] = {{0.851563,1.06299,3.76949},{-0.964844,0.471191,3.76948}
			};
		};
		
		class Land_Sara_stodola {
			table = "Industrial";
			positions[] = {{4.61914,-1.10205,-2.19667},{4.5459,3.8418,-2.19667},{-4.78027,4.16504,-2.19667},{-4.76563,-0.978027,-2.19667}
			};
		};
		
		class Land_Ruin_Cowshed_a_PMC {
			table = "Industrial";
			positions[] = {{8.57324,-2.5957,-2.46532},{8.76758,3.0249,-2.46532},{2.01855,2.87891,-2.46532},{-4.58789,-2.375,-2.38034},{-3.61816,2.61572,-2.38825},{7.80957,-5.55518,-2.41095}
			};
		};
		
		class Land_Ruin_Cowshed_b_PMC {
			table = "Industrial";
			positions[] = {{8.74805,-2.31055,-3.14138},{5.46289,-2.47705,-3.06548},{-5.62598,2.92627,-3.06746},{-9.95215,2.90869,-3.14138}
			};
		};
		
		class Land_Ruin_Cowshed_c_PMC {
			table = "Industrial";
			positions[] = {{-2.0332,2.0708,-3.09665},{2.70703,2.33984,-3.09665}
			};
		};
		
		class Land_Hut_old02 {
			table = "Industrial";
			positions[] = {{4.58789,-7.56445,-3.03452},{4.67188,4.5249,-3.03452},{-7.17676,7.77734,-3.03452},{1.11328,-6.35498,-3.03452},{-3.43848,-2.41162,-3.03454},{-5.80664,-2.05029,-3.03452}
			};
		};
		
		class Land_Kulna {
			table = "Industrial";
			positions[] = {{-0.107422,1.10596,-1.14489}
			};
		};
		
		class Land_Barn_Metal {
			table = "Industrial";
			positions[] = {{-8.26855,-24.3091,-5.44357},{8.66504,-23.2378,-5.44357},{9.01758,21.2856,-5.44357},{-7.71875,20.3813,-5.44357},{-7.48047,5.13574,-5.44357},{9.64063,-6.47266,-5.44357},{-7.61328,-6.96973,-5.44357},{10.7031,-25.1875,5.58643},{-6.1084,-25.1782,5.58643},{-3.31055,-3.71289,5.58643},{-9.48438,20.6787,5.58643},{9.0625,22.6582,5.58643},{10.7744,10.3936,5.58643}
			};
		};
		
		class Land_Barn_Metal_dam {
			table = "Industrial";
			positions[] = {{-8.26855,-24.3091,-5.44357},{8.66504,-23.2378,-5.44357},{9.01758,21.2856,-5.44357},{-7.71875,20.3813,-5.44357},{-7.48047,5.13574,-5.44357},{9.64063,-6.47266,-5.44357},{-7.61328,-6.96973,-5.44357},{10.7031,-25.1875,5.58643},{-6.1084,-25.1782,5.58643},{-3.31055,-3.71289,5.58643},{-9.48438,20.6787,5.58643},{9.0625,22.6582,5.58643},{10.7744,10.3936,5.58643}
			};
		};
		
		class Land_Stodola_open {
			table = "Industrial";
			positions[] = {{-3.62305,6.07129,-4.11539},{1.51758,3.12988,-4.13613},{1.29883,-5.95068,-4.11768},{-3.40137,-1.52783,-4.14257}
			};
		};
		
		class Land_Stodola_old_open {
			table = "Industrial";
			positions[] = {{-2.68945,10.3315,-5.08199},{4.14941,10.2441,-5.08199},{3.56738,6.02344,-5.08198},{-2.25879,-5.57031,-5.08199},{3.83594,-10.624,-5.08199},{-2.70898,-10.1807,-1.00263},{1.71094,-10.481,2.963},{2.27344,10.6162,2.963},{-2.62793,5.63721,-0.99495},{4.63867,5.32275,-0.99495},{-0.225586,10.9434,-0.99495}
			};
		};
		
		class Land_NAV_Lighthouse {
			table = "Civilian";
			positions[] = {{-0.0859375,-0.0126953,-6.90638},{-1.79395,-0.678223,2.41768},{1.66211,0.996582,2.41768}
			};
		};
		
		class Land_NAV_Lighthouse2 {
			table = "Civilian";
			positions[] = {{-0.0859375,-0.0126953,-6.90638},{-1.79395,-0.678223,2.41768},{1.66211,0.996582,2.41768}
			};
		};
		
		class Land_A_FuelStation_Build {
			table = "Mechanical";
			positions[] = {{1.87207,-0.994629,-1.57602},{-0.0175781,1.05469,-1.57602},{-1.66602,-1.01611,-1.57587}
			};
		};
		
		class Land_Ind_FuelStation_Build_EP1 {
			table = "Mechanical";
			positions[] = {{1.87207,-0.994629,-1.57602},{-0.0175781,1.05469,-1.57602},{-1.66602,-1.01611,-1.57587}
			};
		};
		
		class Land_FuelStation_Build_PMC {
			table = "Mechanical";
			positions[] = {{1.87207,-0.994629,-1.57602},{-0.0175781,1.05469,-1.57602},{-1.66602,-1.01611,-1.57587}
			};
		};
		
		class Land_A_FuelStation_Shed {
			table = "Mechanical";
			positions[] = {{0.0996094,-2.05859,-2.84682},{-6.94531,1.78906,-2.84682},{6.80664,1.01318,-2.84682}
			};
		};
		
		class Land_A_FuelStation_Shed_PMC {
			table = "Mechanical";
			positions[] = {{0.0996094,-2.05859,-2.84682},{-6.94531,1.78906,-2.84682},{6.80664,1.01318,-2.84682}
			};
		};
		
		class Land_A_FuelStation_Shed_EP1 {
			table = "Mechanical";
			positions[] = {{0.0996094,-2.05859,-2.84682},{-6.94531,1.78906,-2.84682},{6.80664,1.01318,-2.84682}
			};
		};
		
		class Land_a_stationhouse {
			table = "Commercial";
			positions[] = {{-2.44727,-7.05518,8.49065},{-15.4873,-3.67041,-0.509354},{-12.4209,8.45117,-0.509343},{4.2998,-0.0229492,-0.509337},{9.25,0.939453,-4.50935},{13.3115,-6.04541,-4.50775},{2.21289,-6.23584,-4.50934},{-1.38867,-5.9458,4.40995},{-3.8584,-8.22656,4.40995},{-2.17578,-8.38379,-0.0452251},{-2.43262,-6.29297,-0.0452251},{-1.19531,-8.45801,-4.65034},{-3.2168,-6.26953,-4.65034},{-3.26855,-7.69873,-9.47202},{1.64258,2.30225,-9.47202},{1.36621,-2.96973,-9.47202},{12.7656,2.18555,-9.47202},{18.3906,0.435059,-9.47202},{17.627,-6.16895,-9.47202},{7.27539,-7.34668,-9.47202}
			};
		};
		
		class Land_a_stationhouse_ep1 {
			table = "Commercial";
			positions[] = {{-2.44727,-7.05518,8.49065},{-15.4873,-3.67041,-0.509354},{-12.4209,8.45117,-0.509343},{4.2998,-0.0229492,-0.509337},{9.25,0.939453,-4.50935},{13.3115,-6.04541,-4.50775},{2.21289,-6.23584,-4.50934},{-1.38867,-5.9458,4.40995},{-3.8584,-8.22656,4.40995},{-2.17578,-8.38379,-0.0452251},{-2.43262,-6.29297,-0.0452251},{-1.19531,-8.45801,-4.65034},{-3.2168,-6.26953,-4.65034},{-3.26855,-7.69873,-9.47202},{1.64258,2.30225,-9.47202},{1.36621,-2.96973,-9.47202},{12.7656,2.18555,-9.47202},{18.3906,0.435059,-9.47202},{17.627,-6.16895,-9.47202},{7.27539,-7.34668,-9.47202}
			};
		};
		
		class Land_A_GeneralStore_01 {
			table = "Commercial";
			positions[] = {{-10.3877,-9.93164,-1.21225},{2.30566,-9.93457,-1.21225},{12.4678,-9.93701,-1.21225},{-8.55469,-5.8208,-1.20299},{-0.0771484,-5.74121,-1.20299},{2.65137,-7.91602,-1.20299},{6.08887,-5.83691,-1.20299},{8.68164,-8.03906,-1.20299},{12.5166,-3.80664,-1.20299},{8.84473,-4.27197,-1.20299},{6.31836,-3.87402,-1.20299},{-0.957031,-4.01709,-1.20299},{-5.37793,-0.515137,-1.20299},{-5.31348,3.98291,-1.20299},{-0.430664,1.39355,-1.20299},{5.00781,4.4585,-1.20299},{9.2168,1.53369,-1.20299},{12.1387,1.48389,-1.20299},{7.37695,-1.18408,-1.20299}
			};
		};
		
		class Land_A_GeneralStore_01a {
			table = "Commercial";
			positions[] = {{-7.24219,-2.12891,-1.20299},{1.23535,-2.04932,-1.20299},{3.96387,-4.22412,-1.20299},{7.40137,-2.14502,-1.20299},{9.99414,-4.34717,-1.20299},{13.8291,-0.114746,-1.20299},{10.1572,-0.580078,-1.20299},{7.63086,-0.182129,-1.20299},{0.355469,-0.325195,-1.20299},{-4.06543,3.17676,-1.20299},{-4.00098,7.6748,-1.20299},{0.881836,5.08545,-1.20299},{6.32031,8.15039,-1.20299},{10.5293,5.22559,-1.20299},{13.4512,5.17578,-1.20299},{8.68945,2.50781,-1.20299}
			};
		};
		
		class Land_A_GeneralStore_01a_dam {
			table = "Commercial";
			positions[] = {{-7.24219,-2.12891,-1.20299},{1.23535,-2.04932,-1.20299},{3.96387,-4.22412,-1.20299},{7.40137,-2.14502,-1.20299},{9.99414,-4.34717,-1.20299},{13.8291,-0.114746,-1.20299},{10.1572,-0.580078,-1.20299},{7.63086,-0.182129,-1.20299},{0.355469,-0.325195,-1.20299},{-4.06543,3.17676,-1.20299},{-4.00098,7.6748,-1.20299},{0.881836,5.08545,-1.20299},{6.32031,8.15039,-1.20299},{10.5293,5.22559,-1.20299},{13.4512,5.17578,-1.20299},{8.68945,2.50781,-1.20299}
			};
		};
		
		class Land_A_GeneralStore_01a_PMC {
			table = "Commercial";
			positions[] = {{-7.24219,-2.12891,-1.20299},{1.23535,-2.04932,-1.20299},{3.96387,-4.22412,-1.20299},{7.40137,-2.14502,-1.20299},{9.99414,-4.34717,-1.20299},{13.8291,-0.114746,-1.20299},{10.1572,-0.580078,-1.20299},{7.63086,-0.182129,-1.20299},{0.355469,-0.325195,-1.20299},{-4.06543,3.17676,-1.20299},{-4.00098,7.6748,-1.20299},{0.881836,5.08545,-1.20299},{6.32031,8.15039,-1.20299},{10.5293,5.22559,-1.20299},{13.4512,5.17578,-1.20299},{8.68945,2.50781,-1.20299}
			};
		};
		
		class Land_A_GeneralStore_01a_dam_PMC {
			table = "Commercial";
			positions[] = {{-7.24219,-2.12891,-1.20299},{1.23535,-2.04932,-1.20299},{3.96387,-4.22412,-1.20299},{7.40137,-2.14502,-1.20299},{9.99414,-4.34717,-1.20299},{13.8291,-0.114746,-1.20299},{10.1572,-0.580078,-1.20299},{7.63086,-0.182129,-1.20299},{0.355469,-0.325195,-1.20299},{-4.06543,3.17676,-1.20299},{-4.00098,7.6748,-1.20299},{0.881836,5.08545,-1.20299},{6.32031,8.15039,-1.20299},{10.5293,5.22559,-1.20299},{13.4512,5.17578,-1.20299},{8.68945,2.50781,-1.20299}
			};
		};
		
		class Land_Hut06 {
			table = "Mechanical";
			positions[] = {{0.31543,1.82959,-1.56116}
			};
		};
		
		class Land_Telek1 {
			table = "Mechanical";
			positions[] = {{-1.91797,1.22461,-7.46009},{0.357422,-1.15332,-7.46009},{-1.65918,0.780762,1.9976},{0.336914,-1.07715,1.9976}
			};
		};
		
		class Land_Misc_PowerStation {
			table = "Mechanical";
			positions[] = {{4.17578,-4.02002,-1.26994},{4.29004,5.81641,-1.26858}
			};
		};
		
		class Land_Misc_PowerStation_EP1 {
			table = "Mechanical";
			positions[] = {{4.17578,-4.02002,-1.26994},{4.29004,5.81641,-1.26858}
			};
		};
		
		class Land_Vysilac_chodba {
			table = "Mechanical";
			positions[] = {{5.34375,-0.0371094,3.52093},{-2.64258,-0.0449219,3.52093}
			};
		};
		
		class Land_Vysilac_vez {
			table = "Mechanical";
			positions[] = {{0.12793,-0.124512,1.07479},{-1.23633,1.17969,9.1},{0.867188,-1.12061,9.1},{-1.37402,1.04102,18.5577},{0.454102,-0.962891,18.5577}
			};
		};
		
		class Land_A_TVTower_Base {
			table = "Military";
			positions[] = {{-2.16016,-0.434082,-22.235},{3.22559,-0.45166,-22.235},{-2.43359,1.42529,-22.235},{-0.869141,3.32617,-2.31354},{-2.26465,-0.201172,-2.31037},{-0.87793,-3.72705,-2.31205},{-5.78516,-5.94336,-2.30334},{-7.54297,3.08936,-2.31916},{5.25,0.814941,-2.31171}
			};
		};
		
		class Land_Watertower1 {
			table = "Industrial";
			positions[] = {{5.31934,-1.854,5.21287},{-7.38672,-2.94092,5.21281},{-1.6416,6.71143,5.21286},{4.03613,4.3252,5.21288}
			};
		};
		
		class Land_tent_east {
			table = "Military";
			positions[] = {{2.79004,1.5376,-1.75577},{3.05273,-1.81152,-1.75575},{-1.06836,1.94727,-1.73934},{-3.05371,-2.12061,-1.75578}
			};
		};
		
		class Land_Misc_Scaffolding {
			table = "Industrial";
			positions[] = {{0.329102,-0.64209,3.44908},{0.264648,7.29004,3.45014},{0.413086,2.70215,0.466005},{0.0888672,7.00488,0.466005},{0.709961,-3.61084,-2.36224}
			};
		};
		
		class Land_Scaffolding_ACR {
			table = "Industrial";
			positions[] = {{0.302734,-1.35645,2.86274},{0.239258,7.15869,2.86362},{0.324219,6.74463,0.386785},{0.323242,2.7085,0.386785},{0.642578,-3.97754,-1.99722}
			};
		};
		
		class Land_Misc_Cargo1Eo_EP1 {
			table = "Industrial";
			positions[] = {{0.541016,2.0376,-1.09368},{-0.450195,-1.99023,-1.09368}
			};
		};
		
		class Misc_Cargo1Bo_civil {
			table = "Industrial";
			positions[] = {{0.608398,2.08545,-1.09368},{-0.601563,-2.16504,-1.09368}
			};
		};
		
		class Land_Misc_CargoMarket1a_EP1 {
			table = "Industrial";
			positions[] = {{0.521484,-1.70654,-1.09368},{-0.644531,1.89258,-1.09368}
			};
		};
		
		class Misc_Cargo1Bo_military {
			table = "Industrial";
			positions[] = {{0.610352,-2.0542,-1.09368},{-0.555664,1.54492,-1.09368}
			};
		};
		
		class Land_Misc_Cargo1Ao_EP1 {
			table = "Industrial";
			positions[] = {{0.65332,-1.83691,-1.09368},{-0.512695,1.76221,-1.09368}
			};
		};
		
		class Land_Misc_Cargo1Ao {
			table = "Industrial";
			positions[] = {{0.65332,-1.83691,-1.09368},{-0.512695,1.76221,-1.09368}
			};
		};
		
		class C130J_wreck_EP1 {
			table = "Military";
			positions[] = {{0.347656,-14.4985,-4.91624},{-1.20215,-9.80518,-4.57},{0.610352,-2.05762,-5.43429},{-1.85352,1.77734,-5.43429},{0.432617,7.78271,-5.43429}
			};
		};
		
		class Land_Dum_istan4 {
			table = "Civilian";
			positions[] = {{2.62451,-2.54822,-4.3438},{-5.27441,6.53308,-7.2938},{-0.0776367,6.20313,-7.2938},{6.37793,6.427,-7.2938}
			};
		};
		
		class Land_Dum_istan4_big {
			table = "Civilian";
			positions[] = {{2.62891,-2.74683,-7.34001},{-4.46484,6.23621,-10.29},{0.57666,6.13757,-10.29},{5.76563,6.01501,-10.29}
			};
		};
		
		class Land_Dum_istan2_02 {
			table = "Civilian";
			positions[] = {{-7.19141,-7.58142,-4.21447},{-1.20654,-2.86658,-4.21447},{-1.5957,3.0437,-4.21447},{-7.2207,7.84009,-4.21447}
			};
		};
		
		class Land_Dum_istan4_detaily1 {
			table = "Civilian";
			positions[] = {{2.5918,-2.44922,-4.33732},{-4.88721,6.18701,-7.28732},{0.243164,6.05688,-7.28732},{6.14111,6.07751,-7.28732}
			};
		};
		
		class Land_Dum_istan4_inverse {
			table = "Civilian";
			positions[] = {{-2.72266,-2.69238,-4.33732},{-6.03906,6.448,-7.28732},{-0.474609,6.3092,-7.28732},{5.20703,6.38953,-7.28732}
			};
		};
		
		class Land_Dum_istan4_big_inverse {
			table = "Civilian";
			positions[] = {{-2.73096,-2.61145,-7.33732},{-6.03125,6.11902,-10.2873},{-1.10107,6.13489,-10.2873},{5.02588,6.19885,-10.2873}
			};
		};
		
		class Land_Dum_istan3_hromada {
			table = "Civilian";
			positions[] = {{0.0390625,0.577759,-3.32944},{-3.11133,-0.00646973,-3.32944},{0.307617,-1.45813,-3.32944},{0.335938,-3.92041,-3.32944},{-3.38721,-2.97583,-3.32944}
			};
		};
		
		class Land_House_C_10_EP1 {
			table = "Civilian";
			positions[] = {{-3.13232,-8.85986,-4.20614},{0.0488281,-5.62683,-4.19182},{2.95654,-8.74414,-4.18449},{-2.79492,-4.19385,-4.12229},{0.26416,-0.989868,-4.06647},{3.21289,-0.75769,-4.17601},{-2.65479,0.754639,-4.18499},{2.86768,3.37097,-4.17331},{-1.60547,-2.87646,-0.0177498},{-2.27393,-8.21936,-0.871412},{4.13232,2.22632,-0.87022},{-1.74756,7.72302,-0.869618},{-2.70898,1.74414,-0.870377},{3.82422,2.57971,2.47052},{-1.48096,-7.50708,2.47052},{-3.80273,7.82544,2.47052}
			};
		};
		
		class Land_House_C_10_dam_EP1 {
			table = "Civilian";
			positions[] = {{-3.13232,-8.85986,-4.20614},{0.0488281,-5.62683,-4.19182},{2.95654,-8.74414,-4.18449},{-2.79492,-4.19385,-4.12229},{0.26416,-0.989868,-4.06647},{3.21289,-0.75769,-4.17601},{-2.65479,0.754639,-4.18499},{2.86768,3.37097,-4.17331},{-1.60547,-2.87646,-0.0177498},{-2.27393,-8.21936,-0.871412},{4.13232,2.22632,-0.87022},{-1.74756,7.72302,-0.869618},{-2.70898,1.74414,-0.870377},{3.82422,2.57971,2.47052},{-1.48096,-7.50708,2.47052},{-3.80273,7.82544,2.47052}
			};
		};
		
		class Land_House_C_11_EP1 {
			table = "Civilian";
			positions[] = {{-4.50195,-3.33691,0.311534},{6.27832,3.44019,-2.08597},{6.59473,-2.09009,-2.08597},{-1.08936,-2.79126,-2.08597},{3.43701,-4.43164,-1.20072},{-0.883301,-3.92212,0.971533},{6.99561,-3.69421,0.971533},{5.27637,4.30176,0.971533}
			};
		};
		
		class Land_House_C_11_dam_EP1 {
			table = "Civilian";
			positions[] = {{-4.50195,-3.33691,0.311534},{6.27832,3.44019,-2.08597},{6.59473,-2.09009,-2.08597},{-1.08936,-2.79126,-2.08597},{3.43701,-4.43164,-1.20072},{-0.883301,-3.92212,0.971533},{6.99561,-3.69421,0.971533},{5.27637,4.30176,0.971533}
			};
		};
		
		class Land_Dum_istan3_pumpa {
			table = "Civilian";
			positions[] = {{-1.86035,2.85291,-1.86931},{4.01855,-0.424316,1.47341},{0.788086,1.15051,1.47341},{4.05029,-4.88635,1.47341},{-3.54346,-4.76831,1.47341},{-1.40479,2.32202,1.47341}
			};
		};
		
		class Land_House_C_5_EP1 {
			table = "Civilian";
			positions[] = {{-1.27344,-4.61389,-0.803645},{-3.95459,2.45874,-0.803645},{0.864258,4.92017,0.000126362},{3.85352,1.37561,-0.803645},{-3.85498,-4.74951,1.84136},{-1.03906,-1.74084,1.84136},{-3.34131,3.3252,1.84136},{4.06104,1.21814,1.84136},{0.857422,4.67993,1.84401}
			};
		};
		
		class Land_House_C_5_dam_EP1 {
			table = "Civilian";
			positions[] = {{-1.27344,-4.61389,-0.803645},{-3.95459,2.45874,-0.803645},{0.864258,4.92017,0.000126362},{3.85352,1.37561,-0.803645},{-3.85498,-4.74951,1.84136},{-1.03906,-1.74084,1.84136},{-3.34131,3.3252,1.84136},{4.06104,1.21814,1.84136},{0.857422,4.67993,1.84401}
			};
		};
		
		class Land_House_C_5_V1_EP1 {
			table = "Civilian";
			positions[] = {{-1.79102,-4.72339,-1.47294},{-3.38184,2.84106,-1.47294},{0.762695,4.953,-0.669164},{3.28955,1.98499,-1.47294},{-1.02734,-2.0354,1.17207},{-4.07471,-4.90552,1.17207},{1.92529,3.24097,1.41906}
			};
		};
		
		class Land_House_C_5_V1_dam_EP1 {
			table = "Civilian";
			positions[] = {{-1.79102,-4.72339,-1.47294},{-3.38184,2.84106,-1.47294},{0.762695,4.953,-0.669164},{3.28955,1.98499,-1.47294},{-1.02734,-2.0354,1.17207},{-4.07471,-4.90552,1.17207},{1.92529,3.24097,1.41906}
			};
		};
		
		class Land_House_C_5_V2_EP1 {
			table = "Civilian";
			positions[] = {{-1.92139,-4.37695,-1.36836},{-3.38818,2.73267,-1.36836},{3.28662,1.77319,-1.36836},{0.782227,4.90149,-0.564592},{-3.93408,3.55469,1.27664},{-1.39795,-1.94214,1.27664},{0.768066,4.65283,1.27902},{3.66602,1.2384,1.27664},{-1.24561,-4.42334,1.3395}
			};
		};
		
		class Land_House_C_5_V2_dam_EP1 {
			table = "Civilian";
			positions[] = {{-1.92139,-4.37695,-1.36836},{-3.38818,2.73267,-1.36836},{3.28662,1.77319,-1.36836},{0.782227,4.90149,-0.564592},{-3.93408,3.55469,1.27664},{-1.39795,-1.94214,1.27664},{0.768066,4.65283,1.27902},{3.66602,1.2384,1.27664},{-1.24561,-4.42334,1.3395}
			};
		};
		
		class Land_House_C_5_V3_EP1 {
			table = "Civilian";
			positions[] = {{-1.83936,-4.32104,-1.47294},{-3.52197,2.64099,-1.47294},{3.39209,1.82434,-1.47294},{0.841309,4.83423,-0.669164},{-1.66113,-1.78967,1.17207},{1.72852,3.14063,1.41906},{-0.986328,-4.36047,1.2363}
			};
		};
		
		class Land_House_C_5_V3_dam_EP1 {
			table = "Civilian";
			positions[] = {{-1.83936,-4.32104,-1.47294},{-3.52197,2.64099,-1.47294},{3.39209,1.82434,-1.47294},{0.841309,4.83423,-0.669164},{-1.66113,-1.78967,1.17207},{1.72852,3.14063,1.41906},{-0.986328,-4.36047,1.2363}
			};
		};
		
		class Land_Dum_istan2b {
			table = "Civilian";
			positions[] = {{-3.09717,-4.16467,0.822641},{-0.640625,-2.36328,0.821541},{6.48389,-4.76599,0.821541},{2.97559,-0.570313,0.821541},{-6.1792,2.32129,3.79875},{-5.92236,-4.39612,3.79875},{-2.91211,-2.26721,3.79875}
			};
		};
		
		class Land_Dum_istan2 {
			table = "Civilian";
			positions[] = {{-3.09717,-4.16467,0.822641},{-0.640625,-2.36328,0.821541},{6.48389,-4.76599,0.821541},{2.97559,-0.570313,0.821541},{-6.1792,2.32129,3.79875},{-5.92236,-4.39612,3.79875},{-2.91211,-2.26721,3.79875}
			};
		};
		
		class Land_Dum_istan3 {
			table = "Civilian";
			positions[] = {{-10.2935,-4.07983,-1.10913},{-5.01416,-4.13599,0.483705},{-8.10352,-1.85156,0.583705},{-1.60352,-1.70203,0.583705},{3.55029,-4.85376,0.583705},{10.0698,-5.24243,0.583705},{6.34863,0.990845,0.583705},{10.0835,1.11414,0.583705}
			};
		};
		
		class Land_Dum_istan3_hromada2 {
			table = "Civilian";
			positions[] = {{4.52051,1.91467,-4.62747},{-1.63574,4.93384,-1.28661},{-8.1084,5.41541,-1.28661},{-7.40039,-0.799316,-1.28661},{-0.0761719,-3.14001,-1.28661},{-1.99707,1.75732,2.08933},{-0.745117,5.42566,2.08657},{6.65332,-6.28967,2.08657},{2.61084,-2.97314,2.08657},{6.30029,4.96814,2.08657}
			};
		};
		
		class Land_A_Villa_EP1 {
			table = "Civilian";
			positions[] = {{-17.5557,17.8625,-5.20435},{-17.7891,12.446,-5.20433},{-16.0796,8.0144,-5.20432},{-6.12793,4.75647,-5.20435},{-9.0957,17.851,-5.20435},{2.88525,17.7369,-5.20435},{14.583,6.25854,-5.20436},{17.7441,-3.28809,-5.20436},{17.8491,-15.8685,-5.20435},{12.5869,-17.9647,-5.20436},{7.32178,-11.4584,-5.20432},{0.375488,-5.94019,-5.20434},{8.65576,6.82739,-5.06575},{-2.07617,4.18152,-5.0686},{-0.649414,14.6625,-5.06866},{-8.45459,14.6924,-5.06864},{-11.2476,15.2084,-5.06862},{4.35156,-2.09119,-5.06853},{10.4976,-0.12915,-5.06861},{7.30127,-3.68579,-5.06834},{10.1382,-14.6008,-5.0686},{15.6855,-13.0096,-4.58264},{14.9961,-5.94543,-5.06862},{11.7593,7.70801,-1.48556},{4.62842,10.9803,-1.48547},{0.731445,-2.24109,-1.48507},{-0.159668,-5.30054,-1.48584},{-5.69678,0.896973,-1.48547},{10.6743,-0.375244,-1.48584},{-1.46729,10.9728,-1.03562},{-0.0141602,14.6038,-1.48584},{-6.90234,15.2006,-1.48584},{-3.62012,7.2052,-1.48494},{-15.4175,15.1368,-1.48584},{-11.7739,10.1838,-1.48584},{10.8853,4.48901,1.98902},{-16.1514,17.7905,1.97087},{-17.0356,9.07251,1.97025},{0.680176,-5.24597,1.9911},{-4.86572,1.48767,1.97105},{8.7832,-17.0342,1.99267},{16.5098,-15.9517,1.99112},{17.0918,-3.36462,1.99119}
			};
		};
		
		class Land_A_Villa_dam_EP1 {
			table = "Civilian";
			positions[] = {{-17.5557,17.8625,-5.20435},{-17.7891,12.446,-5.20433},{-16.0796,8.0144,-5.20432},{-6.12793,4.75647,-5.20435},{-9.0957,17.851,-5.20435},{2.88525,17.7369,-5.20435},{14.583,6.25854,-5.20436},{17.7441,-3.28809,-5.20436},{17.8491,-15.8685,-5.20435},{12.5869,-17.9647,-5.20436},{7.32178,-11.4584,-5.20432},{0.375488,-5.94019,-5.20434},{8.65576,6.82739,-5.06575},{-2.07617,4.18152,-5.0686},{-0.649414,14.6625,-5.06866},{-8.45459,14.6924,-5.06864},{-11.2476,15.2084,-5.06862},{4.35156,-2.09119,-5.06853},{10.4976,-0.12915,-5.06861},{7.30127,-3.68579,-5.06834},{10.1382,-14.6008,-5.0686},{15.6855,-13.0096,-4.58264},{14.9961,-5.94543,-5.06862},{11.7593,7.70801,-1.48556},{4.62842,10.9803,-1.48547},{0.731445,-2.24109,-1.48507},{-0.159668,-5.30054,-1.48584},{-5.69678,0.896973,-1.48547},{10.6743,-0.375244,-1.48584},{-1.46729,10.9728,-1.03562},{-0.0141602,14.6038,-1.48584},{-6.90234,15.2006,-1.48584},{-3.62012,7.2052,-1.48494},{-15.4175,15.1368,-1.48584},{-11.7739,10.1838,-1.48584},{10.8853,4.48901,1.98902},{-16.1514,17.7905,1.97087},{-17.0356,9.07251,1.97025},{0.680176,-5.24597,1.9911},{-4.86572,1.48767,1.97105},{8.7832,-17.0342,1.99267},{16.5098,-15.9517,1.99112},{17.0918,-3.36462,1.99119}
			};
		};
		
		class Land_House_C_4_EP1 {
			table = "Civilian";
			positions[] = {{4.10156,-1.61914,-2.68833},{1.7251,2.63733,-3.48499},{-5.57129,-3.08337,-2.6684},{-3.54297,3.12122,-3.48499},{-1.2251,4.23315,-2.98985},{-2.92188,0.856812,0.431767},{4.74609,-2.40881,-0.353863},{-5.26025,0.354248,-0.351023}
			};
		};
		
		class Land_House_C_4_dam_EP1 {
			table = "Civilian";
			positions[] = {{4.10156,-1.61914,-2.68833},{1.7251,2.63733,-3.48499},{-5.57129,-3.08337,-2.6684},{-3.54297,3.12122,-3.48499},{-1.2251,4.23315,-2.98985},{-2.92188,0.856812,0.431767},{4.74609,-2.40881,-0.353863},{-5.26025,0.354248,-0.351023}
			};
		};
		
		class Land_Ind_Coltan_Main_EP1 {
			table = "Industrial";
			positions[] = {{-7.72461,14.0264,-6.36565},{-5.01709,4.57495,-6.33311},{-2.46387,8.29224,-6.33311},{3.87695,-11.46,2.36688},{-4.76855,-12.9893,2.36688},{7.04395,16.0496,-3.05311},{6.74365,16.1436,0.926887},{6.9502,16.0579,4.84689}
			};
		};
		
		class Land_Ind_Oil_Tower_EP1 {
			table = "Industrial";
			positions[] = {{6.29785,-6.23438,-8.01073},{4.09424,0.560669,-8.00399},{-0.714355,-4.44495,-8.01434},{4.41064,-4.69861,3.77215},{-2.33545,-6.45142,-12.9757},{0.250977,1.08594,-12.9943}
			};
		};
		
		class Land_Barrack2_EP1 {
			table = "Military";
			positions[] = {{1.54102,-2.30273,-0.694839},{-2.03955,4.396,-0.690897},{1.02344,1.39941,-0.273636},{-2.10645,-2.71411,-0.695081}
			};
		};
		
		class Barrack2 {
			table = "Military";
			positions[] = {{1.54102,-2.30273,-0.694839},{-2.03955,4.396,-0.690897},{1.02344,1.39941,-0.273636},{-2.10645,-2.71411,-0.695081}
			};
		};
		
		class Land_Barrack2 {
			table = "Military";
			positions[] = {{1.54102,-2.30273,-0.694839},{-2.03955,4.396,-0.690897},{1.02344,1.39941,-0.273636},{-2.10645,-2.71411,-0.695081}
			};
		};
		
		class Land_A_Minaret_EP1 {
			table = "Civilian";
			positions[] = {{0.0380859,-0.816162,-13.0786},{-1.229,-2.15845,5.3108}
			};
		};
		
		class Land_A_Minaret_dam_EP1 {
			table = "Civilian";
			positions[] = {{0.0380859,-0.816162,-13.0786},{-1.229,-2.15845,5.3108}
			};
		};
		
		class Land_A_Mosque_big_addon_EP1 {
			table = "Commercial";
			positions[] = {{6.30518,2.36206,-6.38698},{6.4917,-2.6311,-6.38698},{2.39551,-2.00977,-6.37088},{-0.821777,0.0778809,-6.38698}
			};
		};
		
		class Land_A_Mosque_big_hq_EP1 {
			table = "Commercial";
			positions[] = {{6.87451,6.22632,-9.32143},{7.30176,-3.78369,-9.32143},{-7.18799,-6.32031,-9.32143},{-6.36816,4.59985,-9.32143},{-0.117676,-8.84912,-9.32143},{-8.50146,-7.05615,-4.04896},{5.16504,-7.11694,-4.04896},{9.42383,-8.27612,0.565855},{9.26025,8.70581,0.565857},{-8.17822,8.76074,0.565856},{-8.43018,-8.66748,0.56585}
			};
		};
		
		class Land_A_Mosque_big_minaret_1_EP1 {
			table = "Commercial";
			positions[] = {{0.102051,-0.887939,-8.44523},{0.132813,-2.82739,7.19346}
			};
		};
		
		class Land_A_Mosque_big_minaret_1_dam_EP1 {
			table = "Commercial";
			positions[] = {{0.102051,-0.887939,-8.44523},{0.132813,-2.82739,7.19346}
			};
		};
		
		class Land_A_Mosque_big_minaret_2_EP1 {
			table = "Commercial";
			positions[] = {{-0.0742188,-0.552979,-12.1646},{-0.0419922,-2.73145,3.62458}
			};
		};
		
		class Land_A_Mosque_big_minaret_2_dam_EP1 {
			table = "Commercial";
			positions[] = {{-0.0742188,-0.552979,-12.1646},{-0.0419922,-2.73145,3.62458}
			};
		};
		
		class Land_A_Mosque_small_1_EP1 {
			table = "Civilian";
			positions[] = {{-5.94434,2.10767,-2.04747},{1.86426,0.18335,-1.17567},{1.92285,4.7561,-1.18111},{-0.395508,-2.27832,-1.69747},{4.25635,-1.95313,-1.69747}
			};
		};
		
		class Land_A_Mosque_small_1_dam_EP1 {
			table = "Civilian";
			positions[] = {{-5.94434,2.10767,-2.04747},{1.86426,0.18335,-1.17567},{1.92285,4.7561,-1.18111},{-0.395508,-2.27832,-1.69747},{4.25635,-1.95313,-1.69747}
			};
		};
		
		class Land_A_Mosque_small_2_EP1 {
			table = "Civilian";
			positions[] = {{1.46582,0.79834,-2.4868},{-3.51709,2.53955,-2.41377}
			};
		};
		
		class Land_A_Mosque_small_2_dam_EP1 {
			table = "Civilian";
			positions[] = {{1.46582,0.79834,-2.4868},{-3.51709,2.53955,-2.41377}
			};
		};
		
		class Land_A_Mosque_big_wall_EP1 {
			table = "Civilian";
			positions[] = {{-3.16309,3.68848,-2.03245},{5.26611,3.71143,-2.03222}
			};
		};
		
		class Land_A_Mosque_big_wall_corner_EP1 {
			table = "Civilian";
			positions[] = {{0.700684,3.39795,-2.01321},{4.23389,-0.151611,-2.01028}
			};
		};
		
		class Land_A_Mosque_big_wall_gate_EP1 {
			table = "Civilian";
			positions[] = {{-3.71875,1.33716,-5.98615},{4.79883,1.46191,-5.98069},{-12.585,3.0979,1.34358},{13.6968,2.94849,1.34904}
			};
		};
		
		class Land_A_Mosque_big_wall_gate_dam_EP1 {
			table = "Civilian";
			positions[] = {{-3.71875,1.33716,-5.98615},{4.79883,1.46191,-5.98069},{-12.585,3.0979,1.34358},{13.6968,2.94849,1.34904}
			};
		};
		
		class Land_House_C_12_EP1 {
			table = "Civilian";
			positions[] = {{-3.3042,-5.94727,-3.51245},{2.56006,-8.65381,-3.51245},{-3.30029,-8.01172,0.137641},{2.23047,-8.23755,0.13119},{0.314941,-3.63745,0.144596},{-3.03027,0.710938,0.13711},{6.87891,1.46533,0.134271},{6.25732,1.45654,-3.51245},{-2.48486,0.332031,-3.46127}
			};
		};
		
		class Land_House_C_12_dam_EP1 {
			table = "Civilian";
			positions[] = {{-3.3042,-5.94727,-3.51245},{2.56006,-8.65381,-3.51245},{-3.30029,-8.01172,0.137641},{2.23047,-8.23755,0.13119},{0.314941,-3.63745,0.144596},{-3.03027,0.710938,0.13711},{6.87891,1.46533,0.134271},{6.25732,1.45654,-3.51245},{-2.48486,0.332031,-3.46127}
			};
		};
		
		class Land_House_C_9_EP1 {
			table = "Civilian";
			positions[] = {{0.705078,-2.22119,-3.00564},{-2.22705,0.166992,-2.98954},{1.04248,0.755371,-3.00564},{1.53662,5.69556,-3.84318},{-1.43945,-1.35669,0.576801},{1.3042,4.25562,-0.253917},{4.45215,-5.05542,-0.284348},{5.13477,-4.8877,2.51043},{-2.33105,-3.71582,2.49273},{2.13965,4.79395,2.49989}
			};
		};
		
		class Land_House_C_9_dam_EP1 {
			table = "Civilian";
			positions[] = {{0.705078,-2.22119,-3.00564},{-2.22705,0.166992,-2.98954},{1.04248,0.755371,-3.00564},{1.53662,5.69556,-3.84318},{-1.43945,-1.35669,0.576801},{1.3042,4.25562,-0.253917},{4.45215,-5.05542,-0.284348},{5.13477,-4.8877,2.51043},{-2.33105,-3.71582,2.49273},{2.13965,4.79395,2.49989}
			};
		};
		
		class Land_House_C_3_EP1 {
			table = "Civilian";
			positions[] = {{-6.43896,2.65649,-3.81012},{-5.20215,-3.19214,-3.79896},{6.47803,-0.319092,-3.0079},{7.28857,3.17456,-3.85766},{7.13232,3.09888,-0.484762},{0.0302734,-1.33301,1.87467},{-7.70117,3.55566,1.34489},{-4.75146,-1.17261,0.509863},{1.73926,-3.23901,5.02272},{-7.49219,-2.28149,4.38701},{-4.41357,3.35522,4.41498},{7.18359,-2.15234,4.0702},{6.93945,3.58887,4.15133}
			};
		};
		
		class Land_House_C_3_dam_EP1 {
			table = "Civilian";
			positions[] = {{-6.43896,2.65649,-3.81012},{-5.20215,-3.19214,-3.79896},{6.47803,-0.319092,-3.0079},{7.28857,3.17456,-3.85766},{7.13232,3.09888,-0.484762},{0.0302734,-1.33301,1.87467},{-7.70117,3.55566,1.34489},{-4.75146,-1.17261,0.509863},{1.73926,-3.23901,5.02272},{-7.49219,-2.28149,4.38701},{-4.41357,3.35522,4.41498},{7.18359,-2.15234,4.0702},{6.93945,3.58887,4.15133}
			};
		};
		
		class Land_House_C_2_EP1 {
			table = "Civilian";
			positions[] = {{5.38818,-1.38696,1.57704},{5.26758,3.0498,0.763064},{-4.16309,-1.18701,0.546065},{-2.12598,3.22729,1.38325},{0.564941,1.23828,-1.47519},{4.59033,-0.953369,-2.31413}
			};
		};
		
		class Land_House_C_2_dam_EP1 {
			table = "Civilian";
			positions[] = {{5.38818,-1.38696,1.57704},{5.26758,3.0498,0.763064},{-4.16309,-1.18701,0.546065},{-2.12598,3.22729,1.38325},{0.564941,1.23828,-1.47519},{4.59033,-0.953369,-2.31413}
			};
		};
		
		class Land_House_C_1_EP1 {
			table = "Commercial";
			positions[] = {{3.05078,0.924805,-0.929183},{7.75293,-1.23315,-0.929183},{5.34521,-3.83716,-0.929183},{-7.81201,0.941406,-0.929183},{-3.45752,-3.38843,-0.929183},{6.95752,-4.31543,3.68032},{-6.66992,0.629395,3.62189},{-7.16016,-4.54126,3.70491}
			};
		};
		
		class Land_House_C_1_dam_EP1 {
			table = "Commercial";
			positions[] = {{3.05078,0.924805,-0.929183},{7.75293,-1.23315,-0.929183},{5.34521,-3.83716,-0.929183},{-7.81201,0.941406,-0.929183},{-3.45752,-3.38843,-0.929183},{6.95752,-4.31543,3.68032},{-6.66992,0.629395,3.62189},{-7.16016,-4.54126,3.70491}
			};
		};
		
		class Land_House_C_1_v2_EP1 {
			table = "Commercial";
			positions[] = {{7.52783,1.45996,-1.3569},{5.20654,-2.30225,-1.3569},{-7.88281,1.82935,-1.3569},{-3.72412,-1.6123,-1.3569},{7.07861,-2.79663,3.25344},{-7.82666,2.69995,3.16476}
			};
		};
		
		class Land_House_C_1_v2_dam_EP1 {
			table = "Commercial";
			positions[] = {{7.52783,1.45996,-1.3569},{5.20654,-2.30225,-1.3569},{-7.88281,1.82935,-1.3569},{-3.72412,-1.6123,-1.3569},{7.07861,-2.79663,3.25344},{-7.82666,2.69995,3.16476}
			};
		};
		
		class Land_House_K_5_EP1 {
			table = "Civilian";
			positions[] = {{-0.622559,3.78711,2.31849},{-5.5293,0.153076,0.513587},{2.32422,1.16772,1.56098},{4.80176,3.9126,2.28187}
			};
		};
		
		class Land_House_K_5_dam_EP1 {
			table = "Civilian";
			positions[] = {{-0.622559,3.78711,2.31849},{-5.5293,0.153076,0.513587},{2.32422,1.16772,1.56098},{4.80176,3.9126,2.28187}
			};
		};
		
		class Land_House_K_8_EP1 {
			table = "Civilian";
			positions[] = {{0.220215,-3.56372,-2.68028},{2.13232,-1.38794,-2.63024},{-2.46924,3.49292,-1.81375},{3.12939,-1.28662,0.24707},{-2.48877,3.31201,0.251506},{-1.17383,-3.19409,0.337059},{-1.81982,5.08203,0.283802},{1.59277,5.1709,0.271312}
			};
		};
		
		class Land_House_K_8_dam_EP1 {
			table = "Civilian";
			positions[] = {{0.220215,-3.56372,-2.68028},{2.13232,-1.38794,-2.63024},{-2.46924,3.49292,-1.81375},{3.12939,-1.28662,0.24707},{-2.48877,3.31201,0.251506},{-1.17383,-3.19409,0.337059},{-1.81982,5.08203,0.283802},{1.59277,5.1709,0.271312}
			};
		};
		
		class Land_House_K_6_EP1 {
			table = "Civilian";
			positions[] = {{-3.37793,3.92749,-1.58716},{-3.11035,-0.189209,-1.59452},{-0.544434,2.88647,-0.769371},{4.16797,-2.02124,-1.60943},{-0.406738,3.29761,1.47185},{-2.5708,-2.51123,1.50082},{-4.32178,3.33423,1.48704},{4.26367,-2.52466,1.46909},{4.41406,-2.67554,4.42},{-0.356934,4.92041,4.42},{-4.20898,-1.26758,4.38022},{-4.17676,3.07642,4.39814},{0.919434,0.29126,7.39652}
			};
		};
		
		class Land_House_K_6_dam_EP1 {
			table = "Civilian";
			positions[] = {{-3.37793,3.92749,-1.58716},{-3.11035,-0.189209,-1.59452},{-0.544434,2.88647,-0.769371},{4.16797,-2.02124,-1.60943},{-0.406738,3.29761,1.47185},{-2.5708,-2.51123,1.50082},{-4.32178,3.33423,1.48704},{4.26367,-2.52466,1.46909},{4.41406,-2.67554,4.42},{-0.356934,4.92041,4.42},{-4.20898,-1.26758,4.38022},{-4.17676,3.07642,4.39814},{0.919434,0.29126,7.39652}
			};
		};
		
		class Land_House_K_3_EP1 {
			table = "Civilian";
			positions[] = {{-5.51855,-4.77856,-0.88175},{-4.76758,1.5083,-0.795155},{2.11035,-3.08472,0.0298553},{0.149902,3.55005,-0.539108},{-2.3418,5.84009,-0.539108},{-0.662598,3.39868,2.73581},{-1.79102,0.472168,2.98825}
			};
		};
		
		class Land_House_K_3_dam_EP1 {
			table = "Civilian";
			positions[] = {{-5.51855,-4.77856,-0.88175},{-4.76758,1.5083,-0.795155},{2.11035,-3.08472,0.0298553},{0.149902,3.55005,-0.539108},{-2.3418,5.84009,-0.539108},{-0.662598,3.39868,2.73581},{-1.79102,0.472168,2.98825}
			};
		};
		
		class Land_House_K_7_EP1 {
			table = "Civilian";
			positions[] = {{1.54004,0.539307,-0.16099},{-7.62549,2.81519,-0.270286},{-5.125,0.243408,-0.273034},{-7.87695,-3.68774,0.0629239},{-0.481934,4.01611,3.28889},{-2.92627,-1.57324,3.15357},{1.33594,1.20605,3.15093},{-4.82813,0.405518,3.28888},{-7.33008,2.20361,6.42017},{0.977051,-1.25513,6.39452}
			};
		};
		
		class Land_House_K_7_dam_EP1 {
			table = "Civilian";
			positions[] = {{1.54004,0.539307,-0.16099},{-7.62549,2.81519,-0.270286},{-5.125,0.243408,-0.273034},{-7.87695,-3.68774,0.0629239},{-0.481934,4.01611,3.28889},{-2.92627,-1.57324,3.15357},{1.33594,1.20605,3.15093},{-4.82813,0.405518,3.28888},{-7.33008,2.20361,6.42017},{0.977051,-1.25513,6.39452}
			};
		};
		
		class Land_House_L_1_EP1 {
			table = "Civilian";
			positions[] = {{0.563477,-0.710693,-0.679328}
			};
		};
		
		class Land_House_L_3_EP1 {
			table = "Civilian";
			positions[] = {{-3.14893,2.77515,-0.285967},{-4.15039,0.165283,-0.308286},{2.37451,2.63086,-0.281795},{-0.362793,-0.115967,-0.280778}
			};
		};
		
		class Land_House_L_3_dam_EP1 {
			table = "Civilian";
			positions[] = {{-3.14893,2.77515,-0.285967},{-4.15039,0.165283,-0.308286},{2.37451,2.63086,-0.281795},{-0.362793,-0.115967,-0.280778}
			};
		};
		
		class Land_House_L_3_H_EP1 {
			table = "Civilian";
			positions[] = {{-3.14893,2.77515,-0.285967},{-4.15039,0.165283,-0.308286},{2.37451,2.63086,-0.281795},{-0.362793,-0.115967,-0.280778}
			};
		};
		
		class Land_House_L_4_EP1 {
			table = "Civilian";
			positions[] = {{-5.45996,0.653564,1.7171},{-3.62305,-0.0820313,-1.36056},{0.332031,-0.498535,-1.33505},{3.86768,1.23096,-1.13182},{5.67139,1.5127,1.46927}
			};
		};
		
		class Land_House_L_4_dam_EP1 {
			table = "Civilian";
			positions[] = {{-5.45996,0.653564,1.7171},{-3.62305,-0.0820313,-1.36056},{0.332031,-0.498535,-1.33505},{3.86768,1.23096,-1.13182},{5.67139,1.5127,1.46927}
			};
		};
		
		class Land_House_L_6_EP1 {
			table = "Civilian";
			positions[] = {{6.5625,1.72095,1.27956},{4.1167,1.42163,1.27956},{6.58643,2.0647,-1.51044},{-3.56104,-2.23853,-1.48816}
			};
		};
		
		class Land_House_L_6_dam_EP1 {
			table = "Civilian";
			positions[] = {{6.5625,1.72095,1.27956},{4.1167,1.42163,1.27956},{6.58643,2.0647,-1.51044},{-3.56104,-2.23853,-1.48816}
			};
		};
		
		class Land_House_L_7_EP1 {
			table = "Civilian";
			positions[] = {{-2.85254,-6.33447,-0.93249},{-2.15283,3.19507,0.20893},{-5.44922,3.22754,-0.647532},{-0.212402,3.19214,-0.262588},{0.0654297,-3.70581,-1.05459}
			};
		};
		
		class Land_House_L_7_dam_EP1 {
			table = "Civilian";
			positions[] = {{-2.85254,-6.33447,-0.93249},{-2.15283,3.19507,0.20893},{-5.44922,3.22754,-0.647532},{-0.212402,3.19214,-0.262588},{0.0654297,-3.70581,-1.05459}
			};
		};
		
		class Land_House_L_8_EP1 {
			table = "Civilian";
			positions[] = {{-4.39893, -4.87061, 1.31978}, {-2.8291, 3.95776, 1.65432}, {3.1958, 0.52002, 1.68177}, {3.97168, 3.0957, -0.77522}, {-2.24902, 1.66748, -1.01718}
			};
		};
		
		class Land_House_L_8_dam_EP1 {
			table = "Civilian";
			positions[] = {{-4.39893, -4.87061, 1.31978}, {-2.8291, 3.95776, 1.65432}, {3.1958, 0.52002, 1.68177}, {3.97168, 3.0957, -0.77522}, {-2.24902, 1.66748, -1.01718}
			};
		};
		
		class Land_House_L_9_EP1 {
			table = "Civilian";
			positions[] = {{1.35986, 0.996582, -0.621299}
			};
		};
		
		class Land_House_K_1_EP1 {
			table = "Civilian";
			positions[] = {{1.2959, 1.16675, 1.42273}, {-3.4126, 2.93188, 1.54478}, {-0.431152, 5.25684, 1.56482}, {3.49854, 5.33716, 1.56482}, {3.44189, 2.06274, 1.56482}
			};
		};
		
		class Land_House_K_2_basehide_EP1 {
			table = "Civilian";
			positions[] = {{1.2959, 1.16675, 1.42273}, {-3.4126, 2.93188, 1.54478}, {-0.431152, 5.25684, 1.56482}, {3.49854, 5.33716, 1.56482}, {3.44189, 2.06274, 1.56482}
			};
		};
		
		class Land_Letistni_hala {
			table = "Military";
			positions[] = {{1.36328, -6.96997, -8.2823}, {4.75244, -6.75415, -8.28599}, {4.91455, 6.89771, -8.27863}, {1.42236, 6.63599, -8.25682}
			};
		};
		
		class Land_Cihlovej_Dum_in {
			table = "Civilian";
			positions[] = {{2.02979, 2.44897, -5.27732}, {0.135742, 0.650146, -5.27732}, {-2.56885, 0.936035, -5.27732}, {-2.82568, 2.12061, -1.49865}, {1.4209, -1.74756, -1.81615}, {-2.38086, -1.79346, -1.81614}
			};
		};
		
		class Land_Afbarabizna {
			table = "Civilian";
			positions[] = {{6.104, 1.98193, -4.22261}, {6.7041, -3.5459, -4.22261}, {-0.996094, 0.272461, -4.22261}, {0.922852, 4.44727, -4.22261}, {-4.59766, 5.84619, -4.22261}, {5.99463, 4.82886, -4.22261}, {-3.90576, -3.85425, -4.22261}, {-0.887207, 0.74292, -0.169437}, {-4.95459, -4.1438, -0.169606}, {6.62598, 2.32373, -0.169702}, {3.01563, -0.987549, -0.169702}, {6.49609, 5.2666, -0.169702}, {1.21582, 4.3623, -0.169702}, {-4.6958, 5.83618, -0.169577}
			};
		};
		
		class Land_AfDum_mesto3 {
			table = "Civilian";
			positions[] = {{-3.24072, 0.711426, -5.91533}, {2.98877, -0.423828, -5.91533}
			};
		};
		
		class Land_Dulni_bs {
			table = "Civilian";
			positions[] = {{2.71973, 0.985596, -1.75349}, {-0.616211, -2.61719, -1.75349}, {2.79932, -0.929199, -1.75349}
			};
		};
		
		class Land_Dum_zboreny {
			table = "Civilian";
			positions[] = {{3.59424, 4.14722, -2.37818}, {6.25537, -4.14746, -2.37818}, {-1.90869, -4.35913, -2.37818}, {-5.44775, 3.89722, -2.37818}, {-4.75049, -4.40918, -2.37818}, {-5.43506, 4.49023, 1.40583}, {-0.168945, 2.11133, 1.39716}, {-2.24561, -4.21069, 1.40752}, {1.24512, -0.740234, 1.3953}
			};
		};
		
		class Land_Deutshe_mini {
			table = "Civilian";
			positions[] = {{3.7124, -2.13647, -2.7499}, {-3.53125, -2.01831, -1.9911}, {-3.80127, 2.42188, -2.32706}, {4.10547, 0.365967, -2.7499}
			};
		};
		
		class Land_Domek_rosa {
			table = "Civilian";
			positions[] = {{3.43066, -1.6189, -2.87562}
			};
		};
		
		class Land_Garaz_long_open {
			table = "Mechanical";
			positions[] = {{-14.0332, -3.15186, -1.23153}, {-9.95557, 2.6626, -1.23153}, {-4.75342, -3.14233, -1.23153}, {-0.508789, 2.68408, -1.23153}, {4.46045, -3.12695, -1.23153}, {11.9863, -3.19531, -1.23153}, {9.88965, 2.49219, -1.23153}
			};
		};
		
		class Land_Garaz_mala {
			table = "Mechanical";
			positions[] = {{1.47998, -2.45117, -1.14382}, {-1.73047, 2.8772, -1.14382}
			};
		};
		
		class Land_Hospital {
			table = "Medical";
			positions[] = {{-2.34131, 5.58643, -1.44334}, {2.00537, 5.38965, -1.44334}, {2.47949, 0.64209, -1.44333}, {2.45996, -3.66919, -1.44336}, {-1.18652, -3.87842, -1.44334}, {-5.59766, -3.67896, -1.44334}
			};
		};
		
		class Land_Hotel {
			table = "Civilian";
			positions[] = {{-17.3447, 16.6191, 6.24341}, {-16.5352, -16.8469, 6.24341}, {5.43262, -8.91479, 6.24341}, {16.6758, 0.616455, 6.24341}, {3.79443, 9.24683, 6.24341}, {-4.80908, 3.59668, 6.2434}, {-1.26611, -0.277832, 6.24341}, {-1.96582, -0.288574, 2.73938}, {-4.74756, 3.71533, 2.73938}, {-11.7637, 6.08203, 2.73938}, {-17.6357, -0.214844, 2.73938}, {-11.7388, -2.86475, 2.73938}, {-18.3779, -8.98242, 2.73938}, {-17.8857, -12.7041, 2.73938}, {-11.8364, -17.7258, 2.73938}, {-8.875, -17.8677, 2.73938}, {-17.8447, 11.6748, 2.73938}, {-11.9922, 18.156, 2.73938}, {-2.70557, 11.5999, 2.73938}, {-9.2749, 18.1399, 2.73938}, {6.34424, 18.1475, 2.73938}, {8.94092, 17.8264, 2.73938}, {18.313, 18.2356, 2.73938}, {18.5669, 2.77905, 2.73938}, {18.1758, -6.35522, 2.73938}, {11.8096, -6.19019, 2.73938}, {17.7256, -8.92554, 2.73938}, {18.2446, -11.3762, 2.73938}, {11.9077, -17.8621, 2.73938}, {9.45361, -18.0903, 2.73938}, {2.41357, -11.53, 2.73938}, {0.536133, -18.2051, 2.73938}, {-5.8916, -11.8418, 2.73938}, {-0.964355, -0.343994, -0.760501}, {-8.91211, -17.979, -0.760501}, {17.9414, -8.91895, -0.760499}, {8.99951, 17.99, -0.760501}, {-17.6069, 8.9165, -0.760501}, {-17.5835, 8.84033, 2.73938}, {-11.8369, -17.8591, -0.7605}, {-18.0122, -12.7468, -0.760501}, {-18.4419, -8.9873, -0.7605}, {-11.6631, -2.62036, -0.7605}, {-17.8521, -0.193604, -0.760501}, {-11.7847, 6.16455, -0.760501}, {-17.8242, 11.6292, -0.7605}, {-11.9707, 18.1987, -0.7605}, {-9.2959, 18.1636, -0.760501}, {-2.72363, 11.6497, -0.760501}, {6.37549, 18.2258, -0.7605}, {18.4341, 18.2517, -0.760501}, {18.5708, 2.77271, -0.760501}, {18.2705, -6.51807, -0.7605}, {16.8101, 0.618896, -0.760501}, {18.248, -11.4121, -0.760501}, {11.8926, -17.876, -0.7605}, {9.51465, -18.1443, -0.7605}, {2.44482, -11.4858, -0.7605}, {0.54834, -18.084, -0.7605}, {-5.97803, -11.8245, -0.760501}, {-4.73779, 3.66479, -0.760501}, {-1.38525, -0.345459, -4.26087}, {-1.14795, -0.208008, -7.74816}, {-4.74902, 3.65454, -4.26087}, {-17.8584, -0.193359, -4.26087}, {-11.833, 6.12891, -4.26087}, {-17.5781, 8.80127, -4.26087}, {-17.9438, 11.7637, -4.26087}, {-12.0293, 18.2996, -4.26087}, {-9.32129, 18.3059, -4.26087}, {-2.48193, 11.5286, -4.26087}, {6.31738, 18.0732, -4.26087}, {9.0249, 17.8103, -4.26087}, {18.2075, 18.2754, -4.26087}, {18.4512, 2.76343, -4.26087}, {16.6821, 0.695313, -4.26087}, {11.7891, -6.16187, -4.26087}, {17.7773, -8.97632, -4.26087}, {18.1963, -11.4729, -4.26087}, {11.9346, -17.853, -4.26087}, {9.45703, -18.0732, -4.26087}, {2.43018, -11.5386, -4.26087}, {0.52832, -18.248, -4.26087}, {-5.8501, -11.8049, -4.26087}, {-8.92383, -17.8232, -4.26087}, {-11.9414, -17.9607, -4.26087}, {-17.9697, -12.6985, -4.26087}, {-18.4277, -8.99536, -4.26087}, {-11.7334, -2.80542, -4.26087}, {-11.6323, -2.71973, -7.74816}, {-4.56689, 3.77783, -7.74816}, {-0.488281, 9.38428, -7.74816}, {0.115723, 17.7925, -7.74816}, {-17.9937, 18.2256, -7.74816}, {-17.6401, -17.5215, -7.74816}, {-8.81104, -4.5083, -7.74816}, {-5.44287, -4.36011, -7.74816}, {-8.81055, -17.5762, -7.74816}, {-0.248047, -14.1516, -7.74816}, {9.26904, -18.1714, -7.74816}, {12.002, -17.8843, -7.74816}, {17.938, -17.947, -7.74816}, {18.4443, -8.52393, -7.74814}, {8.62109, -3.14063, -7.74816}, {18.3809, 5.50854, -7.74811}, {18.3037, 17.8042, -7.74815}, {2.93604, 0.57251, -7.74816}, {3.06689, 5.83472, -4.26087}, {2.84082, 5.84863, -0.760501}, {2.93652, 6.13672, 2.73938}, {3.08203, 5.93774, 6.24341}, {2.59082, 17.4463, -7.74816}
			};
		};
		
		class Land_Sara_domek01 {
			table = "Civilian";
			positions[] = {{3.38428, -1.0249, -1.61719}
			};
		};
		
		class Land_Sara_Dum_podloubi03rovny {
			table = "Civilian";
			positions[] = {{-4.29883, -1.54858, -3.35997}, {2.94141, -1.90796, -3.35997}
			};
		};
		
		class Land_Sara_domek_rosa {
			table = "Civilian";
			positions[] = {{5.2124, -2.85303, -3.73243}
			};
		};
		
		class Land_Sara_Dum_podloubi03klaster {
			table = "Civilian";
			positions[] = {{-4.90967, -5.42065, -3.41329}, {-4.70313, 4.67944, -3.3895}, {5.50391, 4.76489, -3.39819}
			};
		};
		
		class Land_Sara_domek_vilka {
			table = "Civilian";
			positions[] = {{4.26904, 5.37354, -4.16134}
			};
		};
		
		class Land_Dum_mesto_in {
			table = "Civilian";
			positions[] = {{-4.86572, -1.92236, -4.26408}, {1.10059, -2.75659, -4.26126}, {-4.9668, 3.58545, -4.24921}, {4.92871, -2.27515, -4.26537}, {4.83838, 4.229, -4.2594}, {1.12402, 5.03564, -2.75705}, {0.37207, -2.89526, -1.28238}, {4.82471, 4.33618, -1.28238}, {-3.60938, -2.6355, -1.27726}, {-5.14551, 4.7561, -1.27726}, {-5.646, -4.21094, -1.11391}
			};
		};
		
		class Land_Sara_Domek_sedy {
			table = "Civilian";
			positions[] = {{5.03662, -0.646484, -1.22907}, {-3.25146, -0.0168457, -1.61937}, {5.39355, 3.14258, -2.1434}, {-4.53516, 3.81177, -2.1434}
			};
		};
		
		class Land_Sara_zluty_statek_in {
			table = "Civilian";
			positions[] = {{6.13867, -2.18408, -2.92013}, {3.2832, 5.51563, -2.88174}, {9.02588, 2.84448, -1.90316}, {6.27393, 5.54858, -2.88389}, {-4.18018, 5.61841, -2.87745}, {0.251953, 0.528076, -2.89209}, {-0.0698242, 5.49292, -2.88432}, {-6.42969, 5.36475, -2.8422}, {-8.94189, 0.457275, -2.84907}
			};
		};
		
		class Land_Sara_domek_zluty {
			table = "Civilian";
			positions[] = {{7.05029, 1.75415, -2.43516}, {2.47852, 3.23438, -2.43516}, {-0.217773, 2.79565, -2.43511}, {-6.54883, -3.22998, -2.43528}, {-2.83057, 3.51074, -2.43507}, {-6.94092, -0.604736, -2.43518}, {-6.81055, 3.59546, -2.43502}
			};
		};
		
		class Land_House_y {
			table = "Civilian";
			positions[] = {{-4.3457, -5.2019, -1.4084}, {4.53662, -3.21924, -1.40832}, {4.61279, 3.81812, -1.40832}, {-4.99951, 1.41895, -0.655001}, {-2.41602, 2.16235, -1.40832}, {-1.45459, -2.70215, -1.40832}, {4.20264, 5.72729, -1.4084}
			};
		};
		
		class Land_Dum_rasovna {
			table = "Civilian";
			positions[] = {{2.74121, 3.61011, -2.70434}, {-1.19238, 2.04883, -2.69979}, {0.836426, -2.89282, -2.70165}, {0.747559, 2.96851, 0.271168}, {0.51123, -3.46777, 0.271168}
			};
		};
		
		class Land_Hruzdum {
			table = "Civilian";
			positions[] = {{2.33643, 3.51587, -4.73501}, {2.31299, 3.69482, -1.16409}, {-2.5918, -1.15356, -1.16411}, {-1.89941, 0.994629, 1.59177}, {2.02051, 2.31909, 1.59177}
			};
		};
		
		class Land_Dum_mesto2 {
			table = "Civilian";
			positions[] = {{3.01514, 4.4834, -4.34619}, {-2.93701, 6.07007, -4.34619}, {-3.17627, -1.01904, -4.34619}, {-3.12158, -7.2124, -4.34619}, {2.97168, -6.42603, -4.34619}, {-3.00732, 2.61035, -0.947188}, {-2.96094, 6.60889, -0.544148}, {2.81982, 7.32275, -0.945471}, {2.97461, -6.96436, -0.945444}, {-3.25195, -0.987793, -0.945444}
			};
		};
		
		class Land_Sara_domek05 {
			table = "Civilian";
			positions[] = {{-4.88525, -2.36133, -2.96594}, {0.206543, -1.07617, -2.9604}, {5.30029, -0.943848, -1.9682}, {5.33838, 2.21411, -2.96417}, {2.48535, -2.1709, -2.95429}
			};
		};
		
		class Land_Sara_domek03 {
			table = "Civilian";
			positions[] = {{4.80566, -1.59497, -0.685206}, {4.86328, 2.67358, -0.647759}
			};
		};
		
		class Land_Sara_zluty_statek {
			table = "Civilian";
			positions[] = {{5.98242, -2.59131, -2.91994}, {2.11377, -2.60718, -2.91338}
			};
		};
		
		class Land_Dum_olez_istan1_open2 {
			table = "Civilian";
			positions[] = {{0.994629, 2.70361, 1.37353}, {6.71729, 2.48096, 1.37353}, {2.89209, -2.33081, 1.37353}, {-1.31152, 2.97192, 1.37353}, {-6.98926, -5.19434, 1.37353}, {-1.57959, -5.03491, 1.37353}, {0.861816, 2.8335, -1.84543}, {3.94043, -3.09058, -1.84543}, {-4.83984, -5.72754, -1.84542}, {-1.24463, -1.61255, -1.84542}
			};
		};
		
		class Land_Hospoda_mesto {
			table = "Commercial";
			positions[] = {{3.86377,5.9541,-4.35665},{6.16553,7.17163,-4.3638},{6.90625,0.152832,-4.36044},{6.87061,-3.81812,-4.3697},{0.875488,-6.40381,-5.18692},{1.76611,-1.38086,-5.2894},{-1.3125,-2.84912,-5.17368},{-3.6665,-2.95752,-5.17367},{-7.00146,-6.47876,-5.17367},{-5.38037,-3.31006,-0.679937},{4.10352,-3.81885,-0.454793},{4.4082,1.16602,-0.370442},{5.42432,6.8418,-0.673235},{3.24902,2.19189,-1.20792}
			};
		};
		
		class Land_Kasarna_prujezd {
			table = "Commercial";
			positions[] = {{-1.51367,-3.95361,-8.73948},{1.2124,3.54541,-8.73949}
			};
		};
		
		class Land_Helfenburk {
			table = "Military";
			positions[] = {{-3.56152,0.626953,-3.00329},{2.30322,0.811768,-2.99267},{1.62305,0.713135,0.270961},{-3.24072,-5.00781,0.275122},{-2.48242,-4.94702,4.35849},{0.377441,0.5354,4.35849},{1.86182,1.06836,8.68313},{-2.94873,-4.51709,8.67778},{1.75488,-4.58276,12.1867},{1.78467,1.25659,12.1867}
			};
		};
		
		class Land_Tovarna1 {
			table = "Industrial";
			positions[] = {{3.11572,-7.56274,-5.71844},{1.86768,1.33521,-5.70778},{-4.32373,-7.33398,-5.71067},{-10.7554,5.66357,-5.74839},{-3.16113,7.49048,-5.7528},{2.95166,5.52222,-5.75228},{1.49854,-7.72925,-0.321546},{3.42773,2.90845,-0.321546},{-7.34619,3.1394,-0.321546},{-11.4863,-7.27881,-0.321546},{1.96533,5.14063,-0.321546},{5.32764,2.67529,-0.321546},{-11.2002,1.92407,2.17853},{-10.9238,-7.02637,2.17853},{-3.16748,-5.15845,2.17853},{0.464844,-6.95483,2.17853},{2.63623,2.3042,2.17853},{12.3452,-2.27026,-1.57761},{-1.84521,-3.14624,4.82848},{0.980469,-6.64111,4.82838},{-9.08545,-5.88818,4.82831},{-3.49658,0.949707,4.82851}
			};
		};
		
		class Land_Army_hut3_long {
			table = "Military";
			positions[] = {{-1.86377,0.985596,-0.864591},{-2.83887,-1.00195,-0.853769},{-0.436035,-3.35254,-0.573086},{0.891602,-1.92139,-1.27534},{-2.73682,-4.78613,-1.27535},{-2.29639,5.10181,-0.860649},{-2.3042,2.68384,-0.863466},{1.01855,5.03052,-0.868742}
			};
		};
		
		class Land_Budova4 {
			table = "Military";
			positions[] = {{6.15723,-2.33374,-1.88867},{0.162598,2.0979,-1.88867},{-6.73438,2.12744,-1.88867},{-4.03662,-2.56885,-1.56641},{-6.61816,-2.7168,-1.56984},{-1.56885,-2.6582,-0.910456},{0.424805,-2.24536,-1.55958},{2.17627,-2.23462,-1.56841},{4.05371,-2.24097,-1.56333}
			};
		};
		
		class Land_Budova4_in {
			table = "Military";
			positions[] = {{6.15723,-2.33374,-1.88867},{0.162598,2.0979,-1.88867},{-6.73438,2.12744,-1.88867},{-4.03662,-2.56885,-1.56641},{-6.61816,-2.7168,-1.56984},{-1.56885,-2.6582,-0.910456},{0.424805,-2.24536,-1.55958},{2.17627,-2.23462,-1.56841},{4.05371,-2.24097,-1.56333}
			};
		};
		
		class Land_Budova1 {
			table = "Military";
			positions[] = {{8.80029,2.479,-2.01263},{8.62061,-3.15356,-2.01263}
			};
		};
		
		class Land_Budova2 {
			table = "Military";
			positions[] = {{-2.35938,-5.43945,-1.73089},{5.80371,-5.32739,-1.73091},{-5.78027,-8.15601,-1.73091}
			};
		};
		
		class Land_Budova3 {
			table = "Military";
			positions[] = {{2.24414,2.42261,-1.89281},{-2.25098,-2.45703,-1.88224},{2.375,-2.28369,-1.8872},{-2.28955,2.51221,-1.87461}
			};
		};
		
		class Land_Budova5 {
			table = "Military";
			positions[] = {{-2.28662,3.35571,-1.98633},{-2.26172,-0.11499,-1.98583}
			};
		};
		
		class Land_Garaz_s_tankem {
			table = "Military";
			positions[] = {{7.15283,4.79858,-2.49247},{2.83691,0.892822,-2.49247},{-7.09912,4.70044,-2.49247},{-2.81445,0.665039,-2.49247},{-5.38232,-0.184082,3.46826},{0.631836,4.17944,3.46827},{7.30566,-0.151123,3.46826}
			};
		};
		
		class Land_Ammostore2 {
			table = "Military";
			positions[] = {{-2.34131,2.93579,-2.43958},{2.16602,1.0083,-2.43958},{0.0566406,2.41821,3.39542}
			};
		};
		
		class Land_Sara_domek_podhradi_1 {
			table = "Civilian";
			positions[] = {{5.4707,-3.4082,-2.75952},{-0.952637,-3.38867,-2.75952},{-5.36426,-0.936035,-2.75952},{-5.28223,3.604,-2.75952}
			};
		};
		
		class Land_Sara_stodola2 {
			table = "Civilian";
			positions[] = {{-4.95166,-2.37744,-2.10555},{4.15723,2.79883,-2.11046},{4.40918,-1.95557,-2.11763}
			};
		};
		
		class Land_Sara_hasic_zbroj {
			table = "Mechanical";
			positions[] = {{5.93359,-1.80811,-2.65431},{-1.90771,-1.9668,-2.65431},{3.05811,2.23291,-2.65431}
			};
		};
		
		class Land_Bouda2_vnitrek {
			table = "Industrial";
			positions[] = {{-2.75977,-1.70239,-0.611946},{1.19336,0.557861,-0.611946},{-2.67041,1.88452,-0.611946}
			};
		};
		
		class Land_ZalChata {
			table = "Civilian";
			positions[] = {{-2.12793,-2.32813,-0.562675},{1.82324,-2.052,-0.56033}
			};
		};
		
		class Land_Majak {
			table = "Civilian";
			positions[] = {{-0.100586,-1.74512,1.72104},{-0.428223,2.18774,1.72104},{0.0302734,0.775391,-8.07446}
			};
		};
		
		class Land_Majak2 {
			table = "Civilian";
			positions[] = {{-0.100586,-1.74512,1.72104},{-0.428223,2.18774,1.72104},{0.0302734,0.775391,-8.07446}
			};
		};
		
		class Land_Majak_v_celku {
			table = "Civilian";
			positions[] = {{-3.32373,1.1604,-6.0957},{-3.44092,-7.052,-6.0957},{2.46973,0.135254,-6.0957},{0.0463867,-4.9502,-6.07013},{1.82617,-5.98389,3.72537},{-1.11084,-3.94995,3.72537}
			};
		};
		
		class Land_Benzina_schnell {
			table = "Mechanical";
			positions[] = {{-3.22266,6.57446,-2.13715},{-2.27734,1.97559,-2.13957},{3.21533,3.32495,-2.14216},{3.23926,6.87671,-2.14332},{-2.88281,-3.93701,-2.1466},{0.855469,-3.9939,-2.14392}
			};
		};
		
		class Land_Sara_domek_hospoda {
			table = "Civilian";
			positions[] = {{-5.51074,-3.85107,-2.74896},{4.39063,-3.86963,-2.74839}
			};
		};
		
		class Land_Hotel_riviera1 {
			table = "Civilian";
			positions[] = {{11.5098,-6.90186,-3.33413},{5.35596,-6.03467,-3.34235},{-1.34473,-6.20752,-3.33462},{-6.70752,-6.98486,-3.33784},{-9.86768,7.3208,-3.33967},{-2.1626,8.34546,-3.32343},{4.86914,8.51758,-3.33544},{13.9692,7.44385,-3.33739},{-13.3345,0.254639,-0.323641},{-11.1802,-8.00903,-0.323672},{11.978,-6.95557,-0.322903},{1.3291,-6.02417,-0.322903}
			};
		};
		
		class Land_Hotel_riviera2 {
			table = "Civilian";
			positions[] = {{12.4785,6.58838,-3.33739},{-1.33594,7.86206,-3.32909},{-12.9824,6.47534,-3.33936},{-9.48828,-7.63354,-3.33785},{3.45557,-6.78345,-3.34087},{9.46582,-7.729,-3.3332},{-9.61572,-7.61206,-0.322903},{2.39063,-6.85132,-0.322903},{-9.95313,-6.20435,3.28005},{8.91504,4.93652,3.28005},{-10.9814,5.38501,3.28005}
			};
		};
		
		class Land_Vysilac_budova {
			table = "Commercial";
			positions[] = {{-12.1631,5.69751,-6.69146},{-12.1289,-6.18384,-6.69145},{-11.3721,-11.9314,-6.69146},{-9.5957,6.75537,-6.59146},{-7.30566,13.4304,-6.59146},{-9.50879,2.2605,-6.59146},{-2.79248,2.46338,-6.59842},{-0.652344,11.9434,-6.59146},{5.60352,12.1714,-6.59146},{9.00146,11.313,-6.69146},{15.0723,3.72314,-6.69146},{8.79346,-3.22876,-6.69146},{5.56445,3.90991,-6.59146},{-1.29443,-4.26685,-6.59146},{2.97363,-12.0989,-5.99494},{7.94238,-9.06177,-6.59146},{-7.92725,-11.7817,-6.59146},{-1.02832,-11.6348,-6.59146},{-3.20215,-1.58496,-5.98536},{-9.5625,-8.14136,-6.59146},{3.31934,-12.1499,-2.49405},{12.7661,-12.3416,-3.09147},{-7.07031,-5.88281,-2.48991},{-0.842285,-12.5459,-3.09147},{-0.719238,-6.53833,-3.09147},{-7.24658,-3.73901,-3.09147},{-0.273926,5.03247,-3.09147},{-8.08105,14.2703,-3.09147},{-0.0512695,11.0344,-3.09147},{-1.05078,-4.09375,-3.09147},{5.49219,3.25562,-3.09145},{-2.01221,2.46216,-3.44917},{-0.795898,-3.34204,0.408544},{-0.407227,11.0225,0.408544},{-8.01465,14.1904,0.408544},{-3.87646,-0.265381,0.408545},{-8.10645,-12.5295,0.408544},{-0.76123,-6.67432,0.408544},{7.66064,-12.6519,1.01082},{5.5,-3.64453,0.408544},{10.3765,14.3528,0.408544}
			};
		};
		
		class Land_Hut02 {
			table = "Military";
			positions[] = {{-1.05908,3.10254,-0.447202},{1.05469,3.21582,-0.447202},{-0.921387,-1.21533,-0.447202}
			};
		};
		
		class Land_Hut04 {
			table = "Military";
			positions[] = {{0.925781,2.56689,-0.438636},{-0.97998,2.73218,-0.438636},{-0.955078,-1.61938,-0.438636}
			};
		};
		
		class Land_Zastavka_sever {
			table = "Commercial";
			positions[] = {{-2.67871,0.535645,-0.804512},{2.95117,0.794434,-0.804512}
			};
		};
		
		class Land_Zastavka_jih {
			table = "Military";
			positions[] = {{0.20752,0.189941,-1.21158}
			};
		};
		
		class MASH {
			table = "Medical";
			positions[] = {{1.83301, -2.06787, -1.10541}, {-0.59375, -0.24707, -1.11576}, {1.84668, 1.43115, -1.10454}
			};
		};
		
		class MASH_EP1 {
			table = "Medical";
			positions[] = {{1.83301, -2.06787, -1.10541}, {-0.59375, -0.24707, -1.11576}, {1.84668, 1.43115, -1.10454}
			};
		};
		
		class Camp {
			table = "Military";
			positions[] = {{1.83301, -2.06787, -1.10541}, {-0.59375, -0.24707, -1.11576}, {1.84668, 1.43115, -1.10454}
			};
		};
		
		class CampEmpty {
			table = "Military";
			positions[] = {{1.83301, -2.06787, -1.10541}, {-0.59375, -0.24707, -1.11576}, {1.84668, 1.43115, -1.10454}
			};
		};
		
		class Camp_EP1 {
			table = "Military";
			positions[] = {{1.83301, -2.06787, -1.10541}, {-0.59375, -0.24707, -1.11576}, {1.84668, 1.43115, -1.10454}
			};
		};
		
		class CampEast {
			table = "Military";
			positions[] = {{1.98828, -2.96289, -1.29805}, {-2.20313, 2.51367, -1.30975}, {2.11328, 2.68213, -1.30529}, {-1.9834, -3.14111, -1.30712}
			};
		};
		
		class CampEast_EP1 {
			table = "Military";
			positions[] = {{1.98828, -2.96289, -1.29805}, {-2.20313, 2.51367, -1.30975}, {2.11328, 2.68213, -1.30529}, {-1.9834, -3.14111, -1.30712}
			};
		};
		
		class CampEastC {
			table = "Military";
			positions[] = {{1.98828, -2.96289, -1.29805}, {-2.20313, 2.51367, -1.30975}, {2.11328, 2.68213, -1.30529}, {-1.9834, -3.14111, -1.30712}
			};
		};
		
		class Fortress2 {
			table = "Military";
			positions[] = {{-0.0717773, 1.86304, -0.934889}, {-2.86768, 1.85107, -0.934889}, {-2.8667, -2.01709, -0.934896}
			};
		};
	};
};