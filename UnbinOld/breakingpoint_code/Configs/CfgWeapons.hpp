/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

class CfgWeapons {
	/*
		Breaking Point Equip
	*/
	class Default;	// External class reference
	
	class Loot : Default {
		scope = 2;
		value = 0;
		type = 0;
		displayName = "Use";
		canDrop = 0;
		muzzles[] = {this};
		magazines[] = {"ItemBandage", "PartWoodPile", "ItemMorphine", "ItemHeatPack", "ItemBloodbag", "ItemAntibiotic", "ItemPainkiller", "ItemToolbox", "ItemEtool", "ItemMatchbox", "ItemKnife", "PartFueltank", "PartWheel", "PartGeneric", "PartEngine", "PartVRotor", "PartGlass", "Waterbot", "WaterbotEmpty", "ItemJerrycan", "ItemGenerator", "ItemTent", "ItemSandbag", "ItemTankTrap", "ItemWire", "FoodSteakRaw", "TrashTinCan", "ItemSodaCoke", "ItemSodaPepsi", "ItemSodaMdew", "FoodEdible", "FoodSteakCooked", "FoodCanBakedBeans", "FoodCanSardines", "FoodCanFrankBeans", "FoodCanPasta"};
		modes[] = {this};
		useAction = 0;
		useActionTitle = "";
		enableAttack = 0;
		showToPlayer = 0;
	};

	/*
		Breaking Point - Uniform
	*/
	//Arma 3 Uniform By Deathlyrage
	class U_B_CombatUniform_mcam_worn;
	class U_B_GhillieSuit;
	class U_Competitor;
	class U_I_CombatUniform;
	class U_I_GhillieSuit;
	class U_O_OfficerUniform_ocamo;
	class U_Rangemaster;
	class U_B_Wetsuit;
	class Vest_NoCamo_Base;
	class Vest_Camo_Base;
	class VestItem;
	class Bag_Base;
	class InventoryItem_Base_F;
	class U_B_HeliPilotCoveralls;
	class HeadgearItem;
	class U_B_CombatUniform_mcam_vest;
	class Vest_Base;
	class B_Soldier_base_F;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class Uniform_Base;
	class H_MilCap_ocamo;
	class ItemCore;
	class ItemInfo;
	class H_Cap_red;
	class U_B_FullGhillie_lsh;
	class U_BG_leader;
	class U_BG_Guerilla1_1;
	class U_BG_Guerilla3_2;
	class U_BG_Guerilla3_1;
	class H_HelmetB: ItemCore {
		/*extern*/ class ItemInfo;
	};
	
	class U_BG_Guerilla3_1_BP: U_BG_Guerilla3_1
	{
		scope = 2;
		displayName = "Guerilla Faded";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BP_Guarilla_Faded";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 80;
		};
	};
	
	class U_BG_Guerilla3_2_BP: U_BG_Guerilla3_2
	{
		scope = 2;
		displayName = "Guerilla Khaki";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BP_Guarilla_Khaki";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 80;
		};
	};
	
	class U_BG_leader_BP: U_BG_leader
	{
		scope = 2;
		displayName = "Guerilla Leader";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BP_Guarilla_Leader";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 80;
		};
	};
	
	class U_BG_Guerilla1_1_BP: U_BG_Guerilla1_1
	{
		scope = 2;
		displayName = "Guerilla Khaki Camo";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BP_Guarilla_Camo";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 80;
		};
	};
	
	class U_B_FullGhillie_lsh_BP: U_B_FullGhillie_lsh
	{
		scope = 2;
		displayName = "Marksman Ghillie";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BP_ghillie_lush";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 10;
		};
	};
	
	class BP_Poloshirt_blue : Uniform_Base {
		scope = public;
		displayName = "Civilian Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_polo_1_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
		};
	};
	
	class BP_Poloshirt_zed : Uniform_Base {
		scope = public;
		displayName = "Civ Zombie Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_Zombie_Civilian1.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_zed_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class BP_Poloshirt_zed2 : Uniform_Base {
		scope = public;
		displayName = "Civ Zombie Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_Zombie_Civilian2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_zed2_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class BP_Poloshirt_zed3 : Uniform_Base {
		scope = public;
		displayName = "Military Zombie Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_Zombie_Clothes2.paa", "\A3\Characters_F\OPFOR\Data\tech_CO.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_zed3_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
			hiddenSelections[] = {"Camo1", "Camo2"};
		};
	};
	
	class BP_Poloshirt_zed4 : Uniform_Base {
		scope = public;
		displayName = "RangeMaster Zombie Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_Zombie_Clothes1.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_zed4_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class BP_Poloshirt_burgundy : Uniform_Base {
		scope = public;
		displayName = "Civilian Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_polo_2_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
		};
	};
	
	class BP_Poloshirt_stripped : Uniform_Base {
		scope = public;
		displayName = "Civilian Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_polo_3_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
		};
	};
	
	class BP_Poloshirt_tricolour : Uniform_Base {
		scope = public;
		displayName = "Civilian Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_polo_4_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
		};
	};
	
	class BP_Poloshirt_salmon : Uniform_Base {
		scope = public;
		displayName = "Civilian Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_polo_5_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
		};
	};
	
	class BP_Poloshirt_redwhite : Uniform_Base {
		scope = public;
		displayName = "Civilian Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "C_man_polo_6_BP";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
		};
	};
	
	class U_B_CombatUniform_mcam_worn_BP : U_B_CombatUniform_mcam_worn { //GOOD
		scope = 2;
		displayName = "Combat Clothing";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Soldier2_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 60;
		};
	};
	
	class U_B_CombatUniform_mcam_worn_BP_Z : U_B_CombatUniform_mcam_worn { //GOOD
		scope = 2;
		displayName = "Combat Clothing";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "BP_soldier2_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 60;
		};
	};
	
	class U_I_OfficerUniform_BP: Uniform_Base { //GOOD
		scope = 2;
		displayName = "European Officer Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_IR_Officer_spc_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_officer_I";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 50;
		};
	};
	
	class U_I_OfficerUniform_BP_Z: Uniform_Base { //GOOD
		scope = 2;
		displayName = "European Officer Clothing";
		picture = "\A3\characters_f\data\ui\icon_U_IR_Officer_spc_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_officer_I_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 50;
		};
	};

	class U_B_GhillieSuit_BP : U_B_GhillieSuit {
	
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_sniper_F";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 100;
		};
	};

	/*class U_Competitor_BP : U_Competitor {
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_Competitor_F";
			containerClass = "Supply0";
			mass = 60;
		};
	};*/

	class U_I_CombatUniform_BP : U_I_CombatUniform {  //GOOD
		scope = 2;
		displayName = "Soldier Clothing";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "BP_soldier_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 80;
		};
	};
	
	class U_I_CombatUniform_BP_Z : U_I_CombatUniform {  //GOOD
		scope = 2;
		displayName = "Soldier Clothing";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "BP_soldier_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 80;
		};
	};

	/*class U_I_GhillieSuit_BP : U_I_GhillieSuit {
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "I_sniper_F";
			containerClass = "Supply0";
			mass = 100;
		};
	};*/

	class U_I_OfficerUniform_ocamo_BP : U_O_OfficerUniform_ocamo {  //NAKED
	    scope = 2;
		displayName = "Russian Officer Clothing";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "BP_officer_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 80;
		};
	};
	
	class U_I_OfficerUniform_ocamo_BP_Z : U_O_OfficerUniform_ocamo {  //NAKED
	    scope = 2;
		displayName = "Russian Officer Clothing";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "BP_officer_F_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 80;
		};
	};

	class U_Rangemaster_BP : U_Rangemaster {
	
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_RangeMaster_F";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
		};
	};
	
	class U_Rangemaster_BP_Z : U_Rangemaster {
	
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_RangeMaster_F";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 60;
		};
	};

	class U_B_Wetsuit_BP : U_B_Wetsuit 
	{
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		class ItemInfo : UniformItem 
		{
			uniformModel = "-";
			uniformClass = "B_diver_F";
			allowedSlots[] = {};
			containerClass = "Supply30";
			uniformType = "Neopren";
			mass = 90;
			displayName = "Wetsuit (Black)";
		};
	};
	
	class U_B_Wetsuit_BP_Z : U_B_Wetsuit {
	
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_diver_F_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			uniformType = "Neopren";
			mass = 90;
			displayName = "Wetsuit (Black)";
		};
	};
	
	//NEW CLASS CLOTHING
	
	class BP_Refugee_F: Uniform_Base {
		scope = 2;
		displayName = "Traitor Nomad";
		picture = "\breakingpoint_ui\icons\NomadIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_RefugeeF_F";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 40;
		};
	};
	
	class BP_Refugee_F_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Nomad";
		picture = "\breakingpoint_ui\icons\NomadIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_RefugeeF_Z";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 40;
		};
	};
	
	class BP_Refugee_1: Uniform_Base {
		scope = 2;
		displayName = "Nomad level 1";
		picture = "\breakingpoint_ui\icons\NomadIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Refugee1_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Refugee_1_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Nomad";
		picture = "\breakingpoint_ui\icons\NomadIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Refugee1_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Refugee_2: Uniform_Base {
		scope = 2;
		displayName = "Nomad level 2";
		picture = "\breakingpoint_ui\icons\NomadIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Refugee2_F";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 40;
		};
	};
	
	class BP_Refugee_2_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Nomad";
		picture = "\breakingpoint_ui\icons\NomadIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Refugee2_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 40;
		};
	};
	
	class BP_Refugee_3: Uniform_Base {
		scope = 2;
		displayName = "Nomad level 3";
		picture = "\breakingpoint_ui\icons\NomadIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Refugee3_F";
			allowedSlots[] = {};
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	class BP_Refugee_3_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Nomad";
		picture = "\breakingpoint_ui\icons\NomadIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Refugee3_Z";
			allowedSlots[] = {};
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	class BP_Guardian_F: Uniform_Base {
		scope = 2;
		displayName = "Traitor Ranger";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_GuardianF_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Guardian_F_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Ranger";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_GuardianF_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Guardian_1: Uniform_Base {
		scope = 2;
		displayName = "Ranger level 1";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Guardian1_F";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 40;
		};
	};
	
	class BP_Guardian_1_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Ranger";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Guardian1_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 40;
		};
	};
	
	class BP_Guardian_2: Uniform_Base {
		scope = 2;
		displayName = "Ranger level 2";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Guardian2_F";
			allowedSlots[] = {};
			containerClass = "Supply50";
			mass = 40;
		};
	};
	
	class BP_Guardian_2_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Ranger";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Guardian2_Z";
			allowedSlots[] = {};
			containerClass = "Supply50";
			mass = 40;
		};
	};
	
	class BP_Guardian_3: Uniform_Base {
		scope = 2;
		displayName = "Ranger level 3";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Guardian3_F";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 40;
		};
	};
	
	class BP_Guardian_3_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "fallen Ranger";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Guardian3_Z";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 40;
		};
	};
	
	class BP_Rebel_F: Uniform_Base {
		scope = 2;
		displayName = "Traitor Outlaw";
		picture = "\breakingpoint_ui\icons\OutlawIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_RebelF_F";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 40;
		};
	};
	
	class BP_Rebel_F_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Outlaw";
		picture = "\breakingpoint_ui\icons\OutlawIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_RebelF_Z";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 40;
		};
	};
	
	class BP_Rebel_1: Uniform_Base {
		scope = 2;
		displayName = "Outlaw level 1";
		picture = "\breakingpoint_ui\icons\OutlawIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Rebel1_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Rebel_1_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Outlaw";
		picture = "\breakingpoint_ui\icons\OutlawIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Rebel1_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Rebel_2: Uniform_Base {
		scope = 2;
		displayName = "Outlaw level 2";
		picture = "\breakingpoint_ui\icons\OutlawIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Rebel2_F";
			allowedSlots[] = {};
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	class BP_Rebel_2_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Outlaw";
		picture = "\breakingpoint_ui\icons\OutlawIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Rebel2_Z";
			allowedSlots[] = {};
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	class BP_Rebel_3: Uniform_Base {
		scope = 2;
		displayName = "Outlaw level 3";
		picture = "\breakingpoint_ui\icons\OutlawIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Rebel3_F";
			allowedSlots[] = {};
			containerClass = "Supply50";
			mass = 40;
		};
	};
	
	class BP_Rebel_3_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Outlaw";
		picture = "\breakingpoint_ui\icons\OutlawIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Rebel3_Z";
			allowedSlots[] = {};
			containerClass = "Supply50";
			mass = 40;
		};
	};
	
	class BP_Hunter_1: Uniform_Base {
		scope = 2;
		displayName = "Hunter level 1";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Hunter1_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Hunter_1_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Hunter";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Hunter1_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Hunter_2: Uniform_Base {
		scope = 2;
		displayName = "Hunter level 2";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Hunter2_F";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 40;
		};
	};
	
	class BP_Hunter_2_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Hunter";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Hunter2_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 40;
		};
	};
	
	class BP_Hunter_3: Uniform_Base {
		scope = 2;
		displayName = "Hunter level 3";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Hunter3_F";
			allowedSlots[] = {};
			containerClass = "Supply80";
			mass = 40;
		};
	};
	
	class BP_Hunter_3_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Hunter";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Hunter3_Z";
			allowedSlots[] = {};
			containerClass = "Supply80";
			mass = 40;
		};
	};
	
	class BP_Survivalist_1: Uniform_Base {
		scope = 2;
		displayName = "Survivalist level 1";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Survivalist1_F";
			allowedSlots[] = {};
			containerClass = "Supply50";
			mass = 40;
		};
	};
	
	class BP_Survivalist_1_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Survivalist";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Survivalist1_Z";
			allowedSlots[] = {};
			containerClass = "Supply50";
			mass = 40;
		};
	};
	
	class BP_Survivalist_2: Uniform_Base {
		scope = 2;
		displayName = "Survivalist level 2";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Survivalist2_F";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 40;
		};
	};
	
	class BP_Survivalist_2_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Survivalist";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Survivalist2_Z";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 40;
		};
	};
	
	class BP_Survivalist_3: Uniform_Base {
		scope = 2;
		displayName = "Survivalist level 3";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Survivalist3_F";
			allowedSlots[] = {};
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class BP_Survivalist_3_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Fallen Survivalist";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Survivalist3_Z";
			allowedSlots[] = {};
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class BP_Survivalist_F: Uniform_Base {
		scope = 2;
		displayName = "Traitor Survivalist";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_SurvivalistF_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Survivalist_F_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_SurvivalistF_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Engineer_1: Uniform_Base {
		scope = 2;
		displayName = "";
		picture = "breakingpoint_weaponsiconsicon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Engineer1_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Engineer_1_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "";
		picture = "breakingpoint_weaponsiconsicon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Engineer1_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Engineer_2: Uniform_Base {
		scope = 2;
		displayName = "";
		picture = "breakingpoint_weaponsiconsicon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Engineer2_F";
			allowedSlots[] = {};
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	class BP_Engineer_2_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "";
		picture = "breakingpoint_weaponsiconsicon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Engineer2_Z";
			allowedSlots[] = {};
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	class BP_Engineer_3: Uniform_Base {
		scope = 2;
		displayName = "";
		picture = "breakingpoint_weaponsiconsicon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Engineer3_F";
			allowedSlots[] = {};
			containerClass = "Supply60";
			mass = 40;
		};
	};
	
	class BP_Engineer_3_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "";
		picture = "breakingpoint_weaponsiconsicon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Engineer3_Z";
			allowedSlots[] = {};
			containerClass = "Supply60";
			mass = 40;
		};
	};
	
	class BP_OptOut: Uniform_Base {
		scope = 2;
		displayName = "Independent";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Optout_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_OptOut_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Independent";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Optout_Z";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_OptOut2: Uniform_Base {
		scope = 2;
		displayName = "Independent";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Optout2_F";
			containerClass = "Supply20";
			mass = 10;
	    };
	};
	
	class BP_OptOut2_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Independent";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Optout2_Z";
			containerClass = "Supply20";
			mass = 10;
	    };
	};
	
	class BP_OptOut3: Uniform_Base {
		scope = 2;
		displayName = "Independent";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Optout3_F";
			containerClass = "Supply20";
			mass = 10;
	    };
	};
	
	class BP_OptOut3_Z: Uniform_Base { //ZOMBIE
		scope = 2;
		displayName = "Independent";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Optout3_Z";
			containerClass = "Supply20";
			mass = 10;
	    };
	};
	
	//HERO & BANDIT SKINS
	
	class BP_Hero_1: Uniform_Base {
		scope = 2;
		displayName = "Rifleman Hero";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Soldier_M_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 50;
		};
	};

	class BP_Hero_2: Uniform_Base {
		scope = 2;
		displayName = "Ranger Hero";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Soldier_A_F";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 50;
		};
	};
	
	class BP_Hero_3: Uniform_Base {
		scope = 2;
		displayName = "Veteran Hero";
		picture = "\breakingpoint_ui\icons\RangerIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Soldier_I_F";
			allowedSlots[] = {};
			containerClass = "Supply40";
			mass = 50;
		};
	};
	
	class BP_Bandit_1: Uniform_Base {
		scope = 2;
		displayName = "Bandit Opportunist";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Bandit_U_F";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 30;
		};
	};
	
	class BP_Bandit_2: Uniform_Base {
		scope = 2;
		displayName = "Bandit Marauder";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Bandit_W_F";
			allowedSlots[] = {};
			containerClass = "Supply10";
			mass = 30;
		};
	};
	
	class BP_Bandit_3: Uniform_Base {
		scope = 2;
		displayName = "Bandit Leader";
		picture = "\breakingpoint_ui\icons\HunterIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Bandit_I_F";
			allowedSlots[] = {};
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class BP_Rogue1: Uniform_Base {
		scope = 2;
		displayName = "Rogue Clothing";
		picture = "\A3\characters_f_gamma\guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_RogueClothing_co.paa"};

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Rogue_1";
			containerClass = "Supply20";
			mass = 50;
			hiddenSelections[] = {"camo1"};
	    };
	};
	
	class BP_Survivalist1: Uniform_Base {
		scope = 2;
		displayName = "Survivalist Ghillie";
		picture = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "I_sniper_F";
			containerClass = "Supply30";
			mass = 60;
		};
	};
	
	class BP_Shemag_bandit: H_HelmetB {
	    scope = 2;
		displayName = "Bandit Leader Shemag";
		picture = "\breakingpoint\textures\icons\bp_shemag_ca.paa";
		model = "\A3\Characters_F_Gamma\Guerrilla\headgear_shemagmask";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_Shemag_Bandit3_co.paa"};

		class ItemInfo: Iteminfo {
			mass = 10;
			allowedSlots[] = {901};
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\headgear_shemagmask";
			modelSides[] = {6};
			armor = "0";
			passThrough = 1.0000;
			hiddenSelections[] = {"camo"};
		};
	};
	
	//VESTS & BELTS
	
	class V_HeroVest_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "TacVest (Hero)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroVest_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			allowedSlots[] = {};
			containerClass = "Supply150";
			mass = 120;
			armor = "5*0.6";
			passThrough = 0.100000;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class V_EngineerVest_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "TacVest (Engineer)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"breakingpoint\textures\backpack\tacticalvest_engineer_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 120;
			armor = "0";
			passThrough = 0.500000;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class V_LBelt_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Light Equipment Belt";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "\breakingpoint_classes\models\BP_LBelt.p3d";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroVest_co.paa"};

		class ItemInfo: VestItem {
			allowedSlots[] = {};
			uniformModel = "\breakingpoint_classes\models\BP_LBelt.p3d";
			containerClass = "Supply40";
			mass = 35;
			armor = "0";
			passThrough = 1;
			//hiddenSelections[] = {"camo"};
		};
	};
	
	class V_MBelt_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Medium Equipment Belt";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "\breakingpoint_classes\models\BP_MBelt.p3d";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroVest_co.paa"};

		class ItemInfo: VestItem {
			allowedSlots[] = {};
			containerClass = "Supply60";
			uniformModel = "\breakingpoint_classes\models\BP_MBelt.p3d";
			mass = 55;
			armor = "0";
			passThrough = 1;
			hitpointName = "HitLegs";
			//hiddenSelections[] = {"camo"};
		};
	};
	
	class V_HBelt_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Heavy Equipment Belt";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "\breakingpoint_classes\models\BP_HBelt.p3d";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroVest_co.paa"};

		class ItemInfo: VestItem {
			allowedSlots[] = {};
			containerClass = "Supply100";
			uniformModel = "\breakingpoint_classes\models\BP_HBelt.p3d";
			mass = 85;
			armor = "0";
			passThrough = 1;
			hitpointName = "HitLegs";
			//hiddenSelections[] = {"camo"};
		};
	};
	
	class V_HVest_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Heavy Equipment Vest";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "\breakingpoint_classes\models\BP_HVest.p3d";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroVest_co.paa"};

		class ItemInfo: VestItem {
			allowedSlots[] = {};
			containerClass = "Supply120";
			uniformModel = "\breakingpoint_classes\models\BP_HVest.p3d";
			mass = 95;
			armor = "0";
			passThrough = 1;
			//hiddenSelections[] = {"camo"};
		};
	};
	
	class V_CPack_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Heavy Vest Pouch";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "\breakingpoint_classes\models\BP_CPack.p3d";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroVest_co.paa"};

		class ItemInfo: VestItem {
			allowedSlots[] = {};
			containerClass = "Supply90";
			uniformModel = "\breakingpoint_classes\models\BP_CPack.p3d";
			mass = 50;
			armor = "0";
			passThrough = 1;
			//hiddenSelections[] = {"camo"};
		};
	};
	
	class V_VPack_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Light Vest Pouch";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "\breakingpoint_classes\models\BP_VPack.p3d";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroVest_co.paa"};

		class ItemInfo: VestItem {
			allowedSlots[] = {};
			containerClass = "Supply50";
			uniformModel = "\breakingpoint_classes\models\BP_VPack.p3d";
			mass = 10;
			armor = "0";
			passThrough = 1;
			//hiddenSelections[] = {"camo"};
		};
	};
	
	class V_BanditBandolier_BP: Vest_Camo_Base {
		scope = 2;
		displayName = "Bandolier (Bandit)";
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_BanditBandolier_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			allowedSlots[] = {};
			containerClass = "Supply80";
			mass = 20;
			armor = "0";
			passThrough = 0.950000;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class BP_MilCap_Hero3: H_MilCap_ocamo {
		displayName = "Hero Medic Cap";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroCap3_co.paa"};
	};
	
	class BP_MilCap_Hero1: H_MilCap_ocamo {
		displayName = "Hero Cap";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroCap1_co.paa"};
	};
	
	class BP_HeroCap: H_Cap_red {
		displayName = "Hero Cap";
		picture = "\A3\characters_f\Data\UI\icon_h_cap_blk_cmmg_ca.paa";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroCap_co.paa"};
	};
	
	class BP_HeroBoonie_cam: H_HelmetB {
		displayName = "Hero Boonie Hat";
		picture = "\A3\Characters_F\data\ui\icon_H_booniehat_mcamo_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_HeroCap2_co.paa"};

		class ItemInfo: Iteminfo {
			mass = 10;
			allowedSlots[] = {901};
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {6};
			armor = "0";
			passThrough = 1.000000;
		};
	};
	
	class BP_RogueHat: H_HelmetB {
		displayName = "Rogue Hat";
		picture = "\A3\Characters_F\data\ui\icon_h_booniehat_desert_ca.paa";
		model = "\breakingpoint\models\BP_roguehat.p3d";

		class ItemInfo: Iteminfo {
			mass = 10;
			allowedSlots[] = {901};
			uniformModel = "\breakingpoint\models\BP_roguehat.p3d";
			modelSides[] = {6};
			armor = "0";
			passThrough = 1.000000;
		};
	};
	
	class BP_Bandit_Bandanna: H_HelmetB {
		displayName = "$STR_A3_H_Bandanna_surfer0";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_cbr_CA.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\clothing\BP_BanditBandanna_co.paa"};

		class ItemInfo: ItemInfo {
			mass = 2;
			allowedSlots[] = {901};
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {6};
			armor = "3*0";
			passThrough = 1;
		};
	};


	class V_Rangemaster_belt_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Utility Belt (Olive)";
		picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			allowedSlots[] = {};
			containerClass = "Supply40";
			mass = 20;
			armor = "0";
			passThrough = 0.980000;
		};
	};
	
	class V_BandollierB_khk_BP: Vest_Camo_Base {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_A3_V_BandollierB_khk0";
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			allowedSlots[] = {};
			containerClass = "Supply60";
			mass = 20;
			armor = "0";
			passThrough = 0.930000;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class V_BandollierB_cbr_BP: Vest_Camo_Base {
		scope = 2;
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		displayName = "$STR_A3_V_BandollierB_cbr0";
		picture = "\A3\Characters_F\data\ui\icon_V_bandollier_khk_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			allowedSlots[] = {};
			containerClass = "Supply60";
			mass = 20;
			armor = "0";
			passThrough = 0.950000;
			hiddenSelections[] = {"camo"};
		};
	};

	class V_BandollierB_rgr_BP: Vest_Camo_Base {
		scope = 2;
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		displayName = "$STR_A3_V_BandollierB_rgr0";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_rgr_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			allowedSlots[] = {};
			containerClass = "Supply60";
			mass = 20;
			armor = "0";
			passThrough = 0.950000;
			hiddenSelections[] = {"camo"};
		};
	};

	class V_BandollierB_blk_BP: Vest_Camo_Base {
		scope = 2;
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		displayName = "$STR_A3_V_BandollierB_blk0";
		picture = "\A3\characters_f\Data\UI\icon_V_bandollier_blk_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			allowedSlots[] = {};
			containerClass = "Supply60";
			mass = 20;
			armor = "0";
			passThrough = 0.950000;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class V_BandollierB_oli_BP: Vest_Camo_Base {
		scope = 2;
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		picture = "\A3\Characters_F_Beta\Data\ui\icon_V_Bandolier_oli_ca.paa";
		displayName = "$STR_A3_V_BANDOLLIERB_OLI0";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\vests_oli_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			allowedSlots[] = {};
			containerClass = "Supply60";
			mass = 20;
			armor = "0";
			passThrough = 0.950000;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class V_PlateCarrier1_rgr_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrier1_rgr0";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			allowedSlots[] = {};
			containerClass = "Supply110";
			mass = 80;
			armor = "0";
			passThrough = 0.750000;
		};
	};

	class V_PlateCarrier2_rgr_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrier1_cbr0";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			allowedSlots[] = {};
			containerClass = "Supply100";
			mass = 80;
			armor = "0";
			passThrough = 0.750000;
		};
	};

	class V_PlateCarrier3_rgr_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrier2_rgr0";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 100;
			armor = "0";
			passThrough = 0.750000;
		};
	};

	class V_PlateCarrierGL_rgr_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrierGL_rgr0";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			allowedSlots[] = {};
			containerClass = "Supply90";
			mass = 80;
			armor = "0";
			passThrough = 0.750000;
		};
	};
	
	class V_TacVest_khk_BP: Vest_Camo_Base {
		scope = 2;
		displayName = "TacVest (Khaki)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_khaki_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 100;
			armor = "0";
			passThrough = 0.800000;
			hiddenSelections[] = {"camo"};
		};
	};

	class V_TacVest_brn_BP: Vest_Camo_Base {
		scope = 2;
		displayName = "TacVest (Brown)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_brn_CA.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_brown_co.paa"};
		
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 100;
			armor = "0";
			passThrough = 0.800000;
			hiddenSelections[] = {"camo"};
		};
	};

	class V_TacVest_oli_BP: Vest_Camo_Base {
		scope = 2;
		displayName = "TacVest (Olive)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_olive_co.paa"};
		
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 100;
			armor = "0";
			passThrough = 0.800000;
			hiddenSelections[] = {"camo"};
		};
	};

	class V_TacVest_blk_BP: Vest_Camo_Base {
		scope = 2;
		displayName = "TacVest (Black)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_black_co.paa"};
		
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 60;
			armor = "0";
			passThrough = 0.800000;
			hiddenSelections[] = {"camo"};
		};
	};

	class V_HarnessO_brn_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Equipment Harness";
		descriptionUse = "Equipment Harness";
		descriptionShort = "Medium capacity, light armor";
		picture = "\A3\characters_f\Data\UI\icon_V_HarnessO_brn_CA.paa";
		model = "\A3\Characters_F\OPFOR\equip_o_vest01";

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
			allowedSlots[] = {};
			containerClass = "Supply90";
			mass = 40;
			armor = "0";
			passThrough = 0.920000;
		};
	};

	class V_HarnessOGL_brn_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Equipment Harness";
		descriptionShort = "Medium capacity, light armor";
		picture = "\A3\characters_f\Data\UI\icon_V_HarnessOGL_brn_CA.paa";
		model = "\A3\Characters_F\OPFOR\equip_o_vest_gl";

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
			allowedSlots[] = {};
			containerClass = "Supply90";
			mass = 40;
			armor = "0";
			passThrough = 0.920000;
		};
	};
	
	class V_Chestrig_khk_BP: Vest_Camo_Base {
		scope = 2;
		displayName = "Survival Rig";
		descriptionShort = "Medium capacity, light armor";
		picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_khk_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_khk_co.paa", "\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
			containerClass = "Supply80";
			mass = 40;
			armor = "0";
			passThrough = 0.950000;
			hiddenSelections[] = {"camo1", "camo2"};
		};
	};

	class V_Chestrig_rgr_BP: V_Chestrig_khk_BP {
		scope = 2;
		displayName = "Survival Rig";
		picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_rgr_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_rgr_co.paa", "\A3\Characters_f\BLUFOR\data\armor1_co.paa"};
	};

	class V_Chestrig_blk_BP: V_Chestrig_khk_BP {
		scope = 2;
		displayName = "Survival Rig";
		picture = "\A3\characters_F\data\ui\icon_V_FChestrig_blk_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_blk_co.paa", "\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
	};
	
	class V_PlateCarrierIA1_dgtl_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Plate Carrier Digital";
		descriptionUse = "Vest Digital";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";

		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 150;
			armor = "0";
			passThrough = 0.750000;
		};
	};

	class V_PlateCarrierIA2_dgtl_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Plate Carrier+ Digital";
		descriptionUse = "Harness Digital";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";

		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			allowedSlots[] = {};
			containerClass = "Supply80";
			mass = 80;
			armor = "0";
			passThrough = 0.750000;
		};
	};

	class V_PlateCarrierIAGL_dgtl_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "Plate Carrier+ Digital";
		picture = "\A3\Characters_F_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			allowedSlots[] = {};
			containerClass = "Supply110";
			mass = 80;
			armor = "0";
			passThrough = 0.750000;
		};
	};
	
	class V_TacVest_camo_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "TacVest (Woodland)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_camo_co.paa"};
	

		class ItemInfo: VestItem {
			hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_camo_co.paa"};
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 60;
			armor = "0";
			passThrough = 0.800000;
			hiddenSelections[] = {"camo"};
		};
	};

	class V_TacVest_blk_POLICE_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "TacVest (Police)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_police_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_police_co.paa"};
		model = "A3\Characters_F\Common\equip_tacticalvest";

		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			allowedSlots[] = {};
			containerClass = "Supply80";
			mass = 60;
			hiddenSelections[] = {"camo"};
		};
	};

	class V_TacVestIR_blk_BP: Vest_NoCamo_Base {
		scope = 2;
		displayName = "TacVest (Grey)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";

		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
			allowedSlots[] = {};
			containerClass = "Supply70";
			mass = 60;
			armor = "0";
			passThrough = 0.600000;
		};
	};

	//GHILLIES
	
	class BP_DirtGhillie: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Dirt)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
		};
	};

	class BP_DirtGhillie_Z: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Dirt)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
		};
	};

	class BP_StoneGhillie: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Stone)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier2";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
		};
	};
	
	class BP_StoneGhillie_Z: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Stone)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier2_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
		};
	};

	class BP_TreeGhillie: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Tree)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier3";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
		};
	};
	
	class BP_TreeGhillie_Z: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Tree)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier3_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
		};
	};
	
	class BP_GrassGhillie: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Grass)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier1";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
		};
	};
	
	class BP_GrassGhillie_Z: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Grass)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier1_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
		};
	};
	
	class BP_SnowGhillie: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Snow)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Ghillies\ghillie1_ca.paa"};
		
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier4";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class BP_SnowGhillie_Z: Uniform_Base {
		scope = 2;
		displayName = "Ghillie (Snow)";
		picture = "\breakingpoint_ui\icons\NoneIcon.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Ghillies\ghillie1_ca.paa"};
		
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "BP_Sniper_soldier4_Z";
			allowedSlots[] = {};
			containerClass = "Supply30";
			mass = 80;
			hiddenSelections[] = {"Camo"};
		};
	};
	

	//End of Arma 3 Uniform

	/*
		Breaking Point: Toolbelt Items
	*/

	class ItemMap: ItemCore {
		model = "breakingpoint\models\bp_map.p3d";
	};

	class ItemWatch: ItemCore {
		model = "breakingpoint\models\bp_watch.p3d";
	};

	class ItemCompass: ItemCore {
		model = "breakingpoint\models\bp_compass.p3d";
	};
	
	class ItemToolbox : ItemCore {
		scope = 2;
		displayName = "Toolbox";
		descriptionUse = "Toolbox";
		model = "\breakingpoint\models\bp_toolbox.p3d";
		picture = "\breakingpoint\textures\icons\bp_toolbox_ca.paa";
		descriptionShort = "All purpose toolkit used for basic to major mechanical repair";
		simulation = "ItemRadio";
		
		class ItemInfo {
		    mass = 99;
	    };
	};
	
	class ItemSurgeryKit : ItemCore {
		scope = public;
		displayName = "Portable Surgery Kit";
		descriptionUse = "Surgery Kit";
		model = "\breakingpoint\models\bp_surgerykit.p3d";
		picture = "\breakingpoint\textures\icons\bp_surgerykit_ca.paa";
		descriptionShort = "Used For: Treatment of life threatening wounds and blood loss.";
		simulation = "ItemRadio";
		
		class ItemInfo {
		    mass = 99;
	    };
	};
	
	
	/*
		Breaking Point: Weapon Attachments\\\
	*/

	class BP_FnpTac45  {
        linkedAttach[] = {"BP_suppr9", "optic_MRD"};
	};
	
	class BP_M9Tac {
        linkedAttach[] = {"BP_Mk12Ssup"};
	};
	
	class BP_1911MDes {
        linkedAttach[] = {"BP_Gemtech45"};
	};
	
	class BP_MXM_SOS {
        linkedAttach[] = {"BP_SOS"};
	};
	
	class BP_LRR_F {
        linkedAttach[] = {"BP_optic_LeupoldERT"};
	};	
	
	class BP_GM6_SOS {
        linkedAttach[] = {"BP_SOS"};
	};
	
    class BP_Minimi_762CCO {
	    linkedAttach[] = {"BP_compm4s"};
	};	
	
	class BP_M110 {
        linkedAttach[] = {"BP_M3A"};
	};
	
	class BP_M110WL {
        linkedAttach[] = {"BP_M3A"};
	};
	
	class BP_SR25 {
        linkedAttach[] = {"BP_M3A2"};
	};
	
	class BP_M4CCO  {
	    linkedAttach[] = {"BP_compm4s"};
    };
	
	class BP_M4Spec  {
	    linkedAttach[] = {"BP_muzzle_snds_M", "BP_compm4s"};
    };
	
	class BP_SVT40_2 {
		linkedAttach[] = {"BP_PSO1"};
    };
	
	class BP_Kar98z {
		linkedAttach[] = {"BP_ZF42"};
    };
	
	class BP_GarandU {
		linkedAttach[] = {"BP_Unertl8x"};
    };
	
	class BP_SVD  {
	    linkedAttach[] = {"BP_PSO1"};
    };
	
	class BP_SVDK  {
	    linkedAttach[] = {"BP_PSOP"};
    };
	
	class BP_CZ550_old   {
		linkedAttach[] = {"BP_CZol_br"};
	};
	
	class BP_CZ550_old2   {
		linkedAttach[] = {"BP_CZol_br", "BP_EnfieldOptic2"};
	};
	
	class BP_CZ455   {
		linkedAttach[] = {"BP_MRT"};
	};
	
	class BP_CZ455s   {
		linkedAttach[] = {"BP_MRT", "BP_22Sup"};
	};
	
	class BP_MC550  {
		linkedAttach[] = {"BP_CZst_br", "BP_VX2"};
	};
	
	class BP_R300  {
		linkedAttach[] = {"BP_MRT"};
	};	
	
	class BP_MC5502  {
		linkedAttach[] = {"BP_CZst_br", "BP_VX2"};
	};
	
	class BP_HA550  {
		linkedAttach[] = {"BP_VX3"};
	};
	
	class BP_LeeEnfield_old2  {
	    linkedAttach[] = {};
	};
	
	class BP_LeeEnfield2  {
	    linkedAttach[] = {"BP_EnfieldOptic2"};
	};	
	
	class BP_Mk12mod1  {
		linkedAttach[] = {"BP_m3lr"};
	};
	
	class BP_Mk12mod1Spec   {
		linkedAttach[] = {"BP_muzzle_snds_M12", "BP_M3A2"};
	};
	
	class BP_MX_black   {
	    linkedAttach[] = {"BP_muzzle_snds_H", "optic_hamr", "BP_flashlight"};
	};

    class BP_MXM_black  {
	    linkedAttach[] = {"BP_muzzle_snds_H", "BP_SOS"};
	};
	
	class BP_M24Spec  {
        linkedAttach[] = {"BP_PS22"};
    };
	
	class BP_M24Des  {
        linkedAttach[] = {"BP_M3A"};
    };
	
	class BP_M24DesG  {
        linkedAttach[] = {"BP_M3A", "BP_GhillieDes"};
    };
	
	class BP_R700  {
        linkedAttach[] = {"BP_M3A"};
    };
	
	class BP_M40A3  {
        linkedAttach[] = {"BP_L14X"};
    };
	
	class BP_M40A3G  {
        linkedAttach[] = {"BP_L14X", "BP_GhillieWL"};
    };
	
	class BP_M4_300 {
	    linkedAttach[] = {"BP_compm4s"};
	};
	
	class BP_FALM  {
        linkedAttach[] = {"BP_L14x"};
    };
	
	class BP_G36DMR  {
        linkedAttach[] = {"BP_M3A", "BP_AFG"};
    };
	
	class BP_M4	{
		linkedattach[] = {"BP_Handle"};
	};	
	
	class BP_DMR_Officer  {
        linkedAttach[] = {"BP_M3AMRAD", "BP_CPad"};
	};

    class BP_M25WF  {
        linkedAttach[] = {"BP_L14x"};
	};
	
	class BP_M21  {
        linkedAttach[] = {"BP_M3A2"};
	};
	
	class BP_M21K  {
        linkedAttach[] = {"BP_M3A2"};
	};
	
	class BP_M25WFK  {
		linkedAttach[] = {"BP_M3A2"};
	};

    class BP_SW44S  {
 	    linkedAttach[] = {"BP_M8"};
	};

    class BP_Win70  {
 	    linkedAttach[] = {"BP_Unertl8x"};
	};

    class BP_M1903  {
 	    linkedAttach[] = {"BP_Unertl8x"};
	};	
	
	class BP_M1903K  {
 	    linkedAttach[] = {"BP_Unertl8x"};
	};
	
	class BP_Win70F  {
 	    linkedAttach[] = {"BP_VX3"};
	};
	
	class BP_1886S  {
 	    linkedAttach[] = {"BP_Unertl8x"};
	};
	
	class BP_1866C  {
 	    linkedAttach[] = {"BP_Unertl32x"};
	};
	
	class BP_WinCoy  {
		linkedAttach[] = {"BP_MRT", "BP_R7S"};
	};
	
	class BP_Rem6  {
		linkedAttach[] = {"BP_MRT"};
	};
	
	class BP_Ruger  {
		linkedAttach[] = {"BP_MRT"};
	};
	
	class BP_WinCoy2  {
		linkedAttach[] = {"BP_VX2", "BP_R7P"};
	};
	
	class BP_Tavor  {
		linkedAttach[] = {"BP_Compm4s", "BP_flashlight"};
	};
	
	class BP_ScarH  {
		linkedAttach[] = {"BP_Compm4s", "BP_flashlight"};
	};
	
	class BP_MK20Spec  {
		linkedAttach[] = {"BP_Compm4s", "BP_flashlight", "BP_muzzle_snds_M"};
	};
	
	class BP_Crossbow_DigitCamo  {
		linkedAttach[] = {"BP_Compm4s"};
	};
	
	class BP_SUD_AK108  {
		linkedAttach[] = {"BP_PSO35"};
	};
	
	class BP_SUD_AK109  {
		linkedAttach[] = {"BP_PSO35"};
	};
};