/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/

class CfgObjectLoot {
	class Default {
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class MilitaryGeneral : Default {};
	class MilitarySpecial : Default {};
	class MilitaryAirfield : Default {};
	class MilitaryRanger : Default {};
	class BystricaMilitaryCastle : Default {};
	class BystricaMilitaryDeerstand : Default {};
	class BystricaMilitaryCivilian : Default {};
	class BystricaMilitaryCamp : Default {};
	
	class Brick: Default {
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"ItemKnife","magazine"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCereal1","magazine"},
			{"ItemCereal2","magazine"},
			{"ItemCereal3","magazine"},
			{"ItemCereal4","magazine"},
			{"ItemCereal5","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"MeleeKatana","weaponNA"},
			{"MeleePickaxe","weaponNA"},
			{"Meleehatchet","weaponNA"},
			{"MeleeShovel","weaponNA"},
			{"MeleeCrowbar","weaponNA"},
			{"MeleeClub","weaponNA"},			
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"WaterbotEmpty","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemCards","magazine"},
			{"HandGrenade","magazine"},
			{"BP_AlarmClock_Black","magazine"}

		};
		itemChance[] =	{
			0.10,	//Brick 1
			0.10,	//Brick 2
			0.10,	//KNIFE
			0.01,	//Water
			0.01,	//Water
			0.01,	//Water
			0.01,	//Water
			0.01,	//Water
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.10,	//KATANA
			0.10,	//PICKAXE
			0.10,	//HATCHET
			0.10,	//SHOVEL
			0.10,	//CROWBAR
			0.10,	//BAT
			0.05,	//BANDAGE
			0.05,	//PAINKILLER
			0.01,	//MORPHINE
			0.01,	//FIELDDRESSING
			0.05,	//ANTIBIOTIC
			0.01,	//SURGERYKIT
			0.15,	//WaterbotEmptyTLE
			0.10,	//TENNISBALL			
			0.05,	//DUCTTAPE
			0.05,	//WATERTAPE
			0.03,	//BACKPACK
			0.03,	//BACKPACK
			0.03,	//BACKPACK
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.01,	//NADE
			0.05	//AlarmClock
		};		
	};
	
	class ApexMilBox1: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_arifle_AKS_F","weapon"},  //AKS-74U 
			{"BP_arifle_AKM_F","weapon"},  //AKM
			{"BP_arifle_AKM_FL_F","weapon"},  //AKM Flashlight ( Not an attachment, custom model ) 
			{"BP_arifle_AK12_F","weapon"},  //AK-12
			{"BP_arifle_AK12_GL_F","weapon"},  //AK-12 UGL 
			{"BP_LMG_03_F","weapon"},  //LIM-85 
			{"BP_hgun_Pistol_01_F","weapon"},  //PM 9mm Pistol 
			{"BP_arifle_SPAR_01_blk_F","weapon"},  //SPAR-16 Black
			{"BP_arifle_SPAR_01_khk_F","weapon"},  //SPAR-16 Khaki
			{"BP_arifle_SPAR_01_snd_F","weapon"},  //SPAR-16 Sand 
			{"BP_arifle_SPAR_01_GL_blk_F","weapon"},  //SPAR-16 UGL Black
			{"BP_arifle_SPAR_01_GL_khk_F","weapon"},  //SPAR-16 UGL Khaki
			{"BP_arifle_SPAR_01_GL_snd_F","weapon"},  //SPAR-16 UGL Sand 
			{"BP_arifle_SPAR_02_blk_F","weapon"},  //SPAR-16S Black
			{"BP_arifle_SPAR_02_khk_F","weapon"},  //SPAR-16S Khaki
			{"BP_arifle_SPAR_02_snd_F","weapon"},  //SPAR-16S Sand 
			{"BP_arifle_SPAR_03_blk_F","weapon"},  //SPAR-17 Black
			{"BP_arifle_SPAR_03_blk_F","weapon"},  //SPAR-17 Black
			{"BP_arifle_SPAR_03_snd_F","weapon"},  //SPAR-17 Sand 
			{"BP_arifle_CTAR_blk_F","weapon"},  //CAR-95
			{"BP_arifle_CTAR_GL_blk_F","weapon"},  //CAR-95 GL
			{"BP_arifle_CTARS_blk_F","weapon"},  //CAR-95-1
			{"BP_arifle_ARX_blk_F","weapon"},  //Type 115 Black
			{"BP_srifle_DMR_07_blk_F","weapon"},  //CMR-76 Black
			{"BP_srifle_DMR_07_ghex_F","weapon"},  //CMR-76 Green Hex
			{"BP_srifle_DMR_07_hex_F","weapon"},  //CMR-76 Hex 
			{"BP_SMG_05_F","weapon"},  //Protector
			{"BP_30Rnd_545x39_Mag_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Green_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Tracer_Green_F","magazine"}, 
			{"BP_30Rnd_762x39_Mag_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Green_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Tracer_Green_F","magazine"}, 
			{"BP_200Rnd_556x45_LIM_Box_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Red_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Tracer_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Tracer_Red_F","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_150Rnd_556x45_Drum_Mag_F","magazine"},
			{"BP_150Rnd_556x45_Drum_Mag_Tracer_F","magazine"},
			{"BP_20Rnd_762x51_BPMag","magazine"},
			{"BP_30Rnd_580x42_Mag_F","magazine"},
			{"BP_30Rnd_580x42_Mag_Tracer_F","magazine"},
			{"BP_100Rnd_580x42_Mag_F","magazine"},
			{"BP_100Rnd_580x42_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_65x39","magazine"},
			{"BP_10Rnd_50BW_Mag_F","magazine"},
			{"BP_20Rnd_650x39_Cased_Mag_F","magazine"}
		};
		itemChance[] =	{
			0.08,	//AKS-74U
			0.08,	//AKM
			0.05,	//AKM Flashlight
			0.04,	//AK-12
			0.04,	//AK-12 UGL
			0.04,	//LIM-85
			0.07,	//PM 9mm Pistol
			0.04,   //SPAR-16 Black
			0.03,   //SPAR-16 Khaki
			0.03,   //SPAR-16 Sand
			0.02,	//SPAR-16 UGL Black
			0.02,	//SPAR-16 UGL Khaki
			0.02,	//SPAR-16 UGL Sand
			0.02,	//SPAR-16S Black
			0.02,	//SPAR-16S Khaki
			0.02,	//SPAR-16S Sand
			0.01,	//SPAR-17 Black
			0.01,   //SPAR-17 Black
			0.01,   //SPAR-17 Sand
			0.01,   //CAR-95
			0.01,	//CAR-95 GL
			0.01,	//CAR-95-1
			0.01,	//Type 115 Black
			0.01,	//CMR-76 Black
			0.01,	//CMR-76 Green Hex
			0.01,   //CMR-76 Hex
			0.02,   //Protector
			0.07,	//BP_30Rnd_545x39_Mag_F
			0.07,	//BP_30Rnd_545x39_Mag_Green_F
			0.05,	//BP_30Rnd_545x39_Mag_Tracer_F
			0.05,	//BP_30Rnd_545x39_Mag_Tracer_Green_F
			0.04,	//BP_30Rnd_762x39_Mag_F
			0.04,	//BP_30Rnd_762x39_Mag_Green_F
			0.04,	//BP_30Rnd_762x39_Mag_Tracer_F
			0.04,   //BP_30Rnd_762x39_Mag_Tracer_Green_F
			0.03,   //BP_200Rnd_556x45_LIM_Box_F
			0.03,   //BP_200Rnd_556x45_LIM_Box_Red_F
			0.03,	//BP_200Rnd_556x45_LIM_Box_Tracer_F			
			0.03,	//BP_200Rnd_556x45_LIM_Box_Tracer_Red_F			
			0.07,	//BP_556x45_Stanag
			0.07,	//BP_556x45_Stanag_Tracer
			0.05,	//BP_150Rnd_556x45_Drum_Mag_F
			0.02,	//BP_150Rnd_556x45_Drum_Mag_Tracer_F
			0.04,	//BP_20Rnd_762x51_BPMag
			0.08,	//BP_30Rnd_580x42_Mag_F
			0.08,   //BP_30Rnd_580x42_Mag_Tracer_F
			0.06,   //BP_100Rnd_580x42_Mag_F
			0.06,   //BP_100Rnd_580x42_Mag_Tracer_F
			0.10,	//BP_30Rnd_65x39			
			0.01,	//10Rnd_50BW_Mag_F
			0.02	//BP_20Rnd_650x39_Cased_Mag_F
		};
	};
	
	class ApexMilBox2: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"V_PlateCarrierGL_tna_BP","vest"},  //Carrier GL Rig (Tropic)
			{"V_TacVest_gen_BP","vest"},   //Gendarmerie Vest
			{"V_BandollierB_ghex_BP","vest"},   //Slash Bandolier (Green Hex)
			{"V_TacChestrig_grn_BP","vest"},    //Tactical Chest Rig (Green)
			{"V_TacChestrig_cbr_BP","vest"},  //Tactical Chest Rig (Coyote)
			{"optic_Aco","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_Bergen_blk","backpack"},
			{"BP_Carryall_oucamo","backpack"},
			{"BP_Carryall_blk","backpack"},		
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},	
			{"BP_optic_ACOG","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"BP_M3A2","toolbelt"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_UGL_FlareGreen","magazine"},
			{"BP_100Rnd_127x99_box","magazine"}
		};
		itemChance[] =	{
			0.01,	//Carrier GL Rig (Tropic)
			0.01,	//Gendarmerie Vest
			0.05,   //Slash Bandolier (Green Hex)
			0.01,   //Tactical Chest Rig (Green)
			0.01,	//Tactical Chest Rig (Coyote)
			0.05,	//OPTIC ACO
			0.03,	//HAMR OPTIC
            0.02,   //BERGEN BLACK
			0.02, 	//CARRYALL URBAN
            0.02,   //CARRYALL BLACK	
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN
			0.02,	//ACOG
			0.02,	//CHEEKPIECE
			0.03,	//AFG
			0.02,	//M3A2
			0.02,	//5RND 762M80A1
			0.02,	//HAND GRENADE
			0.02,	//HE GRENADE M203
			0.05,	//Flare green
			0.01	//100Rnd_127x99_box
		};
	};
	
	class Stalker: Default 
	{
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =
		{	
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"ItemKnife","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"ItemToolbox","toolbelt"},
			{"BP_M3AMRAD","toolbelt"},
			{"ItemNails","magazine"},
			{"ItemHammer","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BlueprintRockStash","magazine"},
			{"MeleeCrowbar","weaponNA"},		
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"WaterbotEmpty","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemDuctTape","magazine"},
			{"BP_CampPack","backpack"},
			{"BP_HCampPack","backpack"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemCards","magazine"},
			{"ItemPlate1","magazine"},   //Plate
			{"ItemPlate2","magazine"},   //Plate2
			{"HandGrenade","magazine"},
			{"BP_AlarmClock_Black","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_Mak_Old","weapon"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Rambo","magazine"},
			{"BP_Arrow_Fire","magazine"},
			{"BP_Arrow_Tranq","magazine"},
			{"BP_Arrow_Poison","magazine"},
			{"BP_93x64_SVDK","magazine"},
			{"BP_10Rnd_338Lapua_Mag","magazine"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_10Rnd_300_Mag","magazine"},
			{"BP_100Rnd_127x99_box","magazine"},
			{"BP_10Rnd_50BW_Mag_F","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_762mk316_Mag","magazine"}
		};
		itemChance[] =	{	
			0.10,	//Brick 1
			0.10,	//Brick 2
			0.03,	//KNIFE
			0.01,	//Water
			0.01,	//Water
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//Toolbox
			0.03,   //BP_M3AMRAD
			0.01,	//Nails
			0.01,	//Hammer
			0.01,	//Crate
			0.01,	//Rock Stash
			0.01,	//CROWBAR
			0.01,	//BANDAGE
			0.01,	//PAINKILLER
			0.01,	//MORPHINE
			0.01,	//FIELDDRESSING
			0.01,	//ANTIBIOTIC
			0.01,	//SURGERYKIT
			0.01,	//WaterbotEmpty
			0.02,	//TENNISBALL			
			0.01,	//DUCTTAPE
			0.02,	//BACKPACK
			0.01,	//BACKPACK
			0.05,	//TRASH
			0.05,	//TRASH
			0.05,	//TRASH
			0.05,	//TRASH
			0.05,	//TRASH
			0.05,	//TRASH
			0.05,	//TRASH
			0.05,	//TRASH
			0.05,	//TRASH
			0.05,	//TRASH
			0.01,	//NADE
			0.02,	//AlarmClock
			0.01,	//BP_1Rnd_HE_shell
			0.01,	//Makarov
			0.02,	//BP_Crossbow
			0.02,	//Crossbow_DigitCamo
			0.05,	//Arrow
			0.01,	//Arrow_Rambo
			0.03,	//Arrow_Fire
			0.03,	//Arrow_Tranq
			0.04,	//Arrow_Poison
			0.05,	//93x64_SVDK
			0.04,	//338Lapua_Mag
			0.03,	//300_Mag 5 rnd 
			0.01,	//300_Mag 10 rnd 
			0.01,	//127x99
			0.02,	//BW mag
			0.04,	//5Rnd_762x51_Mag 
			0.02,	//5Rnd_762mk316_Mag
			0.01,	//5Rnd_762m80a1
			0.04,	//10Rnd_762x51_Mag 
			0.01	//10Rnd_762mk316_Mag
		};
	};
	
	class AmmoPallet4: Default 
	{
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =
		{	
			{"BP_AWSM","weapon"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_30Rnd_762x51_M80A1","magazine"},
			{"BP_20Rnd_762x51_Mk316Mod0","magazine"},
			{"BP_10Rnd_762mk316_Mag","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"BP_SOS","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_VX2","toolbelt"},
			{"BP_NXS","toolbelt"},
			{"BP_L14X","toolbelt"},
			{"BP_M3AMRAD","toolbelt"},
			{"BP_M3AN","toolbelt"},
			{"BP_PS22","toolbelt"},
			{"Rangefinder","weaponNA"},
			{"BP_10Rnd_338Lapua_Mag","magazine"},
			{"BP_10Rnd_300_Mag","magazine"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemCards","magazine"},
			{"HandGrenade","magazine"},
			{"BP_SW44","weaponA"},
			{"BP_M4_300MK","weaponA"},	
			{"BP_100Rnd_127x99_box","magazine"}
		};
		itemChance[] =	{	
			0.01,	//BP_AWSM
			0.02,   //20Rnd_Lapua
			0.01,   //30Rnd_M80A1
			0.01,   //20Rnd_Mk316Mod0
			0.02,   //10Rnd_762mk316_Mag
			0.04,   //5Rnd_762m80a1_Mag
			0.03,   //BP_SOS
			0.03,   //optic_Hamr
			0.03,   //BP_VX3
			0.03,   //BP_VX2
			0.03,   //BP_NXS
			0.03,   //BP_L14X
			0.03,   //BP_M3AMRAD
			0.03,   //BP_M3AN
			0.03,   //BP_PS22
			0.01,   //RANGEFINDER
			0.04,	//338Lapua AMMO
			0.02,	//300_Mag AMMO
			0.09,	//STANAG M855A1
			0.09,	//StanagMK262
			0.09,	//StanagSD
			0.09,	//Stanag_Tracer
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.05,	//NADE
			0.04,    //BP_SW44
			0.04,    //BP_M4_300MK
			0.02    //50Cal Box
		};
	};
	
	/*class ApexMilBox3: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_30Rnd_545x39_Mag_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Green_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Tracer_Green_F","magazine"}, 
			{"BP_30Rnd_762x39_Mag_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Green_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Tracer_Green_F","magazine"}, 
			{"BP_200Rnd_556x45_LIM_Box_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Red_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Tracer_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Tracer_Red_F","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_150Rnd_556x45_Drum_Mag_F","magazine"},
			{"BP_150Rnd_556x45_Drum_Mag_Tracer_F","magazine"},
			{"BP_20Rnd_762x51_BPMag","magazine"},
			{"BP_30Rnd_580x42_Mag_F","magazine"},
			{"BP_30Rnd_580x42_Mag_Tracer_F","magazine"},
			{"BP_100Rnd_580x42_Mag_F","magazine"},
			{"BP_100Rnd_580x42_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_65x39","magazine"},
			{"BP_10Rnd_50BW_Mag_F","magazine"},
			{"BP_20Rnd_650x39_Cased_Mag_F","magazine"}
		};
		itemChance[] =	{
			0.07,	//BP_30Rnd_545x39_Mag_F
			0.07,	//BP_30Rnd_545x39_Mag_Green_F
			0.05,	//BP_30Rnd_545x39_Mag_Tracer_F
			0.05,	//BP_30Rnd_545x39_Mag_Tracer_Green_F
			0.04,	//BP_30Rnd_762x39_Mag_F
			0.04,	//BP_30Rnd_762x39_Mag_Green_F
			0.04,	//BP_30Rnd_762x39_Mag_Tracer_F
			0.04,   //BP_30Rnd_762x39_Mag_Tracer_Green_F
			0.03,   //BP_200Rnd_556x45_LIM_Box_F
			0.03,   //BP_200Rnd_556x45_LIM_Box_Red_F
			0.03,	//BP_200Rnd_556x45_LIM_Box_Tracer_F			
			0.03,	//BP_200Rnd_556x45_LIM_Box_Tracer_Red_F			
			0.07,	//BP_556x45_Stanag
			0.07,	//BP_556x45_Stanag_Tracer
			0.05,	//BP_150Rnd_556x45_Drum_Mag_F
			0.02,	//BP_150Rnd_556x45_Drum_Mag_Tracer_F
			0.04,	//BP_20Rnd_762x51_BPMag
			0.08,	//BP_30Rnd_580x42_Mag_F
			0.08,   //BP_30Rnd_580x42_Mag_Tracer_F
			0.06,   //BP_100Rnd_580x42_Mag_F
			0.06,   //BP_100Rnd_580x42_Mag_Tracer_F
			0.10,	//BP_30Rnd_65x39			
			0.01,	//10Rnd_50BW_Mag_F
			0.02	//BP_20Rnd_650x39_Cased_Mag_F
		};
	};*/
	
	class AmmoPalletTroll: Default 
	{
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =
		{	
			{"ItemBook1","magazine"}
		};
		itemChance[] =	{	
			0.01	//Troll
		};
	};
	
	class CarePackage: Default 
	{
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =
		{	
			{"BP_AWSM","weapon"},
			{"BP_SVDK_DES","weaponA"},
			{"BP_M110","weapon"},
			{"BP_SR25","weaponA"},
			{"BP_M14RIS","weapon"},
			{"BP_M25WF","weaponA"},
			{"BP_MXM_black","weapon"},
			{"BP_Binocular_Hunter","weaponNA"},
			{"ItemKnife","magazine"},	
			{"ItemGPS","toolbelt"},
			{"ItemMorphine","magazine"},
			{"ItemAdrenaline","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"BP_SPack","backpack"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCereal1","magazine"},
			{"ItemCereal2","magazine"},
			{"ItemCereal3","magazine"},
			{"ItemCereal4","magazine"},
			{"ItemCereal5","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"BP_Carryall_Hero","backpack"},
			{"BP_Bergen_Hero","backpack"},
			{"BP_Survivalist_4_Stone","uniform"},
			{"BP_Survivalist_4_Tree","uniform"},
			{"BP_Survivalist_4_Dirt","uniform"},
			{"BP_Survivalist_4_Snow","uniform"},
			{"BP_Survivalist_4_Corn","uniform"},
			{"BP_Rebel_4_Taki","uniform"},
			{"BP_Survivalist_4_Night","uniform"},
			{"BP_200Rnd_556x45_MINIMI","magazine"},
			{"BP_100Rnd_762x51_MINIMI","magazine"},
			{"BP_100Rnd_65x39","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_20Rnd_762x51_M80A1","magazine"},
			{"BP_10Rnd_762m80a1_Mag","magazine"},
			{"BP_20Rnd_762x51_Mk316Mod0","magazine"},
			{"BP_10Rnd_762mk316_Mag","magazine"},
			{"BP_10Rnd_762Rubber_Mag","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_93x64_SVDK","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_15Rnd_45JHP","magazine"},
			{"BP_optic_ACOG","toolbelt"},
			{"BP_SOS","toolbelt"},
			{"optic_Arco","toolbelt"},
			{"BP_PSOP","toolbelt"},
			{"BP_PSO1","toolbelt"},
			{"BP_compm4s","toolbelt"},
			{"BP_gemtech45","toolbelt"},
			{"BP_Mk12Sup","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"optic_MRCO","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_300Sup","toolbelt"},
			{"BP_762Muzzle","toolbelt"},
			//{"BP_muzzle_snds_58_wdm_F","toolbelt"},
			{"BP_muzzle_snds_65_TI_blk_F","toolbelt"},
			{"BP_muzzle_snds_H_MG","toolbelt"},
			{"BP_muzzle_snds_H","toolbelt"},
			{"BP_muzzle_snds_M12","toolbelt"},
			{"BP_NXS","toolbelt"},
			{"BP_L14X","toolbelt"},
			{"Rangefinder","weaponNA"},
			{"V_PlateCarrierIA1_dgtl_BP","vest"},
			{"HandGrenade","magazine"},
			{"BP_UGL_FlareGreen","magazine"},
			{"BP_M84_Flash","magazine"},
			{"BP_10Rnd_338Lapua_Mag","magazine"}
		};
		itemChance[] =	
		{	
			0.01,	//SVDK Des
			0.01,	//AWSM
			0.01,	//M110
			0.01,	//SR-25
			0.01,	//M14RIS
			0.01,	//M25WF
			0.01,	//MXM Black
			0.14,	//Hunting Binoculars
			0.05,	//Hunting Knife
			0.10,	//GPS
			0.08,	//MORPHINE
			0.10,	//ADRENALINE
			0.08, 	//FIELD DRESSING
		    0.10, 	//ANTIBIOTIC
		    0.04, 	//SURGERY KIT
			0.01,	//CZECH SURVIVAL PACK
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.03,	//FOOD
			0.04,	//MILITARY SURVIVAL PACK
			0.04,	//MILITARY British PACK
			0.01,	//STONE GHILLIE
			0.01,	//TREE GHILLIE
			0.01,	//DIRT GHILLIE
			0.01,	//Snow GHILLIE
			0.01,	//Corn GHILLIE
			0.01,	//Night GHILLIE
			0.01,	//Outlaw Taki
			0.05,   //200Rnd_556
			0.05,   //100Rnd_762
			0.05,   //100Rnd_65
			0.05,   //20Rnd_Lapua
			0.01,   //30Rnd_M80A1
			0.04,   //10Rnd_M80A1
			0.05,   //20Rnd_Mk316Mod0
			0.05,   //10Rnd_762mk316_Mag
			0.05,   //10Rnd_762Rubber_Mag
			0.05,   //5Rnd_762m80a1_Mag
			0.05,	//STANAG M855A1
			0.05,	//StanagMK262
			0.05,	//StanagSD
			0.05,	//Stanag_Tracer
			0.05,	//93x64_SVDK
			0.05,   //15Rnd_9x19OVP
			0.10,   //15Rnd_45JHP
			0.03,   //ACOG
			0.03,   //BP_SOS
			0.03,   //optic_Arco
			0.03,   //BP_PSOP
			0.03,   //BP_PSO1
			0.03,   //BP_compm4s
			0.02,   //BP_gemtech45
			0.02,   //Mk12 DELTA 9mm Suppressor
			0.03,   //optic_Hamr
			0.03,   //optic_MRCO
			0.03,   //BP_VX3
			0.01,   //300 Silencer
			0.02,   //762 Muzzle
			//0.01,   //5.8 mm Sound Suppressor (Green Hex)
			0.01,   //6.5 mm Stealth Sound Suppressor (Black)
			0.02,   //BP_muzzle_snds_H_MG
			0.01,   //BP_muzzle_snds_H
			0.01,   //BP_muzzle_snds_M12
			0.03,   //BP_NXS
			0.03,   //BP_L14X
			0.01,   //RANGEFINDER
			0.01,	//PLATE CARRIER
			0.04,	//HAND GRENADE
			0.05,	//Flare green
			0.03,	//Flashbang
			0.01	//338Lapua_Mag
		};
	};

	class Residential: Default {
		lootChance = 0.27;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSoda3","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan1","magazine"},
			{"ItemWatch","toolbelt"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_Ruger","weapon"},
			{"BP_Mak_Old","weapon"},
			{"BP_G17","weapon"},
			{"BP_1911","weapon"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_LeeEnfieldK","weapon"},
			{"BP_LeeEnfield_old","weapon"},
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"Binocular","weaponNA"},
			{"BP_CZ550_old","weaponA"},
			{"BP_CZ455","weaponA"},
			{"BP_WinCoy","weaponA"},
			{"BP_1866","weapon"},
			{"BP_R300","weaponA"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_M16Old","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_Lupara","weapon"},
			{"BP_Rem870","weapon"},
			{"sgun_HunterShotgun_01_F","shotgun"},
			{"sgun_HunterShotgun_01_sawedoff_F","shotgun"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"WaterbotEmpty","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemBandage","magazine"},
			{"MeleeKatana","weaponNA"},
			{"Meleehatchet","weaponNA"},
			{"MeleeShovel","weaponNA"},
			{"MeleeCrowbar","weaponNA"},
            {"MeleeClub","weaponNA"},
			{"BP_15Rnd_9x21_Rubber","magazine"},
			{"BlueprintHavenReinforce","magazine"},
			{"BlueprintStove","magazine"},
			{"BlueprintWaterBarrel","magazine"},
			{"BlueprintFuelBarrel","magazine"},
			{"BlueprintTele","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Poison","magazine"}
		};
		itemChance[] =	{
			0.01,	//SODA
			0.01,	//CAN 3
			0.01,	//CAN 1
			0.15,	//WATCH
			0.15,	//COMPASS
			0.09,	//MAP
			0.02,	//RUGER 10/22
			0.08,	//MAKAROV
			0.06,	//G17
			0.02,	//M1911
			0.01,	//ENFIELD
			0.01,	//ENFIELD SCOPED
			0.01,   //ENFIELD BAYONET
			0.02,	//ENFIELD OLD
			0.03, 	//KIT SAGE
			0.03, 	//KIT CBR
			0.03,   //KIT CAMO
			0.05,	//BINOCULARS
			0.01,	//CZ550 Old
			0.04,	//CZ455
			0.03,	//REM7
			0.05,	//1866
			0.01,	//R300
			0.08,	//BANDOLIER OLIVE
			0.01,	//AR15 OLD
			0.02,   //BENELLI
			0.04,   //LUPARA
			0.03,   //REM870
			0.06,   //Hunting shotgun
			0.06,   //Hunting shotgun sawed off
			0.01,	//45ACP
			0.01,	//303B
			0.15,	//22LR
			0.09,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.01,	//WATER BOTTLE
			0.12,	//DUCT TAPE
			0.12,	//BANDAGE
			0.01,	//KATANA
			0.05,	//HATCHET
			0.02,   //Shovel
			0.01,	//Crowbar
			0.01,   //Club
			0.01,	//9MM RUBBER
			0.07,    //HavenReinforcement BLUEPRINT
			0.07,    //Stove BLUEPRINT
			0.07,    //Barrel Water BLUEPRINT
			0.07,    //barrel Fuel BLUEPRINT
			0.07,    //television BLUEPRINT
			0.07,    //CRATE BLUEPRINT
			0.04,	//Crossbow
			0.02,	//Crossbow
			0.10,	//Crossbow Arrow
			0.05	//Crossbow Arrow poisen
		};		
	};
	
	class Residential2: Default {
		lootChance = 0.27;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Mak_Old","weapon"},
			{"sgun_HunterShotgun_01_F","shotgun"},
			{"sgun_HunterShotgun_01_sawedoff_F","shotgun"},
			{"BP_SW45","weapon"},
			{"BP_SW44","weapon"},
			{"BP_1911","weapon"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"BP_6Rnd_45_Mag","magazine"},
			{"BP_6Rnd_45JHP_Mag","magazine"},
			{"BP_g17","weapon"},
			{"BP_LeeEnfieldK","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_M1903","weaponA"},
			{"BP_M1903K","weaponA"},
			{"BP_CZ550_old","weaponA"},
			{"BP_CZ455","weaponA"},
			{"BP_WinCoy2","weaponA"},
			{"BP_R7P","toolbelt"},
			{"BP_R300","weaponA"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_M16Old","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_Lupara","weapon"},
			{"BP_Kar98","weaponA"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_5Rnd_223_Mag","magazine"},
			{"BP_8Rnd_45gov","magazine"},
			{"MeleeKatana","weaponNA"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Poison","magazine"}

		};
		itemChance[] =	{
			0.15,	//MAKAROV
			0.01,	//WINCHESTER 1886S
			0.08,   //Hunting shotgun
			0.08,   //Hunting shotgun sawed off
			0.12,	//S&W 45
			0.01,	//S&W 44
			0.07,	//M1911
			0.05,	//KNIFE
			0.18,	//MATCHES
			0.07,	//6RND 45
			0.02,	//6RND 45JHP
			0.10,   //G17
			0.07,	//ENFIELD
			0.02,	//ENFIELD SCOPED
			0.01,	//SPRINGFIELD M1903
			0.05,	//CZ550 Old
			0.09,	//CZ455
			0.03,   //REM7 CDL
			0.01,   //REM7 PBARREL
			0.01,	//R300
			0.09,	//BANDOLIER OLIVE
			0.02,	//AR15 OLD
			0.04,   //BENELLI
			0.04,   //LUPARA
			0.01,   //KAR98
			0.01,	//45ACP
			0.05,	//223REM
			0.02,   //45GOV
			0.03,   //KATANA
			0.01,	//303BT
			0.02,	//Crossbow
			0.01,	//Crossbow
			0.10,	//Crossbow Arrow
			0.05	//Crossbow Arrow poisen
		};		
	};
	
	class Generic: Default {
		lootChance = 0.27;
		lootPos[] = {};
		itemType[] =	{
			{"ItemWatch","toolbelt"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_flashlight","toolbelt"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"Binocular","weaponNA"},
			{"ChemG","magazine"},
			{"ChemY","magazine"},
			{"ChemR","magazine"},
			{"ChemB","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan5","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_223_Mag","magazine"},
			{"BP_5Rnd_223BTHP_Mag","magazine"},
			{"BP_2Rnd_Buckshot","magazine"},
			{"BP_2Rnd_MagBuckshot","magazine"},
			{"BP_2Rnd_Slug","magazine"},
			{"BP_8Rnd_MagBuckshot","magazine"},
			{"BlueprintHaven","magazine"},
			{"BlueprintChest","magazine"},
			{"BlueprintIceBox","magazine"},
			{"BlueprintGunCab","magazine"},
			{"BlueprintHavenReinforce","magazine"},
			{"BlueprintStove","magazine"},
			{"ItemStove","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"WaterbotEmpty","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBandage","magazine"},
			{"ItemToolbox","toolbelt"},
			{"ItemNails","magazine"},
			{"ItemHammer","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_AlarmClock_Black","magazine"},
			{"BP_AlarmClock_Red","magazine"}
		};
		itemChance[] =	{
			0.10,	//WATCH
			0.10,	//COMPASS
			0.07,	//MAP
			0.07,   //FLASHLIGHT
			0.18,	//KNIFE
			0.16,	//MATCHES
			0.06,	//BRICK
			0.06,	//BRICK2
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.01,   //KIT CAMO
			0.05,	//BINOCULARS
			0.05,	//CHEM
			0.05,	//CHEM
			0.05,	//CHEM
			0.05,	//CHEM
			0.01,	//SODA
			0.01,	//SODA
			0.01,	//FOOD
			0.01,	//FOOD
			0.15,	//22LR
			0.02,   //303B
			0.06,   //223REM
			0.02,   //223REMBTHP
			0.12,   //2RND BUCKSHOT
			0.06,   //2RND BUCKSHOT
			0.07,   //2RND BUCKSHOT
			0.07,   //MagBuckshot
			0.01,   //HAVEN LOCK
			0.02,   //CHEST
			0.02,   //REFRIGERATOR
			0.01,   //GUN CABINET
			0.02,   //HavenReinforcement BLUEPRINT
			0.02,   //Stove BLUEPRINT
			0.02,   //Stove
			0.07,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.01,	//WATER BOTTLE
			0.10,	//TENNIS BALL
			0.10,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.05,	//BOOK1
			0.05,	//BOOK2
			0.08,	//BANDAGE
			0.03,	//TOOLBOX
			0.09,   //NAILS
			0.08,   //HAMMER
			0.07,   //CRATE BLUEPRINT
			0.02,	//AlarmClock
			0.03	//AlarmClock Red
		};		
	};
	
	class Trash: Default {
		lootChance = 0.27;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Rebel_4_Taki","uniform"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemCards","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemToiletPaper","magazine"},
			{"ItemGlue","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_2Rnd_Buckshot","magazine"},
			{"BlueprintHaven","magazine"},
			{"BlueprintChest","magazine"},
			{"BlueprintIceBox","magazine"},
			{"BlueprintGunCab","magazine"},
			{"BlueprintStove","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ChemG","magazine"},
			{"ChemR","magazine"},
			{"ChemY","magazine"},
			{"ChemB","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_AlarmClock_Black","magazine"},
			{"BP_AlarmClock_Red","magazine"}
		};
		
		itemChance[] =	{
			0.01,	//Outlaw taki
			0.10,	//BOOK
			0.10,	//BOOK
			0.07,	//BOOK
			0.18,	//MUG
			0.16,	//BRICK
			0.10,	//BRICK
			0.10,	//POTTERY
			0.10, 	//VIDEO TAPE
			0.10, 	//ZIPDISK
			0.10,   //CARDS
			0.10,	//TENNIS BALL
			0.10,	//TOILET PAPER
			0.10,	//GLUE
			0.10,	//DUCT TAPE
			0.10,	//WATER TAPE
			0.12,	//22
			0.07,	//303
			0.10,   //9MM
			0.12,   //2RND BUCKSHOT
			0.02,   //HAVEN LOCK
			0.02,   //CHEST
			0.02,   //REFRIGERATOR
			0.01,   //GUN CABINET
			0.02,   //Stove BLUEPRINT
            0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.05,	//CHEM
			0.05,	//CHEM
			0.05,	//CHEM
			0.05,	//CHEM			
			0.02,   //Crate BLUEPRINT
			0.03,	//AlarmClock
			0.02	//AlarmClock Red
		};		
	};
	
	class Office: Default {
		lootChance = 0.70;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemWatch","toolbelt"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_1911","weapon"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemRadio","toolbelt"},
			{"BP_sw44","weapon"},
			{"BP_sw45","weapon"},
			{"BP_G17","weapon"},
			{"BP_6Rnd_45JHP_Mag","magazine"},
			{"BP_CZ455","weaponA"},
			{"BP_Ruger","weapon"},
		    {"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"BP_LeeEnfield","weapon"},
			{"Binocular","toolbelt"},
			{"BP_M8","toolbelt"},
			{"Itemcan3","magazine"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_m9","weapon"},
			{"BP_Lupara","weapon"},
			{"ItemGPS","toolbelt"},
			{"BlueprintHaven", "magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"BP_5Rnd_500Mag","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemBandage","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemCanvasMaterial","magazine"},
			{"ItemNettingMaterial","magazine"}
			
		};
		itemChance[] =	{
			0.01,	//Mountain DEW
			0.01,	//Mountain DEW
			0.10,	//WATCH
			0.10,	//COMPASS
			0.10,	//MAP
			0.02,	//M1911
			0.15,	//KNIFE
			0.15,	//MATCHES
			0.04,	//RADIO
			0.01,	//SW.500
			0.01,   //COLT 45
			0.02,   //G17
			0.02,   //6RND .45JHP
			0.08,   //CZ455
			0.04,   //CZ455 SUP
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.01,   //KIT CAMO
			0.03,   //LEE ENFIELD
			0.16,	//BINOCULARS
			0.01,	//S&W500 Scope
			0.01,   //CAN 3
			0.02,	//BANDOLIER OLIVE
			0.07,	//M9
			0.07,	//LUPARA
			0.01,	//GPS
			0.02,	//HAVEN LOCK
			0.01,   //7.62 CLIP
			0.01,	//45ACP
			0.02,	//303B
			0.15,	//22LR
			0.01,	//.500SW
			0.01,	//303_JSP_Mag
			0.07,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.01,	//Soda
			0.05,	//TENNIS BALL
			0.08,	//BANDAGE
			0.03,	//ELECTRONICS
			0.03,	//WIRE
			0.04,	//CANVAS MATERIAL
			0.04	//NETTING MATERIAL	
		};		
	};
	
	
	class Industrial : Default {
		lootChance = 0.32;
		lootPos[] = {};
		itemType[] =	{
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemFuelcanEmpty","magazine"},
			{"MeleeHatchet","weaponNA"},
			{"ItemNails","magazine"},
			{"ItemHammer","magazine"},
			{"ItemBlowtorch","magazine"},
			{"PartPalette","magazine"},
			{"ItemCanvasMaterial","magazine"},
			{"ItemNettingMaterial","magazine"},
			{"ItemWoodenPoles","magazine"},
			{"ItemCementbag","magazine"},
			{"PartWheel","magazine"},
			{"PartEngine","magazine"},
			{"PartGlass","magazine"},
			{"ItemFuelcanEmpty","magazine"},
			{"ItemFuelcanLargeEmpty","magazine"},
			{"ItemKnife","magazine"},
			{"ItemLiquidResin","magazine"},
			{"ItemPunctureKit","magazine"},
			{"ItemBattery","magazine"},
			{"PartFiberGlass","magazine"},
			{"PartSteel","magazine"},
			{"ItemLubricant","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemHydraulicCylinder","magazine"},
			{"ItemEngineCoolant","magazine"},
			{"ItemFuelhoseKit","magazine"},
			{"ItemToolbox","toolbelt"},
			{"MeleeHammer","weaponNA"},
			{"BlueprintHavenReinforce","magazine"},
			{"ItemStove","magazine"},
			{"MeleeShovel","weaponNA"}, 
			{"MeleeCrowbar","weaponNA"},
            {"MeleeClub","weaponNA"},
			{"ItemSandbag","magazine"}
		};
		itemChance[] =	{
			0.10,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.14,	//JERRY CAN
			0.04,	//HACHET
			0.09,   //NAILS
			0.08,   //HAMMER
			0.03,   //BLOWTORCH
			0.10,   //PALETTE
			0.07,   //CANVAS MATERIAL
			0.09,   //NETTING MATERIAL
			0.08,   //WOODEN POLES
			0.09,   //CEMENT BAG
			0.07,	//WHEEL
			0.05,	//ENGINE
			0.13,	//CRISTAL
			0.14,	//JERRY CAN
			0.03,	//FuelcanLarge
			0.07,	//KNIFE
			0.15,   //LIQUID RESIN
			0.11,   //PUNCTURE KIT
			0.09,   //ITEM BATTERY
			0.12,   //FIBERGLASS
			0.01,   //STEEL
			0.07,   //HYDRAULIC FLUID
			0.05,   //ELECTRONICS
			0.07,   //WIRE
			0.05,   //HYDRAULIC CYLINDER
			0.14,   //ENGINE COOLANT
			0.09,   //FUEL HOSE KIT
			0.09,	//TOOLBOX
			0.03,	//HAMMER
			0.02,   //HavenReinforcement BLUEPRINT
			0.02,   //Stove
			0.03, //SHOVEL
			0.03, //BAT
			0.03, //CROWBAR
			0.08   //SAND BAG
		};
	};
	
	class IndustrialVehicle: Default {
		lootChance = 0.30;
		lootPos[] = {};
		itemType[] =	{
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"PartWheel","magazine"},
			{"PartEngine","magazine"},
			{"PartGlass","magazine"},
			{"ItemFuelcanEmpty","magazine"},
			{"ItemKnife","magazine"},
			{"ItemLiquidResin","magazine"},
			{"ItemPunctureKit","magazine"},
			{"ItemBattery","magazine"},
			{"PartFiberGlass","magazine"},
			{"PartSteel","magazine"},
			{"ItemLubricant","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemHydraulicCylinder","magazine"},
			{"ItemEngineCoolant","magazine"},
			{"ItemFuelhoseKit","magazine"},
			{"ItemFuelcanLargeEmpty","magazine"},
			{"MeleeHammer","weaponNA"},
			{"MeleeHammer2","weaponNA"},
			{"ItemToolbox","toolbelt"}	
		};
		itemChance[] =	{
			0.10,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.07,	//WHEEL
			0.05,	//ENGINE
			0.13,	//CRISTAL
			0.14,	//JERRY CAN
			0.07,	//KNIFE
			0.15,   //LIQUID RESIN
			0.11,   //PUNCTURE KIT
			0.09,   //ITEM BATTERY
			0.12,   //FIBERGLASS
			0.02,   //STEEL
			0.07,   //HYDRAULIC FLUID
			0.05,   //ELECTRONICS
			0.07,   //WIRE
			0.05,   //HYDRAULIC CYLINDER
			0.14,   //ENGINE COOLANT
			0.09,   //FUEL HOSE KIT
			0.01,   //LARGE FUEL CAN
			0.02,   //HAMMER
			0.01,   //HAMMER2
			0.09	//TOOLBOX
		};
	};
	
	class Farm: Default {
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
			{"ItemFuelcanEmpty","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBandage","magazine"},
			{"ItemNails","magazine"},
			{"V_Rangemaster_belt_BP","vest"},
			{"PartPalette","magazine"},
			{"PartWheel","magazine"},
			{"ItemCanvasMaterial","magazine"},
			{"ItemNettingMaterial","magazine"},
			{"ItemLubricant","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemHydraulicCylinder","magazine"},
			{"ItemEngineCoolant","magazine"},
			{"ItemFuelhoseKit","magazine"},
			{"MeleeHatchet","weaponNA"},
			{"MeleePickaxe","weaponNA"},
			{"MeleeHammer","weaponNA"},
			{"MeleeHammer2","weaponNA"},
			{"MeleeShovel","weaponNA"},
			{"MeleeCrowbar","weaponNA"},
			{"MeleeClub","weaponNA"},
			{"BlueprintStove","magazine"},
			{"BlueprintGenerator","magazine"},
			{"ItemStove","magazine"},
			{"ItemHammer","magazine"},
			{"PartWoodPile","magazine"},
			{"ItemToolbox","toolbelt"}
		};
		itemChance[] =	{
			0.06,	//JERRY CAN
			0.05,	//WATER TAPE
			0.02,	//BANDAGE
			0.06,   //NAILS
			0.01,	//BANDOLIER	
			0.05,   //PALETTE
			0.06,	//WHEEL
			0.06,   //CANVAS MATERIAL
			0.04,   //NETTING MATERIAL
			0.07,   //HYDRAULIC FLUID
			0.05,   //ELECTRONICS
			0.07,   //WIRE
			0.02,   //HYDRAULIC CYLINDER
			0.14,   //ENGINE COOLANT
			0.09,   //FUEL HOSE KIT
			0.04,   //Hatchet
			0.04,   //PICKAXE
			0.02,   //HAMMER
			0.01,   //HAMMER2
			0.01,    //SHOVEL
			0.01,    //BAT
			0.02,    //CROWBAR
			0.01,   //Stove BLUEPRINT
			0.02,   //Power Generator BLUEPRINT
			0.02,   //Stove
			0.02,   //Hammer
			0.01,   //Woodpile
			0.09	//TOOLBOX
		};
	};
	class Supermarket: Default {
		lootChance = 0.25;
		itemType[] = {
			{"ItemWatch","toolbelt"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_1911","weapon"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBandage","magazine"},
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"BP_Rhino","weapon"},
			{"V_Rangemaster_belt_BP","vest"}, 
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"}, 
			{"WaterbotEmpty","magazine"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCereal1","magazine"},
			{"ItemCereal2","magazine"},
			{"ItemCereal3","magazine"},
			{"ItemCereal4","magazine"},
			{"ItemCereal5","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"Binocular","weaponNA"},
			{"BP_2Rnd_Buckshot","magazine"},
			{"BP_2Rnd_MagBuckshot","magazine"},
			{"BP_2Rnd_Slug","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_Mak_Old","weapon"},
			{"BP_AlarmClock_Black","magazine"}			
		};
		itemChance[] =	{
			0.17,	//WATCH
			0.07,	//COMPASS
			0.15,	//MAP
			0.01,	//M1911
			0.02,	//KNIFE
			0.05,	//MATCHES
			0.10,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.05,	//BOOK1
			0.05,	//BOOK2
			0.02,	//BANDAGE
			0.05,	//BRICK
			0.05,	//BRICK
			0.01,	//RHINO
			0.04, 	//RANGEMASTER BELT
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.01,   //KIT CAMO
			0.01,	//WaterbotEmpty
			0.02,	//SODA
			0.02,	//SODA
			0.02,	//SODA
			0.02,	//SODA
			0.02,	//SODA
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.07,	//BINOCULARS
			0.05,	//2RND BUCKSHOT
			0.03,	//2RND MAGBUCKSHOT
			0.02,	//2RND SLUG
			0.05,	//TENT BLUEPRINT
			0.15,	//MAKAROV
			0.02	//AlarmClock
		};
	};
	class Hospital: Default {
		lootChance = 0.95;
		lootPos[] = {};
		itemType[] =	{
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"ItemAdrenaline","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"WaterbotEmpty","magazine"}
		};
		itemChance[] =	{
			0.06,	//DUCT TAPE
			0.06,	//WATER TAPE
			0.20,	//BANDAGE
			0.20,	//PAINKILLER
			0.14,	//MORPHINE
			0.14,	//FIELD DRESSING
			0.10,	//ANTIBIOTIC
			0.02,     //SURGERY KIT
			0.04,     //Adrenaline
			0.02,	//KNIFE
			0.05,	//MATCHES
			0.04	//WaterbotEmpty
		};
	};
	
	class Research: Default {
		lootChance = 0.95;
		lootPos[] = {};
		itemType[] =	{
			{"ItemBook1","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemGlue","magazine"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"ItemAdrenaline","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"WaterbotBoiled","magazine"},
			{"FoodMushroom","magazine"}
		};
		itemChance[] =	{
			0.06,	//Instructional Book
			0.06,	//DUCT TAPE
			0.06,	//WATER TAPE
			0.06,	//Glue
			0.11,	//BANDAGE
			0.11,	//PAINKILLER
			0.14,	//MORPHINE
			0.14,	//FIELD DRESSING
			0.14,	//ANTIBIOTIC
			0.07,    //SURGERY KIT
			0.05,    //Adrenaline
			0.03,	//KNIFE
			0.07,	//MATCHES
			0.02,	//WaterbotBoiled 
			0.06	//Mushroom
		};
	};
	
	class MilitaryGeneralAcc: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"ItemMorphine","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"},
			{"ItemRadio","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"SmokeShell","magazine"},
		    {"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
		    {"BP_FieldPack_blk","backpack"},
			{"BP_FieldPack_ocamo","backpack"},
			{"BP_FieldPack_oucamo","backpack"},
			{"BP_FieldPack_cbr","backpack"},			
			{"V_Rangemaster_belt_BP","vest"},
			{"BlueprintCrate1","magazine"},
			{"BlueprintCamoNet","magazine"},
			{"BlueprintCache1","magazine"},
			{"V_Chestrig_rgr_BP","vest"},
			{"ItemSurgeryKit","toolbelt"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Poison","magazine"},	
			{"BP_5Rnd_300AAC_Mag","magazine"},
			{"BP_8Rnd_Slug","magazine"},
			{"BP_2Rnd_MagBuckshot","magazine"},
			{"BP_2Rnd_Slug","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_UGL_FlareWhite","magazine"},			
			{"BP_30Rnd_9x21_Mag","magazine"},
			{"BP_556old_Stanag","magazine"},
			{"V_BandollierB_khk_BP","vest"},
			{"BP_8Rnd_MagBuckshot","vest"}
		};
		itemChance[] =	{
			0.03,	//ACO OPTIC
			0.01,	//HAMR OPTIC
			0.01,	//CHEEKPIECE
			0.03,	//BINOCULARS
			0.07,	//KNIFE
			0.12,	//MAPA
			0.05,	//RADIO
			0.03,	//AFG
			0.03,	//DUCT TAPE
			0.03,	//WATER TAPE
			0.07,	//BANDAGE
			0.15,	//PAINKILLERS
			0.02,	//SMOKE
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.02,   //KIT CAMO
			0.05, 	//FIELD BLACK
			0.05, 	//FIELD HEX
			0.05,   //FIELD URBAN
            0.05,   //FIELD TAN			
			0.12,	//BANDOLIER OLIVE
			0.07,   //TENT BLUEPRINT
			0.06,   //CAMO NET BLUEPRINT
			0.06,   //CRATE BLUEPRINT
			0.02,   //Survival Rig
			0.01,   //SURGERY KIT
			0.12,	//Arrow
			0.05,	//Arrow Poison
			0.01,	//300 BLACKOUT
			0.05,	//BENELLI SLUG
			0.08,	//2RND MAGBUCKSHOT
			0.08,	//2RND SLUG
			0.09,	//9MM MAG
			0.01,	//3006 MAG
			0.03,	//303B
			0.04,	//7RND 45ACP
			0.07,	//STANAG
			0.15,	//30Rnd_9x21_Mag
			0.10,	//30Rnd_9x21_Mag
			0.06,	//Bandolier Mid
			0.06	//MagBuckshot
		};
	};
	
	class MilitaryGeneralWpn: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
			{"BP_m9","weapon"},
			{"BP_G17","weapon"},
            {"BP_M16OLD","weapon"},
			{"BP_AR10","weapon"},
			{"BP_SW45","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_AK74U","weapon"},
			{"BP_M4Old","weapon"},
			{"BP_M4","weaponA"},
			{"BP_M4K","weapon"},
			{"BP_Lupara","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_R300","weaponA"},
			{"BP_SVT40","weapon"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_LeeEnfieldK","weapon"},
			{"BP_LeeEnfield_old","weapon"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_MP5","weapon"},
			{"BP_Tavor","weaponA"},	
			{"BP_M16A4","weaponA"},
			{"BP_M4_300","weaponA"}

		};
		itemChance[] =	{
			0.07,	//M9
			0.07,	//G17
			0.10,	//M16
			0.02,	//AR10
			0.02,	//SW45
			0.09,	//AK74m	
			0.07,	//AKS74U	
			0.07,	//OLD M4
			0.03,	//M4
			0.04,	//LUPARA
			0.02,	//M4K
			0.11,	//BENELLI
			0.04,	//R300
			0.02,	//SVT40
			0.02,	//ENFIELD
			0.02,	//ENFIELD SCOPED
			0.02,	//ENFIELD bayonet
			0.02,	//ENFIELD old
			0.03,	//Crossbow
			0.03,	//Crossbow
			0.10,	//Mp5
			0.02,	//Tavor
			0.02,	//BP_M16A4
			0.02	//BP_M4_300
		};
	};
	
	class MilitarySurplusWpn: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Garand","weapon"},
			{"BP_GarandK","weapon"},
            {"BP_Kar98","weapon"},
			{"BP_Kar98k","weapon"},
			{"BP_BAR","weapon"},
			{"BP_1911","weapon"},
			{"BP_SVT40","weapon"},
			{"BP_SVT40","weaponA"},
			{"BP_M1903","weaponA"},
			{"BP_M1903K","weapon"},
			{"BP_M16OLD","weapon"},
			{"BP_SA58","weapon"},
			{"BP_FNFAL","weapon"}
			
		};
		itemChance[] =	{
			0.03,	//GARAND
			0.02,	//GARAND K
			0.03,	//K98
			0.02,	//K98 SCOPE
			0.02,	//BAR	
			0.08,	//1911
			0.02,	//SVT40
			0.01,	//SVT40 SCOPE
			0.02,	//M1903 Scope
			0.03,	//M1903K
			0.09,	//M16A2
			0.04,	//AK47
			0.04	//FNFAL
		};
	};
	
	class MilitaryAirfieldAcc: Default {
		lootChance = 0.35;
		lootPos[] = {};
		itemType[] =	{
			{"BP_gemtech45","toolbelt"},
			{"BP_gemtech9","toolbelt"},
			{"BlueprintCamoNet","magazine"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_blk","backpack"},			
			{"BP_M3A","toolbelt"},
			{"optic_Arco","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BlueprintCache1","magazine"},
			{"optic_Aco","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"ItemRadio","toolbelt"},
			{"ItemGPS","toolbelt"},		
			{"optic_Arco","toolbelt"},
			{"BP_optic_ACOG","toolbelt"},
			{"V_Chestrig_rgr_BP","vest"},
			{"optic_Holosight","toolbelt"},
			{"BlueprintSafe","magazine"},
			{"BlueprintRockStash","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_200Rnd_556x45_Minimi","magazine"},
			{"BP_545x39_AK107","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_8Rnd_Slug","magazine"},
			{"BP_8Rnd_MagBuckshot","magazine"},
			{"BP_100Rnd_127x99_box","magazine"}
		};
		itemChance[] =	{
			0.02,	//GEMTECH 45
			0.02,	//GEMTECH 9MM
			0.05,   //CAMO NET BLUEPRINT
			0.01, 	//BERGEN CAMO
            0.01,   //BERGEN BLACK
			0.02,   //DESERT SNIPER OPTIC
			0.02,   //OPTIC ARCO
			0.02,   //CHEEKPIECE
			0.03,   //AFG
			0.06,   //Belt
			0.03,   //MILITARY Cache
			0.03,	//OPTIC ACO
			0.04,	//HAMR OPTIC
			0.04,	//RADIO
			0.01, 	//GPS
			0.05,	//ARCO SIGHT
			0.02,   //OPTIC ACOG
			0.04,	//survival rig
			0.16,	//HOLO OPTIC
			0.03,   //SAFE BLUEPRINT
			0.01,   //ROCK STASH
			0.07, 	//5RND 762
			0.07, 	//10RND 762
			0.06, 	//STANAG
			0.02, 	//200RND STANAG
			0.06, 	//AK MAG
			0.04,	//1Rnd_HE_shell
			0.05,	//BENELLI SLUG
			0.05,	//MagBuckshot
			0.05	//50cal box
		};
	};
	
	class MilitaryAirfieldSpc: Default {
		lootChance = 0.35;
		lootPos[] = {};
		itemType[] =	{
			{"BP_20Rnd_762x51_BPMag","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_762x54_SVD","magazine"},
			{"BP_30Rnd_65x39","magazine"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_10Rnd_338Lapua_Mag","magazine"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_5Rnd_3006m_Mag","magazine"},
			{"ItemBandage","magazine"},
			{"BP_8Rnd_Slug","magazine"}

			
		};
		itemChance[] =	{
			0.05,   //10RND 762
			0.35,   //STANAG
            0.06,   //SVD
			0.16,   //GRENDEL
            0.01,   //300 WINMAG
			0.01,   //338
            0.02,   //5RND 762MK316
			0.22,   //3006
			0.07,   //3006M
			0.05,	//BANDAGE
			0.15	//BENELLI SLUG
	    };
	};
	
	class MilitaryAirfieldWpn: Default {
		lootChance = 0.35;
		lootPos[] = {};
		itemType[] =	{
			{"BP_M4_300MK","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_SUD_AK107","weapon"},
			{"BP_R700","weaponA"},
			{"BP_Mk12mod1","weaponA"},
			{"BP_MK20C","weapon"},
			{"BP_SVT40","weaponA"},
			{"BP_M4","weaponA"},
			{"BP_1911MDes","weapon"},
			{"BP_MXM","weapon"},
			{"BP_M24DES","weaponA"},
			{"BP_M4_300","weaponA"},
			{"BP_AK74U","weapon"},
			{"BP_M16a4","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_MXC","weapon"}
		};
		itemChance[] =	{
			0.03,   //M4_300MK
			0.01,   //M249
			0.20,   //AK107
			0.02,   //R700
			0.01,   //Mk12 MOD1
			0.08,	//MK20 CARBINE
			0.03,	//SVT40 PSO
			0.09,	//M4 CAMO
			0.02,   //KIMBER NW
			0.01,	//MXM
			0.01,   //M24 DESERT
			0.02,	//AR15 OLD
			0.25,	//AKS74U
			0.17,   //M16A2
			0.01,   //M14 DMR
			0.01,   //Scar Heavy
			0.02    //MXC
		};
	};
	
	class MilitarySpecialAcc: Default {
		lootChance = 0.35; 
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"Binocular","weaponNA"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"}, 
		    {"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
		    {"BP_FieldPack_blk","backpack"},
			{"BP_FieldPack_ocamo","backpack"},
			{"BP_FieldPack_oucamo","backpack"},
			{"BP_FieldPack_cbr","backpack"},
			{"BP_Bergen_drt","backpack"},
			{"BP_Bergen_grs","backpack"},
			{"BP_Bergen_stn","backpack"},
			{"BP_Bergen_tre","backpack"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},
			{"BP_Bergen_blk","backpack"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_UGL_FlareRed","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_5Rnd_3006M_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_65x39","magazine"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_6Rnd_45JHP_Mag","magazine"},
			{"SmokeShellRed","magazine"},
			{"optic_holosight","toolbelt"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BlueprintCrate1","magazine"},
			{"BlueprintCamoNet","magazine"},
			{"BP_gemtech9","toolbelt"},
			{"ItemSurgeryKit","toolbelt"},
			{"BP_545x39_HP_30rnd","magazine"},
			{"BP_545x39_30rnd_Ball_T","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_556old_Stanag","magazine"}

		};
		itemChance[] =	{
			0.15,	//ACO OPTIC
			0.02,	//HAMR OPTIC
			0.16,	//BINOCULARS
			0.03,	//CHEEKPIECE
			0.03,	//AFG
			0.10,	//KNIFE
			0.15,	//MAPA
			0.13, 	//KIT SAGE
			0.12, 	//KIT CBR
			0.12,   //KIT CAMO
			0.11, 	//FIELD BLACK
			0.12, 	//FIELD HEX
			0.11,   //FIELD URBAN
            0.12,   //FIELD TAN	
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
            0.07,   //BERGEN BLACK			
			0.15,	//BANDAGE
			0.15,	//PAINKILLER
			0.07,	//STANAG 30RND
			0.15,	//AK MAG
			0.15,	//9MM OVP
			0.02,	//3006M
			0.08,	//5RND 762
			0.07,	//HAND GRENADE
			0.15,	//9MM STANDARD
			0.02,	//20RND 762
			0.05,	//10RND GRENDEL
			0.05,	//45 JHP
			0.11,	//45 ACP
			0.15,	//SMOKE GRENADE RED
			0.05,	//HOLO
			0.12,	//BANDOLIER OLIVE
			0.17,   //TENT BLUEPRINT
			0.14,   //CAMO NET BLUEPRINT
			0.01,   //GEMTECH 9MM SUPPR
			0.03,   //SURGERY KIT
			0.04,   //30rnd 5.45x39 Hollow Point magazine
			0.03,    //30rnd 5.45x39 Tracer magazine
			0.01,	//STANAG M855A1
			0.05,	//StanagMK262
			0.11	//StanagOLD
		};
	};
	
	class MilitarySpecialWpn: Default {
		lootChance = 0.35; 
		lootPos[] = {};
		itemType[] =	{
			{"BP_M4_300MK","weapon"},
			{"BP_m9","weapon"},
			{"BP_G18","weapon"},
			{"BP_G17","weapon"},
			{"BP_1911","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_SUD_AK107","weapon"},
			{"BP_M4","weaponA"},
			{"BP_M4OLD","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_AKM","weapon"},
			{"BP_AR10","weapon"},
			{"BP_SVT40","weapon"},
			{"BP_1911MDes","weapon"},
			{"BP_M4_300","weaponA"},
			{"BP_M4_300k","weapon"},
			{"BP_AK74U","weapon"},
			{"BP_SVT40","weaponA"},
			{"BP_M16OLD","weapon"}
			//{"BP_SUD_AK108","weaponA"},
			//{"BP_SUD_AK109","weaponA"}			
		};
		itemChance[] =	{
			0.01,	//M4_300MK
			0.12,	//M9
			0.01,	//G18
			0.10,	//G17
			0.22,	//1911
			0.07,	//AK74m	
			0.07,	//AK107	
			0.09,	//M4A1
			0.07,	//M4A1
			0.15,	//BENELLI
			0.01,	//AKM
			0.05,	//AR10
			0.05,	//SVT40
			0.01,	//1911DES
			0.02,	//M4300
			0.02,   //M4300K
			0.25,	//AKS74U
			0.02,	//SVT40 PSO
			0.07    //AR15
			//0.04,	//AK108
			//0.02	//AK109
		};
	};
	
	class MilitaryTower: Default {
		lootChance = 0.70;
		lootPos[] = {};
		itemType[] =	{
			{"BP_SVD","weapon"},
			{"BP_ScarH","weaponA"},
			{"BP_AR10","weapon"},
			{"BP_SA582","weapon"},
			{"BP_M16OLD","weapon"},
			{"BP_R700","weaponA"},
			{"BP_M24Des","weaponA"},
			{"BP_PSO1","toolbelt"},
			{"optic_Arco","toolbelt"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_762x54_SVD","magazine"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_545x39_HP_30rnd","magazine"},
			{"BP_545x39_30rnd_Ball_T","magazine"},
			{"BP_545x39_7N22","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"}
			
		};
		itemChance[] =	{
			0.02,	//SVD
			0.01,	//Scar H
			0.07,   //AR10
			0.05,   //AKM RIS
			0.11,   //BP_M16 OLD
			0.07,   //R700
			0.02,   //M24Des
			0.05,	//PSO1
			0.05,	//ARCO
			0.03,	//5RND 7.62 MK316
			0.09,   //10RND 7.62
			0.05,   //SVD Magazine
			0.05,   //MAUSER MAG
			0.01,    //20RND LAPUA
			0.06,   //30rnd 5.45x39 Hollow Point magazine
			0.06,    //30rnd 5.45x39 Tracer magazine
			0.05,   //545x39_7N22
			0.07,    //10Rnd_303_JSP_Mag
			0.01,   //BP_762x54_7N1_10rnd
			0.01,    //762x54_7N13_10rnd
			0.06   //556x45_Stanag_Tracer
		};
	};
	
	class MilitaryRangerAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"BP_gemtech45","toolbelt"},
			{"BP_gemtech9","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_Bergen_blk","backpack"},
			{"BP_Carryall_oucamo","backpack"},
			{"BP_Carryall_blk","backpack"},		
			{"BP_Bergen_drt","backpack"},
			{"BP_Bergen_grs","backpack"},
			{"BP_Bergen_stn","backpack"},
			{"BP_Bergen_tre","backpack"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},
			{"V_TacVest_gen_BP","vest"},   //Gendarmerie Vest
			{"V_PlateCarrierIA1_dgtl_BP","vest"},
			{"BP_optic_ACOG","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"V_TacVest_oli_BP","vest"},
			{"BP_M3A2","toolbelt"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_UGL_FlareGreen","magazine"},
			{"BP_5Rnd_300M_Mag","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_65x39","magazine"},
			{"ItemKnife","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_762mk316_Mag","magazine"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Rambo","magazine"},
			{"BP_Arrow_Fire","magazine"},
			{"BP_Arrow_Tranq","magazine"},
			{"BP_Arrow_Poison","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"V_BandollierB_rgr_BP","vest"},
			{"BP_100Rnd_127x99_box","magazine"}
		};
		itemChance[] =	{
			0.05,	//OPTIC ACO
			0.02,	//GEMTECH 45
			0.02,	//GEMTECH 9MM
			0.03,	//HAMR OPTIC
            0.01,   //BERGEN BLACK
			0.01, 	//CARRYALL URBAN
            0.01,   //CARRYALL BLACK	
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN
			0.01,   //Gendarmerie Vest
			0.01,	//PLATE CARRIER
			0.05,	//ACOG
			0.02,	//CHEEKPIECE
			0.03,	//AFG
			0.03,	//TAC VEST
			0.02,	//M3A2
			0.05,	//STANAG M855A1
			0.05,	//StanagMK262
			0.05,	//StanagSD
			0.05,	//Stanag_Tracer
			0.02,	//5RND 762M80A1
			0.04,	//HAND GRENADE
			0.05,	//HE GRENADE M203
			0.10,	//30RND 9MM
			0.03,	//300M
			0.04,	//20RND LAPUA
			0.05,	//10RND LAPUA
			0.07,	//10RND GRENDEL
			0.07,	//KABAR
			0.04,	//5Rnd_762x51_Mag 
			0.02,	//5Rnd_762mk316_Mag
			0.01,	//5Rnd_762m80a1
			0.04,	//10Rnd_762x51_Mag 
			0.01,	//10Rnd_762mk316_Mag
			0.25,	//Arrow
			0.15,	//Arrow Rambo
			0.25,	//Arrow Fire
			0.25,	//Arrow Tranq
			0.10,	//Arrow Poison
			0.04,    //BP_10Rnd_303_JSP_Mag
			0.04,   //BP_762x54_7N1_10rnd
			0.04,    //BP_762x54_7N13_10rnd
			0.03,   //BP_556x45_Stanag_Tracer
			0.10, 	//Bandolier Mid
			0.07	//100RND BOX 127x99
		};
	};
	
	class MilitaryRangerWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_ATMine_Mag","magazine"},
			{"BP_TripMine_Mag","magazine"},
			{"BP_M84_Flash","magazine"},
			{"HandGrenade","magazine"},
			{"BP_M4_300MK","weapon"},
			{"BP_MX_SW","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_FNPTac45","weaponA"},
			{"BP_G18","weapon"},
			{"BP_M4","weaponA"},
			{"BP_FNFAL","weapon"},
			{"BP_FNFALK","weapon"},
			{"BP_Mk12mod1","weaponA"},
			{"BP_1911MDes","weaponA"},	
			{"BP_M40a3","weaponA"},
			{"BP_MP5","weapon"},
			{"BP_MX_black","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_G36DMR","weapon"},
			{"BP_M16A4","weapon"},
			{"BP_MXM_black","weapon"},
			{"BP_M4B2","weapon"},
			{"arifle_MSBS65_UBS_F","weaponNA"}
		};
		itemChance[] =	{
			0.01,	//ATMine
			0.01,	//TripMine
			0.04,	//Flashbang
			0.02,	//Grenade
			0.03,	//M4_300MK
			0.02,	//MXSW
			0.02,	//M249
			0.01,	//FNPTAC
			0.06,	//G18
			0.10,	//M4A1
			0.09,	//FNFAL
			0.03,	//FNFALK
			0.01, 	//MK12MOD1
			0.02, 	//1911DES
			0.01,	//M40A3
			0.13,   //MP5
			0.01,	//MX SPECOPS
			0.07,	//BENELLI
			0.01,	//G36DMR
			0.05,	//M16A4
			0.01,	//MXM BLACK
			0.03,	//block4
			0.01	//Promet
		};
	};
	
	class HotelAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_gemtech45","toolbelt"},
			{"BP_gemtech9","toolbelt"},
			{"BP_CZSup_br","toolbelt"},
			{"ItemGPS","toolbelt"},
			{"BP_PSO1","toolbelt"},
			{"BP_PSOP","toolbelt"},
			{"BP_Unertl32x","toolbelt"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_drt","backpack"},
			{"BP_Bergen_grs","backpack"},
			{"BP_Bergen_stn","backpack"},
			{"BP_Bergen_tre","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},
			{"BP_Carryall_mcamo","backpack"},
			{"BP_Carryall_blk","backpack"},					
			{"BP_optic_ACOG","toolbelt"},
			{"BP_SOS","toolbelt"},
			{"BP_flashlight","toolbelt"},
			{"V_TacVest_oli_BP","vest"},
			{"BP_M3A2","toolbelt"},
			{"BP_20Rnd_765x17","magazine"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_93x64_SVDK","magazine"},
			{"BP_5Rnd_300M_Mag","magazine"},
			{"BP_33Rnd_9x19OVP","magazine"},
			{"ItemKnife","magazine"},
			{"BP_5Rnd_3006M_Mag","magazine"},
			{"BP_5Rnd_223BTHP_Mag","magazine"},
			{"BP_545x39_HP_30rnd","magazine"},
			{"BP_545x39_30rnd_Ball_T","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_65x39","magazine"},			
			{"BP_545x39_7N22","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"V_BandollierB_rgr_BP","vest"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Rambo","magazine"},
			{"BP_Arrow_Fire","magazine"},
			{"BP_Arrow_Tranq","magazine"},
			{"BP_Arrow_Poison","magazine"}
		};
		itemChance[] =	{
			0.02,	//GEMTECH 45
			0.02,	//GEMTECH 9MM
			0.01,	//CZSUPBR
			0.01,	//GPS
			0.03,	//PSO1
			0.01,	//PSOP
			0.03,	//UNERTL32X
            0.02,   //BERGEN BLACK
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN
			0.02, 	//CARRYALL URBAN
            0.02,   //CARRYALL BLACK
			0.02,	//ACOG
			0.02,	//NXS
			0.12,	//FLASHLIGHT ATTACHMENT
			0.02,	//TAC VEST
			0.02,	//M3A2
			0.08,	//20RND 762BROWNING
			0.05,	//5RND 762MK316
			0.04,	//HAND GRENADE
			0.06,	//HE GRENADE M203
			0.02,	//BRENNEKE
			0.02,	//300M
			0.04,	//33RND OVP
			0.15,	//KABAR
			0.03,	//3006M
			0.08,	//223BTHP
			0.10,   //30rnd 5.45x39 Hollow Point magazine
			0.10,    //30rnd 5.45x39 Tracer magazine
			0.01,	//20RND LAPUA
			0.05,	//10RND LAPUA
			0.10,	//10RND GRENDEL			
			0.04,   //BP_545x39_7N22
			0.12,    //303_JSP_Mag
			0.04,   //762x54_7N1_10rnd
			0.02,    //762x54_7N13_10rnd
			0.03,	//STANAG M855A1
			0.05,	//StanagMK262
			0.07,	//StanagSD
			0.07,	//Stanag_Tracer
			0.05,	//Bandolier Mid
			0.08,	//Arrow_Mag
			0.03,	//Arrow_Rambo
			0.08,	//Arrow_Fire
			0.08,	//Arrow_Tranq
			0.08	//Arrow_Poison
		};
	};
	
	class HotelWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_ATMine_Mag","magazine"},
			{"BP_TripMine_Mag","magazine"},
			{"BP_SA61","weapon"},
			{"BP_G36C","weapon"},
			{"BP_SA58","weapon"},
			{"BP_R700","weaponA"},
			{"BP_WinCoy2","weaponA"},
			{"BP_Uzi","weapon"},
			{"BP_FNFALK","weapon"},
			{"BP_SVDK","weaponA"},
			{"BP_Win70","weaponA"},
			{"BP_Tavor","weaponA"},	
			{"BP_AR10","weapon"},
			{"BP_M16A4","weaponA"},
			{"BP_M9Tac","weaponA"},
			{"BP_M4_300","weaponA"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_M4B2","weapon"}
		};
		itemChance[] =	{
			0.01,	//ATMine
			0.01,	//TripMine
			0.07,	//SA61
			0.08,	//SA58
			0.11,	//SA58
			0.10,	//R700
			0.10,	//R7 CDL
			0.07,   //UZI
			0.04, 	//FNFALK
			0.01, 	//SVDK
			0.01, 	//WIN70
			0.05, 	//WuSE TAVOR
			0.06, 	//AR10
			0.07,	//M16A4
			0.01,   //M9TAC
			0.04,	//M4 BLACKOUT
			0.05,	//Crossbow
			0.05,	//Crossbow
			0.05	//block4
		};
	};

	class WindmillAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_8Rnd_45gov","magazine"},
			{"Rangefinder","weaponNA"},
			{"BP_Binocular_Hunter","weaponNA"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_CZst_br","toolbelt"},
			{"BP_CZmod_br","toolbelt"},
			{"BP_R7P","toolbelt"},
			{"BP_Unertl32x","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_5Rnd_250_Mag","magazine"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_10Rnd_65x39","magazine"},
			{"BP_10Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_2Rnd_Buckshot","magazine"},
			{"BP_2Rnd_MagBuckshot","magazine"},
			{"BP_2Rnd_Slug","magazine"},
			{"V_BandollierB_oli_BP","vest"}
		};
		itemChance[] =	{
			0.08,   //45GOV
			0.01,   //RANGEFINDER
			0.03,   //Hunting Binocular
			0.16,   //KNIFE
			0.14,   //MATCHBOX
			0.13,   //COMPASS
			0.13,   //MAP
			0.06,   //CZ STANDARD BARREL
			0.02,   //CZ PRECISION BARREL
			0.02,   //REM7 PRECISION BARREL
			0.02,   //UNERTL 32X
			0.02,   //VX3
			0.01,   //Remington 7 suppressed barrel
			0.09,   //.22-250
			0.03,   //300 WINMAG
			0.10,   //30-06 MAG
			0.04,   //5RND 762
			0.08,   //5RND Mauser
			0.09,   //10RND GRENDEL
			0.05,   //10RND Lapua
			0.05,    //10RND 303 BRIT
			0.04,    //10RND 303 BRIT
			0.05,	//2RND BUCKSHOT
			0.04,	//2RND MAGBUCKSHOT
			0.04,	//2RND SLUG
			0.02	//Bandolier Mid
		};
	};
	
	class WindmillWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_1911","weapon"},
			{"BP_SW45","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_Rhino","weapon"},
			{"BP_Ruger","weaponA"},
			{"BP_1886S","weaponA"},
			{"sgun_HunterShotgun_01_F","shotgun"},
			{"sgun_HunterShotgun_01_sawedoff_F","shotgun"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_LeeEnfield_old","weapon"},
			{"BP_HA550","weaponA"},
			{"BP_MC550","weaponA"},
			{"BP_WinCoy2","weaponA"},
			{"BP_Rem6","weaponA"},
			{"BP_Kar98","weaponA"},
			{"BP_Win70","weaponA"},
			{"BP_Win70F","weaponA"},
			{"BP_CZ550_old","weaponA"}

		};
		itemChance[] =	{
			0.06,   //M1911
			0.09,   //SW45
			0.06,   //AK74M
			0.02,   //RHINO
			0.09,   //RUGER
			0.01,   //1886S
			0.10,   //Hunting shotgun
			0.10,   //Hunting shotgun sawed off
			0.05,   //ENFIELD MKIII
			0.05,   //ENFIELD SCOPED
			0.11,   //ENFIELD OLD
			0.01,   //HA550
			0.02,   //MC550
			0.03,   //REM7 CDL
			0.03,   //REM6
			0.02,   //KAR98
			0.02,   //WINCHESTER MODEL 70
			0.01,   //WINCHESTER MODEL 70 SUPER GRADE
			0.07    //CZ550 OLD
		};
	};

	
	class Castle: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weapon"},
			{"BP_SA61","weapon"},
			{"BP_SW45","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_Rhino","weapon"},
			{"BP_Ruger","weaponA"},
			{"BP_1886S","weaponA"},
			{"BP_MC550","weapon"},
			{"BP_WinCoy2","weapon"},
			{"BP_Rem6","weaponA"},
			{"BP_Win70","weaponA"},
			{"BP_Win70F","weaponA"},
			{"BP_CZ550_old","weapon"},
			{"BP_Binocular_Hunter","weaponNA"},
			{"BP_SOS","toolbelt"},
			{"BP_20Rnd_765x17","magazine"},
			{"WaterbotEmpty","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_CZst_br","toolbelt"},
			{"BP_CZmod_br","toolbelt"},
			{"BP_CZSup_br","toolbelt"},
			{"BP_R7P","toolbelt"},
			{"BP_R7Sup","toolbelt"},
			{"BP_Unertl8x","toolbelt"},
			{"BP_Unertl32x","toolbelt"},
			{"BP_VX2","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_5Rnd_250_Mag","magazine"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_10Rnd_65x39","magazine"}
		};
		itemChance[] =	{
			0.04,   //BP_Crossbow
			0.03,   //BP_Crossbow_DigitCamo
			0.02,   //Scorpion
			0.13,   //SW45
			0.08,   //AK74M
			0.02,   //RHINO
			0.09,   //RUGER
			0.01,   //1886S
			0.02,   //MC550
			0.02,   //REM7 CDL
			0.02,   //REM6
			0.02,   //WINCHESTER MODEL 70
			0.01,   //WINCHESTER MODEL 70 SUPER GRADE
			0.05,   //CZ550 OLD
			0.02,   //BP_Binocular_Hunter
			0.05,   //Clearsky hunting optic
			0.03,   //BP_20Rnd_765x17
			0.02,   //WaterbotEmpty
			0.04,   //KNIFE
			0.04,   //MATCHBOX
			0.03,   //COMPASS
			0.03,   //MAP
			0.06,   //CZ STANDARD BARREL
			0.02,   //CZ PRECISION BARREL
			0.01,   //CZ PRECISION BARREL W/Suppressor
			0.03,   //REM7 PRECISION BARREL
			0.01,   //REM7 PRECISION BARREL W/Suppressor
			0.02,   //UNERTL 18X
			0.02,   //UNERTL 32X
			0.03,   //VX2
			0.02,   //VX3
			0.04,   //.22-250
			0.01,   //300 WINMAG
			0.07,   //9MM OVP
			0.08,   //30-06 MAG
			0.02   //10RND GRENDEL
		};
	};
	
	class SurvivorCrate: Default {
		lootChance = 0.75;
		lootPos[] = {};
		itemType[] =	{		
			{"srifle_DMR_06_hunter_F","weapon"},
			{"BP_Kar98","weaponA"},
			{"BP_LeeEnfieldK","weaponA"},
			{"Human_Trap_Mag","magazine"},
			{"BP_CampPack","backpack"},
			{"BP_HCampPack","backpack"},
			{"V_TacVest_camo","vest"},
			{"V_Chestrig_blk_BP","vest"},
			{"Rangefinder","weaponNA"},
			{"BP_CPad","toolbelt"},
			{"BP_R7Sup","toolbelt"},
			{"BP_CZSup_br","toolbelt"},
			{"BP_m9qd","toolbelt"},
			{"optic_mrco","toolbelt"}, 
			{"optic_Aco","toolbelt"}, 
			{"BP_AK_ACO","toolbelt"}, 
			{"BP_VX3","toolbelt"},
			{"BP_GhillieWL","toolbelt"},
			{"BP_GhillieDes","toolbelt"},
			{"MeleePickaxe","weaponNA"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"ItemAdrenaline","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemToiletPaper","magazine"},
			{"ItemGlue","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"},
			{"HandGrenade","magazine"},
			{"BP_M84_Flash","magazine"}
		};
		itemChance[] =	{
			0.01,	//Hunting mk14
			0.03,	//Kar98 Scoped
			0.03,   //ENFIELD SCOPED
			0.02,	//BearTrap
			0.02,	//Camping Pack
			0.01,	//Heavy Camping Pack
			0.01,	//CAMO vest
			0.01,	//V_Chestrig_blk_BP
			0.01,	//Rangefinder
			0.02,	//CheekPad
			0.02,	//.223 Barrel w/superssor
			0.01,	//CZ Precision Barrel w/Suppressor
			0.01,	//9mm Tactical QD Suppressor
			0.02, 	//Mrco
			0.03, 	//Aco
			0.03, 	//AK_ACO
			0.03, 	//VX3
			0.01, 	//Rifle Woodland camo
			0.01, 	//Rifle Desert camo
			0.03, 	//Axe
			0.03,   //Morphine
			0.03,	//FIELD DRESSING
			0.03,	//ANTIBIOTIC
			0.02,   //SURGERY KIT
			0.03,   //Adrenaline
			0.04,	//KNIFE
			0.04,	//MATCHES
			0.04,	//TOILET PAPER
			0.03,	//GLUE
			0.03,	//DUCT TAPE
			0.01,	//Soda
			0.01,	//Soda
			0.01,	//Soda
			0.01,	//Soda
			0.01,	//Soda
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.05,	//303_JSP_Mag
			0.06,	//Mauser_Mag
			0.04,	//762x54_7N13
			0.04,	//762x54_7N1
			0.02,	//HandGrenade
			0.04	//BP_M84_Flash
		};
	};
	
	class SuicideCrate: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_AWSM","weapon"},
			{"BP_SVDK_DES","weaponA"},
			{"BP_arifle_ARX_ghex_F","weapon"},  //Type 115 Green Hex
			{"BP_arifle_ARX_hex_F","weapon"},  //Type 115 Hex 
			{"BP_SMG_05_F","weapon"},  //Protector
			{"V_TacVest_gen_BP","vest"},   //Gendarmerie Vest
			{"BP_762Muzzle","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_NXS","toolbelt"},
			{"BP_L14X","toolbelt"},
			{"BP_M3AMRAD","toolbelt"},
			{"BP_M3AN","toolbelt"},
			{"BP_PS22","toolbelt"},
			{"BP_PSO35","toolbelt"},
			{"Rangefinder","weaponNA"},
			{"BP_10Rnd_338Lapua_Mag","magazine"},
			{"BP_10Rnd_300_Mag","magazine"},
			{"BP_93x64_SVDK","magazine"},
			{"BP_10Rnd_762mk316_Mag","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"HandGrenade","magazine"},
			{"BP_10Rnd_50BW_Mag_F","magazine"},
			{"BP_100Rnd_127x99_box","magazine"},
			{"BP_ATMine_Mag","magazine"},
			{"BP_M4B2","weapon"}
		};
		itemChance[] =	{
			0.01,	//BP_AWSM
			0.01,	//BP_SVDK
			0.01,	//Type 115 Green Hex
			0.01,	//Type 115 Hex
			0.01,	//Protector
			0.01,	//Gendarmerie Vest
			0.01,	//7.62 Muzzle
			0.03,   //optic_Hamr
			0.03,   //BP_VX3
			0.02,   //BP_NXS
			0.03,   //BP_L14X
			0.03,   //BP_M3AMRAD
			0.03,   //BP_M3AN
			0.03,   //BP_PS22
			0.01,	//PSO35
			0.01,   //RANGEFINDER
			0.02,	//338Lapua AMMO
			0.03,	//300_Mag AMMO
			0.03,	//93x64 SVDK AMMO
			0.02,   //10Rnd_762mk316_Mag
			0.04,   //5Rnd_762m80a1_Mag
			0.03,	//STANAG M855A1
			0.03,	//StanagMK262
			0.03,	//StanagSD
			0.03,	//Stanag_Tracer
			0.02,	//TRASH
			0.02,	//TRASH
			0.02,	//TRASH
			0.02,	//TRASH
			0.02,	//TRASH
			0.02,	//NADE
			0.01,   //10Rnd_50BW_Mag
			0.01,   //50Cal Box
			0.01,	//ATMine
			0.04	//block4
		};
	};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
/////////////////////////////////////////////////////////////////////////////////////////////////BYSTRICA LOOT TABLES//////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	class CivilianAcc: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"ItemMorphine","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"},
			{"BP_flashlight","toolbelt"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"BP_5Rnd_300AAC_Mag","magazine"},
			{"ItemBandage","magazine"},
			{"BP_8Rnd_Slug","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_556old_Stanag","magazine"},
			{"ItemPainkiller","magazine"},
			{"SmokeShell","magazine"},
		    {"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
		    {"BP_FieldPack_blk","backpack"},
			{"BP_FieldPack_ocamo","backpack"},
			{"BP_FieldPack_oucamo","backpack"},
			{"BP_FieldPack_cbr","backpack"},			
			{"V_Rangemaster_belt_BP","vest"},
			{"BlueprintCrate1","magazine"},
			{"BlueprintCamoNet","magazine"},
			{"BlueprintCache1","magazine"},
			{"V_Chestrig_rgr_BP","vest"},
			{"BP_gemtech9","toolbelt"}
			
		};
		itemChance[] =	{
			0.05,	//ACO OPTIC
			0.01,	//HAMR OPTIC
			0.05,	//BINOCULARS
			0.10,	//KNIFE
			0.15,	//MAP
			0.09,	//FLASHLIGHT ATTACH
			0.05,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.07,	//BANDAGE
			0.01,	//300 BLACKOUT
			0.05,	//BENELLI SLUG
			0.08,	//9MM MAG
			0.01,	//3006 MAG
			0.03,	//303B
			0.03,	//7RND 45ACP
			0.04,	//STANAG
			0.15,	//PAINKILLERS
			0.02,	//SMOKE
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.02,   //KIT CAMO
			0.05, 	//FIELD BLACK
			0.05, 	//FIELD HEX
			0.05,   //FIELD URBAN
            0.05,   //FIELD TAN			
			0.12,	//BANDOLIER OLIVE
			0.07,   //TENT BLUEPRINT
			0.06,   //CAMO NET BLUEPRINT
			0.06,   //CRATE BLUEPRINT
			0.01,   //TAC VEST
			0.01    //GEMTECH 9MM SUPPR
		};
	};	
	class CivilianWpn: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
			{"BP_m9","weapon"},
			{"BP_FamasSurb_HG","weapon"},	
            {"BP_M16OLD","weapon"},
			{"BP_m9c","weapon"},
			{"BP_SW45","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_AK74U","weapon"},
			{"BP_SUD_AK105","weapon"},
			{"BP_M4Old","weapon"},
			{"BP_M4","weaponA"},
			{"BP_M4K","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_g17","weapon"},
			{"BP_MP7","weapon"},
			{"BP_R300","weaponA"},
			{"BP_Mp7_urb","weapon"},
			{"BP_LeeEnfield2","weaponA"}
			
		};
		itemChance[] =	{
			0.07,	//M9
			0.01,	//FAMAS
			0.10,	//FAMAS
			0.05,	//M9 CAMO
			0.02,	//M9 CAMO
			0.09,	//AK74m	
			0.07,	//AKS74U	
			0.03,	//AK105
			0.07,	//DM M4
			0.02,	//DM M4
			0.02,	//M4K
			0.12,	//BENELLI
			0.07,	//G17
			0.05,	//MP7
			0.05,	//MP7
			0.03,	//MP7 Urban
			0.03	//ENFIELD SCOPED
		};
	};	
	class CastleAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_8Rnd_45gov","magazine"},
			{"Human_Trap_Mag","magazine"},
			{"Rangefinder","weaponNA"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_CZmod_br","toolbelt"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_6Rnd_45_Mag","magazine"},
			{"BP_6Rnd_44Mag","magazine"},
			{"BP_sw45","weapon"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_25Rnd_22_Mag","magazine"},
			{"BP_5Rnd_500Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"}
		};
		itemChance[] =	{
			0.04,   //440 CORBON
			0.01,   //Bear Trap
			0.01,   //RANGEFINDER
			0.16,   //KNIFE
			0.14,   //MATCHBOX
			0.13,   //COMPASS
			0.13,   //MAP
			0.02,   //CZ PRECISION BARREL
			0.01,   //300 WINMAG
			0.07,   //9MM OVP
			0.08,   //30-06 MAG
			0.02,   //5RND 762
			0.10,    //10RND 303 BRIT
			0.03,    //10RND 303 BRIT
			0.01,	//45 MAG ROUNDS
			0.01,	//44 MAG ROUNDS
			0.01,	//SW45
			0.01,	//MAUSER 7.92
			0.01,	//25RND .22LR
			0.01,	//.500SW
			0.01   //30-06 MAG
		};
	};	
	class CastleWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_1911","weapon"},
			{"BP_Rhino","weapon"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_LeeEnfield_old","weapon"},
			{"BP_Win70","weaponA"},
			{"BP_Win70F","weaponA"},
			{"BP_sw44","weaponA"},
			{"BP_Rem870","weapon"},
			{"BP_Ruger","weapon"},
			{"BP_1886S","weaponA"},
		};	
		itemChance[] =	{
			0.05,   //M1911
			0.02,   //RHINO
			0.05,   //ENFIELD MKIII
			0.02,   //ENFIELD SCOPED
			0.15,   //ENFIELD OLD
			0.02,	//WINCHESTER MODEL 70
			0.01,	//WINCHESTER MODEL 70 SUPER GRADE
			0.01,	//SW.500 Scoped
			0.01,	//REMINGTON 870
			0.01,	//RUGER 10/22
			0.01,	//1886S
		};
	};
};	