/*
	Breaking Point - Custom Weapons Config Class
			Created By Deathlyrage and Valtiel
*/

#define true	1
#define false	0

#define private		0
#define private		0
#define protected		1
#define public		2

#define VSoft		0
#define VArmor		1
#define VAir		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#include "basicDefines.hpp"

class CfgPatches 
{
	class breakingpoint_weapons_cfg 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"breakingpoint_weapons","A3_Weapons_F","A3_characters_F","A3_Data_F","breakingpoint_ui"};
	};
};

//Global External References
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

/*
	Breaking Point: Melee Weapons
		By Deathlyrage
*/

class CfgRecoils 
{
	Swing_recoil[] = {0, 0.06, -0.1, 0, 0.1, -0.12, 0.1, 0, 0};
};

class ItemActions 
{
	class Use 
	{
		text = "";
		script = "";
		use[] = {};
	};
};

class CfgMovesBasic 
{
	class ManActions 
	{
		GestureSwing = " ";
		GestureSwing2 = " ";
		GestureSwing3 = " ";
		GestureStab = " ";
		GestureMelee = " ";
		AdjustF = "";
		AdjustB = "";
		AdjustL = "";
		AdjustR = "";
		AdjustLF = "";
		AdjustLB = "";
		AdjustRB = "";
		AdjustRF = "";
		dooraction = "amovpercmwlksnonwnondf";
		GestureLegPush = "";
		agonyStart = "AinjPpneMstpSnonWnonDnon";
		agonyStop = "AmovPpneMstpSnonWnonDnon";
		medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
		medicStart = "AinvPknlMstpSnonWnonDnon_medic0S";
		medicStartUp = "AinvPknlMstpSnonWrflDnon_medicUp0S";
		medicStartRightSide = "AinvPknlMstpSnonWnonDr_medic0S";
		GestureAgonyCargo = "";
		grabCarry = "Helper_SwitchToCarryRfl";
		grabCarried = "AinjPfalMstpSnonWnonDnon_carried_still";
		grabDrag = "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
		grabDragged = "AcinPknlMwlkSlowWrflDb_still";
		carriedStill = "AinjPfalMstpSnonWrflDnon_carried_still";
		released = "";
		releasedBad = "";
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		ReloadMagazine = "";
		reloadGM6 = "";
		ReloadMGun = "";
		ReloadRPG = "ReloadRPG";
		ReloadMortar = "";
		ThrowPrepare = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		PlayerWalkF = "";
		PlayerWalkLF = "";
		PlayerWalkRF = "";
		PlayerWalkL = "";
		PlayerWalkR = "";
		PlayerWalkLB = "";
		PlayerWalkRB = "";
		PlayerWalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		PlayerSlowF = "";
		PlayerSlowLF = "";
		PlayerSlowRF = "";
		PlayerSlowL = "";
		PlayerSlowR = "";
		PlayerSlowLB = "";
		PlayerSlowRB = "";
		PlayerSlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		TactF = "";
		TactLF = "";
		TactRF = "";
		TactL = "";
		TactR = "";
		TactLB = "";
		TactRB = "";
		TactB = "";
		PlayerTactF = "";
		PlayerTactLF = "";
		PlayerTactRF = "";
		PlayerTactL = "";
		PlayerTactR = "";
		PlayerTactLB = "";
		PlayerTactRB = "";
		PlayerTactB = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		startSwim = "";
		surfaceSwim = "";
		bottomSwim = "";
		StopSwim = "";
		startDive = "AdvePercMrunSnonWnonDf";
		SurfaceDive = "AsdvPercMrunSnonWnonDf";
		BottomDive = "AbdvPercMrunSnonWnonDf";
		StopDive = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "Unconscious";
		Unconscious = "Unconscious";
		WeaponOn = "";
		WeaponOff = "";
		Default = "";
		JumpOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		saluteOff = "";
		GetOver = "";
		Diary = "";
		Surrender = "";
		Gear = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		MedicOther = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetInSDV = "";
		GetInHeli_Attack_01Pilot = "";
		GetInHeli_Attack_01Gunner = "";
		GetInHelicopterCargo = "";
		GetInMRAP_01 = "";
		GetInMRAP_01_cargo = "";
		GetOutMRAP_01 = "";
		GetOutMRAP_01_cargo = "";
		GetOutHelicopterCargo = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		GetOutHighZamak = "";
		GetOutHighHemtt = "";
		GetOutSDV = "";
		GetOutHeli_Attack_01Pilot = "";
		GetOutHeli_Attack_01Gunner = "";
		TakeFlag = "";
		HandGunOn = "";
		gestureAttack = "";
		gestureGo = "";
		gestureGoB = "";
		gestureFreeze = "";
		gesturePoint = "";
		gestureCeaseFire = "";
		gestureCover = "";
		gestureUp = "";
		gestureNo = "";
		gestureYes = "";
		gestureFollow = "";
		gestureAdvance = "";
		gestureHi = "";
		gestureHiB = "";
		gestureHiC = "";
		gestureNod = "";
		GestureSpasm0 = "";
		GestureSpasm1 = "";
		GestureSpasm2 = "";
		GestureSpasm3 = "";
		GestureSpasm4 = "";
		GestureSpasm5 = "";
		GestureSpasm6 = "";
		GestureSpasm0weak = "";
		GestureSpasm1weak = "";
		GestureSpasm2weak = "";
		GestureSpasm3weak = "";
		GestureSpasm4weak = "";
		GestureSpasm5weak = "";
		GestureSpasm6weak = "";
		GestureReloadMX = "";
		GestureReloadMXCompact = "";
		GestureReloadMXSniper = "";
		GestureReloadMk20 = "";
		GestureReloadTRG = "";
		GestureReloadTRGUGL = "";
		GestureReloadKatiba = "";
		GestureReloadM200 = "";
		GestureReloadLRR = "";
		GestureReloadEBR = "";
		GestureReloadM4SSAS = "";
		GestureReloadSMG_02 = "";
		GestureReloadSMG_03 = "";
		GestureReloadPistol = "";
		GestureReloadPistolHeavy02 = "";
		GestureReloadFlaregun = "";
		GestureReloadSMG_01 = "";
		GestureReloadSDAR = "";
		GestureReloadDMR = "";
		MountOptic = "";
		DismountOptic = "";
		MountSide = "";
		DismountSide = "";
		GestureMountMuzzle = "";
		GestureDismountMuzzle = "";
		healedStart = "";
		healedStop = "";
		TestDriver = "BasicDriver";
		TestDriverOut = "BasicDriverOut";
		TestGunner = "BasicSittingGunner";
		Relax = "";
		swimUp = "";
		swimDown = "";
		StartFreefall = "";
		PrimaryWeapon = "";
		SecondaryWeapon = "";
		Binoculars = "";
 		crossbow_reload = "crossbow_reload";

		TEN_GestureStandingRiflePistolSwitch[]    = {"TEN_GestureStandingRiflePistolSwitch","Gesture"};
		TEN_GestureStandingRifleLauncherSwitch[]  = {"TEN_GestureStandingRifleLauncherSwitch","Gesture"};
		TEN_GestureStandingPistolRifleSwitch[]    = {"TEN_GestureStandingPistolRifleSwitch","Gesture"};
		TEN_GestureStandingPistolLauncherSwitch[] = {"TEN_GestureStandingPistolLauncherSwitch","Gesture"};
		TEN_GestureStandingLauncherRifleSwitch[]  = {"TEN_GestureStandingLauncherRifleSwitch","Gesture"};
		TEN_GestureStandingLauncherPistolSwitch[] = {"TEN_GestureStandingLauncherPistolSwitch","Gesture"};

		TEN_GestureStandingRiflePistolSwitchEnd[]    = {"TEN_GestureStandingRiflePistolSwitchEnd","Gesture"};
		TEN_GestureStandingRifleLauncherSwitchEnd[]  = {"TEN_GestureStandingRifleLauncherSwitchEnd","Gesture"};
		TEN_GestureStandingPistolRifleSwitchEnd[]    = {"TEN_GestureStandingPistolRifleSwitchEnd","Gesture"};
		TEN_GestureStandingPistolLauncherSwitchEnd[] = {"TEN_GestureStandingPistolLauncherSwitchEnd","Gesture"};
		TEN_GestureStandingLauncherRifleSwitchEnd[]  = {"TEN_GestureStandingLauncherRifleSwitchEnd","Gesture"};
		TEN_GestureStandingLauncherPistolSwitchEnd[] = {"TEN_GestureStandingLauncherPistolSwitchEnd","Gesture"};

		BP_Jump = " ";
		BP_Zomb_Act_Attack1 = " ";
		BP_Zomb_Act_Attack2 = " ";
		BP_Act_Man_Drink_Erc_x3_Gesture = "";
		BP_Act_Man_Eat_Erc_x3_Gesture = "";

		MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "";

		MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "";

		MOCAP_Man_Act_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg = "";
		
		MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
		MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";

		MOCAP_Man_Act_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg = "";
	};
	
	class StandBase;  //extern
	
	class Actions 
	{
		class NoActions : ManActions 
		{
			GestureSwing[] = {"GestureSwing", "Gesture"};
			GestureSwing2[] = {"GestureSwing2", "Gesture"};
			GestureSwing3[] = {"GestureSwing3", "Gesture"};
			GestureStab[] = {"GestureStab", "Gesture"};
			GestureMelee[] = {"GestureMelee", "Gesture"};
			GestureLegPush[] = {"GestureLegPush", "Gesture"};
			GestureNod[] = {"GestureNod", "Gesture"};
			GestureAgonyCargo[] = {"GestureAgonyCargo", "Gesture"};
			access = 3;
			ladderOnDown = "LadderCivilOn_Top";
			ladderOnUp = "LadderCivilOn_Top";
			turnSpeed = 1;
			upDegree = -1;
			stance = "ManStanceUndefined";
			limitFast = 5;
			leanRRot = 0;
			leanRShift = 0;
			leanLRot = 0;
			leanLShift = 0;
			useFastMove = 0;
			GestureSpasm0[] = {"GestureSpasm0", "Gesture"};
			GestureSpasm1[] = {"GestureSpasm1", "Gesture"};
			GestureSpasm2[] = {"GestureSpasm2", "Gesture"};
			GestureSpasm3[] = {"GestureSpasm3", "Gesture"};
			GestureSpasm4[] = {"GestureSpasm4", "Gesture"};
			GestureSpasm5[] = {"GestureSpasm5", "Gesture"};
			GestureSpasm6[] = {"GestureSpasm6", "Gesture"};
			GestureSpasm0weak[] = {"GestureSpasm0weak", "Gesture"};
			GestureSpasm1weak[] = {"GestureSpasm1weak", "Gesture"};
			GestureSpasm2weak[] = {"GestureSpasm2weak", "Gesture"};
			GestureSpasm3weak[] = {"GestureSpasm3weak", "Gesture"};
			GestureSpasm4weak[] = {"GestureSpasm4weak", "Gesture"};
			GestureSpasm5weak[] = {"GestureSpasm5weak", "Gesture"};
			GestureSpasm6weak[] = {"GestureSpasm6weak", "Gesture"};
			GestureReloadMk20[] = {"GestureReloadMk20", "Gesture"};
			GestureReloadMX[] = {"GestureReloadMX", "Gesture"};
			GestureReloadMXCompact[] = {"GestureReloadMXCompact", "Gesture"};
			GestureReloadMXSniper[] = {"GestureReloadMXSniper", "Gesture"};
			GestureReloadTRG[] = {"GestureReloadTRG", "Gesture"};
			GestureReloadTRGUGL[] = {"GestureReloadTRGUGL", "Gesture"};
			GestureReloadKatiba[] = {"GestureReloadKatiba", "Gesture"};
			GestureReloadM200[] = {"GestureReloadM200", "Gesture"};
			GestureReloadLRR[] = {"GestureReloadLRR", "Gesture"};
			GestureReloadEBR[] = {"GestureReloadEBR", "Gesture"};
			GestureReloadSMG_02[] = {"GestureReloadSMG_02", "Gesture"};
			GestureReloadSMG_03[] = {"GestureReloadSMG_03", "Gesture"};
			GestureReloadPistol[] = {"GestureReloadPistol", "Gesture"};
			GestureReloadPistolHeavy02[] = {"GestureReloadPistolHeavy02", "Gesture"};
			GestureReloadFlaregun[] = {"GestureReloadFlaregun", "Gesture"};
			GestureReloadSMG_01[] = {"GestureReloadSMG_01", "Gesture"};
			GestureReloadSDAR[] = {"GestureReloadSDAR", "Gesture"};
			GestureReloadDMR[] = {"GestureReloadDMR", "Gesture"};
			GestureReloadM4SSAS[] = {"GestureReloadM4SSAS", "Gesture"};
			GestureMountMuzzle[] = {"GestureMountMuzzle", "Gesture"};
			GestureDismountMuzzle[] = {"GestureDismountMuzzle", "Gesture"};
			grabCarried = "AinjPfalMstpSnonWrflDnon_carried_Up";
			crossbow_reload[] = {"crossbow_reload", "Gesture"};

			BP_Jump[] = {"BP_Jump", "Gesture"};
			BP_Zomb_Act_Attack1[] = {"BP_Zomb_Attack1","Gesture"};
			BP_Zomb_Act_Attack2[] = {"BP_Zomb_Attack2","Gesture"};

			BP_Act_Man_Drink_Erc_x3_Gesture[] = {"BP_Drink_Erc_x3_Gesture", "Gesture"};
			BP_Act_Man_Eat_Erc_x3_Gesture[] = {"BP_Eat_Erc_x3_Gesture", "Gesture"};
		};

/*
		class RifleStandActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg";
		};
		class RifleCrouchActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "";
		};
		class RifleKneelActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "";
		};
		class RifleLowStandActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg";
		};
		class RifleAdjustStandBaseActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg";
		};

		//Pistol
		class PistolStandActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg";
		};
		class PistolLowStandActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg";
		};
		class PistolStandActionsNoAdjust{
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg";
		};
		class PistolLowStandActionsNoAdjust{
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg";
		};
		class PistolKneelActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "";
		};
		class PistolLowKneelActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "";
		};
		class PistolProneActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg = "";
		};

		//Launcher
		class LauncherStandActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg";
		};
		class LauncherKneelActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg = "";
		};
		class LauncherProneActions {
			MOCAP_Man_Act_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg = "";
		};

		//Melee
		class CivilStandActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct","Gesture"};
			MOCAP_Man_Act_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg";
		};
		class CivilKneelActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct","Gesture"};
		};
		class CivilProneActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		};
		class CivilStandSurrenderActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		};
		class CivilSiTactions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		};
		class CivilStandSaluteActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		};
		class CivilEvasiveActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct","Gesture"};
		};
		class CivilRunActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct","Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct","Gesture"};
		};

*/

		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			crossbow_reload[] = {"crossbow_reload_prone", "Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			crossbow_reload[] = {"crossbow_reload_prone", "Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			crossbow_reload[] = {"crossbow_reload_prone", "Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			crossbow_reload[] = {"crossbow_reload_prone", "Gesture"};
		};

	};
};

class CfgMovesMaleSdr: CfgMovesBasic 
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	
	class States  
	{	
		class TransAnimBase; //extern
		class TransAnimBase_noIK;  //extern
		class AidlPknlMstpSrasWlnrDnon_G0S; //extern
		class AidlPpneMstpSrasWrflDnon_G0S;  //extern
		class AidlPercMstpSrasWlnrDnon_G0S; //extern
		class AidlPpneMstpSrasWpstDnon_G0S;  //extern
		class AadjPpneMstpSrasWpstDup;  //extern


		class AmovPercMstpSlowWrflDnon; //stay weap low
		class AmovPercMstpSrasWrflDnon; //stay weap up
		//class AmovPknlMstpSlowWrflDnon; //kneel weap low
		class AmovPknlMstpSrasWrflDnon; //kneel weap up
		class AmovPsitMstpSrasWrflDnon; //sit weap
		class AmovPercMstpSrasWrflDnon_Salute; //salute weap up
		class AmovPercMstpSlowWrflDnon_Salute; //salute weap low
		class AmovPercMstpSlowWpstDnon; //stay pistol low
		class AmovPercMstpSrasWpstDnon; //stay pistol up
		class AmovPknlMstpSlowWpstDnon; //kneel pistol low
		class AmovPknlMstpSrasWpstDnon; //kneel pistol up
		class amovpsitmstpsnonwpstdnon_ground; //sit pistol
		class AmovPercMstpSrasWpstDnon_Salute; //salute pistol up
		class AmovPercMstpSnonWnonDnon; //stay no weapon
		class AmovPknlMstpSnonWnonDnon; //kneel no weapon
		class AmovPpneMstpSnonWnonDnon; //prone no weapon
		class AmovPsitMstpSnonWnonDnon_ground; //sit no weapon
		class amovpercmstpsnonwnondnon_salute; //salute no weapon
		class AmovPercMstpSsurWnonDnon; //Surrender no weapon
		//class AmovPercMstpSrasWlnrDnon; //stay launcher up
		class AmovPercMstpSlowWlnrDnon; //stay launcher low
		class AmovPknlMstpSrasWlnrDnon; //kneel launcher
		//class AmovPknlMstpSnonWnonDf; 	//kneel no weapon forward
		class AmovPercMstpSlowWrflDnon_gear;
		class AovrPercMstpSnonWnonDf; //vault from object

		class DeadState;


		
		class AadjPpneMstpSrasWrflDup: AidlPpneMstpSrasWrflDnon_G0S 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\pne\stp\ras\rfl\AadjPpneMstpSrasWrflDup.rtm";
			canBlendStep = 0;
			actions = "RifleAdjustFProneActions";
			speed = 0.084746;
			adjstance = "u";
			soundEnabled = 0;
			camShakeFire = 0.700000;
			ConnectTo[] = {"AadjPpneMstpSrasWrflDup", 0.020000, "AadjPpneMstpSrasWrflDup_AmovPpneMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDup_AadjPknlMstpSrasWrflDdown", 0.020000, "AadjPpneMstpSrasWrflDup_turnL", 0.020000, "AadjPpneMstpSrasWrflDup_turnR", 0.020000};
			InterpolateTo[] = {"AadjPpneMstpSrasWrflDup_AmovPpneMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDup_AadjPknlMstpSrasWrflDdown", 0.020000, "AadjPpneMstpSrasWrflDup_turnL", 0.020000, "AadjPpneMstpSrasWrflDup_turnR", 0.020000, "AadjPpneMwlkSrasWrflDup_l", 0.020000, "AadjPpneMwlkSrasWrflDup_r", 0.020000, "AadjPpneMwlkSrasWrflDup_f", 0.020000, "AadjPpneMwlkSrasWrflDup_b", 0.020000, "Unconscious", 0.100000};
		};
		
		class AadjPpneMstpSrasWpstDdown: AadjPpneMstpSrasWpstDup 
		{
			enableOptics = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\pne\stp\ras\pst\AadjPpneMstpSrasWpstDdown.rtm";
			actions = "PistolAdjustBProneActions";
			speed = 0.365854;
			adjstance = "d";
			ConnectTo[] = {"AadjPpneMstpSrasWpstDdown", 0.020000, "AadjPpneMstpSrasWpstDdown_AmovPpneMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDdown_turnL", 0.020000, "AadjPpneMstpSrasWpstDdown_turnR", 0.020000};
			InterpolateTo[] = {"AadjPpneMstpSrasWpstDdown_AmovPpneMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDdown_turnL", 0.020000, "AadjPpneMstpSrasWpstDdown_turnR", 0.020000, "Unconscious", 0.100000};
		};
		
		class AadjPpneMstpSrasWpstDright: AidlPpneMstpSrasWpstDnon_G0S 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\pne\stp\ras\pst\AadjPpneMstpSrasWpstDright.rtm";
			actions = "PistolAdjustRProneActions";
			speed = 0.084746;
			adjstance = "r";
			enableOptics = 1;
			ConnectTo[] = {"AadjPpneMstpSrasWpstDright", 0.020000, "AadjPpneMstpSrasWpstDright_AmovPpneMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDright_AmovPercMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDright_AmovPknlMstpSrasWpstDnon", 0.020000};
			InterpolateTo[] = {"AadjPpneMstpSrasWpstDright_AmovPpneMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDright_AmovPercMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDright_AmovPknlMstpSrasWpstDnon", 0.020000, "AadjPpneMwlkSrasWpstDright_l", 0.020000, "AadjPpneMwlkSrasWpstDright_r", 0.020000, "Unconscious", 0.100000};
		};
		
		class AadjPpneMstpSrasWpstDleft: AidlPpneMstpSrasWpstDnon_G0S 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\pne\stp\ras\pst\AadjPpneMstpSrasWpstDleft.rtm";
			actions = "PistolAdjustLProneActions";
			speed = 0.084746;
			adjstance = "l";
			enableOptics = 1;
			ConnectTo[] = {"AadjPpneMstpSrasWpstDleft", 0.020000, "AadjPpneMstpSrasWpstDleft_AmovPpneMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDleft_AmovPercMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDleft_AmovPknlMstpSrasWpstDnon", 0.020000};
			InterpolateTo[] = {"AadjPpneMstpSrasWpstDleft_AmovPpneMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDleft_AmovPercMstpSrasWpstDnon", 0.020000, "AadjPpneMstpSrasWpstDleft_AmovPknlMstpSrasWpstDnon", 0.020000, "AadjPpneMwlkSrasWpstDleft_l", 0.020000, "AadjPpneMwlkSrasWpstDleft_r", 0.020000, "Unconscious", 0.100000};
		};
		
		class AadjPpneMstpSrasWrflDdown: AadjPpneMstpSrasWrflDup 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\pne\stp\ras\rfl\AadjPpneMstpSrasWrflDdown.rtm";
			aimPrecision = 0.500000;
			speed = 0.365854;
			actions = "RifleAdjustBProneActions";
			adjstance = "d";
			enableOptics = 1;
			soundEnabled = 0;
			ConnectTo[] = {"AadjPpneMstpSrasWrflDdown", 0.020000, "AadjPpneMstpSrasWrflDdown_turnL", 0.020000, "AadjPpneMstpSrasWrflDdown_turnR", 0.020000, "AadjPpneMstpSrasWrflDdown_AmovPpneMstpSrasWrflDnon", 0.020000};
			InterpolateTo[] = {"AadjPpneMstpSrasWrflDdown_AmovPpneMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDdown_turnL", 0.020000, "AadjPpneMstpSrasWrflDdown_turnR", 0.020000, "Unconscious", 0.100000};
		};
		
		class AadjPpneMstpSrasWrflDleft: AidlPpneMstpSrasWrflDnon_G0S //enable prone optics
		{
			aimPrecision = 0.500000;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\pne\stp\ras\rfl\AadjPpneMstpSrasWrflDleft.rtm";
			actions = "RifleAdjustLProneActions";
			speed = 0.084746;
			adjstance = "l";
			enableOptics = 1;
			soundEnabled = 0;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Ppne_Adjl.p3d";
			ConnectTo[] = {"AadjPpneMstpSrasWrflDleft", 0.020000, "AadjPpneMstpSrasWrflDleft_AmovPpneMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDleft_AmovPercMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDleft_AmovPknlMstpSrasWrflDnon", 0.020000};
			InterpolateTo[] = {"AadjPpneMstpSrasWrflDleft_AmovPpneMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDleft_AmovPercMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDleft_AmovPknlMstpSrasWrflDnon", 0.020000, "AadjPpneMwlkSrasWrflDleft_l", 0.020000, "AadjPpneMwlkSrasWrflDleft_r", 0.020000, "Unconscious", 0.100000};
		};
		
		class AadjPpneMstpSrasWrflDright: AidlPpneMstpSrasWrflDnon_G0S //enable prone optics
		{  
			aimPrecision = 0.500000;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\pne\stp\ras\rfl\AadjPpneMstpSrasWrflDright.rtm";
			actions = "RifleAdjustRProneActions";
			speed = 0.084746;
			adjstance = "r";
			enableOptics = 1;
			soundEnabled = 0;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Ppne_Adjr.p3d";
			ConnectTo[] = {"AadjPpneMstpSrasWrflDright", 0.020000, "AadjPpneMstpSrasWrflDright_AmovPpneMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDright_AmovPercMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDright_AmovPknlMstpSrasWrflDnon", 0.020000};
			InterpolateTo[] = {"AadjPpneMstpSrasWrflDright_AmovPpneMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDright_AmovPercMstpSrasWrflDnon", 0.020000, "AadjPpneMstpSrasWrflDright_AmovPknlMstpSrasWrflDnon", 0.020000, "AadjPpneMwlkSrasWrflDright_l", 0.020000, "AadjPpneMwlkSrasWrflDright_r", 0.020000, "Unconscious", 0.100000};
		};		
		
		class amovpercmstpsraswlnrdnon: AmovPknlMstpSrasWlnrDnon 
		{
			aimPrecision = 1.000000;
			variantsPlayer[] = {"AidlPercMstpSrasWlnrDnon_G01", 0.500000, "AidlPercMstpSrasWlnrDnon_G02", 0.500000};
			variantAfter[] = {6, 6, 6};
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon.rtm";
			duty = -0.200000;
			actions = "LauncherStandActions";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			aiming = "aimingDefault";
			ConnectTo[] = {"LauncherReloadStand", 0.020000, "amovpercmstpsraswlnrdnon_amovpercmstpSlowwlnrdnon", 0.010000, "amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon", 0.010000, "amovpercmstpsraswlnrdnon_amovpknlmstpsraswlnrdnon", 0.020000, "AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon", 0.020000, "AmovPercMstpSrasWlnrDnon_AmovPpneMstpSrasWlnrDnon", 0.020000, "AswmPercMstpSnonWnonDnon", 0.300000, "aidlpercmstpsraswlnrdnon_S", 0.020000, "amovpercmstpsraswlnrdnon_turnl", 0.020000, "amovpercmstpSraswlnrdnon_turnr", 0.020000, "amovpercmstpsraswlnrdnon_amovpercmstpsnonwnondnon", 0.010000, "AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon", 0.020000, "amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon", 0.020000, "ReloadRPG", 0.200000, "amovpercmstpsraswlnrdnon", 0.020000};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon_turnl", 0.020000, "amovpercmstpSraswlnrdnon_turnr", 0.020000, "AmovPercMwlkSrasWlnrDf", 0.020000, "AovrPercMstpSrasWlnrDf", 0.010000, "AmovPercMevaSlowWlnrDf", 0.020000, "AmovPercMwlkSrasWlnrDfl", 0.020000, "AmovPercMwlkSrasWlnrDl", 0.020000, "AmovPercMwlkSrasWlnrDbl", 0.020000, "AmovPercMwlkSrasWlnrDb", 0.020000, "AmovPercMwlkSrasWlnrDbr", 0.020000, "AmovPercMwlkSrasWlnrDr", 0.020000, "AmovPercMwlkSrasWlnrDfr", 0.020000, "AmovPercMrunSrasWlnrDf", 0.020000, "AmovPercMrunSrasWlnrDfl", 0.020000, "AmovPercMrunSrasWlnrDl", 0.020000, "AmovPercMrunSrasWlnrDbl", 0.020000, "AmovPercMrunSrasWlnrDb", 0.020000, "AmovPercMrunSrasWlnrDbr", 0.020000, "AmovPercMrunSrasWlnrDr", 0.020000, "AmovPercMrunSrasWlnrDfr", 0.020000, "AmovPercMtacSrasWlnrDf", 0.020000, "AmovPercMtacSrasWlnrDfl", 0.020000, "AmovPercMtacSrasWlnrDl", 0.020000, "AmovPercMtacSrasWlnrDbl", 0.020000, "AmovPercMtacSrasWlnrDb", 0.020000, "AmovPercMtacSrasWlnrDbr", 0.020000, "AmovPercMtacSrasWlnrDr", 0.020000, "AmovPercMtacSrasWlnrDfr", 0.020000, "Unconscious", 0.100000, "HaloFreeFall_non", 10.200000, "AmovPercMstpSrasWlnrDnon_AinvPercMstpSrasWlnrDnon", 0.020000, "AmovPercMstpSrasWlnrDnon_AinvPercMstpSrasWlnrDnon_Putdown", 0.020000, "AfalPercMstpSrasWlnrDnon", 0.025000, "ReloadRPGKneel", 0.050000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class AmovPercMrunSlowWlnrDf: AidlPknlMstpSrasWlnrDnon_G0S 
		{
			actions = "LauncherStandRunFActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDf";
			soundEdge[] = {0.250000, 0.500000, 0.750000, 1};
			speed = 0.910750;
			duty = 0.000000;
			canPullTrigger = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leaningFactorBeg = 0.750000;
			leaningFactorEnd = 0.750000;
			soundEnabled = 1;
			soundOverride = "run";
			enableMissile = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			relSpeedMin = 0.500000;
			relSpeedMax = 1.100000;
			Walkcycles = 2;
			weaponLowered = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious", 0.010000, "AmovPknlMrunSrasWlnrDf", 0.030000, "AmovPercMrunSlowWlnrDfl", 0.025000, "AmovPercMrunSlowWlnrDfr", 0.025000, "amovpercmstpSlowwlnrdnon", 0.020000, "AmovPercMwlkSlowWlnrDf", 0.025000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class AmovPknlMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon //crouch anim
		{ 
			variantsPlayer[] = {"AidlPknlMstpSlowWrflDnon_G01", 0.250000, "AidlPknlMstpSlowWrflDnon_G02", 0.250000, "AidlPknlMstpSlowWrflDnon_G03", 0.250000};
			actions = "RifleKneelLowActions";
			duty = -0.600000;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\low\rfl\AmovPknlMstpSlowWrflDnon.rtm";
			visibleSize = 0.300122;
			aimprecision = 0.325000;
			camShakeFire = 0.500000;
			collisionShape = "A3\anims_f\data\geom\sdr\Pknl_Wrfl_Low.p3d";
			interpolationSpeed = 4.000000;
			ConnectTo[] = {"AidlPknlMstpSlowWrflDnon_G0S", 0.010000, "AmovPknlMstpSlowWrflDnon_gear", 0.020000, "AmovPknlMstpSlowWrflDnon", 0.020000, "AmovPknlMstpSlowWrflDnon_diary", 0.020000, "AmovPknlMstpSrasWrflDnon_diary", 0.020000, "AmovPercMstpSrasWrflDnon_diary", 0.020000, "AmovPercMstpSlowWrflDnon_gear", 0.020000, "AmovPercMstpSlowWrflDnon_diary", 0.020000, "AidlPknlMstpSlowWrflDnon_AI", 0.100000, "AmovPknlMstpSlowWrflDnon_turnL", 0.020000, "AmovPknlMstpSlowWrflDnon_turnR", 0.020000, "amovpknlmstpSlowwrfldnon_amovpknlmstpsraswrfldnon", 0.010000, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.010000, "AmovPknlMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon", 0.010000};
			InterpolateTo[] = {"AidlPknlMstpSlowWrflDnon_AI", 0.100000, "AmovPknlMstpSlowWrflDnon_turnL", 0.020000, "AmovPknlMstpSlowWrflDnon_turnR", 0.020000, "AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.020000, "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon_Putdown", 0.020000, "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon", 0.020000, "AmovPknlMwlkSlowWrflDf", 0.020000, "AmovPknlMwlkSlowWrflDfl", 0.020000, "AmovPknlMwlkSlowWrflDl", 0.020000, "AmovPknlMwlkSlowWrflDbl", 0.020000, "AmovPknlMwlkSlowWrflDb", 0.020000, "AmovPknlMwlkSlowWrflDbr", 0.020000, "AmovPknlMwlkSlowWrflDr", 0.020000, "AmovPknlMwlkSlowWrflDfr", 0.020000, "AmovPknlMrunSlowWrflDf", 0.010000, "AmovPknlMrunSlowWrflDfl", 0.020000, "AmovPknlMrunSlowWrflDl", 0.020000, "AmovPknlMrunSlowWrflDbl", 0.020000, "AmovPknlMrunSlowWrflDb", 0.020000, "AmovPknlMrunSlowWrflDbr", 0.020000, "AmovPknlMrunSlowWrflDr", 0.020000, "AmovPknlMrunSlowWrflDfr", 0.020000, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon", 0.020000, "AovrPercMstpSlowWrflDf", 0.020000, "Unconscious", 0.010000, "AmovPknlMstpSlowWrflDnon_relax", 10.010000, "AmovPknlMtacSlowWrflDf", 0.020000, "AmovPknlMtacSlowWrflDfl", 0.020000, "AmovPknlMtacSlowWrflDl", 0.020000, "AmovPknlMtacSlowWrflDbl", 0.020000, "AmovPknlMtacSlowWrflDb", 0.020000, "AmovPknlMtacSlowWrflDbr", 0.020000, "AmovPknlMtacSlowWrflDr", 0.020000, "AmovPknlMtacSlowWrflDfr", 0.020000, "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1", 0.010000, "Acts_CrouchGetLowGesture", 1.000000};
		};
		
		class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon //prone anim
		{ 
			variantsPlayer[] = {"AidlPpneMstpSrasWrflDnon_G01_player", 0.400000, "AidlPpneMstpSrasWrflDnon_G02_player", 0.300000, "AidlPpneMstpSrasWrflDnon_G03_player", 0.300000};
			variantsAI[] = {};
			actions = "RifleProneActions";
			duty = -0.800000;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon.rtm";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Ppne.p3d";
			onLandBeg = 1;
			onLandEnd = 1;
			visibleSize = 0.100123;
			aimprecision = 0.020000;
			camShakeFire = 0.200000;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundOverride = "crawl";
			headBobStrength = 0.154229;
			interpolationSpeed = 2.500000;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_injured", 0.100000, "AmovPpneMstpSrasWrflDnon", 0.020000, "AmovPpneMstpSrasWrflDnon_turnL", 0.020000, "AmovPpneMstpSrasWrflDnon_turnR", 0.020000, "WeaponMagazineReloadProne", 0.100000, "AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon", 0.020000, "AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.020000, "AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon", 0.020000, "AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon", 0.020000, "AmovPpneMstpSrasWrflDnon_AmovPpneMstpSnonWnonDnon", 0.020000, "AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl", 0.020000, "AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr", 0.020000, "AwopPpneMstpSgthWrflDnon_Start", 0.100000, "AwopPpneMstpSgthWrflDnon_End", 0.100000, "AidlPpneMstpSrasWrflDnon_AI", 0.100000, "AmovPpneMstpSrasWrflDnon_healed", 0.020000, "AmovPpneMstpSrasWrflDnon_AadjPpneMstpSrasWrflDdown", 0.020000, "AmovPpneMstpSrasWrflDnon_AadjPpneMstpSrasWrflDup", 0.020000, "AmovPpneMstpSrasWrflDnon_AadjPpneMstpSrasWrflDright", 0.020000, "AmovPpneMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft", 0.020000};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_turnL", 0.020000, "AmovPpneMstpSrasWrflDnon_turnR", 0.020000, "AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon", 0.020000, "AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.020000, "AidlPpneMstpSrasWrflDnon_AI", 0.020000, "AmovPpneMstpSrasWrflDnon_AinvPpneMstpSrasWrflDnon", 0.020000, "AmovPpneMstpSrasWrflDnon_AinvPpneMstpSrasWrflDnon_Putdown", 0.020000, "AwopPpneMstpSgthWrflDnon_Fast_Start", 0.020000, "AinvPpneMstpSlayWrflDnon_medic", 0.020000, "AmovPpneMrunSlowWrflDf", 0.020000, "AmovPpneMevaSlowWrflDf", 0.020000, "AmovPpneMrunSlowWrflDfl", 0.020000, "AmovPpneMrunSlowWrflDl", 0.020000, "AmovPpneMrunSlowWrflDbl", 0.020000, "AmovPpneMrunSlowWrflDb", 0.020000, "AmovPpneMrunSlowWrflDbr", 0.020000, "AmovPpneMrunSlowWrflDr", 0.020000, "AmovPpneMrunSlowWrflDfr", 0.020000, "AmovPpneMsprSlowWrflDf", 0.020000, "AmovPpneMsprSlowWrflDbl", 0.020000, "AmovPpneMsprSlowWrflDl", 0.020000, "AmovPpneMsprSlowWrflDr", 0.020000, "AmovPpneMsprSlowWrflDbr", 0.020000, "AmovPpneMsprSlowWrflDb", 0.020000, "AmovPpneMsprSlowWrflDfl", 0.020000, "AmovPpneMsprSlowWrflDfr", 0.020000, "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf", 0.050000, "Unconscious", 0.010000, "AmovPpneMstpSrasWrflDnon_relax", 0.010000, "AmovPpneMstpSrasWrflDnon_AadjPpneMstpSrasWrflDdown", 0.020000, "AmovPpneMstpSrasWrflDnon_AadjPpneMstpSrasWrflDup", 0.020000, "AmovPpneMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft", 0.020000, "AmovPpneMstpSrasWrflDnon_AadjPpneMstpSrasWrflDright", 0.020000, "RifleReloadProneMk20", 0.020000, "RifleReloadProneMX", 0.020000, "RifleReloadProneMXCompact", 0.020000, "RifleReloadProneMXSniper", 0.020000, "RifleReloadProneTRG", 0.020000, "RifleReloadProneTRGUGL", 0.020000, "RifleReloadProneM200", 0.020000, "RifleReloadProneLRR", 0.020000, "RifleReloadProneEBR", 0.020000, "RifleReloadProneSMG_02", 0.020000, "RifleReloadProneSMG_03", 0.020000, "RifleReloadProneSDAR", 0.020000, "RifleReloadProneDMR", 0.020000, "RifleReloadProneGM6", 0.020000, "RifleReloadProneSMG_01", 0.020000, "RifleReloadProneM4SSAS", 0.020000, "RifleReloadProneKatiba", 0.020000, "AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.020000, "AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.020000, "AfalPpneMstpSrasWrflDnon", 0.025000};
		};
		
		class AmovPercMevaSlowWlnrDf: AmovPercMrunSlowWlnrDf 
		{
			actions = "LauncherStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\spr\low\lnr\AmovPercMsprSlowWlnrDf";
			duty = 0.000000;
			speed = 0.907401;
			canPullTrigger = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			soundOverride = "sprint";
			InterpolateTo[] = {"Unconscious", 0.010000, "AmovPercMrunSrasWlnrDf", 0.020000, "AmovPknlMrunSrasWlnrDf", 0.025000, "AmovPercMevaSlowWlnrDfr", 0.025000, "AmovPercMevaSlowWlnrDfl", 0.025000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class amovpercmstpsraswlnrdnon_amovpercmstpsnonwnondnon: AmovPercMstpSnonWnonDnon 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsnonwnondnon.rtm";
			speed = 0.710959;
			disableWeapons = 1;
			actions = "CivilStandActions";
			interpolationRestart = 2;
			soundOverride = "launcher_to_unarmed";
			rightHandIKCurve[] = {0.342000, 1, 0.420000, 0};
			leftHandIKCurve[] = {0.642000, 1, 0.710000, 0};
			weaponIK = 4;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.850000;
			reverse = "amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon";
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon";
			speed = 1.457144;
			canBlendStep = 0;
			onLandBeg = 1;
			interpolationRestart = 1;
			leftHandIKBeg = 0;
			reverse = "AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon";
			leftHandIKCurve[] = {0.000000, 1, 0.058800, 0, 0.745000, 0, 0.882300, 1};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			duty = 0.400000;
			relSpeedMin = 0.500000;
			relSpeedMax = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			minPlayTime = 0.650000;
			soundOverride = "adjust_prone_to_stand";
			soundEnabled = 1;
			soundEdge[] = {0.010000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};

		class amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon: TransAnimBase 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon.rtm";
			disableWeapons = 1;
			actions = "LauncherStandActions";
			showHandGun = 1;
			speed = 1.734400;
			interpolationRestart = 2;
			weaponIK = 2;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			enableOptics = 2;
			soundOverride = "handgun_to_launcher";
			ConnectTo[] = {"amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end", 0.020000};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon_end", 0.020000, "Unconscious", 0.100000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end: TransAnimBase 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end.rtm";
			disableWeapons = 1;
			actions = "LauncherStandActions";
			speed = 0.731310;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.414000, 0, 0.493000, 1};
			leftHandIKCurve[] = {0.132000, 0, 0.257000, 1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			enableOptics = 2;
			weaponIK = 4;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.020000};
			InterpolateTo[] = {"Unconscious", 0.010000, "amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon", 0.020000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon: TransAnimBase 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon.rtm";
			disableWeapons = 1;
			actions = "PistolStandActions";
			speed = 1.303100;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			soundOverride = "launcher_to_handgun";
			rightHandIKCurve[] = {0.639000, 1, 0.778000, 0};
			leftHandIKCurve[] = {0.819000, 1, 0.917000, 0};
			weaponIK = 4;
			enableOptics = 2;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon_end", 0.020000};
			InterpolateTo[] = {"amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end", 0.020000, "Unconscious", 0.100000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon: TransAnimBase 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon.rtm";
			actions = "RifleStandActions";
			speed = 0.960000;
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			leaningFactorEnd = 1;
			leaningFactorBeg = 0.500000;
			soundOverride = "launcher_to_rifle";
			rightHandIKCurve[] = {0.245000, 1, 0.449000, 0};
			leftHandIKCurve[] = {0.643000, 1, 0.724000, 0};
			weaponIK = 4;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon_end", 0.010000};
			InterpolateTo[] = {"Unconscious", 0.010000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon: TransAnimBase_noIK 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\rfl\amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon.rtm";
			actions = "LauncherStandActions";
			speed = 1.170588;
			disableWeapons = 1;
			interpolationRestart = 2;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0.500000;
			soundOverride = "rifle_to_launcher";
			rightHandIKCurve[] = {0.136000, 1, 0.288000, 0};
			leftHandIKCurve[] = {0.500000, 1, 0.773000, 0};
			weaponIK = 1;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon_end", 0.020000};
			InterpolateTo[] = {"Unconscious", 0.010000, "amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon_end", 0.020000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};

		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon: TransAnimBase 
		{
			actions = "RifleStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon";
			speed = 0.95;//0.728571
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			canPullTrigger = 0;
			soundOverride = "unarmed_to_rifle";
			rightHandIKCurve[] = {0.520000, 0, 0.578000, 1};
			leftHandIKCurve[] = {0.780000, 0, 0.884000, 1};
			weaponIK = 1;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.020000};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon", 0.020000, "Unconscious", 0.010000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWrflDnon: TransAnimBase 
		{
			actions = "RifleKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWrflDnon";
			speed = 0.761530;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			canPullTrigger = 0;
			soundOverride = "unarmed_to_rifle";
			rightHandIKCurve[] = {0.515625, 0, 0.593750, 1};
			leftHandIKCurve[] = {0.850000, 0, 0.920000, 1};
			weaponIK = 1;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.020000};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSnonWnonDnon", 0.020000, "Unconscious", 0.010000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon: amovpercmstpsraswlnrdnon 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon.rtm";
			disableWeapons = 1;
			speed = 0.883871;
			actions = "LauncherStandActions";
			interpolationRestart = 2;
			canPullTrigger = 0;
			soundOverride = "unarmed_to_launcher";
			rightHandIKCurve[] = {0.420000, 0, 0.550000, 1};
			leftHandIKCurve[] = {0.180000, 0, 0.240000, 1};
			weaponIK = 4;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.850000;
			reverse = "amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon";
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon: AmovPknlMstpSrasWlnrDnon 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\non\non\amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon.rtm";
			disableWeapons = 1;
			speed = 0.483871;
			actions = "LauncherKneelActions";
			interpolationRestart = 2;
			canPullTrigger = 0;
			soundOverride = "unarmed_to_launcher";
			rightHandIKCurve[] = {0.420000, 0, 0.550000, 1};
			leftHandIKCurve[] = {0.180000, 0, 0.240000, 1};
			weaponIK = 4;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.850000;
			reverse = "amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon";
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon_end: TransAnimBase 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\rfl\amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon_end.rtm";
			actions = "LauncherStandActions";
			speed = 1.111110;
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			leaningFactorEnd = 1;
			leaningFactorBeg = 0.500000;
			rightHandIKCurve[] = {0.252000, 0, 0.411000, 1};
			leftHandIKCurve[] = {0.093000, 0, 0.243000, 1};
			weaponIK = 4;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.010000};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon", 0.020000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class amovpknlmstpsraswlnrdnon_amovpercmstpsraswlnrdnon: TransAnimBase 
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\lnr\amovpknlmstpsraswlnrdnon_amovpercmstpsraswlnrdnon.rtm";
			actions = "LauncherStandActions";
			speed = 2.053846;
			interpolationRestart = 2;
			leaningFactorBeg = 0.500000;
			leaningFactorEnd = 0.500000;
			weaponIK = 4;
			duty = 0.800000;
			relSpeedMin = 0.600000;
			reverse = "AmovPercMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
			soundOverride = "adjust_kneel_to_stand";
			soundEnabled = 1;
			soundEdge[] = {0.010000};
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.020000};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon_amovpknlmstpsraswlnrdnon", 0.020000, "Unconscious", 0.100000};
			limitGunMovement = 1;//allow body bending for aim up\down
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon 
		{
			relSpeedMin = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.550000;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon.rtm";
			speed = -0.500000;
			interpolationRestart = 2;
			disableWeapons = 1;
			headBobStrength = 0.112438;
			reverse = "AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon";
			limitGunMovement = 1;//allow body bending for aim up\down
		};


		//MOCAP Melee anims
        class MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg : AmovPercMstpSrasWrflDnon {
            file = "\breakingpoint_anim\player\Strikes\MOCAP_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg.rtm";
            looped = 0;
            speed = 0.7;
			duty = 0.7;
            mask = "BodyFull";
            leftHandIKBeg = true;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = true;
            weaponIK = 1;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 0.2;
            headBobMode = 0;
            headBobStrength = 0;
			canPullTrigger = 1;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWrflDnon", 9.020000, "AmovPercMstpSlowWrflDnon", 9.020000, "aadjpercmstpsraswrflddown_amovpercmstpsraswrfldnon", 9.020000, "aadjpercmstpsraswrfldup_amovpercmstpsraswrfldnon", 9.020000, "aadjpercmstpsraswrfldright_amovpercmstpsraswrfldnon", 9.020000,"aadjpercmstpsraswrfldleft_amovpercmstpsraswrfldnon", 9.020000};
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.020000};
			//InterpolateTo[] = {"Unconscious",0.01};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
        class MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg : AmovPercMstpSrasWpstDnon {
            file = "\breakingpoint_anim\player\Strikes\MOCAP_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg.rtm";
            looped = 0;
            speed = 0.8;
			duty = 0.7;
            mask = "BodyFull";
            leftHandIKBeg = true;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = true;
            weaponIK = 0;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 0.2;
            headBobMode = 0;
            headBobStrength = 0;
			canPullTrigger = 1;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWpstDnon", 9.020000, "AmovPercMstpSlowWpstDnon", 9.020000, "aadjpercmstpsraswpstddown_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdup_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdright_amovpercmstpsraswpstdnon", 9.020000,"aadjpercmstpsraswpstdleft_amovpercmstpsraswpstdnon", 9.020000};
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon",0.020000};
			//InterpolateTo[] = {"Unconscious",0.01};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
		};
        class MOCAP_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg : AmovPercMstpSrasWlnrDnon {
            file = "\breakingpoint_anim\player\Strikes\MOCAP_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg.rtm";
			looped = 0;
            speed = 0.8;
			duty = 0.7;
            mask = "BodyFull";
			leftHandIKBeg = true;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = true;
            weaponIK = 4;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 0.2;
            headBobMode = 0;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWlnrDnon", 9.020000, "AmovPercMstpSlowWlnrDnon", 9.020000 /*"aadjpercmstpsraswpstddown_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdup_amovpercmstpsraswpstdnon", 9.020000, "aadjpercmstpsraswpstdright_amovpercmstpsraswpstdnon", 9.020000,"aadjpercmstpsraswpstdleft_amovpercmstpsraswpstdnon", 9.020000*/};
			ConnectTo[] = {"AmovPercMstpSrasWlnrDnon",0.020000, "AmovPercMstpSlowWlnrDnon", 0.020000};
			//InterpolateTo[] = {"Unconscious",0.01};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
		};
        class MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg : AmovPercMstpSnonWnonDnon {
            file = "\breakingpoint_anim\player\Strikes\MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg.rtm";
			looped = 0;
            speed = 0.7;
			duty = 0.7;
            mask = "BodyFull";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
            weaponIK = 0;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 0.3;
            headBobMode = 0;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSnonWnonDnon", 9.020000};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.020000};
			//InterpolateTo[] = {"Unconscious",0.01};
			soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
		};


	};	
};

class CfgGesturesMale 
{
	skeletonName = "OFP2_ManSkeleton";
	
	class ManActions {};
	
	class Actions 
	{
		class NoActions 
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	
	class Default 
	{
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 1;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	
	class States 
	{
		
		class GestureSwing: Default
		{
			file = "\breakingpoint_weapons\anim\hatchet_swing.rtm";
			looped = 0;
			speed = 2.78205;
			mask = "handsWeapon2";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class GestureSwing2: Default
		{
			file = "\breakingpoint_weapons\anim\hatchet_swing.rtm";
			looped = 0;
			speed = 1.18205;
			mask = "handsWeapon2";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class GestureSwing3: Default
		{
			file = "\breakingpoint_weapons\anim\hatchet_swing.rtm";
			looped = 0;
			speed = 2.58205;
			mask = "handsWeapon2";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class GestureStab: Default
		{
			file = "\breakingpoint_weapons\anim\Bayonet_Stab.rtm";
			looped = 0;
			speed = 2.98205;
			mask = "handsWeapon1";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class GestureMelee: Default
		{
			file = "\breakingpoint_weapons\anim\Rifle_Melee.rtm";
			looped = 0;
			speed = 2.58205;
			mask = "handsWeapon1";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};

		class crossbow_reload: Default
		{
			file="breakingpoint_weapons\anim\crossbow_reload.rtm";
			looped=0;
			speed=0.200000;
			mask="handsWeapon";
			headBobStrength=0.200000;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=0;
			rightHandIKCurve[]={};
			leftHandIKBeg=1;
			leftHandIKEnd=0;
			leftHandIKCurve[]={};
		};
		class crossbow_reload_prone: Default
		{
			file="breakingpoint_weapons\anim\crossbow_reload_prone.rtm";
			looped=0;
			speed=0.250000;
			mask="handsWeapon";
			headBobStrength=0.200000;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=0;
			rightHandIKCurve[]={};
			leftHandIKBeg=1;
			leftHandIKEnd=0;
			leftHandIKCurve[]={};
		};
		class TEN_GestureStandingRiflePistolSwitch: Default {
			speed = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon.rtm";
			mask = "handsWeapon"; // upperTorso
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = {0.759,1,0.929,0};
			rightHandIKCurve[] = {0.17,1,0.298,0};
			weaponIK = 1;
			looped = 0;
		};

		class TEN_GestureStandingRifleLauncherSwitch: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\rfl\amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon.rtm";
			mask = "launcher";
			speed = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0.5;
			rightHandIKCurve[] = {0.136,1,0.288,0};
			leftHandIKCurve[] = {0.5,1,0.773,0};
			weaponIK = 1;
			looped = 0;
		};

		class TEN_GestureStandingPistolRifleSwitch: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon";
			speed = 1;
			disableWeapons = 1;
			mask = "handsWeapon"; // upperTorso
			looped = 0;
		};

		class TEN_GestureStandingPistolLauncherSwitch: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon.rtm";
			mask = "launcher";
			speed = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			weaponIK = 2;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			looped = 0;
		};

		class TEN_GestureStandingLauncherRifleSwitch: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon.rtm";
			mask = "launcher";
			speed = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			leaningFactorEnd = 1;
			leaningFactorBeg = 0.5;
			rightHandIKCurve[] = {0.245,1,0.449,0};
			leftHandIKCurve[] = {0.643,1,0.724,0};
			weaponIK = 4;
			looped = 0;
		};

		class TEN_GestureStandingLauncherPistolSwitch: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon.rtm";
			mask = "launcher";
			speed = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			rightHandIKCurve[] = {0.639,1,0.778,0};
			leftHandIKCurve[] = {0.819,1,0.917,0};
			weaponIK = 4;
			looped = 0;
		};

		class TEN_GestureStandingRiflePistolSwitchEnd: Default {
			speed = 1.666;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end";
			mask = "handsWeapon"; // upperTorso
			disableWeapons = 1;
			looped = 0;
		};

		class TEN_GestureStandingRifleLauncherSwitchEnd: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\rfl\amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon_end.rtm";
			mask = "launcher";
			speed = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			leaningFactorEnd = 1;
			leaningFactorBeg = 0.5;
			rightHandIKCurve[] = {0.252,0,0.411,1};
			leftHandIKCurve[] = {0.093,0,0.243,1};
			weaponIK = 4;
			looped = 0;
		};

		class TEN_GestureStandingPistolRifleSwitchEnd: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end";
			speed = 1;
			disableWeapons = 1;
			mask = "handsWeapon"; // upperTorso
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			interpolationSpeed = 20;
			rightHandIKCurve[] = {0.3,0,0.4,1};
			leftHandIKCurve[] = {0.406,0,0.492,1};
			weaponIK = 1;
			looped = 0;
		};

		class TEN_GestureStandingPistolLauncherSwitchEnd: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end.rtm";
			mask = "launcher";
			speed = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.414,0,0.493,1};
			leftHandIKCurve[] = {0.132,0,0.257,1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			weaponIK = 4;
			looped = 0;
		};

		class TEN_GestureStandingLauncherRifleSwitchEnd: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon_end.rtm";
			mask = "launcher";
			speed = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			leaningFactorEnd = 1;
			leaningFactorBeg = 0.5;
			rightHandIKCurve[] = {0.843,0,0.935,1};
			leftHandIKCurve[] = {0.481,0,0.694,1};
			weaponIK = 1;
			looped = 0;
		};

		class TEN_GestureStandingLauncherPistolSwitchEnd: Default {
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon_end.rtm";
			mask = "launcher";
			speed = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			looped = 0;
		};
		class BP_Jump : Default {
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = false;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 1;
			relSpeedMax = 1;
			limitGunMovement = 1.0;
			headBobStrength = 0.23;
			interpolationspeed = 10.0;
			interpolationrestart = true;
			forceAim = 1;
			minPlayTime = 0.9;
			duty = 10.0;
			file = "\A3\anims_f\Data\Anim\Sdr\ovr\erc\stp\ras\rfl\AovrPercMrunSrasWrflDf";
			speed = 1.25849;
			disableWeapons = false;
			mask = "BodyFullReal";
			//actions = "RifleStandActionsRunF";
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = true;
			soundEdge[] = {0.01};
		};
		class BP_Drink_Erc_x3_Gesture : Default {
			file = "breakingpoint_anim\player\BP_Drink_Erc_x3_Gesture.rtm";
			looped = 0;
			speed = 0.1;
			duty = 0;
			aimingBody = "aimingUpDefault";
			mask = "LeftHandFeed";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {};
			rightHandIKEnd = true;
			weaponIK = 1;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = false;
			disableWeaponsLong = false;
			canPullTrigger = 1;
			InterpolateTo[] = {};
			interpolateFrom[] = {};
			soundOverride = "";
		};
		class BP_Eat_Erc_x3_Gesture : Default {
			file = "breakingpoint_anim\player\BP_Eat_Erc_x3_Gesture.rtm";
			looped = 0;
			speed = 0.1;
			duty = 0;
			aimingBody = "aimingUpDefault";
			mask = "LeftHandFeed";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {};
			rightHandIKEnd = true;
			weaponIK = 1;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = false;
			disableWeaponsLong = false;
			canPullTrigger = 1;
			InterpolateTo[] = {};
			interpolateFrom[] = {};
			soundOverride = "";
		};
		
		//MOCAP Melee Gestures
		class MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct : Default {
			file = "breakingpoint_anim\player\Gestures\Non\MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct.rtm";
			looped = 0;
			speed = 0.75;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = 0;
			//ConnectFrom[] ={"MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose",9.3};
			//ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.020000};
			//ConnectTo[] = {"MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose",9.3};
			//InterpolateTo[] = {"Unconscious",0.01};
			InterpolateTo[] = {};
			interpolateFrom[] = {};
			soundOverride = "rifle_to_handgun";
		};
		class MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct : Default {
			file = "breakingpoint_anim\player\Gestures\Non\MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct.rtm";
			looped = 0;
			speed = 0.7;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = 0;
			//ConnectFrom[] ={"MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose",9.3};
			//ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.020000};
			//ConnectTo[] = {"MOCAP_Gesture_CivPace_Non_Idle_Combat_Pose",9.3};
			//InterpolateTo[] = {"Unconscious",0.01};
			//InterpolateTo[] = {};
			//interpolateFrom[] = {};
			soundOverride = "rifle_to_handgun";
		};
		
	};
	
	class BlendAnims 
	{
		handsWeapon1[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		handsWeapon2[] = {"head",1,"neck1",1,"neck",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		wholeBody[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",1,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
		aimingDefault[] = {"head",0.6,"neck1",0.6,"neck",0.6,"weapon",1,"launcher",1,"LeftShoulder",0.8,"LeftArm",0.8,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",0.8,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingPistol[] = {"head",0.6,"neck1",0.6,"neck",0.6,"LeftShoulder",1,"launcher",1,"weapon",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingLauncher[] = {"head",0.6,"neck1",0.6,"neck",0.6,"launcher",1,"weapon",1,"LeftShoulder",0.8,"LeftArm",0.8,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",0.8,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.6};
		aimingCivil[] = {"neck1",0.25,"neck",0.25,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.5};
		aimingCivilKneel[] = {"neck1",0.25,"neck",0.25,"Spine",0.3,"Spine1",0.4,"Spine2",0.5,"Spine3",0.5,"LeftShoulder",0.5,"LeftArm",0.2,"LeftArmRoll",0.15,"LeftForeArm",0.1,"LeftForeArmRoll",0.05,"RightShoulder",0.5,"RightArm",0.2,"RightArmRoll",0.15,"RightForeArm",0.1,"RightForeArmRoll",0.05};
		aimingLying[] = {"weapon",1,"LeftShoulder",0.8,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine2",0.2,"Spine3",0.6};
		aimingLyingPistol[] = {"LeftShoulder",0.8,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine2",0.2,"Spine3",0.6};
		legsLyingAiming[] = {"weapon",0,"LeftShoulder",0.2,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightShoulder",0.2,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine2",0.8,"Spine3",0.4,"spine1",1,"pelvis",1,"leftupleg",1,"leftuplegroll",1,"leftleg",1,"leftlegroll",1,"leftfoot",1,"LeftToeBase",1,"rightupleg",1,"rightuplegroll",1,"rightleg",1,"rightlegroll",1,"rightfoot",1,"RightToeBase",1};
		legsLyingAimingPistol[] = {"LeftShoulder",0.2,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightShoulder",0.2,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine2",0.8,"Spine3",0.4,"spine1",1,"pelvis",1,"leftupleg",1,"leftuplegroll",1,"leftleg",1,"leftlegroll",1,"leftfoot",1,"LeftToeBase",1,"rightupleg",1,"rightuplegroll",1,"rightleg",1,"rightlegroll",1,"rightfoot",1,"RightToeBase",1};
		headDefault[] = {"head",1,"neck1",0.5,"neck",0.5};
		leaningDefault[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"pelvis",0.4};
		crewShake_half[] = {"weapon",0.5,"Camera",0.5,"launcher",0.5,"Head",0.5,"Neck",0.5,"Neck1",0.5,"LeftShoulder",0.45,"LeftArm",0.35,"LeftArmRoll",0.25,"LeftForeArm",0.15,"RightShoulder",0.45,"RightArm",0.35,"RightArmRoll",0.25,"RightForeArm",0.315,"spine3",0.475,"spine2",0.45,"spine1",0.4,"spine",0.35,"pelvis",0.2,"LeftUpLeg",0.1,"LeftUpLegRoll",0.25,"LeftLeg",0.1,"RightUpLeg",0.1,"RightUpLegRoll",0.25,"RightLeg",0.1};
		crewShake[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",0.9,"LeftArm",0.7,"LeftArmRoll",0.5,"LeftForeArm",0.3,"RightShoulder",0.9,"RightArm",0.7,"RightArmRoll",0.5,"RightForeArm",0.3,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"pelvis",0.4,"LeftUpLeg",0.2,"LeftUpLegRoll",0.5,"LeftLeg",0.2,"RightUpLeg",0.2,"RightUpLegRoll",0.5,"RightLeg",0.2};
		aimingUpDefault[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpCivilKneel[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"LeftShoulder",0.95,"LeftArm",0.45,"LeftArmRoll",0.35,"LeftForeArm",0.25,"LeftForeArmRoll",0.15,"RightShoulder",0.95,"RightArm",0.45,"RightArmRoll",0.35,"RightForeArm",0.25,"RightForeArmRoll",0.15};
		aimingUpLying[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.9,"spine2",0.7,"spine1",0.5};
		aimingUpPistol[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpCivil[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpLauncher[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		legsDefault[] = {"LeftUpLeg",0.9,"LeftUpLegRoll",0.9,"LeftLeg",0.95,"LeftLegRoll",0.95,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",0.9,"RightUpLegRoll",0.9,"RightLeg",0.95,"RightLegRoll",0.95,"RightFoot",1,"RightToeBase",1};
		idleDefault[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",1,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
		leftHand[] = {"LeftShoulder",0.3,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1};
		launcher[] = {"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"launcher",1,"Spine3",1,"Spine2",0.75,"Spine1",0.5,"Spine",0.25,"weapon",1};
		rightHand[] = {"RightShoulder",0.3,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1};
		handsWeapon_pst[] = {"head",1,"neck1",1,"neck",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.2,"Spine1",0.3,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		handsWeapon_pst_context[] = {"head",1,"neck1",1,"neck",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",0.7,"Spine2",0.3,"Spine3",0.2};
		handsWeapon[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		handsWeapon_context[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",0.9,"Spine3",0.8};
		leftHandInfluence[] = {"head",0.2,"neck1",0.3,"neck",0.3,"weapon",0.3,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"Spine",0.2,"Spine1",0.3,"Spine2",1,"Spine3",1};
		head[] = {"head",1,"neck1",0.8,"neck",0.5};
		upperTorso[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		Legs[] = {"head",0,"neck1",0,"neck",0,"weapon",0,"LeftShoulder",0,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"Spine1",0,"Spine2",0,"Spine3",0,"Spine",0,"Pelvis",0,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		LegRight[] = {"head",0,"neck1",0,"neck",0,"weapon",0,"LeftShoulder",0,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"Spine1",0.3,"Spine2",0,"Spine3",0,"Spine",0,"Pelvis",0,"LeftLeg",0,"LeftLegRoll",0,"LeftUpLeg",0,"LeftUpLegRoll",0,"LeftFoot",0,"LeftToeBase",0,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		LegLeft[] = {"head",0,"neck1",0,"neck",0,"weapon",0,"LeftShoulder",0,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"Spine1",0,"Spine2",0,"Spine3",0,"Spine",0,"Pelvis",0,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",0,"RightLegRoll",0,"RightUpLeg",0,"RightUpLegRoll",0,"RightFoot",0,"RightToeBase",0};
		BodyFullReal[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		BodyFull[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		BodyHalf[] = {"head",0.01,"neck1",0.01,"neck",0.01,"weapon",0.01,"LeftShoulder",0.01,"LeftArm",0.01,"LeftArmRoll",0.01,"LeftForeArm",0.01,"LeftForeArmRoll",0.01,"LeftHand",0.01,"LeftHandRing",0.01,"LeftHandPinky1",0.01,"LeftHandPinky2",0.01,"LeftHandPinky3",0.01,"LeftHandRing1",0.01,"LeftHandRing2",0.01,"LeftHandRing3",0.01,"LeftHandMiddle1",0.01,"LeftHandMiddle2",0.01,"LeftHandMiddle3",0.01,"LeftHandIndex1",0.01,"LeftHandIndex2",0.01,"LeftHandIndex3",0.01,"LeftHandThumb1",0.01,"LeftHandThumb2",0.01,"LeftHandThumb3",0.01,"Spine1",0.01,"Spine2",0.01,"Spine3",0.01,"Spine",0.01,"Pelvis",0.01,"LeftLeg",0.01,"LeftLegRoll",0.01,"LeftUpLeg",0.01,"LeftUpLegRoll",0.01,"LeftFoot",0.01,"LeftToeBase",0.01,"RightLeg",0.01,"RightLegRoll",0.01,"RightUpLeg",0.01,"RightUpLegRoll",0.01,"RightFoot",0.01,"RightToeBase",0.01};
		ReloadMask[] = {"LeftShoulder",0.3,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"RightShoulder",0.3,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"weapon",1};
		Throwing[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		Throwing_context[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 0.900000, "Spine2", 0.700000, "Spine3", 0.500000};
		LeftHandFeed[] = {"head",1,"neck1",1,"neck",1,"weapon",0,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine",0,"Spine1",0,"Spine2",0,"Spine3",0,"pelvis","MaskStart"};
		handsNonPounch[] = {"head",0,"neck1",0,"neck",0,"weapon",1,"launcher",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.4,"Spine1",0.8,"Spine2",1,"Spine3",1,"pelvis",1};
	};  
};
class BP_Melee : Mode_SemiAuto 
{
	multiplier = 1;
	burst = 5;
	displayName = "Hack";
	dispersion = 0.1;
	sound[] = {"", 0, 1};
	soundContinuous = 1;
	reloadTime = 1;
	magazineReloadTime = 1;
	ffCount = 1;
	optics = "false";
	recoil = "empty";
	autoFire = "true";
	CraterEffects = "NoCrater";
	explosionEffects = "NoExplosion";
	aiRateOfFire = 0.7;	// delay between shots at given distance
	aiRateOfFireDistance = 2.2;
	useAction = 1;
	useActionTitle = "GestureSwing";
	recoilProne = "empty";
	showToPlayer = "true";
	minRange = 0;
	minRangeProbab = 0.8;
	midRange = 0.3;
	midRangeProbab = 0.8;
	maxRange = 3;
	maxRangeProbab = 0;
	soundBurst = 1;
};

/* -------------------------------- */

class CfgWeapons 
{
	class SlotInfo;
    class LinkedItems;
    class Default;	// External class reference
	class ItemCore;	// External class reference
	class InventoryMuzzleItem_Base_F;	// External class reference
	class InventoryOpticsItem_Base_F;   // External class reference
    class InventoryFlashLightItem_Base_F;
	class Snip;	            // External class reference
	class GunParticles;     // External class reference
	class muzzle_snds_L;    // External class reference
	class muzzle_snds_H_MG;	// External class reference
	class muzzle_snds_H;    // External class reference
	class muzzle_snds_B;    // External class reference
	class muzzle_snds_M;    // External class reference
    class muzzle_snds_acp;	// External class reference
	class acc_pointer_IR;	// External class reference
	class acc_flashlight;	// External class reference
	class PistolCore;	// External class reference
	class Pistol;       // External class reference
    class Rifle;        // External class reference
    class RifleCore;    // External class reference
	class Pistol_Base_F; 
	class Rifle_Base_F; 
	class Rifle_Long_Base_F;
	class WeaponSlotsInfo;
	class ItemInfo;
	class CowsSlot;
	class PointerSlot;
	class UGL_F;
	class GrenadeLauncher;
    //Pistols
	class hgun_Pistol_heavy_02_F;
	class hgun_Rook40_F;
	class hgun_P07_F;
	class hgun_ACPC2_F;
	class hgun_Pistol_heavy_01_F;
	class Binocular;
	
	class HMG_M2;
	class BP_HMG_M2 : HMG_M2
	{
	    displayName = "BP M2 HMG .50";
        magazines[] = {"BP_100Rnd_127x99_box"};
	};
	
	class BP_Binocular_Hunter: Binocular
	{
		author = "BreakingPoint";
		_generalMacro = "Hunter's Binocular";
		opticsDisablePeripherialVision = 1;
		weaponPoolAvailable = 1;
		scope = 2;
		simulation = "Binocular";
		model = "\A3\Weapons_f\binocular\binoculars_proxy";
		modelOptics = "\A3\weapons_f\reticle\optics_binoculars";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		visionMode[] = {"Normal"};
		picture = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
		value = 5;
		type = 4096;
		displayName = "Hunter's Binocular 16X";
		nameSound = "binoculars";
		descriptionUse = "Hunter's Binocular";
		reloadTime = 0;
		sound[] = {"",0,1};
		canLock = 0;
		optics = 1;
		forceOptics = 0;
		useAsBinocular = 1;
		primary = 0;
		//opticsZoomMin = 0.035;
		//opticsZoomMax = 0.035;
		opticsZoomMin = 0.017857;
		opticsZoomMax = 0.017857;
		opticsZoomInit = 0.017857;
		minRange = 150;
		midRange = 500;
		maxRange = 2500;
		magazines[] = {};
		class Library
		{
				libTextDesc = "Hunter's Binocular 14X";
		};
		descriptionShort = "Hunter's Binocular 14X";
		class WeaponSlotsInfo
		{
				mass = 10;
		};
	};
		
	class Rifle_Base_F_BP: Rifle_Base_F 
	{
		class Butt: UGL_F 
		{
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			magazines[] = {"BP_Rifle_Butt"};
			displayName = "Melee";
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 0.400000;
			optics = 0;
			forceOptics = 1;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
			flash = "";
			flashSize = 0;
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
		};
	};

	/*
		Breaking Point: Melee Weapons
			By Deathlyrage
	*/
	
	
	class MeleeWeapon : Rifle 
	{
		scope = 2;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		canDrop = 0;
		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
		weaponInfoType = "RscWeaponEmpty";
	};

	class MeleeHatchet : MeleeWeapon 
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\Hatchet\bp_Hatchet.p3d";
		picture = "\breakingpoint_weapons\icons\gear_hatchet_x_CA.paa";
		displayName = "Hatchet";
		descriptionUse = "Hatchet";
		reloadAction = "ReloadRPG";
		magazines[] = {"Hatchet_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		//handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "$STR_EQUIP_DESC_41";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound};			
			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.60, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.80, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};			
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.6;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "";
		};		
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};			
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};           
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
	};
	
	class MeleeKatana : MeleeWeapon 
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		dexterity = 9.000000;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\Hatchet\bp_katana.p3d";
		picture = "\breakingpoint_weapons\icons\gear_katana_melee_x_CA.paa";
		displayName = "Katana";
		descriptionUse = "Katana";
		//reloadAction = "ReloadRPG";
		magazines[] = {"Katana_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		//handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "Traditional Japanese sword, must have belonged to a collector";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound};			
			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.60, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.80, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};			
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.6;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "";
		};		
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};			
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};           
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
	};
	
	class MeleePickaxe : MeleeWeapon 
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\Hatchet\bp_pickaxe.p3d";
		picture = "\breakingpoint_weapons\icons\gear_axe_rifle_x_ca.paa";
		displayName = "Pick Axe";
		descriptionUse = "Pick Axe";
		//reloadAction = "ReloadRPG";
		magazines[] = {"Pickaxe_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		//handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "Basic farm implement";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.65, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.90, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.80, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 1.0;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
	};
	
	class MeleeHammer : MeleeWeapon 
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.45;
		model = "\breakingpoint_weapons\models\Hatchet\bp_hammer.p3d";
		picture = "\breakingpoint_weapons\icons\gear_hammer_rifle_x_CA.paa";
		displayName = "Sledge Hammer";
		descriptionUse = "Sledge Hammer";
		//reloadAction = "ReloadRPG";
		magazines[] = {"Hammer_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		//handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "I wanna be...";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.55, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.30, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.90, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 1.2;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};			
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Wire"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};           
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
	};
	
	class MeleeHammer2 : MeleeWeapon 
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		model = "\breakingpoint_weapons\models\Hatchet\bp_hammerW.p3d";
		picture = "\breakingpoint_weapons\icons\gear_hammer_rifle_x_CA.paa";
		displayName = "Modified Sledge Hammer";
		descriptionUse = "Sledge Hammer";
		magazines[] = {"Hammer_Swing2"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		//handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "I wanna be...";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.55, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.30, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.90, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 1.2;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};
			
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Wire"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};           
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
	};
	
	class MeleeShovel: MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\hatchet\bp_shovel.p3d";
		picture = "\breakingpoint_weapons\icons\gear_shovel_rifle_x_ca.paa";
		displayName = "Shovel";
		descriptionUse = "Shovel";
		magazines[] = {"Shovel_Swing"};
		handAnim[] = {"OFP2_ManSkeleton","\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "Standard gardening tool. Can be used for construction and as an improvised weapon.";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {0};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",6e-005,1,10};
				closure2[] = {"",6e-005,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class 0: BaseSoundModeType
			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.65,10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.7,10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.9,10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.8,10};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.8;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901,801,701};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class MeleeCrowbar: MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\hatchet\bp_crowbar.p3d";
		picture = "\breakingpoint_weapons\icons\gear_crowbar_rifle_x_ca.paa";
		displayName = "Crowbar";
		descriptionUse = "Crowbar";
		magazines[] = {"Shovel_Swing"};
		handAnim[] = {"OFP2_ManSkeleton","\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {0};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",6e-005,1,10};
				closure2[] = {"",6e-005,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class 0: BaseSoundModeType
			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.65,10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.7,10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.9,10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.8,10};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.8;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901,801,701};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class MeleeClub: MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\hatchet\bp_club.p3d";
		picture = "\breakingpoint_weapons\icons\gear_club_rifle_x_ca.paa";
		displayName = "Barbed Club";
		descriptionUse = "Barbed Club";
		magazines[] = {"Shovel_Swing"};
		handAnim[] = {"OFP2_ManSkeleton","\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {0};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",6e-005,1,10};
				closure2[] = {"",6e-005,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class 0: BaseSoundModeType
			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.65,10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.7,10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.9,10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.8,10};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.8;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901,801,701};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	/*

	class MeleeMachete: MeleeWeapon {
		autoreload = 1;
		scope = 2;
		weaponreloadtime = 0.57;
		model = "\breakingpoint_weapons\models\bp_Machete_weaponized.p3d";
		picture = "\breakingpoint_weapons\icons\gear_machete_x_CA.paa";
		displayName = "Machete";
		descriptionUse = "Machete";
		magazines[] = {"Crowbar_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 35;
			allowedSlots[] = {901};
			
			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {""};
			};
			
			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {""};
			};
           
			class PointerSlot : PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {""};
			};
		};	
	};
	
	class MeleeTireIron: MeleeWeapon  {
		autoreload = 1;
		scope = 2;
		weaponreloadtime = 0.35;
		model = "\breakingpoint_weapons\models\bp_Tire_iron_weaponized.p3d";
		picture = "\breakingpoint_weapons\icons\gear_tireiron_x_ca.paa";
		displayName = "Tire Iron";
		descriptionUse = "Tire Iron";
		magazines[] = {"Crowbar_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "Heavy duty steel repair tool. Can be used for replacing vehicle wheels and as an improvised weapon.";
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 35;
			allowedSlots[] = {901};
			
			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {""};
			};
			
			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {""};
			};
           
			class PointerSlot : PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {""};
			};
		};	
	};

    class MeleeBaseballBat: MeleeWeapon   {
		autoreload = 1;
		scope = 2;
		weaponreloadtime = 0.55;
		model = "\breakingpoint_weapons\models\bp_Baseball_bat_weaponized.p3d";
		picture = "\breakingpoint_weapons\icons\gear_baseball_bat_x_ca.paa";
		displayName = "Baseball Bat";
		descriptionUse = "Baseball Bat";
		magazines[] = {"Crowbar_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "Classic American wooden baseball bat, effective weapon in close quarters.";
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 45;
			allowedSlots[] = {901};
			
			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {""};
			};
			
			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {""};
			};
           
			class PointerSlot : PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {""};
			};
		};	
	};

    class MeleeBaseballBat_Barbed: MeleeWeapon   {
		autoreload = 1;
		scope = 2;
		weaponreloadtime = 0.55;
		model = "\breakingpoint_weapons\models\bp_Baseball_bat_barbed_weaponized.p3d";
		picture = "\breakingpoint_weapons\icons\gear_baseball_bat_barbed_x_ca.paa";
		displayName = "Baseball Bat Barbed";
		descriptionUse = "Baseball Bat Barbed";
		magazines[] = {"Machete_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = "Classic American wooden baseball bat wrapped with barbed wire. Extremely effective melee weapon.";
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 55;
			allowedSlots[] = {901};
			
			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {""};
			};
			
			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {""};
			};
           
			class PointerSlot : PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {""};
			};
		};	
	};*/
	
	class BP_Crossbow : Rifle_Base_F_BP
	{
		author = "Kol9yN, Boolyq";
		displayName = "PSE TAC Elite Crossbow";
		descriptionUse = "Crossbow";
		descriptionShort = "Crossbow";
		scope = 2;
		picture = "\breakingpoint_weapons\icons\gear_crossbow_rifle_x_ca.paa";
		model = "breakingpoint_weapons\models\crossbow\bp_crossbow.p3d";
		magazines[] = {"BP_Arrow_Mag","BP_Arrow_Rambo","BP_Arrow_Tranq","BP_Arrow_Poison"};
		muzzles[] = {"this", "Butt"};
		class Library
		{
			libTextDesc = "PSE TAC Elite Crossbow";
		};
		reloadAction = "crossbow_reload";
		maxZeroing = 300;
		discreteDistanceInitIndex = 3;
		discreteDistance[] = { 25,50,75,100,125,150,175,200,225,250,275,300 };
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 0.75;
		canShootInWater = 1;
		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				//positionName = "Nabojnicestart";
				//directionName = "Nabojniceend";
				//effectName = "CaselessAmmoCloud";
				positionName = "";
				directionName = "";
				effectName = "";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 70;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo {};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_aco", "optic_Holosight", "BP_SOS", "BP_optic_ACOG", "BP_M3A", "BP_M3A2","BP_M3AN", "BP_MRT"};
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_CPad"};
			};
		};
		opticsZoomMin = 0.575;
		opticsZoomMax = 1.0;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		handAnim[] = { "OFP2_ManSkeleton", "breakingpoint_weapons\anim\crossbow_handanim.rtm" };
		//handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX.rtm"};
		dexterity = 0.8;
		inertia = 0.400000;
		caseless[] = { "", 1, 1, 1 };
		soundBullet[] = { "caseless", 1 };
		changeFiremodeSound[] = { "", 0.17782794, 1, 5 };
		modes[] = { "Single" };
		UiPicture = "";
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "A3\sounds_f\weapons\closure\closure_rifle_6", 0.4, 1, 5 };
				closure2[] = { "A3\sounds_f\weapons\closure\closure_rifle_7", 0.4, 1, 5 };
				soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "breakingpoint_jsrs\sounds\crossbow-1.wav", 1, 1, 10 };
				begin2[] = { "breakingpoint_jsrs\sounds\crossbow-1.wav", 1, 1, 10 };
				soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			};
			reloadTime = 4.8;
			magazineReloadTime = 4.8;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.00007;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		aiDispersionCoefY = 2.0;
		aiDispersionCoefX = 1.0;
		drySound[] = { "A3\sounds_f\weapons\Other\dry_1", 0.56234133, 1, 35 };
		//reloadMagazineSound[] = { "A3\sounds_f\weapons\reloads\new_MX", 1.0, 1, 5 };
		reloadMagazineSound[] = { "breakingpoint_jsrs\sounds\crossbow_reload.wss", 1.0, 1, 20 };
	};
	class BP_Crossbow_DigitCamo : BP_Crossbow 
	{
		displayName = "PSE TAC Elite Crossbow Digital Camo";
		picture = "\breakingpoint_weapons\icons\gear_crossbow_indp_rifle_x_ca.paa";
		descriptionUse = "Crossbow";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\crossbow\crossbow_indp_co.paa"};
	};    	
	
	/*
		Breaking Point: Throwable Weapons
			By Valtiel
	*/
	

	class Throw: GrenadeLauncher 
	{
		muzzles[] = {"BP_M84Muzzle", "BP_AlarmClockMuzzle", "HandGrenade_Stone", "HandGrenadeMuzzle", "MiniGrenadeMuzzle", "SmokeShellMuzzle", "SmokeShellYellowMuzzle", "SmokeShellGreenMuzzle", "SmokeShellRedMuzzle", "SmokeShellPurpleMuzzle", "SmokeShellOrangeMuzzle", "SmokeShellBlueMuzzle", "ChemlightGreenMuzzle", "ChemlightRedMuzzle", "ChemlightYellowMuzzle", "ChemlightBlueMuzzle", "KnifeMuzzle", "BookMuzzle", "MugMuzzle", "BrickMuzzle", "PotteryMuzzle", "VideotapeMuzzle", "ZipDiskMuzzle", "RockMuzzle", "PlateMuzzle", "TennisBallMuzzle", "CanMuzzle", "HammerMuzzle", "InfectedMuzzle", "ChemRMuzzle", "ChemGMuzzle", "ChemBMuzzle", "ChemYMuzzle"};

		class ThrowMuzzle: GrenadeLauncher 
		{
			aidispersioncoefx = 6;
			aidispersioncoefy = 6;
			autoreload = 1;
			cursor = "EmptyCursor";
			cursoraim = "throw";
			enableattack = 0;
			keepininventory = 1;
			magazinereloadtime = 0;
			modeloptics = "";
			reloadsound[] = {"", 0.000316, 1};
			reloadtime = 0;
			showempty = 0;
			sound[] = {"", 0.000316, 1};
		};

		class BP_M84Muzzle: ThrowMuzzle 
		{
			displayName = "M84 Flashbang";
			magazines[] = {"BP_M84_Flash"};
		};
		class BP_AlarmClockMuzzle: ThrowMuzzle 
		{
			displayName = "Alarm Clock";
			magazines[] = {"BP_AlarmClock_Black", "BP_AlarmClock_Red"};
		};
		class KnifeMuzzle: ThrowMuzzle 
		{
			displayName = "Hunting Knife";
			magazines[] = {"Itemknife"};
		};
		
		class InfectedMuzzle: ThrowMuzzle 
		{
			displayName = "Infected Needle";
			magazines[] = {"ItemInfectedNeedle"};
		};
		
		class BookMuzzle: ThrowMuzzle 
		{
			displayName = "Book";
			magazines[] = {"ItemBook1", "ItemBook2", "ItemBook3"};
		};
		
		class MugMuzzle: ThrowMuzzle 
		{
			displayName = "Mug";
			magazines[] = {"ItemMug"};
		};
		
		class BrickMuzzle: ThrowMuzzle 
		{
			displayName = "Brick";
			magazines[] = {"ItemBrick1", "ItemBrick2"};
		};
		
		class PotteryMuzzle: ThrowMuzzle 
		{
			displayName = "Pottery";
			magazines[] = {"ItemPottery"};
		};
		
		class VideotapeMuzzle: ThrowMuzzle 
		{
			displayName = "VHS Tape";
			magazines[] = {"ItemVideoTape"};
		};
		
		class ZipDiskMuzzle: ThrowMuzzle 
		{
			displayName = "ZipDisk";
			magazines[] = {"ItemZipDisk"};
		};
		
		class RockMuzzle: ThrowMuzzle 
		{
			displayName = "Rock";
			magazines[] = {"ItemRock"};
		};
		
		class PlateMuzzle: ThrowMuzzle 
		{
			displayName = "Dinner Plate";
			magazines[] = {"ItemPlate1", "ItemPlate2"};
		};
		
		class TennisBallMuzzle: ThrowMuzzle 
		{
			displayName = "Tennis Ball";
			magazines[] = {"ItemTennisBall"};
		};
		
		class CanMuzzle: ThrowMuzzle 
		{
			displayName = "Empty Can";
			magazines[] = {"ItemCanEmpty"};
		};
		
		class HammerMuzzle: ThrowMuzzle 
		{
			displayName = "Hammer";
			magazines[] = {"ItemHammer"};
		};
		
		class ChemRMuzzle: ThrowMuzzle 
		{
			displayName = "Chemlight";
			magazines[] = {"ChemR"};
		};
		
		class ChemGMuzzle: ThrowMuzzle 
		{
			displayName = "Chemlight";
			magazines[] = {"ChemG"};
		};
		
		class ChemBMuzzle: ThrowMuzzle 
		{
			displayName = "Chemlight";
			magazines[] = {"ChemB"};
		};
		
		class ChemYMuzzle: ThrowMuzzle 
		{
			displayName = "Chemlight";
			magazines[] = {"ChemY"};
		};
	};
	
	class Put: Default 
	{
		scope = 1;
		value = 0;
		type = 0;
		displayName = "$STR_DN_PUT";
		canDrop = 0;
		muzzles[] = {"IED1Muzzle"};

		class PutMuzzle: Default 
		{
			sound[] = {"", 0.000316, 1};
			reloadSound[] = {"", 0.000316, 1};
			enableAttack = 0;
			optics = 0;
			showEmpty = 0;
			canLock = 0;
			primary = 10;
			minRange = 0;
			minRangeProbab = 0.100000;
			midRange = 3;
			midRangeProbab = 0.900000;
			maxRange = 15;
			maxRangeProbab = 0.040000;
			moveToInternal = 0;
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
		};
		
		class IED1Muzzle: PutMuzzle 
		{
			autoreload = 0;
			enableAttack = 1;
			magazines[] = {"BP_IED1_Mag"};
			picture = "\A3\Weapons_F\Data\clear_empty.paa";
			showToPlayer = 0;
		};
	};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
	
	/*
		Breaking Point: Firearms
			By Valtiel
	*/
	
//------------------------|	
//CLASS REDFINES UI IMAGES|-----------------------------------------------------------------------------------------------------------------------------------
//------------------------|

	class BP_Benelli : Rifle_Base_F_BP 
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\M1014\BP_M1014.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m1014_rifle_x_ca.paa";
		displayName = "Old M4 Benelli Super 90";
		descriptionShort = "Poorly maintained civilian Benelli shotgun";
		descriptionUse = "Old M4 Benelli Super 90";
		reloadAction = "GestureReloadM4SSAS";
		magazines[] = {"BP_8Rnd_Slug", "BP_8Rnd_Buckshot", "BP_8Rnd_MagBuckshot", "BP_2Rnd_Buckshot", "BP_2Rnd_Slug", "BP_2Rnd_MagBuckshot", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};
		inertia = 0.200000;
		recoil = "recoil_ebr";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.30, 0.6, 30};
		//muzzleEffect = "BIS_fnc_effectFiredRifle";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Benelli_s1.wav", 1, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\Benelli_s2.wav", 1, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\Benelli_s3.wav", 1, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 1100};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			dispersion = 0.001600;
			soundContinuous = 0;
			reloadTime = 0.3;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 75; //Masschange Made lighter
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "acc_pointer_IR"};
				iconScale = 0;
			};
		};
	};
	
	class BP_Rem870 : BP_Benelli 
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\870\BP_Rem870.p3d";
		picture = "\breakingpoint_weapons\icons\gear_870_rifle_x_ca.paa";
		displayName = "Old Remington 870 Express";
		reloadAction = "GestureReloadM4SSAS";
		magazines[] = {"BP_8Rnd_Buckshot", "BP_8Rnd_Slug", "BP_8Rnd_MagBuckshot", "BP_2Rnd_Buckshot", "BP_2Rnd_Slug", "BP_2Rnd_MagBuckshot", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "An old Remington pump action shotgun";
		inertia = 0.210000; //Inertiachange, increaced.
		descriptionUse = "Old Remington 870";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_Lupara : BP_Benelli 
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\Lupara\BP_Lupara.p3d";
		picture = "\breakingpoint_weapons\icons\gear_lupara_rifle_x_ca.paa";
		displayName = "Lupara Double Barrel";
		reloadAction = "ReloadMagazine";
		magazines[] = {"BP_2Rnd_Buckshot", "BP_2Rnd_Slug", "BP_2Rnd_MagBuckshot"};
		descriptionShort = "Sawed off double barrel shotgun";
		inertia = 0.12000;
		initSpeed = -0.85;
		//recoil = ""; recoilChange test a higher value for sawnoff, like m320
		descriptionUse = "Lupara Double Barrel";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\LeeEnfield.rtm"};
		modes[] = {"Single", "Dual"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Benelli_s1.wav", 1, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\Benelli_s2.wav", 1, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\Benelli_s3.wav", 1, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 1100};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			dispersion = 0.0033;//dispersionChange
			soundContinuous = 0;
			displayName = "Single";
			reloadTime = 0.3;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_gm6";
		};
		class Dual : Mode_Burst 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Benelli_s1.wav", 1, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\Benelli_s2.wav", 1, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\Benelli_s3.wav", 1, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 1100};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			dispersion = 0.0033;//dispersionChange was 0.002900
			soundContinuous = 0;
			reloadTime = 0;//reloadTimeChange was 0.15 testing no delay
			displayName = "Dual";
			burst = 2;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_gm6";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 65;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_LuparaS : BP_Lupara //this appears to be already set up as a pistol variant, but needs model edit, chracters arms stretch
	{
	    scope = 2;
		//type = 2; //enable this for it to go in pistol slot
		model = "\breakingpoint_weapons\models\Lupara\BP_LuparaS.p3d";
		picture = "\breakingpoint_weapons\icons\gear_lupara_rifle_x_ca.paa";
		displayName = "Lupara Double Barrel";
		reloadAction = "ReloadMagazine";
		magazines[] = {"BP_2Rnd_MagBuckshot", "BP_2Rnd_Buckshot", "BP_2Rnd_Slug"};
	};
	
    class BP_BenelliS : BP_Benelli 
	{
	    scope = 2;
		type = 2;
		model = "\breakingpoint_weapons\models\M1014\BP_M1014S.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m1014_rifle_x_ca.paa";
		displayName = "Old M4 Benelli Super Shorty";
		descriptionShort = "Poorly maintained compact civilian Benelli shotgun";
		descriptionUse = "Old M4 Benelli Super Shorty";
		magazines[] = {"BP_8Rnd_Slug", "BP_8Rnd_Buckshot", "BP_8Rnd_MagBuckshot"};
		changeFiremodeSound[] = {""};
		reloadAction = "ReloadMagazine";//this fixes the primary weapon appearing in hands when reloading
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M1014_idle.rtm"};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.30, 1, 30};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Arco", "optic_aco", "optic_ACO_grn", "optic_Holosight"};
				iconScale = 0;
			};
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "acc_pointer_IR"};
				iconScale = 0;
			};
		};
	};	

//------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS CREATION WEAPONS PISTOL-|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	class BP_1911: Pistol_Base_F 
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\1911\BP_1911.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1911_rifle_x_ca.paa";
		magazines[] = {"BP_7Rnd_45acp", "BP_7Rnd_45JHP", /*"BP_6Rnd_45_Mag", "BP_6Rnd_45JHP_Mag",*/ "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Original Colt 1911 chambered for .45ACP";
		displayName = "Colt M1911";
		descriptionUse = "Colt M1911";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Pistols\pistol_reload", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.090000; //Inertiachange, reduced.
		recoil = "recoil_pistol_acpc2";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1911Old_s1.wav", 1.394328, 1, 300};
				begin2[] = {"breakingpoint_jsrs\sounds\M1911Old_s2.wav", 1.394328, 1.14, 300};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 1.140000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 0.9700000, 0.85, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\1911snake_s2.wav", 0.970000, 1, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\1911snake_s3.wav", 0.990000, 0.90, 30};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy"; 
			reloadTime = 0.100000;
			dispersion = 0.007500;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 30; //Masschanged, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_suppr9"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
    };
	
	class BP_Mak_Old: Pistol_Base_F 
	{
	    scope = 2;
		displayName = "Old Makarov PM";
		model = "breakingpoint_weapons\models\Makarov\BP_Makarov.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mak_rifle_x_ca.paa";
	    magazines[] = {"BP_12Rnd_9x18", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Russian semi automatic pistol, updated 12 round magazine";
		descriptionUse = "Old Makarov PM";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.070000; //Inertiachange, reduced.
		recoil = "recoil_pistol_rook40";//RecoilChange
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_1b", 1.000000, 1, 700};
				begin2[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_2b", 1.000000, 1, 700};
				begin3[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_3b", 1.000000, 1, 700};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light"; 
			reloadTime = 0.100000;
			dispersion = 0.007000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 20;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {/*make model, add silencer*/};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
    };
	
	class BP_G17: Pistol_Base_F 
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\G17\BP_G17.p3d";
		magazines[] = {"BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		picture = "\breakingpoint_weapons\icons\gear_g17_rifle_x_ca.paa";
		descriptionShort = "Standard issue US Military semi automatic pistol, compatible with all standard capacity 9mm magazines";
		displayName = "Glock 17";
		descriptionUse = "Glock 17";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.0800000; //Inertiachange, reduced.
		recoil = "recoil_pistol_p07";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.144328, 1.1, 450};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.094328, 0.9, 450};
				begin3[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 0.894328, 1.2, 450};
				begin4[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 0.794328, 0.8, 450};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 45};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 45};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 45};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 45};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light"; 
			dispersion = 0.002450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 25; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
    };
	
	class BP_G18: Pistol_Base_F 
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\G17\BP_G18.p3d";
		magazines[] = {"BP_30Rnd_9x21_Mag", "BP_33Rnd_9x19OVP", "BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		picture = "\breakingpoint_weapons\icons\gear_g18_rifle_x_ca.paa";
		descriptionShort = "Standard issue US Military select fire pistol, compatible with all standard capacity 9mm magazines";
		displayName = "Glock 18";
		descriptionUse = "Glock 18";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.090000;
		recoil = "recoil_pistol_p07";
		modes[] = {"Single", "Full_Auto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.144328, 1.1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.094328, 0.9, 500};
				begin3[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 0.894328, 1.2, 500};
				begin4[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 0.794328, 0.8, 500};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light"; 
			dispersion = 0.002450;
		};
		class Full_Auto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.144328, 1.1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.094328, 0.9, 500};
				begin3[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 0.894328, 1.2, 500};
				begin4[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 0.794328, 0.8, 500};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			soundContinuous = 0;
			dispersion = 0.002450;
			reloadTime = 0.050000;
			//recoil = "recoil_auto_smg_01";
			//recoilProne = "recoil_auto_prone_smg_01";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 27; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
    };
	
	class BP_m9: Pistol_Base_F 
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\M9\BP_M9.p3d";
		magazines[] = {"BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		picture = "\breakingpoint_weapons\icons\gear_m9_rifle_x_ca.paa";
		descriptionShort = "Standard issue US Military semi automatic pistol, compatible with all standard capacity 9mm magazines";
		displayName = "Beretta M9";
		descriptionUse = "Beretta M9";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.095000; //Inertiachange, reduced.
		recoil = "recoil_pistol_p07";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 400};
				begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light"; 
			dispersion = 0.003450;
		};
		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 27; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
    };
	
	class BP_m9Tac: BP_m9 
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\M9\BP_BerettaTac.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m9tac_rifle_x_ca.paa";
		magazines[] = {"BP_33Rnd_9x19OVP", "BP_30Rnd_9x21_Mag", "BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Customized US Military semi automatic pistol, compatible with all 9mm magazines";
		displayName = "Beretta M9 Tactical";
		descriptionUse = "Beretta M9 Tactical";
		begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 700};
		begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 700};
		soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.100000;
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 500};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 50};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};
			reloadTime = 0.1;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light"; 
			dispersion = 0.002115;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 500};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 50};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};
			soundContinuous = 0;
			dispersion = 0.002115;//dispersionChange
			reloadTime = 0.050000;
			//recoil = "recoil_auto_smg_01";
			//recoilProne = "recoil_auto_prone_smg_01";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 30; //Masschange, reduced.
			allowedSlots[] = {901};
		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0;
			};
			
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_PLight"};
				iconScale = 0;
			};
		};	
    };
	
	class BP_MP443: hgun_Rook40_F 
	{
	    scope = 2;
		magazines[] = {"BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		picture = "\breakingpoint_weapons\icons\gear_mp443_rifle_x_ca.paa";
		descriptionShort = "Russian Semi Automatic pistol, compatible with all standard capacity 9mm magazines";
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		descriptionUse = "MP443 9mm";
		displayname = "MP443 9mm";
		inertia = 0.080000; //Inertiachange, reduced.
		recoil = "recoil_pistol_rook40";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 500};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light"; 
			dispersion = 0.003450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 25; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_PLight"};
				iconScale = 0;
			};
		};	
	};

    class BP_P07: hgun_P07_F 
	{
	    scope = 2;
		magazines[] = {"BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		picture = "\breakingpoint_weapons\icons\gear_P07_rifle_x_ca.paa";
		descriptionShort = "Czech P07 semi automatic pistol, compatible with all standard capacity 9mm magazines";
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		descriptionUse = "9mm Pistol";
		displayname = "Walther P99";
		inertia = 0.080000; //Inertiachange, reduced.
		recoil = "recoil_pistol_p07";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
		
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 500};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light"; 
			dispersion = 0.003450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 25; //Masscahnged, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_PLight"};
				iconScale = 0;
			};
		};	
	};		
	
	class BP_python : Pistol_Base_F 
	{
		scope = 2;
		magazines[] = {"BP_6Rnd_357_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_python_rifle_x_ca.paa";
		changeFiremodeSound[] = {""};
		displayname = "Colt Python";
		descriptionShort = ".357 Magnum revolver";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\pistol_heavy_01\reload", 0.300000, 1, 50};
		inertia = 0.110000; //Inertiachange, increased.
		recoil = "recoil_pistol_4five";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Python_s1.wav", 1.194328, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\Python_s2.wav", 1.194328, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\Python_s3.wav", 1.194328, 1, 900};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy"; 
			dispersion = 0.003450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 30; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_SW45 : BP_python 
	{
		scope = 2;
		magazines[] = {"BP_6Rnd_45_Mag", "BP_6Rnd_45JHP_Mag", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		model = "breakingpoint_weapons\models\SW45\BP_SW45.p3d";
		picture = "\breakingpoint_weapons\icons\gear_sw45_rifle_x_ca.paa";
		displayName = "Smith and Wesson .45";
		descriptionUse = "Smith and Wesson .45";
		descriptionshort = ".45 Revolver";
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\pistol_heavy_01\reload", 0.300000, 1, 50};
		inertia = 0.110000; //Inertiachange, increased.
		recoil = "recoil_pistol_acpc2";
		modes[] = {"Single"};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 30; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_Rhino : hgun_Pistol_heavy_02_F 
	{
		scope = 2;
		displayName = "Chiappa Rhino 44";
		descriptionUse = "Chiappa Rhino 44";
		picture = "\breakingpoint_weapons\icons\gear_rhino_rifle_x_ca.paa";
		descriptionshort = ".44 Magnum Revolver";
		magazines[] = {"BP_6Rnd_44Mag", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		changeFiremodeSound[] = {""};
		inertia = 0.120000; //Inertiachange, increased.
		recoil = "recoil_pistol_acpc2";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Anac_s1.wav", 1.094328, 1, 1500};
				begin2[] = {"breakingpoint_jsrs\sounds\Anac_s2.wav", 1.094328, 1, 1500};
				begin3[] = {"breakingpoint_jsrs\sounds\Anac_s3.wav", 1.094328, 1, 1500};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy"; 
			dispersion = 0.003250;//dispersionChange
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 30; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Yorris", "optic_MRD"};
				iconScale = 0;
			};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
	};
	
	class BP_SW44 : hgun_Pistol_heavy_02_F 
	{
		scope = 2;
		model = "breakingpoint_weapons\models\SW44\BP_SW44.p3d";
		picture = "\breakingpoint_weapons\icons\gear_sw500_rifle_x_ca.paa";
		displayName = "Smith and Wesson Model 500";
		descriptionUse = "Smith and Wesson Model 500";
		descriptionshort = ".500 Magnum Revolver";
		magazines[] = {"BP_5Rnd_500Mag", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		reloadAction = "GestureReloadPistolHeavy02";
		drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_01\dry", 0.358107, 1, 20};
		changeFiremodeSound[] = {""};
		inertia = 0.200000; //Inertiachange, reduced.
		recoil = "recoil_pistol_zubr"; //Recoilchange
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Anac_s1.wav", 1.094328, 1, 1900};
				begin2[] = {"breakingpoint_jsrs\sounds\Anac_s2.wav", 1.094328, 1, 1900};
				begin3[] = {"breakingpoint_jsrs\sounds\Anac_s3.wav", 1.094328, 1, 1900};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_gm6"; 
			dispersion = 0.001450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 35; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"BP_M8"};
				iconScale = 0;
			};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
	};
	
	class BP_SW44S : BP_SW44 {};
	
	class BP_TranQPistol: Pistol_Base_F 
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\Val1911\BP_Val1911.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1911t_rifle_x_ca.paa";
		displayName = "Custom 1911 TranQ Pistol";
		weaponSoundEffect = "DefaultHandgun";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.223872, 1, 20};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Pistols\pistol_reload", 0.300000, 1, 50};
		DescriptionShort = "Specialized 1911 with Tranquillizer Attachment <br/> Press F to cycle fire modes";
		magazines[] = {"BP_7Rnd_45acp", "BP_7Rnd_45JHP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		inertia = 0.110000; //Inertiachange, increased.
		recoil = "recoil_pistol_p07";
		modes[] = {"Single"};
		muzzles[] = {"this", "TranQ"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M4SD_s1.wav", 1.004328, 1, 300};
				begin2[] = {"breakingpoint_jsrs\sounds\M4SD_s1.wav", 1.004328, 0.87, 300};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			reloadTime = 0.004;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light"; 
			dispersion = 0.002450;
		};
		class TranQ: UGL_F 
		{
			magazines[] = {"BP_15Rnd_9x21_Rubber"};
			displayName = "TranQ";
			reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\flaregun_reload", 0.300000, 2.0, 50};
			drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.223872, 1, 20};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_jsrs\sounds\M4SD_s1.wav", 0.704328, 1, 300};
					begin2[] = {"breakingpoint_jsrs\sounds\M4SD_s1.wav", 0.704328, 0.87, 300};
					soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
				};
			};	
			dispersion = 0.002000;
			magazineReloadTime = 0;
			autoReload = 0;
			reloadTime = 0.100000;
			optics = 1;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
			mass = 30; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_FNPTac45: hgun_pistol_heavy_01_F 
	{
		scope = 2;
		model = "\A3\Weapons_F_EPA\Pistols\Pistol_heavy_01\Pistol_heavy_01_F.p3d";
		picture = "\breakingpoint_weapons\icons\gear_fnp_rifle_x_ca.paa";
		magazines[] = {"BP_15Rnd_45JHP", "BP_12Rnd_45JHP", "BP_7Rnd_45acp", "BP_7Rnd_45JHP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		displayname = "FNP Tac45";
		descriptionShort = "Custom high capacity .45 pistol with optic mount and Osprey 45 Suppressor";
		opticsZoomMin = 0.275000;
		opticsZoomMax = 1.100000;
		opticsZoomInit = 0.750000;
		inertia = 0.080000;
		recoil = "recoil_pistol_acpc2";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\FNP_s1.wav", 1.594328, 1, 300};
				begin2[] = {"breakingpoint_jsrs\sounds\FNP_s2.wav", 1.594328, 1, 300};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 1.140000, 1, 40};
				begin2[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 0.9700000, 0.85, 40};
				begin3[] = {"\breakingpoint_jsrs\sounds\1911snake_s2.wav", 0.970000, 1, 40};
				begin4[] = {"\breakingpoint_jsrs\sounds\1911snake_s3.wav", 0.990000, 0.90, 40};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			reloadTime = 0.09;//reloadtimeChange
			dispersion = 0.002300;//dispersionChange
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 30; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_gemtech45", "BP_suppr9"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Yorris", "optic_MRD"};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
		//reloadTime = 0.100000;
		//dispersion = 0.001800;
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\new_pistols", 0.400000, 1, 10};
    };
	
	class BP_Uzi: Pistol_Base_F 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Uzi\BP_Uzi.p3d";
		picture = "\breakingpoint_weapons\icons\gear_uzi_rifle_x_ca.paa";
		displayName = "Micro Uzi";
		descriptionUse = "Micro Uzi";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\PDW2000_reload_2", 0.400000, 1, 10};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	    magazines[] = {"BP_30Rnd_9x21_Mag", "BP_33Rnd_9x19OVP", "BP_16Rnd_9x21_Mag", "BP_33Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19_M9", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Compact 9mm sub machinegun";
		inertia = 0.150000; //Inertiacahnge, increased.
		recoil = "recoil_pdw";
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.394328, 1, 400};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.394328, 1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_single_pdw";
			//recoilProne = "recoil_single_prone_pdw"; 
			dispersion = 0.004450;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.394328, 1, 400};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.394328, 1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			soundContinuous = 0;
			dispersion = 0.004450;//dispersionChange
			reloadTime = 0.050000;
			//recoil = "recoil_auto_pdw";
			//recoilProne = "recoil_auto_prone_pdw";
		};
        class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 35; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_PLight"};
				iconScale = 0;
			};
		};
    };
	
	class BP_SA61: Pistol_Base_F 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\SA61\BP_SA61.p3d";
		picture = "\breakingpoint_weapons\icons\gear_sa61_rifle_x_ca.paa";
		displayName = "Skorpion vz61";
		descriptionUse = "Skorpion vz61";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\PDW2000_reload_2", 0.400000, 1, 10};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	    magazines[] = {"BP_20Rnd_765x17", "BP_7Rnd_765x17", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Compact 7.65x17mm sub machinegun";
		inertia = 0.130000; //Inertiachange, increased.
		recoil = "recoil_pdw"; //recoilchange
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_1b", 1.584893, 1, 500};
				begin2[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_2b", 1.584893, 1, 500};
				begin3[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_3b", 1.584893, 1, 500};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			soundContinuous = 0;
			dispersion = 0.010000;
			reloadTime = 0.050000;
			//recoil = "recoil_auto_smg_01";
			//recoilProne = "recoil_auto_prone_smg_01";
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_1b", 1.584893, 1, 500};
				begin2[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_2b", 1.584893, 1, 500};
				begin3[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_3b", 1.584893, 1, 500};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			soundContinuous = 0;
			dispersion = 0.010000;
			reloadTime = 0.050000;
			//recoil = "recoil_auto_pdw";
			//recoilProne = "recoil_auto_prone_pdw";
		};
        class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 35; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
    };
	
	class BP_PPK : Pistol_Base_F 
	{
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		opticsZoomMin = 0.275000;
		opticsZoomMax = 1.100000;
		opticsZoomInit = 0.750000;
		model = "\breakingpoint_weapons\models\PPK\BP_PPK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_ppk_rifle_x_ca.paa";
		displayName = "Walther PPK";
		descriptionUse = "Walther PPK";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\new_pistols", 0.400000, 1, 10};
	    magazines[] = {"BP_7Rnd_765x17", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
	    descriptionShort = "Compact German pistol";
		inertia = 0.050000;
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M4SD_s1.wav", 1.094328, 1, 200};
				begin2[] = {"breakingpoint_jsrs\sounds\M4SD_s2.wav", 1.094328, 1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			reloadTime = 0.1;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light"; 
			dispersion = 0.003450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 30;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};	
	};
	
	class BP_1911MDes: hgun_ACPC2_F 
	{
	    scope = 2;
		model = "\A3\Weapons_F_Beta\Pistols\ACPC2\ACPC2_F.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1911m_rifle_x_ca.paa";
		magazines[] = {"BP_7Rnd_45acp", "BP_7Rnd_45JHP", /*"BP_6Rnd_45_Mag", "BP_6Rnd_45JHP_Mag",*/ "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		displayname = "1911 Desert Camo Modern";
		descriptionShort = "Modern 1911 variant.";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Pistols\p07_reload", 0.562341, 1, 30};
		inertia = 0.0900000; //Inertiachange, reduced.
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\FNP_s1.wav", 1.594328, 1, 400};
				begin2[] = {"breakingpoint_jsrs\sounds\FNP_s2.wav", 1.594328, 1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 1.140000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 0.9700000, 0.85, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\1911snake_s2.wav", 0.970000, 1, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\1911snake_s3.wav", 0.990000, 0.90, 30};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy"; 
			reloadTime = 0.045000;
			dispersion = 0.002500;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 27; //Masschange, reduced.
			allowedSlots[] = {901};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_gemtech45", "BP_suppr9"};
				iconScale = 0;
			};
		};
	};
	
	class BP_Val1911: Pistol_Base_F 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Val1911\BP_Val1911.p3d";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {"BP_7Rnd_45JHP", "BP_7Rnd_45acp", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		reloadAction = "GestureReloadPistol";
		displayname = "Valtiel's Colt 1911 Custom";
		weaponSoundEffect = "DefaultRifle";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Pistols\p07_reload", 0.562341, 1, 30};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\FNP_s1.wav", 1.594328, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\FNP_s2.wav", 1.594328, 1, 1000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 1.140000, 1, 100};
				begin2[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 0.9700000, 0.85, 100};
				begin3[] = {"\breakingpoint_jsrs\sounds\1911snake_s2.wav", 0.970000, 1, 100};
				begin4[] = {"\breakingpoint_jsrs\sounds\1911snake_s3.wav", 0.990000, 0.90, 100};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_pistol_light"; 
			reloadTime = 0.045000;
			dispersion = 0.001500;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 50;
			allowedSlots[] = {901};
			class CowsSlot : SlotInfo 
			{
				compatibleItems[] = {};
				iconScale = 0;
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_gemtech45", "BP_suppr9"};
				iconScale = 0;
			};
			class PointerSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "CQC Knife";
				compatibleItems[] = {"BP_CQCKnife"};
				iconScale = 0;
			};
		};
	};
//-----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS REDFINES WEAPONS RIFLES|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	
	class BP_ScarH: Rifle_Base_F_BP 
	{
	    scope = 2;
		displayName = "FN-SCAR Heavy";
		model = "\breakingpoint_weapons\models\SCAR\BP_ScarH.p3d";
		descriptionShort = "7.62mm Modular Battle Rifle";
		descriptionUse = "SCAR-H with 20in. barrel, fires 7.62x51mm NATO round."; //Descriptionchange
		picture = "\breakingpoint_weapons\icons\gear_scar_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag"/*", BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"*/};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.430957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.350000; //Inertiacahnge, increased.
		initSpeed = -1.07;
		recoil = "recoil_ebr";//recoilchange test this
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.000737;
			soundContinuous = 0;
			reloadTime = 0.096;//625rnds/min
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1000};
				begin4[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 1.0, 1000};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.000737;
			soundContinuous = 0;
			reloadTime = 0.096;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 75; //Masscahnge, Reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_B", "BP_300Sup"}; // .300 must be compatible with SCAR too!
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_AFG", "BP_flashlight"};
				iconScale = 0;
			};
        };
	};
	
	class BP_ScarH_AI: BP_ScarH 
	{
	    scope = 2;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.000737;
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 1.0, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.001237;
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
	};
	
	class BP_AR10: Rifle_Base_F_BP  
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M16\BP_AR10.p3d";
		displayName = "AR10 Battle Rifle";
		magazines[] = {"BP_30Rnd_762x51_BPMag","BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_ar10_rifle_x_ca.paa";
		descriptionShort = "7.62mm Battle Rifle";
		descriptionUse = "AR10 Battle Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\m60e.rtm"};
		inertia = 0.370000; //Inertiachange, increased.
		recoil = "recoil_dmr_01";
		initSpeed = -0.94;//old, shorter barrel = less muzzle velocity
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		modes[] = {"Single", "FullAuto", "far_optic1"};
		muzzles[] = {"this", "Butt"}; //must have
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.6, 2200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.5, 2200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.5, 2200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			reloadTime = 0.0857;
			dispersion = 0.002700; //Dispersionchange, increased.
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_ebr";
			minRange = 700;
			minRangeProbab = 1.000000;
			midRange = 850;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.6, 2200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.5, 2200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.5, 2200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			reloadTime = 0.0857;
			dispersion = 0.002700; //Dispersionchange, increased.
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};
		    class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0;
			};
		};
    };
	
	class BP_AR10_AI: BP_AR10  
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.6, 2200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.5, 2200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.5, 2200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			reloadTime = 0.085000;
			dispersion = 0.001300;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 700;
			minRangeProbab = 1.000000;
			midRange = 850;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.6, 2200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.5, 2200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.5, 2200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			reloadTime = 0.085000;
			dispersion = 0.001300;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single {
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
	};
	class BP_MXM: Rifle_Base_F_BP 
	{
	    scope = 2;
		displayName = "MXM Marksman Rifle";
		descriptionUse = "Semi-auto MX marksman variant with longer barrel and improved accuracy."; //Descriptionchange
		model = "\A3\Weapons_F\Rifles\MX\MXM_F.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mxm_rifle_x_ca.paa";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadAction = "GestureReloadMXSniper";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_long_co.paa"};
		changeFiremodeSound[] = {""};
		initSpeed = -1.07;
		inertia = 0.250000; //Inertiachagen, increased.
		recoil = "recoil_mxm";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto {
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {closure1,0.5, closure2,0.5};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-M_s1.wav", 1.412538, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-M_s2.wav", 1.412538, 1, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-M_s3.wav", 1.412538, 1, 1000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.412538, 1, 120};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.412538, 1, 120};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.412538, 1, 120};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.096000; //reloadtimechange, reduced to match MX line.
			//recoil = "recoil_single_prone_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.000770;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 80; //Masschange, reduced
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
        };   
    };
	
	class BP_MXM_SOS: BP_MXM 
	{
		scope = 2;
		displayName = "MXM Marksman Rifle";
		descriptionUse = "MX Marksman Rifle";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_long_co.paa"};
		changeFiremodeSound[] = {""};
	};
	
	class BP_MX: Rifle_Base_F_BP 
	{
	    scope = 2;
		displayName = "MX 6.5mm Rifle";
		descriptionUse = "Standard MX 6.5mm assault rifle"; //Descriptionchange
		model = "\A3\Weapons_F\Rifles\MX\MX_F.p3d";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_mx_rifle_x_ca.paa";
		changeFiremodeSound[] = {""};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_co.paa", "\breakingpoint_weapons\textures\MX\XMX_short_co.paa"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadAction = "GestureReloadMX";
		inertia = 0.220000; //Inertiachange, increased.
		recoil = "recoil_mx";
		modes[] = {"Single", "FullAuto"};
		
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.212538, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.212538, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.212538, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.212538, 1, 1100};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\556S_s1.wss", 0.712538, 1, 150};
				begin2[] = {"breakingpoint_jsrs\sounds\556S_s2.wss", 0.712538, 1, 150};
				begin3[] = {"breakingpoint_jsrs\sounds\556S_s3.wss", 0.712538, 1, 150};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.096000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.002000;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.112538, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.112538, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.112538, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.112538, 1, 1100};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\556S_s1.wss", 0.712538, 1, 150};
				begin2[] = {"breakingpoint_jsrs\sounds\556S_s2.wss", 0.712538, 1, 150};
				begin3[] = {"breakingpoint_jsrs\sounds\556S_s3.wss", 0.712538, 1, 150};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.096000;
			dispersion = 0.002000;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 75; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_MX_GL: Rifle_Base_F
	{
	    scope = 2;
		displayName = "MX 6.5mm Rifle GL";
		descriptionUse = "MX 6.5mm Rifle GL";
		model = "\A3\Weapons_F\Rifles\MX\MX_GL_F.p3d";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_mxgl_rifle_x_ca.paa";
		changeFiremodeSound[] = {""};
		reloadAction = "GestureReloadMX";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_co.paa", "\breakingpoint_weapons\textures\MX\GLX_co.paa"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.310000; //Inertiacahnge, reduced.
		recoil = "recoil_mxm";
		muzzles[] = {"this", "GL_3GL_F"};
		modes[] = {"Single", "FullAuto"};
		
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.112538, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.112538, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.112538, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.112538, 1, 1100};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\556S_s1.wss", 0.712538, 1, 150};
				begin2[] = {"breakingpoint_jsrs\sounds\556S_s2.wss", 0.712538, 1, 150};
				begin3[] = {"breakingpoint_jsrs\sounds\556S_s3.wss", 0.712538, 1, 150};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.096000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.002000;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.112538, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.112538, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.112538, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.112538, 1, 1100};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\556S_s1.wss", 0.712538, 1, 150};
				begin2[] = {"breakingpoint_jsrs\sounds\556S_s2.wss", 0.712538, 1, 150};
				begin3[] = {"breakingpoint_jsrs\sounds\556S_s3.wss", 0.712538, 1, 150};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.096000;
			dispersion = 0.002000;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
		};
		class GL_3GL_F: UGL_F 
		{
			magazines[] = {"BP_1Rnd_40mm_Flashbang", "BP_1Rnd_HE_shell", "BP_3Rnd_HE_shell", "BP_UGL_FlareWhite", "BP_UGL_FlareRed", "BP_UGL_FlareGreen"};
			displayName = "$STR_A3_cfgweapons_3gl0";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {50, 75, 100, 150, 200, 250, 300, 350, 400};
			discreteDistanceCameraPoint[] = {"OP_eye_50", "OP_eye_75", "OP_eye_100", "OP_eye_150", "OP_eye_200", "OP_eye_250", "OP_eye_300", "OP_eye_350", "OP_eye_400"};
			discreteDistanceInitIndex = 1;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 90; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_MXC: Rifle_Base_F_BP 
	{
	    scope = 2;
		displayName = "MX 6.5mm Carbine";
		descriptionUse = "MX 6.5mm Carbine Rifle";
		model = "\A3\Weapons_F\Rifles\MX\MXC_F.p3d";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_mxc_rifle_x_ca.paa";
		reloadAction = "GestureReloadMXCompact";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_short_co.paa"};
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.190000; //Inertiachange, increased.
		initSpeed = -0.96;
		recoil = "recoil_mxc";
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.112538, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.112538, 1, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.112538, 1, 1000};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.112538, 1, 1000};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\556S_s1.wss", 0.712538, 1, 110};
				begin2[] = {"breakingpoint_jsrs\sounds\556S_s2.wss", 0.712538, 1, 110};
				begin3[] = {"breakingpoint_jsrs\sounds\556S_s3.wss", 0.712538, 1, 110};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.096000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.002200;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.112538, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.112538, 1, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.112538, 1, 1000};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.112538, 1, 1000};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\556S_s1.wss", 0.712538, 1, 110};
				begin2[] = {"breakingpoint_jsrs\sounds\556S_s2.wss", 0.712538, 1, 110};
				begin3[] = {"breakingpoint_jsrs\sounds\556S_s3.wss", 0.712538, 1, 110};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.096000;
			dispersion = 0.002200;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_h"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_MX_black : BP_MX 
	{
		displayName = "MX SpecOps";
		descriptionShort = "Customized MX Assault Rifle for special operations";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa", "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
		picture = "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	class BP_MXM_black : BP_MXM 
	{
		displayName = "MXM SpecOps";
		descriptionShort = "Customized MXM DMR for special operations";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_long_Black_co.paa"};
		picture = "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_dmr_black_X_CA.paa";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	class BP_MK20: Rifle_Base_F_BP 
	{
	    scope = 2;
		model = "\A3\Weapons_F_beta\Rifles\mk20\mk20_F.p3d";
		displayName = "FN F2000 Assault Rifle";
		descriptionUse = "FN F2000 Assault Rifle";
		picture = "\breakingpoint_weapons\icons\gear_mk20_rifle_x_ca.paa";
		descriptionShort = "5.56mm Modular Bullpup assault rifle";
		reloadAction = "GestureReloadMk20";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\mk20\mk20_reload_final", 0.316228, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\mx\mk20_co.paa"};
		inertia = 0.17; //Inertiachange, increased.
		recoil = "recoil_mk20";
		initSpeed = -0.97;
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 750};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 750};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 750};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 750};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.0705;
			dispersion = 0.002700;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 750};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 750};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 750};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 750};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.0705;
			dispersion = 0.002700;
			//recoil = "recoil_auto_mk20";
			//recoilProne = "recoil_auto_prone_mk20";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 75;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_MK20_GL: Rifle_Base_F
	{
	    scope = 2;
		model = "\A3\Weapons_F_beta\Rifles\mk20\Mk20_GL_F.p3d";
		displayName = "FN F2000 Assault Rifle GL";
		descriptionUse = "FN F2000 Assault Rifle GL";
		descriptionShort = "5.56mm Modular Bullpup assault rifle";
		picture = "\breakingpoint_weapons\icons\gear_mk20gl_rifle_x_ca.paa";
		reloadAction = "GestureReloadMk20";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\mk20\mk20_reload_final", 0.316228, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\Rifles\MK20\Data\Anim\mk20G.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		inertia = 0.230; //Inertiachange, increased.
		recoil = "recoil_mk20";
		initSpeed = -0.95;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\mx\mk20_co.paa"};
		muzzles[] = {"this", "EGLM"};
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 750};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 750};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 750};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 750};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.0705;
			dispersion = 0.002700;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 750};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 750};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 750};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 750};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.0705;
			dispersion = 0.002700;
			//recoil = "recoil_auto_mk20";
			//recoilProne = "recoil_auto_prone_mk20";
		};
		class EGLM: UGL_F 
		{
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {100, 200, 300, 400};
			magazines[] = {"BP_1Rnd_40mm_Flashbang", "BP_1Rnd_HE_shell", "BP_3Rnd_HE_shell", "BP_UGL_FlareWhite", "BP_UGL_FlareRed", "BP_UGL_FlareGreen"};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
			discreteDistanceInitIndex = 1;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 85; //Masschange, reduced.
			allowedSlots[] = {901};
		
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_MK20Spec: BP_MK20_GL 
	{
	    displayName = "FN F2000 SpecOps";
		hiddenSelections[] = {""};
		inertia = 0.22;
	};
	
	class BP_MK20C: Rifle_Base_F_BP 
	{
	    scope = 2;
		model = "\A3\Weapons_F_beta\Rifles\mk20\Mk20_C_F.p3d";
		displayName = "FN F2000 Carbine Assault Rifle";
		descriptionUse = "FN F2000 Carbine Assault Rifle";
		descriptionShort = "5.56mm Modular Bullpup assault rifle";
		picture = "\breakingpoint_weapons\icons\gear_mk20_rifle_x_ca.paa";
		reloadAction = "GestureReloadMk20";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\mk20\mk20_reload_final", 0.316228, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\mx\mk20_co.paa"};
		inertia = 0.15;
		recoil = "recoil_mk20c";
		initSpeed = -0.91;
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 650};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 650};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 650};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 650};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 90};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 90};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 90};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 90};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.0705;
			dispersion = 0.002700;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 650};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 650};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 650};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 650};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 90};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 90};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 90};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 90};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.0705;
			dispersion = 0.002700;
			//recoil = "recoil_auto_mk20";
			//recoilProne = "recoil_auto_prone_mk20";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 70;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_Tavor: Rifle_Base_F_BP 
	{
	    scope = 2;
		model = "\A3\weapons_f\Rifles\TRG20\TRG21_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\Tavor\tar21_base_co.paa"};
		picture = "\breakingpoint_weapons\icons\gear_tavor_rifle_x_ca.paa";
		reloadAction = "GestureReloadTRG";
		displayName = "Tavor TRG-21 Assault Rifle";
		descriptionUse = "Tavor TRG-21 Assault Rifle";
		descriptionShort = "5.56mm Modular Bullpup assault rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\mk20\mk20_reload_final", 0.316228, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		inertia = 0.16;
		recoil = "recoil_mk20";
		initSpeed = -0.99;
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 900};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 900};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.070000;
			dispersion = 0.002200;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 900};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 900};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.070000;
			dispersion = 0.002200;
			//recoil = "recoil_auto_mk20";
			//recoilProne = "recoil_auto_prone_mk20";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 75;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_Tavor_AI: BP_Tavor 
	{
	    scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000700;
			minRange = 750;
			minRangeProbab = 1.000000;
			midRange = 950;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 1200;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 700};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 700};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 700};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 700};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001207;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 700;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
	};
	
	class BP_SUD_AK74M: Rifle_Base_F_BP 
	{
		scope = 2;
		displayName = "AK-74M";
		descriptionUse = "AK-74M";
		descriptionShort = "5.45x39mm Assault Rifle";
		model = "breakingpoint_weapons\models\AK74\BP_AK74.p3d";
		magazines[] = {"BP_545x39_AK107", "BP_545x39_HP_30rnd", "BP_545x39_30rnd_Ball_T", "BP_545x39_30rnd_7N22"};
		reloadAction = "GestureReloadMX";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		picture = "\breakingpoint_weapons\icons\gear_ak47_rifle_x_ca.paa";
		inertia = 0.30000; //Inertiachange, increased.
		discreteDistance[] = {100,200,300,400,500,600}; //bekfix Custom, up to 1km?
		discreteDistanceInitIndex = 3;//400m AK zero
		recoil = "recoil_trg21";
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.0923;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001870;
		};
		class Burst : Mode_Burst 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.0923;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001870;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.0923;
			//recoil = "recoil_auto_trg";
			//recoilProne = "recoil_auto_prone_trg";
			dispersion = 0.001870;
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
		    mass = 85; //Masschange, increased.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_ZF42", "BP_PSO35"};
				iconScale = 0;
			};
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_AK74U: BP_SUD_AK74M 
	{
		scope = 2;
		displayName = "Old AKS-74U";
		descriptionUse = "Old AK74U";
		descriptionShort = "Old, poorly maintained 5.45x39mm Assault Rifle";
		picture = "\breakingpoint_weapons\icons\gear_ak47su_rifle_x_ca.paa";
		model = "\breakingpoint_weapons\models\AKS74U\BP_74U.p3d";
		inertia = 0.230000;
		initSpeed = -0.835;
		dispersion = 0.003640; //not sure if dispersion works here - works(Kol9yN)...
		recoil = "recoil_ktb";
		muzzles[] = {"this"};
	};
	
	class BP_SUD_AK107: Rifle_Base_F_BP 
	{
		scope = 2;
		displayName = "AK-107";
		descriptionUse = "AK-107";
		descriptionShort = "AK-100 Series 5.45x39mm Assault Rifle with Balanced Automatics Recoil System."; //DescriptionChange
		model = "breakingpoint_weapons\models\AK107\BP_AK107.p3d";
		magazines[] = {"BP_545x39_AK107", "BP_545x39_HP_30rnd", "BP_545x39_30rnd_Ball_T", "BP_545x39_30rnd_7N22"};
		reloadAction = "GestureReloadMX";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		picture = "\breakingpoint_weapons\icons\gear_ak107_rifle_x_ca.paa";
		inertia = 0.250000;
		recoil = "recoil_mk20";
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 3;
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 900};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001548;
		};
		class Burst : Mode_Burst 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 900};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001548;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {0};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.307946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.307946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class 0: BaseSoundModeType
			{
				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss",0.812538,1,900};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss",0.812538,1,900};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss",0.812538,1,900};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_prone_trg";
			//recoilProne = "recoil_m320";
			dispersion = 0.001548;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				//displayName = "$STR_CfgWeapons_arifle_Khaybar_F_Library0";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_SUD_AK108: BP_SUD_AK107 
	{
		scope = 2;
		displayName = "AK-108";
		descriptionUse = "AK-108";
		descriptionShort = "AK-100 Series 5.56×45mm NATO Assault Rifle with Balanced Automatics Recoil System."; //Descripsionchange
		//model = "breakingpoint_weapons\models\AK107\BP_AK107.p3d";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		//reloadAction = "GestureReloadMX";
		//handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		//changeFiremodeSound[] = {""};
		//reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		//drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		//picture = "\breakingpoint_weapons\icons\gear_ak107_rifle_x_ca.paa";
		//inertia = 0.250000;
		//recoil = "recoil_mk20c";
		//discreteDistance[] = {100,200,300,400,500,600};
		//discreteDistanceInitIndex = 2;
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
				begin1[] = {"breakingpoint_jsrs\sounds\HK416_s1.wav",0.812538,1,1000};
				begin2[] = {"breakingpoint_jsrs\sounds\HK416_s2.wav",0.812538,1,1000};
				begin3[] = {"breakingpoint_jsrs\sounds\HK416_s3.wav",0.812538,1,1000};
				begin4[] = {"breakingpoint_jsrs\sounds\HK416_s4.wav",0.812538,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			//dispersion = 0.001700;
		};
		class Burst : Mode_Burst 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
				begin1[] = {"breakingpoint_jsrs\sounds\HK416_s1.wav",0.812538,1,1000};
				begin2[] = {"breakingpoint_jsrs\sounds\HK416_s2.wav",0.812538,1,1000};
				begin3[] = {"breakingpoint_jsrs\sounds\HK416_s3.wav",0.812538,1,1000};
				begin4[] = {"breakingpoint_jsrs\sounds\HK416_s4.wav",0.812538,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			//dispersion = 0.001700;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
				begin1[] = {"breakingpoint_jsrs\sounds\HK416_s1.wav",0.812538,1,1000};
				begin2[] = {"breakingpoint_jsrs\sounds\HK416_s2.wav",0.812538,1,1000};
				begin3[] = {"breakingpoint_jsrs\sounds\HK416_s3.wav",0.812538,1,1000};
				begin4[] = {"breakingpoint_jsrs\sounds\HK416_s4.wav",0.812538,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_auto_trg";
			//recoilProne = "recoil_auto_prone_trg";
			//dispersion = 0.001700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
		    mass = 75; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				//displayName = "$STR_CfgWeapons_arifle_Khaybar_F_Library0";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp" , "BP_compm4s" , "optic_MRCO" , "optic_Arco" , "optic_aco" , "optic_ACO_grn" , "optic_hamr" , "optic_Holosight" , "BP_optic_ACOG" , "BP_L14X" , "BP_M3AMRAD" , "BP_NXS" , "BP_M3A" , "BP_M3A2" , "BP_M3LR" , "BP_M3AN" , "BP_MRT" , "BP_PS22" , "BP_SOS"};
				iconScale = 0;
			};
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_SUD_AK109: BP_SUD_AK107 
	{
		scope = 2;
		displayName = "AK-109";
		descriptionUse = "AK-109";
		descriptionShort = "AK-100 Series 7.62×39mm Assault Rifle with Balanced Automatics Recoil System.";
		//model = "breakingpoint_weapons\models\AK107\BP_AK107.p3d";
		magazines[] = {"BP_762x39_AKM","BP_60Rnd_762x39_AKM"};
		//reloadAction = "GestureReloadMX";
		//handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		//changeFiremodeSound[] = {""};
		//reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		//drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		//picture = "\breakingpoint_weapons\icons\gear_ak107_rifle_x_ca.paa";
		//inertia = 0.250000;
		//recoil = "recoil_mk20c";
		//discreteDistance[] = {100,200,300,400,500,600};
		//discreteDistanceInitIndex = 3;
		recoil = "recoil_ebr"; //recoil = "recoil_mx"; <- wrong recoil based on caliber (NOT wrong; 7.62x39 =/= 7.62x51. Esp. w/ AK-100 recoil system
		initSpeed = -1.03;
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav",1.1,1,900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav",1.2,1,900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav",1.2,0.98,900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav",1.2,1.1,900};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001700;
		};
		class Burst : Mode_Burst 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav",1.1,1,900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav",1.2,1,900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav",1.2,0.98,900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav",1.2,1.1,900};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001700;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav",1.1,1,900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav",1.2,1,900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav",1.2,0.98,900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav",1.2,1.1,900};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_auto_trg";
			//recoilProne = "recoil_auto_prone_trg";
			dispersion = 0.001700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
		    mass = 75; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				//displayName = "$STR_CfgWeapons_arifle_Khaybar_F_Library0";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp" , "BP_compm4s" , "optic_MRCO" , "optic_Arco" , "optic_aco" , "optic_ACO_grn" , "optic_hamr" , "optic_Holosight" , "BP_optic_ACOG" , "BP_L14X" , "BP_M3AMRAD" , "BP_NXS" , "BP_M3A" , "BP_M3A2" , "BP_M3LR" , "BP_M3AN" , "BP_MRT" , "BP_PS22" , "BP_SOS"};
				iconScale = 0;
			};
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_AKM: Rifle_Base_F_BP 
	{
		scope = 2;
		displayName = "AKMS";
		descriptionShort = "Modern AK-47 variant with folding stock"; //Descriptionchange
		model = "breakingpoint_weapons\models\SA58\BP_AKM.p3d";
		changeFiremodeSound[] = {""};
		magazines[] = {"BP_762x39_AKM", "BP_60Rnd_762x39_AKM"};
		reloadAction = "GestureReloadEBR";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_akms_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		inertia = 0.35000; //Inertiachange, increased.
		recoil = "recoil_mxc";//recoilchange Test this vs AK109
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav", 1.100000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav", 1.200000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 0.98, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 1.10, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.1;//reloadtime change, significant test
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.002100; //dispersionchange, increased.
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav", 1.100000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav", 1.200000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 0.98, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 1.10, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_auto_ebr";
			//recoilProne = "recoil_auto_prone_ebr";
			dispersion = 0.002100;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = 80; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				//displayName = "$STR_CfgWeapons_arifle_Khaybar_F_Library0";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"BP_PSO35", "BP_PSO1"};//added PSO-1 to AK's 
				iconScale = 0;
			};
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
		class GunParticles: GunParticles 
		{
			class SecondEffect 
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar", 0.462341, 1, 30};
	};
	
	class BP_AKM_AI: BP_AKM
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav", 1.100000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav", 1.200000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 0.98, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 1.10, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.065000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001160;
			minRange = 800;
			minRangeProbab = 1.000000;
			midRange = 1000;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 1200;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav", 1.100000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav", 1.200000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 0.98, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 1.10, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.090000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001160;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 800;
			maxRangeProbab = 1.000000;
		};
	};
	
	class BP_SA58: BP_AKM 
	{
		scope = 2;
		displayName = "AKM";
		descriptionShort = "Modern AK-47 variant";
		magazines[] = {"BP_60Rnd_762x39_AKM", "BP_762x39_AKM"};
		reloadAction = "GestureReloadEBR";
		model = "breakingpoint_weapons\models\SA58\BP_SA58.p3d";
		picture = "\breakingpoint_weapons\icons\gear_akm_rifle_x_ca.paa";
		inertia = 0.400000; //Inertiachange, increased.
		recoil = "recoil_mx";
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
	};
	
	class BP_SA582: BP_AKM 
	{
		scope = 2;
		displayName = "AKM RIS";
		descriptionShort = "Modern AK-47 variant with telescopic stock and weaver rails";
		magazines[] = {"BP_762x39_AKM", "BP_60Rnd_762x39_AKM"};
		reloadAction = "GestureReloadEBR";
		inertia = 0.3350000; //Inertiachange, increased.
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		model = "breakingpoint_weapons\models\SA58\BP_SA58_2.p3d";
		picture = "\breakingpoint_weapons\icons\gear_akmris_rifle_x_ca.paa";
		modes[] = {"Single", "FullAuto"};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
		};
	};
	
	class BP_AKMRIS_AI: BP_AKM_AI 
	{
		scope = 2;
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		model = "breakingpoint_weapons\models\SA58\BP_SA58_2.p3d";
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M4 : Rifle_Base_F_BP 
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M4A1.p3d";
		displayName = "M4A1 Assault Rifle";
		picture = "\breakingpoint_weapons\icons\gear_m4a1_rifle_x_ca.paa";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		descriptionUse = "M4A1 Assault Rifle";
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		handAnim[] = {};
		reloadAction = "GestureReloadMX";
		descriptionShort = "M4 5.56mm Assault Rifle";
		inertia = 0.22000; //Inertiachange, increased.
		recoil = "recoil_trg21";
		initSpeed = -0.96;
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};	
			reloadTime = 0.085;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg"; 
			dispersion = 0.002050;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.085;
			//recoil = "recoil_auto_trg";
			//recoilProne = "recoil_auto_prone_trg";
			dispersion = 0.002050;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 70; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Handle", "BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M4K : BP_M4 
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_m4a3K.p3d";
		displayName = "M4A3 Assault Rifle w/Bayonet";
		picture = "\breakingpoint_weapons\icons\gear_m4a3k_rifle_x_ca.paa";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		descriptionUse = "M4A3 Assault Rifle";
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		reloadAction = "GestureReloadMX";
		descriptionShort = "5.56mm Assault Rifle";
		inertia = 0.290000; //Masschange, increased.
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 75;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M4_300 : BP_M4 
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M300.p3d";
		displayName = "M4 300 Blackout";
		picture = "\breakingpoint_weapons\icons\gear_m300k_rifle_x_ca.paa";
		magazines[] = {"BP_30Rnd_300AAC_Mag", "BP_5Rnd_300AAC_Mag"};
		descriptionUse = "M4 300 Blackout";
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		reloadAction = "GestureReloadMX";
		descriptionShort = "7.62x35mm Assault Rifle";
		inertia = 0.240000; //Inertiachange, increased.
		recoil = "recoil_trg20";
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 1.000000, 0.55, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 1.100000, 0.55, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 0.980000, 0.50, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 0.960000, 0.50, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			reloadTime = 0.085;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx"; 
			dispersion = 0.001200;
			minRange = 700;
			minRangeProbab = 1.000000;
			midRange = 900;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 1000;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417_s1.wav", 1.100000, 1, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417_s2.wav", 1.100000, 1, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417_s3.wav", 1.100000, 1, 1000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			soundContinuous = 0;
			reloadTime = 0.085;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.002000;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
		};
		class far_optic1: FullAuto {
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 800;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_B"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_300Sup", "BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M4_300_AI : BP_M4_300 
	{
        scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 1.000000, 0.55, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 1.100000, 0.55, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 0.980000, 0.50, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 0.960000, 0.50, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			reloadTime = 0.085;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000607;
			minRange = 700;
			minRangeProbab = 1.000000;
			midRange = 900;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 1000;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417_s1.wav", 1.100000, 1, 1600};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417_s2.wav", 1.100000, 1, 1600};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417_s3.wav", 1.100000, 1, 1600};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			soundContinuous = 0;
			reloadTime = 0.085;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000707;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 800;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
	};
	
	class BP_M4_300K : BP_M4_300 
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M300K.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m300k_rifle_x_ca.paa";
		displayName = "M4 300 Blackout w/Bayonet";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		magazines[] = {"BP_30Rnd_300AAC_Mag", "BP_5Rnd_300AAC_Mag"};
		inertia = 0.300000; //Inertiachange, increased.
		recoil = "recoil_trg20";
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 90; //Masschange, increased.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_300Sup", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M4_300MK : BP_M4_300 
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M300MK.p3d";
		displayName = "M4 300 Blackout Masterkey";
		picture = "\breakingpoint_weapons\icons\gear_m300mk_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\M16GL.rtm"};
		magazines[] = {"BP_30Rnd_300AAC_Mag", "BP_5Rnd_300AAC_Mag"};
		descriptionShort = "7.62x35mm Assault Rifle with Masterkey attachment";
		inertia = 0.335000;
		recoil = "recoil_trg20";
		muzzles[] = {"this", "Masterkey"};
		class Masterkey: UGL_F 
		{
			magazines[] = {"BP_8Rnd_Slug", "BP_8Rnd_Buckshot", "BP_8Rnd_MagBuckshot"};
			displayName = "Masterkey";
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 800};
					begin2[] = {"breakingpoint_jsrs\sounds\Benelli_s2.wav", 1, 1, 800};
					begin3[] = {"breakingpoint_jsrs\sounds\Benelli_s3.wav", 1, 1, 800};
					begin4[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 800};
					soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
				};
			};
			reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.30, 1, 30};
			drySound[] = {"", 1.000000, 1, 30};
			dispersion = 0.002000;
			magazineReloadTime = 0;
			autoReload = 0;
			reloadTime = 0.400000;
			optics = 1;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 105; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_B"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_300Sup", "BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M4OLD: BP_M4 
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_m4a3.p3d";
		displayName = "M4A3 Carbine Rifle";
		descriptionShort = "A poorly maintained carbine rifle";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		initSpeed = -0.97;
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M16OLD: BP_M4OLD 
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\M16\BP_M16old.p3d";
		displayName = "AR15 Rifle";
		picture = "\breakingpoint_weapons\icons\gear_m16a2_rifle_x_ca.paa";
		descriptionShort = "A poorly maintained civilian rifle";
		handAnim[] = {};
		inertia = 0.230000;
		initSpeed = -0.98;
		modes[] = {"Single"};
		class Single : Mode_SemiAuto 
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.085;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg"; 
			dispersion = 0.001207;
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 75;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
	};
	
	class BP_M16a2: BP_m4 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M16\BP_m16a2.p3d";
		displayName = "M16A2";
		descriptionShort = "5.56mm Assault Rifle";
		handAnim[] = {};
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.230000;
		recoil = "recoil_trg20";
		modes[] = {"Single", "Burst"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			reloadTime = 0.080000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001600;
		};		
		class Burst : Mode_Burst 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			reloadTime = 0.080000;
			//recoil = "recoil_burst_sdar";
			//recoilProne = "recoil_burst_prone_sdar";
			dispersion = 0.001600;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 85;
			allowedSlots[] = {901};		
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_CPad"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M16A4: BP_m4 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M16\BP_m16a4.p3d";
		displayName = "M16A4";
		descriptionShort = "5.56mm Assault Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		picture = "\breakingpoint_weapons\icons\gear_m16a4_rifle_x_ca.paa";
		inertia = 0.230000;
		recoil = "recoil_trg20";
		modes[] = {"Single", "Burst", "FullAuto", "far_optic1"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			reloadTime = 0.07;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001200;
			minRange = 750;
			minRangeProbab = 1.000000;
			midRange = 950;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 1200;
		};		
		class Burst : Mode_Burst 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			reloadTime = 0.07;
			//recoil = "recoil_burst_sdar";
			//recoilProne = "recoil_burst_prone_sdar";
			dispersion = 0.001400;
		};		
		class FullAuto : Mode_FullAuto 
		{		
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			reloadTime = 0.07;
			//recoil = "recoil_auto_sdar";
			//recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.001800;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 700;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 90;
			allowedSlots[] = {901};			
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
		};
	};
	
	class BP_M16A4_AI: BP_M16A4 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M16\BP_m16a4.p3d";
		modes[] = {"Single", "FullAuto", "far_optic1"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			reloadTime = 0.080000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000700;
			minRange = 750;
			minRangeProbab = 1.000000;
			midRange = 950;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 1200;
		};		
		class FullAuto : Mode_FullAuto 
		{		
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			reloadTime = 0.07;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001207;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 700;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
	};
	
	class BP_M4B2: BP_M16A4 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M4Tac.p3d";
		displayName = "M4 Block 2";
		descriptionShort = "5.56mm Assault Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		changeFiremodeSound[] = {""};
		magazines[] = {"BP_556x45_StanagM855A1", "BP_556x45_Stanag", "BP_556x45_StanagSD", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		picture = "\breakingpoint_weapons\icons\gear_m4b2_rifle_x_ca.paa";
		inertia = 0.200000;
		modes[] = {"Single", "Burst", "FullAuto", "far_optic1"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 0.6, 600};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 0.67, 600};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.58, 600};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.62, 600};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
  			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.6, 60};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 0.67, 60};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.58, 60};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.7, 60};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 0.62, 60};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			reloadTime = 0.080000;
			recoil = "recoil_single_sdar";
			recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.000800;
		};		
		class Burst : Mode_Burst 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 0.6, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 0.60, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.58, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.52, 700};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.6, 80};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 0.67, 80};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.58, 80};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.7, 80};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 0.62, 80};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			reloadTime = 0.080000;
			recoil = "recoil_burst_sdar";
			recoilProne = "recoil_burst_prone_sdar";
			dispersion = 0.001200;
		};		
		class FullAuto : Mode_FullAuto 
		{		
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 0.6, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 0.60, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.58, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.52, 700};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.6, 100};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 0.67, 100};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.58, 100};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.7, 100};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 0.62, 100};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			reloadTime = 0.070000;
			recoil = "recoil_auto_sdar";
			recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.001900;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 80;
			allowedSlots[] = {901};			
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
		};
	};
	
	class BP_G36C : Rifle_Base_F_BP 
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\G36\BP_G36.p3d";
		displayName = "HK G36 Carbine";
		picture = "\breakingpoint_weapons\icons\gear_g36_rifle_x_ca.paa";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		descriptionUse = "HK G36 Carbine";
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		handAnim[] = {};
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		descriptionShort = "5.56mm Assault Rifle";
		inertia = 0.200000; //Inertiachange, reduced.
		initSpeed = -0.88;
		modes[] = {"Single", "FullAuto"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\mk18_s1.wav", 1.000000, 1.1, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\mk18_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\mk18_s3.wav", 0.980000, 0.88, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\mk18_s4.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 120};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 120};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 120};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 120};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
			reloadTime = 0.085;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg"; 
			dispersion = 0.002400;
		};		
		class FullAuto : Mode_FullAuto 
		{		
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\mk18_s1.wav", 1.000000, 1.1, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\mk18_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\mk18_s3.wav", 0.980000, 0.88, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\mk18_s4.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 120};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 120};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 120};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 120};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			}; 
			reloadTime = 0.085;
			//recoil = "recoil_auto_trg";
			//recoilProne = "recoil_auto_prone_trg";
			dispersion = 0.002600;
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 70; //Masschange, reduced.
			allowedSlots[] = {901};		
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_Mk12mod1: BP_M16A4 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\SPR\BP_SPR.p3d";
		displayName = "Mk12 SPR";
		descriptionShort = "Special Purpose Rifle derived from the M16";
		//magazines[] = {"BP_556x45_StanagMK262", "BP_556x45_Stanag", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		picture = "\breakingpoint_weapons\icons\gear_mk12spr_rifle_x_ca.paa";
		//handAnim[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.300000;
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mk12Mod1_s1.wav", 1.000000, 1.0, 800};
				begin2[] = {"\breakingpoint_jsrs\sounds\Mk12Mod1_s1.wav", 1.100000, 0.88, 800};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mk12Mod1_s1.wav", 0.980000, 0.91, 800};
				begin4[] = {"\breakingpoint_jsrs\sounds\Mk12Mod1_s1.wav", 0.960000, 0.98, 800};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 120};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 120};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 120};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 120};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 120};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			reloadtime = 0.071000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.000735;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = 95;
			allowedSlots[] = {901};			
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_flashlight"};
				iconScale = 0;
			};
		};
	};
	
	class BP_Mk12mod2: BP_Mk12mod1 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\SPR\BP_SPR2.p3d";
		displayName = "Mk12 SPR Mod 0";
	};
	
	class BP_Mk12mod1Spec: BP_Mk12mod1 
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\SPR\BP_SPRS.p3d";
		displayName = "Mk12 Mod 1";
		descriptionShort = "Heavily modified Designated Marksman variant of the M16 customized for special operations";
		//magazines[] = {"BP_556x45_StanagMK262", "BP_556x45_Stanag", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		picture = "\breakingpoint_weapons\icons\gear_mk12mod1_rifle_x_ca.paa";
		handAnim[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.280000;
		initSpeed = -1.03;
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mk12Mod1_s1.wav", 1.000000, 1.0, 800};
				begin2[] = {"\breakingpoint_jsrs\sounds\Mk12Mod1_s1.wav", 1.100000, 0.88, 800};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mk12Mod1_s1.wav", 0.980000, 0.91, 800};
				begin4[] = {"\breakingpoint_jsrs\sounds\Mk12Mod1_s1.wav", 0.960000, 0.98, 800};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
 			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 120};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 120};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 120};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 120};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 120};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			reloadtime = 0.071000;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.000611;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = 95;
			allowedSlots[] = {901};			
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0;
			};
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_flashlight"};
				iconScale = 0;
			};
		};
	};

	class BP_MP5 : Rifle_Base_F_BP 
	{
		scope = 2;
		displayName = "HK MP5";
		model = "\breakingpoint_weapons\models\MP5\BP_mp5.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mp5_rifle_x_ca.paa";
		discreteDistance[] = {50, 100, 150, 200};
		discreteDistanceInitIndex = 0;
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\HKMP5.rtm"};
		inertia = 0.150000;
		initSpeed = -1.10;
		recoil = "recoil_smg_02";
		modes[] = {"Single", "Burst", "FullAuto"};		
		class Single : Mode_SemiAuto {			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType {
				begin1[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.100000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 1.100000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.00000, 0.7, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 1.300000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.200000, 1.3, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 30};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};			
			reloadTime = 0.071;
			//recoil = "recoil_single_pdw";
			//recoilProne = "recoil_single_prone_pdw";
			dispersion = 0.002730;
		};		
		class Burst : Mode_Burst
		{		
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType {
				begin1[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 0.700000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 0.600000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 0.75000, 0.7, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 0.6300000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 0.8200000, 1.3, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.200000, 1.2, 30};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.100000, 0.7, 30};
				begin6[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.300000, 0.9, 30};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};			
			reloadTime = 0.071;
			//recoil = "recoil_burst_pdw";
			//recoilProne = "recoil_burst_prone_pdw";
			dispersion = 0.002730;
		};		
		class FullAuto : Mode_FullAuto 
		{		
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType {
				begin1[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.100000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 1.100000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.00000, 0.7, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 1.300000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.200000, 1.3, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.200000, 1.2, 30};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.100000, 0.7, 30};
				begin6[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.300000, 0.9, 30};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};			
			reloadTime = 0.071;
			//recoil = "recoil_auto_pdw";
			//recoilProne = "recoil_auto_prone_pdw";
			dispersion = 0.002730;
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 60;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_aco", "optic_ACO_grn", "optic_Holosight"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		magazines[] = {"BP_30Rnd_9x21_Mag", "BP_33Rnd_9x19OVP", "BP_19Rnd_9x19", "BP_16Rnd_9x21_Mag", "BP_17Rnd_9x19", "BP_33Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19_M9", "BP_15Rnd_9x19OVP"};
		descriptionShort = "9mm Submachine gun";
	};
	
	class BP_LeeEnfield: Rifle_Base_F_BP 
	{
		scope = 2;
		displayName = "Enfield MkIV Collector";
		descriptionShort = "A well maintained collectible high power WWI bolt action rifle";
		model = "\breakingpoint_weapons\models\LeeEnfield\BP_LeeEnfield.p3d";
		picture = "\breakingpoint_weapons\icons\gear_enfieldcollector_rifle_x_ca.paa";
		discreteDistance[] = {100, 200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 1;
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_10Rnd_303_Mag", "BP_10rnd_303_JSP_Mag"};
		inertia = 0.40000; //Inertiachange, increased.
		recoil = "recoil_ebr";
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\NewEnfield_S1.wav", 1.378279, 1, 1300};
				begin2[] = {"breakingpoint_jsrs\sounds\NewEnfield_S2.wav", 1.478279, 1, 1300};
				begin3[] = {"breakingpoint_jsrs\sounds\NewEnfield_S3.wav", 1.378279, 1, 1300};
				begin4[] = {"breakingpoint_jsrs\sounds\NewEnfield_S4.wav", 1.378279, 1, 1300};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};			
			reloadTime = 1.00000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000930;
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 105;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0;
			};
		};		
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_Garand: Rifle_Base_F_BP 
	{
		scope = 2;
		autoReload = 1;
		displayName = "M1 Garand";
		descriptionShort = "A well maintained WWII infantry rifle";
		model = "\breakingpoint_weapons\models\Garand\BP_Garand.p3d";
		picture = "\breakingpoint_weapons\icons\gear_garand_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\M24.rtm"};
		magazines[] = {"BP_8Rnd_3006_Mag", "BP_8Rnd_3006M_Mag", "BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		inertia = 0.390000;
		recoil = "recoil_dmr_01";
		initSpeed = -0.98;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1_S1.wav", 1.278279, 0.8, 1900};
				begin2[] = {"breakingpoint_jsrs\sounds\M1_S2.wav", 1.178279, 0.9, 1900};
				begin3[] = {"breakingpoint_jsrs\sounds\M1_S3.wav", 1.378279, 1, 1900};
				begin4[] = {"breakingpoint_jsrs\sounds\M1_S1.wav", 1.178279, 1.07, 1900};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};			
			reloadTime = 0.12;//reloadtimechange, test value
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
			dispersion = 0.001350;
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 90;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0;
			};
		};		
		reloadSound[] = {};
		reloadAction = "ReloadMagazine";
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\M1_reload.wav", 0.480000, 0.9, 80};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_GarandK: Rifle_Base_F_BP 
	{
		scope = 2;
		autoReload = 1;
		displayName = "M1 Garand Bayonet";
		descriptionShort = "A well maintained WWII infantry rifle";
		model = "\breakingpoint_weapons\models\Garand\BP_GarandK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_garandk_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\M24.rtm"};
		magazines[] = {"BP_8Rnd_3006_Mag", "BP_8Rnd_3006M_Mag", "BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		inertia = 0.450000;
		initSpeed = -0.98;
		recoil = "recoil_dmr_01";
		muzzles[] = {"this", "Bayonet"};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1_S1.wav", 1.278279, 0.8, 1900};
				begin2[] = {"breakingpoint_jsrs\sounds\M1_S2.wav", 1.178279, 0.9, 1900};
				begin3[] = {"breakingpoint_jsrs\sounds\M1_S3.wav", 1.378279, 1, 1900};
				begin4[] = {"breakingpoint_jsrs\sounds\M1_S1.wav", 1.178279, 1.07, 1900};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};			
			reloadTime = 0.12;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.001350;
		};		
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 95;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0;
			};
		};		
		reloadSound[] = {};
		reloadAction = "ReloadMagazine";
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\M1_reload.wav", 0.380000, 0.9, 80};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_GarandU: BP_Garand 
	{
		scope = 2;
	};
	
	class BP_SVT40: Rifle_Base_F_BP 
	{
		scope = 2;
		displayName = "Tokarev SVT-40";
		descriptionShort = "Russian WWII high power rifle";
		model = "\breakingpoint_weapons\models\SVT40\BP_SVT40.p3d";
		picture = "\breakingpoint_weapons\icons\gear_svt40_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		magazines[] = {"BP_762x54_SVD", "BP_762x54_7N1_10rnd", "BP_762x54_7N13_10rnd"};
		inertia = 0.350000;
		recoil = "recoil_dmr_01";
		initSpeed = -0.97;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.022020, 1.1, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.022020, 0.9, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.022020, 0.84, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			reloadTime = 0.095;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.001290;
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 85;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_ZF42", "BP_PSO35"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0;
			};
		};		
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_SVT40_2: BP_SVT40 
	{
		scope = 2;
	};
	
	class BP_1866: Rifle_Base_F_BP 
	{
		scope = 2;
		displayName = "Winchester 1866";
		descriptionShort = "A classic lever rifle chambered for .45ACP";
		model = "\breakingpoint_weapons\models\1866\BP_1866.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1866_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_7Rnd_45acp", "BP_7Rnd_45JHP"};
		inertia = 0.280000;
		recoil = "recoil_mk20";
		initSpeed = -1.12;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {closure1,0.5, closure2,0.5};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\1866_S1.wss", 1.078279, 1, 700};
				begin2[] = {"breakingpoint_jsrs\sounds\1866_S2.wss", 1.078279, 1, 700};
				begin3[] = {"breakingpoint_jsrs\sounds\1866_S3.wss", 1.078279, 1, 700};
				begin4[] = {"breakingpoint_jsrs\sounds\1866_S4 .wss", 1.078279, 1, 700};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};			
			reloadTime = 1.596000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001790;
		};			
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 85;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Unertl8x", "BP_Unertl32x"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};		
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_1866C: BP_1866 
	{
		scope = 2;
		displayName = "Winchester 1866 Collector";
		descriptionShort = "A classic lever rifle chambered for .45ACP";
		model = "\breakingpoint_weapons\models\1866\BP_1866_2.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1866c_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_7Rnd_45JHP", "BP_7Rnd_45acp"};
		inertia = 0.280000;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {closure1,0.5, closure2,0.5};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\1866_S1.wss", 1.278279, 0.6, 700};
				begin2[] = {"breakingpoint_jsrs\sounds\1866_S2.wss", 1.278279, 0.5, 700};
				begin3[] = {"breakingpoint_jsrs\sounds\1866_S3.wss", 1.378279, 0.57, 700};
				begin4[] = {"breakingpoint_jsrs\sounds\1866_S4 .wss", 1.278279, 0.62, 700};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};			
			reloadTime = 1.596000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001500;
		};			
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 90;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Unertl8x", "BP_Unertl32x"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};		
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_1886S: BP_1866 
	{
		scope = 2;
		displayName = "Winchester 1886 Short";
		descriptionShort = "A classic lever rifle chambered for .45-70";
		model = "\breakingpoint_weapons\models\1866\BP_1886S.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1886s_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_8Rnd_45gov"};
		inertia = 0.250000;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\CZ_Barrelless_S1.wav", 0.878279, 0.5, 1800};
				begin2[] = {"breakingpoint_jsrs\sounds\CZ_Barrelless_S3.wav", 0.878279, 0.5, 1800};
				begin3[] = {"breakingpoint_jsrs\sounds\CZ_Barrelless_S4.wav", 0.878279, 0.5, 1800};
				soundBegin[] = {"begin1", 0.33000, "begin2", 0.33000, "begin3", 0.34000};
 			};			
			reloadTime = 1.596000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001600;
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 80;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Unertl8x", "BP_Unertl32x"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
		};			
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_LeeEnfield2: BP_LeeEnfield 
	{
		scope = 2;
	};
	
	class BP_LeeEnfieldK: BP_LeeEnfield 
	{
		scope = 2;
		displayName = "Enfield MkIV Collector w/Bayonet";
		descriptionShort = "A well maintained collectible high power WWI bolt action rifle";
		model = "\breakingpoint_weapons\models\LeeEnfield\BP_LeeEnfieldK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_enfieldk_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		inertia = 0.450000;
		muzzles[] = {"this", "Bayonet"};		
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Enfield_s1.wav", 1.178279, 1, 1300};
				begin2[] = {"breakingpoint_jsrs\sounds\Enfield_s2.wav", 1.078279, 1, 1300};
				begin3[] = {"breakingpoint_jsrs\sounds\Enfield_s3.wav", 1.078279, 1, 1300};
				begin4[] = {"breakingpoint_jsrs\sounds\Enfield_s4.wav", 1.178279, 1, 1300};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};			
			reloadTime = 1.20000;
			dispersion = 0.000930;
		};
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
	};

	class BP_M1903: BP_LeeEnfield 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M1903\BP_M1903.p3d";
		displayname = "Springfield M1903";
		picture = "\breakingpoint_weapons\icons\gear_m1903_rifle_x_ca.paa";
		descriptionShort = "30-06 bolt-action sniper rifle";
		magazines[] = {"BP_5Rnd_3006M_Mag", "BP_5Rnd_3006_Mag"};
		inertia = 0.390000;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound};
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
  			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1903_S1.wav", 1.078279, 1.05, 1800};
				begin2[] = {"breakingpoint_jsrs\sounds\M1903_S2.wav", 1.178279, 0.90, 1800};
				begin3[] = {"breakingpoint_jsrs\sounds\M1903_S3.wav", 1.078279, 1.00, 1800};
				begin4[] = {"breakingpoint_jsrs\sounds\M1903_S2.wav", 1.178279, 1.20, 1800};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};			
			reloadTime = 1.3000;
			//recoil = "recoil_auto_sdar";
			//recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.001100;
		};						
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 90;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_ZF42"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0;
			};
		};
	};

	class BP_M1903K: BP_M1903 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M1903\BP_M1903K.p3d";
		displayname = "Springfield M1903 w/Bayonet";
		picture = "\breakingpoint_weapons\icons\gear_m1903k_rifle_x_ca.paa";
		descriptionShort = "30-06 bolt-action sniper rifle with Bayonet attachment";
		magazines[] = {"BP_5Rnd_3006M_Mag", "BP_5Rnd_3006_Mag"};
		inertia = 0.440000;
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		muzzles[] = {"this", "Bayonet"};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 95;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : CowsSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_ZF42"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0;
			};
		};		
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
	};
	
	class BP_LeeEnfield_old: BP_LeeEnfield 
	{
		scope = 2;
		displayName = "Old Enfield MkIII";
		descriptionShort = "An old, poorly maintained high power WWI bolt action rifle";
		model = "\breakingpoint_weapons\models\LeeEnfieldOld\BP_LeeEnfield_old.p3d";
		picture = "\breakingpoint_weapons\icons\gear_oldenfield_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_10Rnd_303_Mag", "BP_10Rnd_303_JSP_Mag"};
		muzzles[] = {"this", "Butt"};
		initSpeed = -0.92;
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Enfield_s1.wav", 1.178279, 1, 2200};
				begin2[] = {"breakingpoint_jsrs\sounds\Enfield_s2.wav", 1.078279, 1, 2200};
				begin3[] = {"breakingpoint_jsrs\sounds\Enfield_s3.wav", 1.078279, 1, 2200};
				begin4[] = {"breakingpoint_jsrs\sounds\Enfield_s4.wav", 1.178279, 1, 2200};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};			
			reloadTime = 1.20000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.002220;
		};
		
	};

    class BP_LeeEnfield_old2: BP_LeeEnfield_old 
	{
		scope = 2;
	};	
	
//----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS REDFINES WEAPONS LMG--|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    class BP_MX_SW: Rifle_Base_F_BP 
	{
	    scope = 2;
		displayName = "MX LMG";
		descriptionUse = "MX LMG";
		model = "\A3\Weapons_F\Rifles\MX\MX_SW_F.p3d";
		magazines[] = {"BP_100Rnd_65x39", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_mxsw_rifle_x_ca.paa";
		changeFiremodeSound[] = {""};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_lmg_co.paa"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.330000;
		recoil = "recoil_sw";
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.412538, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.412538, 1, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.412538, 1, 1000};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.412538, 1, 1000};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 100};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 100};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.076000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.001500;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.412538, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.412538, 1, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.412538, 1, 1000};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.412538, 1, 1000};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 100};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 100};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.096000;
			dispersion = 0.001900;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
		};		
		class far_optic1: Single {
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 105;		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_MG"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0;
			};	
        };   
	};
	
	class BP_Zafir: Rifle_Base_F_BP 
	{
	    scope = 2;
		model = "\A3\Weapons_F_Beta\Machineguns\Zafir\Zafir_F.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Beta\Machineguns\Zafir\Data\Anim\zafir.rtm"};
		displayName = "Negev NG7 LMG";
		descriptionShort = "Negev NG7 LMG";
		descriptionUse = "Negev NG7 LMG";
		magazines[] = {"BP_150Rnd_762x51_Box", "BP_762x51_Box_Tracer", "BP_100Rnd_762x51_MINIMI", "BP_30Rnd_762x51_BPMag", "BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_zafir_rifle_x_ca.paa";
		changeFiremodeSound[] = {""};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.420000;
		recoil = "recoil_zafir";
		modes[] = {"Single", "FullAuto", "close", "far"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Zafir_s1.wav", 1.012538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\Zafir_s2.wav", 1.012538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\Zafir_s3.wav", 1.012538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\Zafir_s4.wav", 1.012538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 200};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.096000;
			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.002000;
			aiRateOfFireDistance = 1400;
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1400;
			maxRangeProbab = 1.000000;
			//burst = 2;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
		};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Zafir_s1.wav", 1.012538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\Zafir_s2.wav", 1.012538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\Zafir_s3.wav", 1.012538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\Zafir_s4.wav", 1.012538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 200};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.096000;
			dispersion = 0.002200;
			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_mk200";
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 1.000000;
			midRange = 50;
			midRangeProbab = 1.000000;
			maxRange = 200;
			maxRangeProbab = 1.000000;
			showToPlayer = 1;
			aiRateOfFire = 0.00000001;
			aiRateOfFireDistance = 200;
		};		
		class close: FullAuto 
		{
			burst = 6;
			aiRateOfFire = 0.0050000;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			showToPlayer = 0;
		};
		class far: Single 
		{
			burst = 4;
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1200;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 140;		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_MG"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0;
			};	
        };   
	};
	
	class BP_Zafir_AI: BP_Zafir 
	{
	    scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "close", "far"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Zafir_s1.wav", 1.012538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\Zafir_s2.wav", 1.012538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\Zafir_s3.wav", 1.012538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\Zafir_s4.wav", 1.012538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 400};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 400};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 400};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 400};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.096000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000970;
			aiRateOfFireDistance = 1400;
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1400;
			maxRangeProbab = 1.000000;
			burst = 2;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Zafir_s1.wav", 1.012538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\Zafir_s2.wav", 1.012538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\Zafir_s3.wav", 1.012538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\Zafir_s4.wav", 1.012538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 400};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 400};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 400};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 400};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.096000;
			dispersion = 0.001170;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 1.000000;
			midRange = 50;
			midRangeProbab = 1.000000;
			maxRange = 200;
			maxRangeProbab = 1.000000;
			showToPlayer = 1;
			aiRateOfFire = 0.00000001;
			aiRateOfFireDistance = 200;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};		
		class close: FullAuto 
		{
			burst = 6;
			aiRateOfFire = 0.0050000;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			showToPlayer = 0;
		};
		class far: Single 
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1200;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
		};
	};
	
	class BP_Minimi_HG: Rifle_Base_F_BP 
	{
		scope = 2;
		type = 1;
		displayName = "M249 SAW";
		descriptionUse = "M249 SAW";
		descriptionShort = "5.56mm Light Machinegun";
		magazines[] = {"BP_200Rnd_556x45_MINIMI", "BP_200Rnd_556x45_TRACER", "BP_556x45_Stanag", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		picture = "\breakingpoint_weapons\icons\gear_m249_rifle_x_ca.paa";
		model = "\breakingpoint_weapons\models\M249\BP_M249.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		reloadAction = "GestureReloadM200";
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_M200", 0.276684, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.330000;
		initSpeed = -0.98;
		recoil = "recoil_mk200";
		modes[] = {"FullAuto", "close", "far"};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M249_s4.wav", 1.050000, 1, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\M249_s5.wav", 1.050000, 1, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\M249_s6.wav", 1.050000, 1, 900};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 100};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 100};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.066000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001800;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 1.000000;
			midRange = 50;
			midRangeProbab = 1.000000;
			maxRange = 200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
		};		
		class close: FullAuto 
		{
			burst = 8;
			aiRateOfFire = 0.0500000;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			showToPlayer = 0;
		};
		class far: close 
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 110;		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_MG"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};	
        }; 
	};
	
	class BP_Minimi_HG_AI: BP_Minimi_HG 
	{
		scope = 2;
		modes[] = {"FullAuto", "close", "far"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M249_s4.wav", 1.050000, 1, 200};
				begin2[] = {"\breakingpoint_jsrs\sounds\M249_s5.wav", 1.050000, 1, 200};
				begin3[] = {"\breakingpoint_jsrs\sounds\M249_s6.wav", 1.050000, 1, 200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 400};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 400};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 400};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 400};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.066000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000900;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 1.000000;
			midRange = 50;
			midRangeProbab = 1.000000;
			maxRange = 200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};		
		class close: FullAuto 
		{
			burst = 8;
			aiRateOfFire = 0.0500000;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			showToPlayer = 0;
		};
		class far: close 
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
	};	
	class BP_Minimi_762: Rifle_Base_F_BP 
	{
	    scope = 2;
		type = 1;
		displayName = "Mk48 Mod 1";
		descriptionUse = "Mk48 Mod 1";
		descriptionShort = "7.62mm Light Machinegun";
		magazines[] = {"BP_100Rnd_762x51_MINIMI", "BP_150Rnd_762x51_Box", "BP_762x51_Box_Tracer", "BP_30Rnd_762x51_BPMag", "BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_mk48_rifle_x_ca.paa";
		model = "\breakingpoint_weapons\models\Mk48\BP_Mk48.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_M200", 0.216684, 1, 30};
		reloadAction = "GestureReloadM200";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.40000;
		recoil = "recoil_zafir";
		modes[] = {"FullAuto", "far_optic1"};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mk48_s4.wav", 1.250000, 1, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\Mk48_s5.wav", 1.250000, 1, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mk48_s6.wav", 1.250000, 1, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 200};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.089000;
			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.002200;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 150;
			midRangeProbab = 1.000000;
			maxRange = 300;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 145;		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_MG"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compM4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight",  "BP_optic_ACOG"};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0;
			};
        };
	};	
	
	class BP_Minimi_762_AI: BP_Minimi_762 
	{
	    scope = 2;
		modes[] = {"FullAuto", "far_optic1"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefK = 0.100000;		
		class FullAuto : Mode_FullAuto
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mk48_s4.wav", 1.250000, 1, 500};
				begin2[] = {"\breakingpoint_jsrs\sounds\Mk48_s5.wav", 1.250000, 1, 500};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mk48_s6.wav", 1.250000, 1, 500};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 400};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 400};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 400};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 400};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};			
			reloadTime = 0.089000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001300;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 150;
			midRangeProbab = 1.000000;
			maxRange = 300;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefK = 0.100000;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
	};
	
	class BP_Minimi_762CCO: BP_Minimi_762 {};
	
	class BP_BAR: Rifle_Base_F_BP 
	{
	    scope = 2;
		type = 1;
		displayName = "M1918 BAR";
		descriptionUse = "M1918 BAR";
		descriptionShort = "30-06 Machinegun";
		magazines[] = {"BP_20Rnd_3006_Mag", "BP_20Rnd_3006M_Mag", "BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_bar_rifle_x_ca.paa";
		model = "\breakingpoint_weapons\models\BAR\BP_BAR.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\M24.rtm"};
		changeFiremodeSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_M200", 0.286684, 1, 30};
		reloadAction = "GestureReloadEBR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.687000;
		initSpeed = -0.96;
		recoil = "recoil_zafir";
		modes[] = {"FullAuto", "far_optic1"};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\BAR_s1.wav", 1.050000, 0.9, 1500};
				begin2[] = {"\breakingpoint_jsrs\sounds\BAR_s2.wav", 1.010000, 0.7, 1500};
				begin3[] = {"\breakingpoint_jsrs\sounds\BAR_s3.wav", 1.050000, 0.87, 1500};
				begin4[] = {"\breakingpoint_jsrs\sounds\BAR_s4.wav", 1.020000, 0.98, 1500};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			reloadTime = 0.089000;
			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.001300;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 150;
			midRangeProbab = 1.000000;
			maxRange = 300;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
		};
		class far_optic1: FullAuto 
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 175;		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
	};

//------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS REDFINES WEAPONS SNIPERS|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	class BP_LRR_F: Rifle_Long_Base_F 
	{
		scope = 2;
		type = 1;
		model = "\A3\Weapons_F\LongRangeRifles\M320\M320_F.p3d";
		//model = "\A3\Weapons_F_Bootcamp\LongRangeRifles\M320_camo\M320_camo_F.p3d";
		displayName = "CheyTac M200 Intervention";
		magazines[] = {"BP_7Rnd_408Chey_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_chey_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\M320\data\Anim\m320.rtm"};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\M320\M320_reload", 0.401187, 1, 30};
		reloadAction = "GestureReloadLRR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		inertia = 0.400000;
		recoil = "recoil_m320";
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Chey_s1.wav", 1.250000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\Chey_s2.wav", 1.250000, 1, 2000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\50sd_s1.wav", 0.650000, 1, 200};
				begin2[] = {"\breakingpoint_jsrs\sounds\50sd_s1.wav", 0.650000, 1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};			
			dispersion = 0.000097;
			soundContinuous = 0;
			reloadTime = 2.200000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 205;
			allowedSlots[] = {};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_408"};
				iconScale = 0;
			};	
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
		};
	};
	
	class BP_LRR_AI: BP_LRR_F 
	{
		scope = 2;
		type = 1;
		magazines[] = {"BP_100Rnd_50Cal_AI"};
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		inertia = 0.0000;
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Chey_s1.wav", 1.250000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\Chey_s2.wav", 1.250000, 1, 3000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\50sd_s1.wav", 0.650000, 1, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\50sd_s1.wav", 0.650000, 1, 1000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};			
			dispersion = 0.000097;
			soundContinuous = 0;
			reloadTime = 2.200000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_GM6_SOS: Rifle_Long_Base_F 
	{
		scope = 2;
		type = 1;
		magazines[] = {"BP_5Rnd_127x108_Mag"};
		model = "\A3\Weapons_F\LongRangeRifles\GM6\GM6_F.p3d";
		displayName = "Gep+ⳤ GM-6 Lynx";
		descriptionUse = "Gep+ⳤ GM-6 Lynx";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_gm6_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		reloadAction = "ReloadGM6";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.390957, 1, 30};
		inertia = 0.370000;
		recoil = "recoil_gm6";
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\GM6_s1.wav", 1.250000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\GM6_s2.wav", 1.250000, 1, 3000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};			
			dispersion = 0.000150;
			soundContinuous = 0;
			reloadTime = 1.500000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 350;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 205;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
		};
	};
	
	class BP_GM6_AI: BP_GM6_SOS 
	{
		scope = 2;
		type = 1;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_100Rnd_50Cal_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\GM6_s1.wav", 1.250000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\GM6_s2.wav", 1.250000, 1, 3000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};			
			dispersion = 0.000150;
			soundContinuous = 0;
			reloadTime = 1.500000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 350;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_M107_DES: Rifle_Base_F_BP 
	{
		scope = 2;
		type = 1;
		model = "\breakingpoint_weapons\models\M107\BP_M107.p3d";
		displayName = "Barrett M107";
		picture = "\breakingpoint_weapons\icons\gear_m107_rifle_x_ca.paa";
		magazines[] = {"BP_10Rnd_127x99", "BP_10Rnd_127x99_RAUF"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M107b.rtm"};
		reloadAction = "GestureReloadLRR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		//hiddenSelections[] = {"camo1", "camo2", "camo3"};
		inertia = 0.400000;
		recoil = "recoil_gm6";
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M107_s1.wav", 1.050000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\M107_s2.wav", 1.050000, 1, 3000};
				begin3[] = {"\breakingpoint_jsrs\sounds\M107_s2.wav", 1.150000, 1, 3000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			dispersion = 0.000180;
			soundContinuous = 0;
			reloadTime = 1.500000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 225;
			allowedSlots[] = {};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};	
		};
	};
	
	class BP_M107_AI: BP_M107_DES 
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_100Rnd_50Cal_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M107_s1.wav", 1.050000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\M107_s2.wav", 1.050000, 1, 3000};
				begin3[] = {"\breakingpoint_jsrs\sounds\M107_s2.wav", 1.150000, 1, 3000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			dispersion = 0.000180;
			soundContinuous = 0;
			reloadTime = 1.500000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefK = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_AWSM: Rifle_Long_Base_F 
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\AWSM\BP_AWSM.p3d";
		picture = "\breakingpoint_weapons\icons\gear_awsm_rifle_x_ca.paa";
		magazines[] = {"BP_10Rnd_338Lapua_Mag"};
		displayname = "Artic Warfare Super Magnum";
		reloadAction = "GestureReloadLRR";
		descriptionShort = "Accuracy International .338 Lapua Magnum Sniper Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.290000;
		recoil = "recoil_m320";
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_s4.wav", 1.400000, 1.03, 2000}; 
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_s5.wav", 1.300000, 0.95, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\L115A3_s6.wav", 1.470000, 1, 2000};
				begin4[] = {"\breakingpoint_jsrs\sounds\L115A3_s4.wav", 1.420000, 1, 2000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 0.500000, 1.03, 300}; 
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 0.500000, 0.95, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 0.470000, 1, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 0.420000, 1, 300};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000};
 			};			
			reloadTime = 2.500000;
			//recoil = "LynxRecoil";
			//recoilProne = "LynxRecoilprone";
			dispersion = 0.000130;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
		};		
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};		
        class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 185;
			allowedSlots[] = {};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_SN"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3AN", "BP_MRT", "BP_PS22"};
				iconScale = 0;
			};			
			class PointerSlot : Slotinfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes"};
				iconScale = 0;
			};
        };		
		class GunParticles : GunParticles 
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\L115A3Reload", 0.240234, 0.67, 30};
		reloadSound[] = {"\breakingpoint_jsrs\sounds\L115A3Bolt", 0.306234, 0.8, 750};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.300957, 1, 30};
    };
	
	class BP_AWSM_AI: BP_AWSM 
	{
	    scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_100Rnd_50Cal_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefK = 0.100000;		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_s4.wav", 1.400000, 1.03, 2000}; 
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_s5.wav", 1.300000, 0.95, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\L115A3_s6.wav", 1.470000, 1, 2000};
				begin4[] = {"\breakingpoint_jsrs\sounds\L115A3_s4.wav", 1.420000, 1, 2000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 0.500000, 1.03, 1000}; 
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 0.500000, 0.95, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 0.470000, 1, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 0.420000, 1, 1000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000};
 			};			
			reloadTime = 2.500000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000130;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefK = 0.100000;
		};		
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_M24Spec: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M24A2\BP_M24A2.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m24a2_rifle_x_ca.paa";
		displayName = "M24A2 SpecOps";
		descriptionshort = "Chambered for the powerful .300 Winchester Magnum round and customized for extreme accuracy.";
		magazines[] = {"BP_10Rnd_300_Mag", "BP_10Rnd_300M_Mag", "BP_5Rnd_300_Mag", "BP_5Rnd_300M_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.3125000;
		initSpeed = -1.03;
		recoil = "recoil_dmr_01";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
  				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24_s1.wav", 1.000000, 1.8, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24_s2.wav", 1.000000, 1.9, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24_s3.wav", 1.000000, 1.8, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24_s1.wav", 1.000000, 2.0, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 120};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 120};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 120};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 120};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000152;
			soundContinuous = 0;
			reloadTime = 2.200000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};		
		muzzles[] = {"this", "Butt"};			
		class GunParticles: GunParticles 
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 175;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3AN", "BP_MRT", "BP_PS22"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0;
			};
        };		
		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s2.wav", 0.350000, 0.990000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s2.wav", 0.331417, 1.08, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_M24Des: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M24G\BP_M24G.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m24a1_rifle_x_ca.paa";
		displayName = "M24A1 Camo";
		descriptionshort = "Marine Corps 7.62mm bolt-action sniper rifle. Customized from the Remington Model 700.";
		magazines[] = {"BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag","BP_10Rnd_762mk316_Mag","BP_10Rnd_762x51_Mag","BP_10Rnd_762m80a1_Mag","BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.3220000;
		initSpeed = -1.04;
		recoil = "recoil_dmr_01";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
  			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m40a3_s1.wav", 1.200000, 1.0, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\m40a3_s2.wav", 1.300000, 1.0, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\m40a3_s3.wav", 1.200000, 0.98, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 120};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 120};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 120};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000237;
			soundContinuous = 0;
			reloadTime = 2.200000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
		};		
		muzzles[] = {"this", "Butt"};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 150;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3AN", "BP_MRT", "BP_PS22"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s2.wav", 0.350000, 0.990000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s2.wav", 0.331417, 1.08, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_M24DesG: BP_M24Des {};
	
	class BP_R700: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\R700\BP_R700.p3d";
		picture = "\breakingpoint_weapons\icons\gear_r700_rifle_x_ca.paa";
		displayName = "Remington Model 700";
		descriptionshort = "Classic Remington bolt-action sniper rifle. Civilian model.";
		magazines[] = {"BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		initSpeed = -1.01;
		recoil = "recoil_dmr_01";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\r700_s1.wav", 1.000000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\r700_s2.wav", 1.000000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\r700_s3.wav", 1.050000, 0.98, 900};
				soundBegin[] = {"begin1", 0.300000, "begin2", 0.300000, "begin3", 0.400000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 90};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 90};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 90};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000472;
			soundContinuous = 0;
			reloadTime = 2.100000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
		};		
		muzzles[] = {"this", "Butt"};			
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 135;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3AN", "BP_MRT", "BP_PS22"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s1.wav", 0.35000, 0.950000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.300417, 1.00, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.30957, 1, 30};
	};
	
	class BP_R300: BP_R700 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\R300\BP_R300.p3d";
		picture = "\breakingpoint_weapons\icons\gear_r300_rifle_x_ca.paa";
		magazines[] = {"BP_5Rnd_300AAC_Mag"};
		displayName = "Remington Model 300 Blackout";
		descriptionshort = "Remington 700 customized for the .300 Blackout hunting cartridge";
		initSpeed = -1.06;
		recoil = "recoil_mxm";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\r300_s1.wav", 0.800000, 1.4, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\r300_s2.wav", 0.800000, 1.3, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\r300_s3.wav", 0.950000, 1.33, 700};
				soundBegin[] = {"begin1", 0.300000, "begin2", 0.300000, "begin3", 0.400000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 100};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 100};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 100};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000502;
			soundContinuous = 0;
			reloadTime = 2.200000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
		};		
		muzzles[] = {"this", "Butt"};			
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 80;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0;
			};
			
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};	
			
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
	};
	
	class BP_Rem6: BP_MXM 
	{
	    scope = 2;
		displayName = "Remington Grendel";
		descriptionUse = "Remington Grendel";
		model = "\breakingpoint_weapons\models\Rem6\BP_Rem6.p3d";
		picture = "\breakingpoint_weapons\icons\gear_rem6_rifle_x_ca.paa";
		magazines[] = {"BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		changeFiremodeSound[] = {""};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.200000;
		initSpeed = -1.07;
		recoil = "recoil_mxm";
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s1.wav", 0.35000, 1.150000, 35};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.351417, 1.10, 30};
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {closure1,0.5, closure2,0.5};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-M_s1.wav", 1.412538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-M_s2.wav", 1.412538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-M_s3.wav", 1.412538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.412538, 1, 120};//change to M4sd.wav? Change it to MX-SD!!!
				begin2[] = {"breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.412538, 1, 120};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.412538, 1, 120};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			reloadTime = 1.896000;
			recoil = "recoil_single_prone_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.000397;
		};		
		muzzles[] = {"this", "Butt"};				
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 115;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_CPad"};
				iconScale = 0;
			};
        };   
    };	
	
	class BP_M40A3: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M40A3\BP_m40a3.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m40a3_rifle_x_ca.paa";
		displayName = "M40A5 Camo";
		descriptionshort = "Marine Corps 7.62mm bolt-action sniper rifle. Heavily customized from the Remington Model 700.";
		magazines[] = {"BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762m80a1_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.250000;
		initSpeed = -1.07;
		recoil = "recoil_dmr_01";
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m40a3_s1.wav", 1.300000, 1.0, 1100};
				begin2[] = {"\breakingpoint_jsrs\sounds\m40a3_s2.wav", 1.400000, 1.0, 1100};
				begin3[] = {"\breakingpoint_jsrs\sounds\m40a3_s3.wav", 1.350000, 0.98, 1100};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 120};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 120};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 120};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000170;
			soundContinuous = 0;
			reloadTime = 2.100000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};		
		muzzles[] = {"this", "Butt"};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 165;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadLRR";
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\M40_reload.wav", 0.350000, 1.000000, 50};
		reloadSound[] = {"\breakingpoint_jsrs\sounds\M40_reload3.wav", 0.351417, 1.00, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_M40A3_AI: BP_M40A3 
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefK = 0.100000;		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
  			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m40a3_s1.wav", 1.300000, 1.0, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\m40a3_s2.wav", 1.400000, 1.0, 1300};
				begin3[] = {"\breakingpoint_jsrs\sounds\m40a3_s3.wav", 1.350000, 0.98, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 700};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000298;
			soundContinuous = 0;
			reloadTime = 2.100000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefK = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};		
		muzzles[] = {"this", "Butt"};		
	};
	
	class BP_M40A3G: BP_M40A3 {};
	
	class BP_CZ550_old: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\CZ550_old\BP_CZ550_old.p3d";
		picture = "\breakingpoint_weapons\icons\gear_cz550_rifle_x_ca.paa";
		displayName = "Old CZ-550";
		descriptionshort = "A poorly maintained 30-06 Hunting Rifle";
		magazines[] = {"BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.360000;
		recoil = "recoil_ebr";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S1.wav", 1.000000, 1.2, 1800};
				begin2[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S2.wav", 1.000000, 1.15, 1800};
				begin3[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S3.wav", 1.000000, 1.18, 1800};
				begin4[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S4.wav", 1.060000, 1.1, 1800};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HA550_s1.wav", 1.000000, 1.55, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\HA550_s2.wav", 1.100000, 1.52, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\HA550_s3.wav", 1.050000, 1.58, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\HA550_s2.wav", 0.920000, 1.69, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16SD_s1.wav", 1.000000, 0.8, 140};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16SD_s2.wav", 1.000000, 0.8, 140};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16SD_s1.wav", 1.000000, 0.7, 140};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16SD_s2.wav", 1.060000, 0.7, 140};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			dispersion = 0.003000;
			soundContinuous = 0;
			reloadTime = 2.350000;
		};		
		muzzles[] = {"this", "Butt"};			
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 80;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_CZmod_br", "BP_CZst_br", "BP_CZol_br", "BP_CZSup_br"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s1.wav", 0.35000, 0.950000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.351417, 1.00, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_CZ455: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\CZ_455\BP_CZ455.p3d";
		picture = "\breakingpoint_weapons\icons\gear_cz445_rifle_x_ca.paa";
		displayName = "CZ-452 Varmint";
		descriptionshort = "Compact .22LR small game Hunting/Target Rifle";
		magazines[] = {"BP_5Rnd_22_Mag", "BP_5Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.150000;
		initSpeed = -1.03;
		recoil = "recoil_mk20"; //recoilchange should probaly have custom .22 recoil profile with low permanent rise
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 2.6, 500};
				begin2[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 2.6, 500};
				begin3[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 2.6, 500};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\pistols\walter_st_1.wss", 0.400000, 1.9, 30};
				begin2[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.400000, 1.9, 30};
				begin3[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.400000, 1.9, 30};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			dispersion = 0.000550;
			soundContinuous = 0;
			reloadTime = 1.550000;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
		};		
		muzzles[] = {"this", "Butt"};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 60;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_22Sup"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		memoryPointCamera = "eye";
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s1.wav", 0.35000, 1.450000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.351417, 1.30, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.230957, 1, 30};
	};
	
	class BP_CZ455s: BP_CZ455 
	{
		scope = 2;
	};
	
	class BP_Ruger: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Ruger\BP_Ruger.p3d";
		picture = "\breakingpoint_weapons\icons\gear_ruger_rifle_x_ca.paa";
		displayName = "Ruger 10/22 Carbine";
		descriptionshort = "Compact .22LR semi-automatic Hunting/Target Rifle";
		magazines[] = {"BP_25Rnd_22_Mag", "BP_5Rnd_22_Mag", "BP_5Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.217000;
		recoil = "recoil_mk20";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 3.6, 400};
				begin2[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 3.6, 400};
				begin3[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 3.6, 400};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"A3\sounds_f\weapons\pistols\walter_st_1.wss", 0.400000, 1.9, 30};
				begin2[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.400000, 1.9, 30};
				begin3[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.400000, 1.9, 30};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};			
			dispersion = 0.000890;
			soundContinuous = 0;
			reloadTime = 0.1250000;
			//recoil = "recoil_single_primary_4outof10";
			//recoilProne = "recoil_single_primary_prone_4outof10";
		};		
		muzzles[] = {"this", "Butt"};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 75;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_22Sup"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		memoryPointCamera = "eye";
		reloadAction = "GestureReloadMX";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.398107, 1.5, 10};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.230957, 1, 30};
	};
	
	class BP_MC550: BP_CZ550_old 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\CZ_MC550\BP_mc550.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mc550_rifle_x_ca.paa";
		displayName = "CZ-MC550";
		descriptionshort = "30-06 Hunting Rifle with a Walnut finish";
		magazines[] = {"BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.365000;
		recoil = "recoil_ebr";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S1.wav", 1.000000, 1.2, 1550};
				begin2[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S2.wav", 1.000000, 1.15, 1550};
				begin3[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S3.wav", 1.000000, 1.18, 1550};
				begin4[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S4.wav", 1.060000, 1.1, 1550};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HA550_s1.wav", 1.000000, 1.55, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\HA550_s2.wav", 1.100000, 1.52, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\HA550_s3.wav", 1.050000, 1.58, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\HA550_s2.wav", 0.920000, 1.69, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16SD_s1.wav", 1.000000, 0.8, 180};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16SD_s2.wav", 1.000000, 0.8, 180};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16SD_s1.wav", 1.000000, 0.7, 180};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16SD_s2.wav", 1.060000, 0.7, 180};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			dispersion = 0.002820;
			soundContinuous = 0;
			reloadTime = 2.350000;
		};		
		muzzles[] = {"this", "Butt"};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 90;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_CZmod_br", "BP_CZst_br", "BP_CZol_br", "BP_CZSup_br"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\HA550_bolt", 0.350000, 1.000000, 55};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\HA550_Reload", 0.301417, 1.20, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_MC5502: BP_MC550 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\CZ_MC550\BP_mc5502.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mc550_rifle_x_ca.paa";
	};
	
	class BP_HA550: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\CZ_HA550\BP_ha550.p3d";
		picture = "\breakingpoint_weapons\icons\gear_ha550_rifle_x_ca.paa";
		displayName = "CZ-HA550 Hunter";
		descriptionshort = "Precision hand crafted Hunting Rifle designed for big game hunting";
		magazines[] = {"BP_5Rnd_300_Mag", "BP_5Rnd_300M_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		recoil = "recoil_m320";
		inertia = 0.389000;
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\300Win_s1.wav", 1.000000, 1.5, 1300};
				begin2[] = {"\breakingpoint_jsrs\sounds\300Win_s2.wav", 1.000000, 1.55, 1300};
				begin3[] = {"\breakingpoint_jsrs\sounds\300Win_s3.wav", 1.000000, 1.68, 1300};
				begin4[] = {"\breakingpoint_jsrs\sounds\300Win_s4.wav", 1.060000, 1.4, 1300};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 160};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 160};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 160};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 160};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000452;
			soundContinuous = 0;
			reloadTime = 2.250000;
			//recoil = "recoil_single_primary_prone_1outof10";
			//recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};		
		muzzles[] = {"this", "Butt"};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 100;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\HA550_bolt", 0.350000, 1.000000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\HA550_Reload", 0.301417, 1.20, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_Win70: BP_MC550 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Win70\BP_Win70.p3d";
		displayName = "Winchester Model 70";
		descriptionShort = "High caliber hunting rifle";
		picture = "\breakingpoint_weapons\icons\gear_Win70_rifle_x_ca.paa";
		inertia = 0.325000;
		recoil = "recoil_ebr";
		modes[] = {"Single"};
		initSpeed = -0.98;	
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\MC550_s1.wav", 1.000000, 1.8, 1400};
				begin2[] = {"\breakingpoint_jsrs\sounds\MC550_s2.wav", 1.000000, 1.85, 1400};
				begin3[] = {"\breakingpoint_jsrs\sounds\MC550_s3.wav", 1.000000, 1.98, 1400};
				begin4[] = {"\breakingpoint_jsrs\sounds\MC550_s4.wav", 1.060000, 1.8, 1400};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 100};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 100};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 100};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000662;
			soundContinuous = 0;
			reloadTime = 2.250000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
		};		
		muzzles[] = {"this", "Butt"};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 70;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };		
		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Win70_bolt.wav", 0.350000, 0.800000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Win70_reload.wav", 0.301417, 0.80, 50};
	};
	
	class BP_WinCoy: BP_MC550 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Win70\BP_WinCoy.p3d";
		displayName = "Remington Model Seven";
		descriptionShort = ".223 Short action hunting rifle";
		magazines[] = {"BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag"};//removed 22-250 from model7
		picture = "\breakingpoint_weapons\icons\gear_wincoy_rifle_x_ca.paa";
		inertia = 0.150000;
		initSpeed = -1.03;
		recoil = "recoil_mxm";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
  			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mosin_s1.wav", 1.000000, 0.87, 800};//change fixed, was typed wrong so always defaulted to supp. sound
				begin2[] = {"\breakingpoint_jsrs\sounds\Mosin_s2.wav", 1.000000, 1.05, 800};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mosin_s3.wav", 1.000000, 1.12, 800};
				begin4[] = {"\breakingpoint_jsrs\sounds\Mosin_s4.wav", 1.060000, 0.9, 800};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.112538, 1.2, 60};
				begin2[] = {"breakingpoint_jsrs\sounds\M16sd_s2.wav", 1.212538, 1.0, 60};
				begin3[] = {"breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.112538, 0.87, 60};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};		
			dispersion = 0.000837;
			soundContinuous = 0;
			reloadTime = 1.750000;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};		
		muzzles[] = {"this", "Butt"};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 60;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_R7S", "BP_R7P", "BP_R7Sup"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_SOS", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_EnfieldOptic2", "BP_Unertl32x"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };		
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\HA550_bolt", 0.350000, 1.000000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\HA550_Reload", 0.301417, 0.880, 30};
	};
	
	class BP_WinCoy2: BP_WinCoy 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Win70\BP_WinCoy2.p3d";
		displayName = "Remington Model Seven CDL";
		magazines[] = {"BP_5Rnd_223BTHP_mag", "BP_5Rnd_223_Mag", "BP_5Rnd_250_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_wincdl_rifle_x_ca.paa";
		descriptionShort = "Intermediate caliber precision hunting rifle";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mosin_S1.wav", 1.000000, 0.87, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\Mosin_S2.wav", 1.000000, 0.85, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mosin_S3.wav", 1.000000, 0.72, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\Mosin_S4.wav", 1.060000, 0.9, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.112538, 1.2, 60};
				begin2[] = {"breakingpoint_jsrs\sounds\M16sd_s2.wav", 1.212538, 1.0, 60};
				begin3[] = {"breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.112538, 0.87, 60};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000837;
			soundContinuous = 0;
			reloadTime = 1.650000;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
		};
	};
	
	class BP_Win70F: BP_HA550 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Win70\BP_Win70F.p3d";
		displayName = "Winchester Model 70 Super Grade";
		descriptionShort = "High caliber precision hunting rifle";
		picture = "\breakingpoint_weapons\icons\gear_win70f_rifle_x_ca.paa";
		inertia = 0.327000;
		recoil = "recoil_mxm";
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\300Win_s1.wav", 1.000000, 1.6, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\300Win_s2.wav", 1.000000, 1.65, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\300Win_s3.wav", 1.000000, 1.68, 1800};
				begin4[] = {"\breakingpoint_jsrs\sounds\300Win_s4.wav", 1.060000, 1.7, 1900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 120};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 120};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 120};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 120};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000720;
			soundContinuous = 0;
			reloadTime = 1.950000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};		
		muzzles[] = {"this", "Butt"};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 125;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_762Muzzle"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_EnfieldOptic2", "BP_Unertl32x"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };		
		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Win70_bolt.wav", 0.350000, 0.900000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Win70_reload.wav", 0.301417, 0.90, 50};
	};
	
	class BP_Win70F_AI: BP_Win70F 
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\300Win_s1.wav", 1.000000, 1.6, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\300Win_s2.wav", 1.000000, 1.65, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\300Win_s3.wav", 1.000000, 1.68, 1800};
				begin4[] = {"\breakingpoint_jsrs\sounds\300Win_s4.wav", 1.060000, 1.7, 1900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000202;
			soundContinuous = 0;
			reloadTime = 1.950000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_Kar98: BP_Win70 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Kar98\BP_Kar98.p3d";
		displayName = "Karabiner 98";
		magazines[] = {"BP_5Rnd_Mauser_Mag"};
		descriptionShort = "German Bolt action sniper rifle";
		picture = "\breakingpoint_weapons\icons\gear_kar98_rifle_x_ca.paa";
		inertia = 0.390000;
		recoil = "recoil_dmr_01";
		initSpeed = -0.97;
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\MC550_s1.wav", 1.000000, 1.0, 1600};
				begin2[] = {"\breakingpoint_jsrs\sounds\MC550_s2.wav", 1.000000, 1.05, 1600};
				begin3[] = {"\breakingpoint_jsrs\sounds\MC550_s3.wav", 1.000000, 1.08, 1600};
				begin4[] = {"\breakingpoint_jsrs\sounds\MC550_s4.wav", 1.060000, 1.2, 1500};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 250};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 250};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 250};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000762;
			soundContinuous = 0;
			reloadTime = 2.250000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};		
		muzzles[] = {"this", "Butt"};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 120;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };		
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Win70_bolt.wav", 0.350000, 1.000000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Win70_reload.wav", 0.301417, 1.00, 50};
	};
	
	class BP_Kar98k: BP_Win70 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Kar98\BP_Kar98k.p3d";
		displayName = "Karabiner 98k";
		magazines[] = {"BP_5Rnd_Mauser_Mag"};
		descriptionShort = "German Bolt action sniper rifle";
		picture = "\breakingpoint_weapons\icons\gear_kar98_rifle_x_ca.paa";
		inertia = 0.390000;
		recoil = "recoil_dmr_01";
		initSpeed = -0.97;
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\MC550_s1.wav", 1.000000, 1.3, 1600};
				begin2[] = {"\breakingpoint_jsrs\sounds\MC550_s2.wav", 1.000000, 1.25, 1600};
				begin3[] = {"\breakingpoint_jsrs\sounds\MC550_s3.wav", 1.000000, 1.18, 1600};
				begin4[] = {"\breakingpoint_jsrs\sounds\MC550_s4.wav", 1.060000, 1.27, 1500};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 250};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 250};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 250};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000762;
			soundContinuous = 0;
			reloadTime = 2.250000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};		
		muzzles[] = {"this", "Bayonet"};		
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 130;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0;
			};			
			class PointerSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };		
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Win70_bolt.wav", 0.350000, 1.000000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Win70_reload.wav", 0.301417, 1.00, 50};
	};
	
	class BP_Kar98z: BP_Kar98 
	{
		scope = 2;
	};
	
	class BP_K98_AI: BP_Kar98 
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound, AlternateSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\300Win_s1.wav", 1.000000, 1.6, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\300Win_s2.wav", 1.000000, 1.65, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\300Win_s3.wav", 1.000000, 1.68, 1800};
				begin4[] = {"\breakingpoint_jsrs\sounds\300Win_s4.wav", 1.060000, 1.7, 1900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};			
			class AlternateSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			dispersion = 0.000202;
			soundContinuous = 0;
			reloadTime = 1.950000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_M110: Rifle_Base_F_BP 
	{
		scope = 2;
		displayName = "M110 SASS";
		descriptionshort = "Semi-Automatic 7.62mm Sniper Rifle System";
		descriptionUse = "M110 Desert";
		model = "\breakingpoint_weapons\models\M110\BP_M110.p3d";
		picture = "\breakingpoint_weapons\icons\gear_M110_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		inertia = 0.3248;
		recoil = "recoil_ebr";
		initSpeed = -1.02;
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.300000, 0.83, 1700};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.350000, 0.80, 1700};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.370000, 0.88, 1700};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 100};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 100};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 100};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 100};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 100};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000653;
			soundContinuous = 0;
			reloadTime = 0.150000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 140;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};					
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_AFG"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.398107, 1, 30};
	};
	
	class BP_SR25: BP_M110 
	{
		scope = 2;
		displayName = "SR-25";
		descriptionshort = "Semi-Automatic 7.62mm Sniper Rifle";
		descriptionUse = "SR-25";
		model = "\breakingpoint_weapons\models\M110\BP_SR25.p3d";
		picture = "\breakingpoint_weapons\icons\gear_sr25_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		inertia = 0.375000;
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.300000, 0.83, 1100};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.350000, 0.80, 1100};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.370000, 0.88, 1100};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 190};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 190};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 190};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 190};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 190};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000570;
			soundContinuous = 0;
			reloadTime = 0.150000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 150;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};					
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_AFG"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.398107, 1, 30};
	};
	
	class BP_SR25_AI: BP_SR25 
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.300000, 0.83, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.350000, 0.80, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.370000, 0.88, 1900};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000802;
			soundContinuous = 0;
			reloadTime = 0.150000;
			//recoil = "recoil_single_primary_prone_1outof10";
			//recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_FNFAL: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\FNFALM\BP_fnfal.p3d";
		picture = "\breakingpoint_weapons\icons\gear_FNFAL_rifle_x_ca.paa";
		displayName = "FNFAL";
		descriptionshort = "Medium range 7.62mm NATO battle rifle";
		magazines[] = {"BP_30Rnd_762x51_BPMag", "BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};		
		recoil = "recoil_ebr";
		inertia = 0.328000;
		initSpeed = -0.98;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single", "FullAuto"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\EBR_s1.wav", 0.812538, 0.6, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\EBR_s2.wav", 0.812538, 0.67, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\EBR_s3.wav", 0.812538, 0.7, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 160};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 160};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 160};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 160};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 160};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.001437;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\EBR_s1.wav", 0.812538, 0.6, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\EBR_s2.wav", 0.812538, 0.67, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\EBR_s3.wav", 0.812538, 0.7, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 160};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 160};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 160};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 160};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 160};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.001537;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 160;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0;
			};				
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_FNFALK: BP_FNFAL 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\FNFALM\BP_fnfalK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_FNFALk_rifle_x_ca.paa";
		displayName = "FNFAL w/Bayonet";
		descriptionshort = "Medium range 7.62mm NATO battle rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Bayonette_Idle1.rtm"};
		inertia = 0.346000;
		muzzles[] = {"this", "Bayonet"};		
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
	};
	
	class BP_FALM: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\FNFALM\BP_FALM.p3d";
		picture = "\breakingpoint_weapons\icons\gear_FALM_rifle_x_ca.paa";
		displayName = "FNFAL DMR-HB";
		descriptionshort = "A medium/long range Heavy Barrel Designated Marksman version of the FN FAL";
		magazines[] = {"BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0", "BP_30Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};		
		initSpeed = -1.01;
		recoil = "recoil_dmr_01";
		inertia = 0.40000;
		modes[] = {"Single", "far_optic1"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 160};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 160};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 160};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 160};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 160};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000817;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 500;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};		
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 150;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};			
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_AFG"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_FALM_AI: BP_FALM 
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000817;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_primary_prone_1outof10";
			//recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 1.0, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.001037;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};		
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
	};
	
	class BP_G36DMR: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\G36\BP_G36DMR.p3d";
		picture = "\breakingpoint_weapons\icons\gear_G36DMR_rifle_x_ca.paa";
		displayName = "G36 DMR";
		descriptionshort = "A medium/long range Heavy Barrel Designated Marksman version of the G36 Rifle";
		magazines[] = {"BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_BPMag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};		
		recoil = "recoil_ebr";
		initSpeed = -0.98;
		inertia = 0.324500;
		modes[] = {"Single", "FullAuto", "far_optic1"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 90};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 90};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 90};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 90};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 90};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000757;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};		
		class FullAuto : Mode_FullAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 1.0, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 100};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 100};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 100};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 100};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 100};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.001117;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
		};		
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};		
		muzzles[] = {"this", "Butt"};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 150;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};			
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_AFG"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_G36DMR_AI: BP_G36DMR 
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		model = "\breakingpoint_weapons\models\G36\BP_G36DMR.p3d";
		modes[] = {"Single", "far_optic1"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000437;
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};		
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
	};
	
	class BP_DMR_Officer: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\DMR\BP_DMR.p3d";
		picture = "\breakingpoint_weapons\icons\gear_dmr_rifle_x_ca.paa";
		displayName = "M14 DMR";
		descriptionshort = "M14 Designated Marksman Rifle";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};		
		inertia = 0.300000;
		initSpeed = -1.04;
		recoil = "recoil_ebr";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.100000, 1.0, 1500};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.150000, 1.0, 1500};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.170000, 0.98, 1500};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 90};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 90};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 90};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 90};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 90};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000781;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 150;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup","BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};					
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_M14RIS: BP_DMR_Officer
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\DMR\BP_dmrRIS.p3d";
		picture = "\breakingpoint_weapons\icons\gear_dmr_rifle_x_ca.paa";
		displayName = "M14 RIS DMR";
		descriptionshort = "M14 RIS Designated Marksman Rifle";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};		
		inertia = 0.250000;
		recoil = "recoil_ebr";
		modes[] = {"Single"};		

		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 150;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup","BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};					
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};//removed cpad as model has that built in
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_M21: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M21\BP_M21.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m21_rifle_x_ca.paa";
		displayName = "M21 Super Match";
		descriptionshort = "Target grade marksman rifle adapted from the M14 platform";
		magazines[] = {"BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_30Rnd_762x51_BPMag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};		
		recoil = "recoil_ebr";
		initSpeed = -1.02;
		inertia = 0.387000;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.100000, 1.0, 1800};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.150000, 1.0, 1800};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.170000, 0.98, 1800};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 180};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 180};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 180};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 180};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 180};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000881;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};		
		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{			
		    mass = 165;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};					
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_Bipod", "BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_M21_AI: BP_M21 
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.100000, 1.0, 1700};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.150000, 1.0, 1700};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.170000, 0.98, 1700};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000717;
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_M21K: BP_M21 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M21\BP_M21K.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m21k_rifle_x_ca.paa";
		displayName = "M21 Super Match w/Bayonet";
		descriptionshort = "Target grade marksman rifle adapted from the M14 platform";
		magazines[] = {"BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_30Rnd_762x51_BPMag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};		
		inertia = 0.460000;		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 165;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};					
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		muzzles[] = {"this", "Bayonet"};		
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
	};
	
	class BP_M25WF: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M25WF\BP_M25WF2.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m25_rifle_x_ca.paa";
		displayName = "M25 White Feather";
		descriptionshort = "Customized M21 Designated Marksman Rifle";
		magazines[] = {"BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_BPMag", "BP_30Rnd_762x51_BPMag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		initSpeed = -1.04;
		recoil = "recoil_mxm";
		inertia = 0.33500;
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound, SilencedSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.200000, 1.0, 1400};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.250000, 1.0, 1400};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.270000, 0.98, 1400};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			class SilencedSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};			
			dispersion = 0.000687;
			soundContinuous = 0;
			reloadTime = 0.050000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
		};		
		muzzles[] = {"this", "Butt"};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 150;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};					
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {""};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};
	
	class BP_M25WFK: BP_M25WF 
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M25WF\BP_M25WK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m25k_rifle_x_ca.paa";
		displayName = "M25 White Feather w/Bayonet";
		descriptionshort = "Customized M21 Designated Marksman Rifle";
		magazines[] = {"BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_BPMag", "BP_30Rnd_762x51_BPMag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};		
		inertia = 0.37500;
		muzzles[] = {"this", "Bayonet"};		
		class Bayonet: UGL_F 
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect 
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};		
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};		
		class GunParticles: GunParticles
		{
			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 150;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0;
			};			
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};					
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0;
			};
        };
	};
	
	class BP_SVD: Rifle_Base_F_BP 
	{
		scope = 2;
		magazines[] = {"BP_762x54_SVD", "BP_762x54_7N1_10rnd", "BP_762x54_7N13_10rnd"};
		reloadAction = "GestureReloadEBR";
		picture = "\breakingpoint_weapons\icons\gear_svd_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		displayName = "Dragunov Sniper Rifle";
		descriptionShort = "Russian semi-automatic Marksman Rifle";
		model = "\breakingpoint_weapons\models\SVD\BP_SVD.p3d";
		inertia = 0.345000;
		recoil = "recoil_dmr_01";
		initSpeed = -1.03;
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.122020, 1, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.232020, 1, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.212020, 1, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			reloadTime = 0.085000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000776;
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};		
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = 160;
			allowedSlots[] = {901};			
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$STR_A3_CfgWeapons_EBR_base_F_WeaponSlotsInfo_MuzzleSlot0";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_ZF42", "BP_PSO35"};
				iconScale = 0;
			};			
			class PointerSlot : PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0;
			};
		};
	};
	
	class BP_SVDK: Rifle_Base_F_BP 
	{
		scope = 2;
		magazines[] = {"BP_93x64_SVDK"};
		reloadAction = "GestureReloadEBR";
		picture = "\breakingpoint_weapons\icons\gear_svdk_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		displayName = "SVDK Brenneke";
		descriptionShort = "High Power Russian semi-automatic Marksman Rifle";
		model = "\breakingpoint_weapons\models\SVDK\BP_SVDK.p3d";
		inertia = 0.480000;
		recoil = "recoil_m320";
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.4, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.3, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.3, 1900};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			reloadTime = 0.085000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000877;
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};		
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = 190;
			allowedSlots[] = {901};			
			class MuzzleSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$STR_A3_CfgWeapons_EBR_base_F_WeaponSlotsInfo_MuzzleSlot0";
				compatibleItems[] = {};
				iconScale = 0;
			};
			class CowsSlot: SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_ZF42", "BP_PSO35"};
				iconScale = 0;
			};
		};
	};
	
	class BP_SVDK_AI: BP_SVDK 
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "far_optic1", "far_optic2"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.4, 2200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.3, 2200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.3, 2200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			reloadTime = 0.085000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000777;
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single 
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1 
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
	};
	
	class BP_TranQRifle: Rifle_Base_F_BP 
	{
		scope = 2;
		model = "\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\DMR_01_F.p3d";
		dexterity = 1.680000;
		magazines[] = {"BP_10Rnd_762Rubber_Mag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		displayName = "Survivalist TranQ Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\data\Anim\dmr_01.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_trifle_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "Long range tranquillizer rifle";
		inertia = 0.320000;
		recoil = "recoil_mx";
		modes[] = {"Single"};		
		class Single : Mode_SemiAuto 
		{			
			sounds[] = {StandardSound}; 
 			class BaseSoundModeType 
 			{
 				weaponSoundEffect  = "DefaultRifle"; 
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			}; 
 			class StandardSound: BaseSoundModeType 
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.422020, 1, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s2.wav", 1.422020, 1, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.422020, 0.89, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			
			reloadTime = 0.085000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000777;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
		    mass = 80;
			allowedSlots[] = {901};		
			class MuzzleSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_B"};
				iconScale = 0;
			};				
			class CowsSlot : SlotInfo 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0;
			};	
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0;
			};
        }; 
	};

//--------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS CREATION ATTACHMENTS|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	class Zasleh2: ItemCore 
	{
		scope = 2;
		model = "A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};
	
	class BP_SOS: ItemCore 
	{
		scope = 2;
		displayName = "Clearskeye Hunting Optic";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Sniper_CA.paa";
		model = "\A3\Weapons_F\acc\acco_Sniper_F";
		descriptionShort = "Medium range fixed power optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 10;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes 
			{
				class Snip 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsZoomMin = 0.040000;
					opticsZoomMax = 0.070000;
					opticsZoomInit = 0.070000;
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 800;
					discretefov[] = {0.070000, 0.040000};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_sniper_F", "\A3\Weapons_F\acc\reticle_sniper_z_F"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					cameraDir = "";
				};
				class Iron: Snip 
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};

	
	class BP_optic_ACOG: ItemCore 
	{
		scope = 2;
		displayName = "ACOG (black)";
		picture = "\A3\weapons_F\Data\UI\gear_acco_hamr_CA.paa";
		model = "\breakingpoint_weapons\models\ACOG\BP_ACOG.p3d";
		descriptionShort = "Rifle Combat Optic (RCO)<br/>ACOG";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.020000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 1;
			mass = 10;
			RMBhint = "Rifle Combat Optics";
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_4x_acog.p3d";
			class OpticsModes 
			{
				class ACOG 
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.110000;
					opticsZoomMax = 0.110000;
					opticsZoomInit = 0.110000;
					memoryPointCamera = "opticView";
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
				class Kolimator: ACOG 
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
	};
	
	class BP_ZF42: ItemCore 
	{
		scope = 2;
		displayName = "Zeiss ZF42 Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\Zeiss\BP_Zeiss.p3d";
		descriptionShort = "Fixed 6x power German rifle scope";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.035000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 1;
			mass = 12;
			RMBhint = "Rifle Combat Optics";
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_6x_zf42.p3d";
			class OpticsModes 
			{
				class ZF42 
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.0450000;
					opticsZoomMax = 0.0450000;
					opticsZoomInit = 0.0450000;
					memoryPointCamera = "opticView";
					distanceZoomMin = 300;
					distanceZoomMax = 700;
				};
			};
		};
	};
	
	class BP_M3AMrad: ItemCore 
	{
		scope = 2;
		displayName = "Leupold M3A MRAD Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\M3AMRAD\BP_M3AMRAD.p3d";
		descriptionShort = "Fixed-power Medium Range rifle optic with MRAD CCO";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.035000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 1;
			mass = 20;
			RMBhint = "Advanced Rifle Combat Optics";
			optics = 1;
			modelOptics = "\breakingpoint_weapons\scopes\bek_m3a.p3d";
			class OpticsModes 
			{
				class M3A 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.025;
					opticsZoomInit = 0.025;
					discreteDistance[] = {100, 200, 300, 400, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					discretefov[] = {0.025, 0.025}; //K9n fix - should be fixed
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
				class MRAD: M3A 
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					discreteDistance[] = {50, 100, 200, 300};
					discreteDistanceInitIndex = 1;
					discretefov[] = {};
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};

	class BP_flashlight: ItemCore 
	{
		scope = 2;
		displayName = "Rifle Flashlight Attachment";
		descriptionUse = "Rifle Flashlight Attachment";
		picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model = "\A3\weapons_f\acc\accv_Flashlight_F";
		descriptionShort = "Weapon mounted light attachment";
		inertia = 0.100000;
		class ItemInfo: InventoryFlashLightItem_Base_F 
		{
			class FlashLight 
			{
				color[] = {1800, 1500, 1200};
				ambient[] = {0.900000, 0.780000, 0.600000};
				intensity = 40;
				size = 2;
				innerAngle = 20;
				outerAngle = 80;
				coneFadeCoef = 5;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 0.400000;
				flareMaxDistance = "100.0f";
				dayLight = 1;
				class Attenuation 
				{
					start = 0.500000;
					constant = 0;
					linear = 0;
					quadratic = 75;
					hardLimitStart = 20;
					hardLimitEnd = 80;
				};
				scale[] = {0};
			};
		};
	};
	
	class BP_PLight: acc_flashlight 
	{
		scope = 2;
		mass = 5;
		displayName = "Pistol Flashlight Attachment";
		descriptionUse = "Pistol Flashlight Attachment";
		model = "\breakingpoint_weapons\models\Light\BP_PLight.p3d";
		inertia = 0.050000;
		class ItemInfo: InventoryFlashLightItem_Base_F 
		{
			class FlashLight 
			{
				color[] = {1800, 1500, 1200};
				ambient[] = {9, 7.500000, 6};
				intensity = 25;
				size = 4;
				innerAngle = 20;
				outerAngle = 100;
				coneFadeCoef = 5;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.400000;
				flareMaxDistance = "200.0f";
				dayLight = 1;
				class Attenuation 
				{
					start = 0.500000;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 10;
					hardLimitEnd = 120;
				};
				scale[] = {0};
			};
		};
	};
	
	class BP_compm4s: ItemCore 
	{
		scope = 2;
		displayName = "Aimpoint CompM4 red dot";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Arco_CA.paa";
		model = "\breakingpoint_weapons\models\AIM\BP_AIM.p3d";
		descriptionShort = "";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.010000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			mass = 5;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes 
			{
				class AIM 
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.200000;
					opticsZoomMax = 0.500000;
					opticsZoomInit = 0.275000;
					memoryPointCamera = "opticView";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
	};
	
	class BP_OldComp: ItemCore 
	{
		scope = 2;
		displayName = "Old Red Dot Sight";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Arco_CA.paa";
		model = "\breakingpoint_weapons\models\OldComp\BP_OldComp.p3d";
		descriptionShort = "An old Aimpoint sight with low battery";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.010000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			mass = 5;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes 
			{
				class AIM 
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.200000;
					opticsZoomMax = 0.500000;
					opticsZoomInit = 0.275000;
					memoryPointCamera = "opticView";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
	};
	
	class BP_m3lr: ItemCore 
	{
		scope = 2;
		displayName = "Leupold TS-30A2 2.5-8x36mm Optic";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Sniper_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM3lr\BP_m3lr.p3d";
		descriptionShort = "Second focal plane MIL-dot reticle for the Mk12 SPR";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.030000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 10;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\bek_ts30.p3d";
			class OpticsModes 
			{
				class m3lr 
				{
					opticsID = 1;
					distanceZoomMin = 50;
					distanceZoomMax = 700;
					opticsZoomMin = 0.03125;
					opticsZoomMax = 0.1;
					opticsZoomInit = 0.1;
					opticsPPEffects[] = {""};
					useModelOptics = 1;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					cameraDir = "";
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700};
					discreteDistanceInitIndex = 2;
				};				
				class Aim: m3lr 
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	
	class BP_EnfieldOptic2: ItemCore 
	{
		scope = 2;
		displayName = "Weaver K4 Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\EnfieldOptic2\BP_Type4.p3d";
		descriptionShort = "Medium range rifle optic";
		inertia = 0.032000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 1;
			mass = 15;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_35x_No4.p3d";
			class OpticsModes 
			{
				class K4 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					distanceZoomMin = 50;
					distanceZoomMax = 400;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
					discreteDistance[] = {100, 200, 300, 400};
					discreteDistanceInitIndex = 1;
				};
			};
		};
	};
	
	class BP_Unertl8x: ItemCore 
	{
		scope = 2;
		displayName = "Unertl 8x Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\Unertl8x\BP_Unertl8x.p3d";
		descriptionShort = "Long range rifle optic for the M1903 Springfield";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 1;
			mass = 17;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_8x_unt.p3d";
			class OpticsModes 
			{
				class Unertl8x 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.035900;
					opticsZoomMax = 0.035900;
					opticsZoomInit = 0.035900;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
					discreteDistance[] = {100, 200, 300, 400, 500, 550, 600, 650, 700};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 700;
				};
			};
		};
	};
	
	class BP_Unertl32x: ItemCore 
	{
		scope = 2;
		displayName = "Unertl 32x Spotting Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\Unertl8x\BP_Unertl32x.p3d";
		descriptionShort = "Long range rifle optic/spotting scope<br/>Used with: Springfield M1903/AR10/Winchester Model 70/Remington Model 7";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 1;
			mass = 27;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_8x_unt.p3d";
			class OpticsModes 
			{
				class Unertl32x 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.008000;
					opticsZoomMax = 0.008000;
					opticsZoomInit = 0.008000;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200};
					discreteDistanceInitIndex = 6;
					distanceZoomMin = 100;
					distanceZoomMax = 1200;
				};
			};
		};
	};
	
	class BP_NXS: ItemCore 
	{
		scope = 2;
		displayName = "Schmidt and Bender 5-25x56 PMII Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\PMII\BP_PMII.p3d";
		descriptionShort = "Extreme Variable Range rifle optic";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 20;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes 
			{
				class Snip 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsZoomMin = 0.009000;
					opticsZoomMax = 0.050000;
					opticsZoomInit = 0.050000;
					discreteDistance[] = {200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 2000, 2050, 2100, 2150, 2200, 2250, 2300};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 200;
					distanceZoomMax = 2300;
					discretefov[] = {0.050000, 0.009000};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_sniper_F", "\A3\Weapons_F\acc\reticle_sniper_z_F"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					cameraDir = "";
				};
			};
		};
	};
	
	class BP_M3A: ItemCore 
	{
		scope = 2;
		displayName = "Leupold Ultra M3A 10x42mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM3A\BP_M3A.p3d";
		descriptionShort = "Fixed-power MIL-dot optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F {
			opticType = 2;
			mass = 12;
			optics = 1;
			modelOptics = "\breakingpoint_weapons\scopes\bek_m3a.p3d";
			class OpticsModes 
			{
				class M3A 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.025;
					opticsZoomInit = 0.025;
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};
	
	class BP_M3A2: BP_M3A 
	{
		scope = 2;
		displayName = "Leupold Ultra M3A 10x42mm Rifle Scope (Black)";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM3A\BP_M3A2.p3d";
	};
	
	class BP_M3AN: BP_M3A 
	{
		scope = 2;
		displayName = "Leupold Ultra M3A 10x42mm Camo Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM3A\BP_M3AN.p3d";
	};
	
	class BP_MRT: ItemCore 
	{
		scope = 2;
		displayName = "Leupold MRT 1.5-5x20mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldMRT\BP_MRT.p3d";
		descriptionShort = "Variable power Short/Medium Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.040000;
		class ItemInfo: InventoryOpticsItem_Base_F {
			opticType = 2;
			mass = 10;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Bek_MRT.p3d";
			class OpticsModes 
			{
				class MRT 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.070900;
					opticsZoomMax = 0.175000;
					opticsZoomInit = 0.175000;
					discreteDistance[] = {100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500};
					discreteDistanceInitIndex = 4;
					distanceZoomMin = 100;
					distanceZoomMax = 500;
					discretefov[] = {0.175000, 0.070900};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};
	
	class BP_M8: ItemCore 
	{
		scope = 2;
		displayName = "Leupold M8 4x20mm Pistol Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM8\BP_M8.p3d";
		descriptionShort = "Fixed power Short/Medium Range pistol optic for the Smith and Wesson 44 Magnum";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.020000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 7;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_8x_m8.p3d";
			class OpticsModes 
			{
				class M8 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.070900;
					opticsZoomMax = 0.070900;
					opticsZoomInit = 0.070900;
					discreteDistance[] = {50, 100, 200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 50;
					distanceZoomMax = 200;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};
	
	class BP_L14X: ItemCore 
	{
		scope = 2;
		displayName = "Leupold Mark IV 4.5-14x50mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\Leupold14x\BP_Leupold14x.p3d";
		descriptionShort = "Leupold LR/T with TMR reticle";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "\breakingpoint_weapons\scopes\bek_mkiv_near";
			class OpticsModes 
			{
				class L14X 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.017857;
					opticsZoomMax = 0.0555556;
					opticsZoomInit = 0.0555556;
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1300;
					discretefov[] = {0.0555556, 0.017857};
					discreteInitIndex = 0;
					modelOptics[] = {"\breakingpoint_weapons\scopes\bek_mkiv_near.p3d", "\breakingpoint_weapons\scopes\bek_mkiv_far.p3d"};
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};
	
	class BP_VX2: ItemCore 
	{
		scope = 2;
		displayName = "Leupold VX-2 4-12x40mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldVX2\BP_VX2.p3d";
		descriptionShort = "Variable Medium/Long Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.070000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_8x_Duplex.p3d";
			class OpticsModes 
			{
				class VX2 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.022800;
					opticsZoomMax = 0.073000;
					opticsZoomInit = 0.073000;
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};				
				class Iron: VX2 
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					discreteDistance[] = {};
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	
	class BP_VX3: ItemCore 
	{
		scope = 2;
		displayName = "Leupold VX-3 6.5-20x40mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldVX3\BP_VX3.p3d";
		descriptionShort = "Variable Long Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.075000;
		class ItemInfo: InventoryOpticsItem_Base_F {
			opticType = 2;
			mass = 17;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_12x_vx3.p3d";
			class OpticsModes 
			{
				class VX3 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.009000;
					opticsZoomMax = 0.053000;
					opticsZoomInit = 0.053000;
					discreteDistance[] = {100, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1600;
					discretefov[] = {0.053000, 0.009000};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};				
				class Iron: VX3 
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					discreteDistance[] = {};
					discretefov[] = {};
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	
	class BP_PS22: ItemCore 
	{
		scope = 2;
		displayName = "Night Vision Leupold Mark IV 4.5-14x50mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldPS22\BP_PS22.p3d";
		descriptionShort = "Variable power Long Range rifle optic w/switchable Night Vision";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.0370000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 27;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_12x_Round_Dot_Gen2.p3d";
			class OpticsModes 
			{
				class PS22 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					discreteDistanceInitIndex = 1;
					opticsZoomMin = 0.017900;
					opticsZoomInit = 0.061100;
					opticsZoomMax = 0.061100;
					distanceZoomMin = 100;
					distanceZoomMax = 1600;
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1200, 1400, 1600};
					discretefov[] = {0.061100, 0.017900};
					discreteInitIndex = 0;
					modelOptics[] = {"breakingpoint_weapons\scopes\Dagger_12x_Round_Dot_Gen2.p3d", "breakingpoint_weapons\scopes\Dagger_20x_Round_Dot.p3d"};
					visionMode[] = {"Normal", "NVG"};
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					memoryPointCamera = "eye";
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};
	
	class BP_PSO1: ItemCore 
	{
		scope = 2;
		displayName = "PSO-1 4x50mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\PSO1\BP_PSO1.p3d";
		descriptionShort = "Variable Medium Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.065000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\bek_pso_r0.p3d";			
			class OpticsModes 
			{
				class PSO1 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.062900;
					opticsZoomMax = 0.062900;
					opticsZoomInit = 0.062900;
					discreteDistance[] = {100,200,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};//Real pso does not have 50m from 100-300
					discreteDistanceInitIndex = 2;
					modelOptics[] = {"breakingpoint_weapons\scopes\bek_pso_r0.p3d","breakingpoint_weapons\scopes\bek_pso_r1.p3d"};
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					discretefov[] = {0.062900, 0.062900};
					discreteInitIndex = 0;
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};				
				class Iron: PSO1 
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	
	class BP_PSOP: ItemCore 
	{
		scope = 2;
		displayName = "PSOP 10x50mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\PSOP\BP_PSOP.p3d";
		descriptionShort = "Variable Long Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.000000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "\breakingpoint_weapons\models\PSOP\BP_pso3optics.p3d";//could test using PSO1 reticle
			class OpticsModes 
			{
				class PSOP 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.026900;
					opticsZoomMax = 0.026900;
					opticsZoomInit = 0.026900;
					discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 200;
					distanceZoomMax = 1200;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};				
				class Iron: PSOP 
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	
	class BP_PSO35: ItemCore 
	{
		scope = 2;
		displayName = "PO-35 3.5x21mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\PSO35\BP_PSO35.p3d";
		descriptionShort = "Fixed-power Medium Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.020000;
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\bek_po35.p3d";//changed to my reticle plane			
			class OpticsModes 
			{
				class PSO35 
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {""};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.07143;
					opticsZoomMax = 0.07143;
					opticsZoomInit = 0.07143;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};				
				class Iron: PSO35 
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	
	class BP_muzzle_snds_L: muzzle_snds_L 
	{
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_L0";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\A3\weapons_f\acc\acca_snds_l_F";
		descriptionshort = "Standard pistol suppressor, compatible with all 9mm pistols";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 7;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.1f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_muzzle_snds_acp: muzzle_snds_acp 
	{
	    scope = 2;
		descriptionshort = "Standard pistol suppressor, compatible with .45 Pistols";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 8;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
  			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;  
 				fireLightCoef = 0.1f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_muzzle_snds_H_SN: muzzle_snds_H_MG 
	{
	    scope = 2;
		displayname = "Tactical .338 Suppressor";
		descriptionshort = "High Caliber Sniper Rifle Suppressor for the AWSM";
		inertia = 0.200000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 20;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.3;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.1f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.1f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_muzzle_snds_408: muzzle_snds_H_MG 
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\408Sup\BP_408Sup.p3d";
		displayname = "Tactical .408 Suppressor";
		descriptionshort = "High Caliber Sniper Rifle Suppressor for the CheyTac M200 Intervention";
		inertia = 0.300000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 27;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.4;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;  
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
				/*begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 1.000000, 1, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 1.000000, 1.1, 900};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};*/
 			};
 		};
    };
	
    class BP_muzzle_snds_H: muzzle_snds_H 
	{
	    scope = 2;
		displayname = "6.5mm Suppressor";
		model = "\breakingpoint_weapons\models\762sup2\BP_762Sup2.p3d";
		descriptionshort = "Standard rifle suppressor, compatible with all 6.5mm rifles";
		inertia = 0.0500000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 12;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.0100;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.15;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.2f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 0.8f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_muzzle_snds_M: muzzle_snds_M 
	{
		displayName = "KAC QDSS NT4 suppressor";
		descriptionshort = "5.56 Rifle suppressor";
		model = "\breakingpoint_weapons\models\556Sup\BP_556sup.p3d";
		inertia = 0.050000;
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 10;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_muzzle_snds_M12: BP_muzzle_snds_M 
	{
		displayName = "OPS INC SPR Suppressor";
		descriptionShort = "Specialized 5.56 Suppressor";
		model = "\breakingpoint_weapons\models\556Sup2\BP_OPS.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 12;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_muzzle_snds_H_MG: muzzle_snds_H_MG
	{
		displayName = "LMG Suppressor";
		descriptionshort = "Customized for light machine guns.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_H_MG.paa";
		model = "\A3\Weapons_F\Machineguns\M200\lmg_suppressor";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 20;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.1f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
    };
	
	class BP_22Sup: muzzle_snds_B 
	{
		displayName = ".22 Suppressor";
		descriptionshort = "Standard hunting rifle suppressor, compatible with CZ-455 Varmint.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\breakingpoint_weapons\models\22Sup\22Sup.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 10;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.01;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.1f; 
 				recoilCoef = 0.7f;
 				recoilProneCoef = 0.7f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;				
				/*begin1[] = {"A3\sounds_f\weapons\pistols\walter_st_1.wss", 0.600000, 1.2, 300};
				begin2[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.600000, 1.2, 300};
				begin3[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.600000, 1.2, 300};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};*/
 			};
 		};
	};
	
    class BP_muzzle_snds_B: muzzle_snds_B 
	{
		displayName = "7.62mm Suppressor";
		descriptionshort = "Standard battle rifle suppressor, compatible with semi-auto 7.62mm rifles.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\breakingpoint_weapons\models\762Sup\762Sup.p3d";
		inertia = 0.200000;
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 13;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.2f;
 				artilleryDispersionCoef = 1.0f;  
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_762Sup2: BP_muzzle_snds_B 
	{
		displayName = "7.62mm Marksman Suppressor";
		descriptionshort = "Custom sniper rifle suppressor, compatible with bolt-action 7.62mm rifles.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\breakingpoint_weapons\models\762Sup\762Sup.p3d";
		inertia = 0.220000;
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 17;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.005;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.3f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_300Sup: BP_muzzle_snds_B
	{
		displayName = ".300 Suppressor";
		descriptionshort = "Custom .300 Rifle Suppressor, compatible with M24A2/CZ-HA550.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\breakingpoint_weapons\models\300Sup\300Sup.p3d";
		inertia = 0.220000;
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 15;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;				
				/*begin1[] = {"\breakingpoint_jsrs\sounds\M24SD_s4.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24SD_s5.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24SD_s6.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24SD_s7.wav", 1.000000, 0.9, 700};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};*/
 			};
 		};
	};

    class BP_gemtech9 : BP_muzzle_snds_L 
	{
		scope = 2;
		displayName = "9mm Suppressor";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 15;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_gemtech45: BP_muzzle_snds_acp 
	{
		scope = 2;
		displayName = ".45 Suppressor";
		descriptionshort = "Custom .45 Suppressor";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 15;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;  
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_m9qd : BP_muzzle_snds_L 
	{
		scope = 2;
		displayName = "Tactical QD Suppressor";
		descriptionShort = "Specialized tactical sound suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\breakingpoint_weapons\models\M9QD\M9QD.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F {
			mass = 10;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_Mk12Sup : BP_m9qd 
	{
		displayName = "Mk12 DELTA 9mm Suppressor";
		descriptionShort = "Specialized tactical sound suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\breakingpoint_weapons\models\M9\Mk12Sup.p3d";
		inertia = 0.150000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 10;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
 			};
 		};
    };
	
	class BP_suppr9 : BP_muzzle_snds_L 
	{
		displayName = "Osprey .45 Suppressor";
		descriptionShort = "Modern suppressor designed for the FNP Tac45";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\A3\weapons_f\acc\acca_snds_osprey_F.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 8;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 0.1f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_762Muzzle: BP_muzzle_snds_B 
	{
		displayName = "7.62 Muzzle Brake";
		descriptionshort = "Recoil reducing muzzle attachment";
		picture = "\breakingpoint_weapons\icons\M24integral_co.paa";
		model = "\breakingpoint_weapons\models\762MB\BP_762MB.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F {
			mass = 15;	
 			soundTypeIndex = 2; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 1.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 0.9f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 1.3f; 
 				recoilCoef = 0.5f;
 				recoilProneCoef = 0.4f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;
				
 			};
 		};	
	};
	
	class BP_CZmod_br: ItemCore 
	{
		scope = 2;
		displayName = "CZ Precision Barrel";
		descriptionshort = "A precision heavy forged barrel for the 30-06 CZ rifles<br/>Improved accuracy and power";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\CZB\CZB.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F {
			mass = 17;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0200;
 				visibleFire = 0.3;
 				audibleFire = 1.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 0.015f;
 				artilleryDispersionCoef = 1.0f;  				
 				fireLightCoef = 1.2f;
  				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;				
 			};
 		};
	};
	
	class BP_CZSup_br: ItemCore 
	{
		scope = 2;
		displayName = "CZ Precision Barrel w/Suppressor";
		descriptionshort = "A precision heavy forged barrel with attached Suppressor for the 30-06 CZ rifles<br/>Improved accuracy and power with quiet performance";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\CZSup\CZSup.p3d";
		inertia = 0.150000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 20;	
 			soundTypeIndex = 2; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0010;
 				visibleFire = 0.3;
 				audibleFire = 0.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 0.030f;
 				artilleryDispersionCoef = 1.0f;  
 				fireLightCoef = 0.3f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;				
 			};
 		};	
	};
	
	class BP_CZst_br: ItemCore 
	{
		scope = 2;
		displayName = "CZ Standard Barrel";
		descriptionshort = "A standard forged barrel for the 30-06 CZ rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\CZS\CZS.p3d";
		inertia = 0.000000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 10;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.000;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 1.0;
 				audibleFire = 1.0;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef
			{
 				dispersionCoef = 0.04f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 1.0f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;				
 			};
 		};
	};
	
	class BP_CZol_br: ItemCore 
	{
		scope = 2;
		displayName = "CZ Old Barrel";
		descriptionshort = "An old poorly maintained barrel for the 30-06 CZ rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\CZO\CZO.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 10;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 0.9000;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 1.0;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef {
 				dispersionCoef = 0.1f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 1.3f; 
 				recoilCoef = 1.1f;
 				recoilProneCoef = 1.1f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;				
 			};
 		};	
	};
	
	class BP_R7S: ItemCore 
	{
		scope = 2;
		displayName = "Standard .223 Barrel";
		descriptionshort = "A standard forged barrel for the Remington Model Seven rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\Win70\BP_7BS.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 10;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.000;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 1.0;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 0.01f;
 				artilleryDispersionCoef = 1.0f; 
 				fireLightCoef = 1.0f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f; 
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	
	class BP_R7P: ItemCore 
	{
		scope = 2;
		displayName = "Precision .223 Barrel w/muzzle brake";
		descriptionshort = "A heavy forged barrel for the Remington Model Seven rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\Win70\BP_7BP.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 15;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0010;
 				visibleFire = 0.3;
 				audibleFire = 1.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 0.005f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 1.3f; 
 				recoilCoef = 0.7f;
 				recoilProneCoef = 0.7f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;				
 			};
 		};
	};

	class BP_R7Sup: ItemCore 
	{
		scope = 2;
		displayName = "Precision .223 Barrel w/superssor";
		descriptionshort = "A heavy forged barrel with suppressor for the Remington Model Seven rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\Win70\BP_7BP.p3d";
		inertia = 0.100000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 15;	
 			soundTypeIndex = 2; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.0010;
 				visibleFire = 0.3;
 				audibleFire = 0.01;
 				visibleFireTime = 0.5;
 				audibleFireTime = 0.1;
 				cost = 1.0;
 				typicalSpeed = 0.8;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 0.005f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 1.3f; 
 				recoilCoef = 0.7f;
 				recoilProneCoef = 0.7f; 
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;				
 			};
 		};
	};
	
	class BP_Wire: ItemCore 
	{
		scope = 2;
		displayName = "Barbed Wire";
		descriptionshort = "A snarled bundle of barbed wire";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\hatchet\BP_wire.p3d";
		inertia = 0.000000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 10;	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 
 			class MagazineCoef 
			{
 				initSpeed = 1.001;
 			}; 
 			class AmmoCoef 
			{
 				hit = 1.5000;
 				visibleFire = 0.3;
 				audibleFire = 0.01;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;      
 			};  
 			muzzleEnd = ""; // memory point in muzzle supressor's model
 			alternativeFire = "";  // class in cfgWeapons with model of muzzle flash 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;   
 				fireLightCoef = 1.0f; 
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f; 
 				minRangeCoef = 1.0f; 
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f; 
				maxRangeProbabCoef = 1.0f;				
 			};
 		};
	};
	
	class BP_Bipod: ItemCore 
	{
		scope = 2;
		displayName = "Harris Bipod";
		descriptionshort = "Stabilizing rifle attachment </br> Drastically reduced recoil when prone and increased overall weapon stability";
		picture = "\breakingpoint_weapons\icons\HarrisBipod_co.paa";
		model = "\breakingpoint_weapons\models\Harris\BP_Harris.p3d";
		inertia = -0.200000;		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 45;	
 			soundTypeIndex = 0; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) 	
 			class MuzzleCoef 
			{
 				dispersionCoef = 0.9000f; 
 				recoilCoef = 1.0f;//bipods should reduce recoil, change this with testing
 				recoilProneCoef = 0.3f;
 			};
 		};
	};
	
	/*class BP_Bayonet: ItemCore {
		scope = 2;
		displayName = "USMC Bayonet";
		descriptionshort = "Standard bayonet attachment for close quarters combat";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\Bayonet\BP_Bayonet.p3d";		
		class ItemInfo: Iteminfo {
			mass = 12;
			muzzles[] = {"Bayonet"};			
			class Bayonet: UGL_F {
				magazines[] = {"BP_Bayonet_Stab"};
				sound[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
				reloadMagazineSound[] = {"", 0.501187, 1, 20};
				drySound[] = {"", 1.000000, 1, 30};
				magazineReloadTime = 0;
				autoReload = 1;
				reloadTime = 0.100000;
				optics = 1;
				modelOptics = "-";
				cameraDir = "";
				memoryPointCamera = "eye";
				opticsZoomMin = 0.375000;
				opticsZoomMax = 1.100000;
				opticsZoomInit = 0.750000;
				weaponInfoType = "RscWeaponZeroing";
			};		
		};	
	};*/
	
	class BP_CQCKnife : ItemCore 
	{
		scope = 2;
		displayName = "KA-BAR Combat Knife Mountable";
		descriptionUse = "KA-BAR Combat Knife";
		model = "\breakingpoint\models\bp_knifecqc.p3d";
		picture = "\breakingpoint\textures\icons\bp_knife_ca.paa";
		descriptionShort = "Standard USMC combat knife, mountable";		
		class ItemInfo: InventoryFlashLightItem_Base_F 
		{
			mass = 5;
		};
	};
	
	class BP_CPad : ItemCore 
	{
		scope = 2;
		inertia = -0.200000;
		displayName = "Saddle Cheekpiece";
		descriptionUse = "Saddle Cheekpiece";
		model = "\breakingpoint_weapons\models\Cheekpiece\bp_cheek.p3d";
		picture = "\breakingpoint_weapons\icons\m_cheek_ca.paa";
		descriptionShort = "Stock mounted cheekpiece for increased aiming stability";		
		class ItemInfo: InventoryFlashLightItem_Base_F 
		{
			mass = 15;
		};
	};
	
	class BP_AFG : ItemCore 
	{
		scope = 2;
		inertia = -0.230000;
		displayName = "Angled Foregrip";
		descriptionUse = "Angled Foregrip";
		model = "\breakingpoint_weapons\models\AFG\bp_afg.p3d";
		picture = "\breakingpoint_weapons\icons\m_afg_ca.paa";
		descriptionShort = "Rail mounted foregrip for increased weapon stability";		
		class ItemInfo: InventoryFlashLightItem_Base_F 
		{
			mass = 10;
		};
	};
	
	class BP_AFG2 : ItemCore 
	{
		scope = 2;
		inertia = -0.230000;
		displayName = "Angled Foregrip TEST";
		descriptionUse = "Angled Foregrip";
		model = "\breakingpoint_weapons\models\AFG\bp_afg.p3d";
		picture = "\breakingpoint_weapons\icons\m_afg_ca.paa";
		descriptionShort = "Rail mounted foregrip for increased weapon stability";		
		class ItemInfo: InventoryMuzzleItem_Base_F 
		{
			mass = 10;
			
			class MuzzleCoef {
 				dispersionCoef = 12.9000f; 
 				recoilCoef = 10.0f;
 				recoilProneCoef = 0.1f;

 			};
		};
	};
	
	class BP_Handle : ItemCore 
	{
		scope = 2;
		inertia = 0.1000;
		displayName = "M4 Carry Handle";
		descriptionUse = "M4 Carry Handle";
		model = "\breakingpoint_weapons\models\Handle\bp_handle.p3d";
		picture = "\breakingpoint_weapons\icons\m_handle_ca.paa";
		descriptionShort = "Rail mounted carry handle with ironsight for M4A1";		
		class ItemInfo: InventoryOpticsItem_Base_F 
		{
			opticType = 1;
			mass = 10;
			optics = 1;
			modelOptics = "\A3\Weapons_F_Beta\acc\acco_arco_F.p3d";
			class OpticsModes 
			{
				class Handle 
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};	
			};
		};	
	};
	
	class BP_GhillieWL : ItemCore 
	{
		scope = 2;
		displayName = "Woodland Rifle Ghillie Camo";
		descriptionUse = "Woodland Ghillie Camo";
		model = "\breakingpoint_weapons\models\GhillieWL\BP_GhillieWL.p3d";
		picture = "\breakingpoint_weapons\icons\ghilliewl_ca.paa";
		descriptionShort = "Rifle Ghillie camo";
		inertia = 0.050000;		
		class ItemInfo: InventoryFlashLightItem_Base_F 
		{
			mass = 25;
		};
	};
	
	class BP_GhillieDes : ItemCore 
	{
		scope = 2;
		displayName = "Desert Ghillie Camo";
		descriptionUse = "Desert Ghillie Camo";
		model = "\breakingpoint_weapons\models\GhillieDes\BP_GhillieDes.p3d";
		picture = "\breakingpoint_weapons\icons\ghilliedes_ca.paa";
		descriptionShort = "Rifle Ghillie camo";
		inertia = 0.050000;		
		class ItemInfo: InventoryFlashLightItem_Base_F 
		{
			mass = 25;
		};
	};
	
	class BP_GhillieSnw : ItemCore 
	{
		scope = 2;
		displayName = "Winter Ghillie Camo";
		descriptionUse = "Winter Ghillie Camo";
		model = "\breakingpoint_weapons\models\GhillieWint\BP_GhillieWint.p3d";
		picture = "\breakingpoint\textures\icons\gear_ghilliesnw_ca.paa";
		descriptionShort = "Rifle Ghillie camo";
		inertia = 0.050000;		
		class ItemInfo: InventoryFlashLightItem_Base_F 
		{
			mass = 25;
		};
	};
};

//--------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS CREATION MAGS|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CfgMagazines {
	class Default;	// External class reference
	class CA_Magazine;	// External class reference	
	class BP_Magazine;  // External class reference 
	class CA_LauncherMagazine;
	class ATMine_Range_Mag;
	class Chemlight_green;
	class Chemlight_red;
	class Chemlight_blue;
	class Chemlight_yellow;
	class 30Rnd_556x45_Stanag;
	class 10Rnd_762x51_Mag;
	class 11Rnd_45ACP_Mag;
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class 200Rnd_65x39_Belt;
	class 200Rnd_65x39_Belt_Tracer_Green;
	class 200Rnd_65x39_Belt_Tracer_Red;
	class 200Rnd_65x39_Belt_Tracer_Yellow;
	class 100Rnd_65x39_caseless_mag;
	class 100Rnd_127x99_mag;
	class 20Rnd_556x45_UW_mag;
	class 20Rnd_762x51_Mag;
	class 30Rnd_45ACP_Mag_SMG_01;
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green;
	class 30Rnd_556x45_Stanag_Tracer_Green;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class 30Rnd_556x45_Stanag_Tracer_Yellow;
	class 30Rnd_65x39_caseless_green;
	class 30Rnd_65x39_caseless_green_mag_Tracer;
	class 30Rnd_65x39_caseless_mag;
	class 30Rnd_65x39_caseless_mag_Tracer;
	class 16Rnd_9x21_Mag;
	class 30Rnd_9x21_Mag;
	class 5Rnd_127x108_APDS_Mag;
	class 5Rnd_127x108_Mag;
	class 6Rnd_45ACP_Cylinder;
	class 7Rnd_408_Mag;
	class 9Rnd_45ACP_Mag;
	class RPG32_F;
	class RPG32_HE_F;
	class NLAW_F;
	class Titan_AT;
	class Titan_AP;
	class Titan_AA;

	/*
		Magazines: Tin Cans
	*/

	class HandGrenade;	// External class reference
	class TrashJackDaniels : HandGrenade {};
	class TrashTinCan : HandGrenade {};
	class ItemSodaEmpty : HandGrenade {};
	
	class ChemG: Chemlight_green 
	{
		mass = 5;
	};
	
	class ChemR: Chemlight_red 
	{
		mass = 5;
	};
	
	class ChemY: Chemlight_yellow 
	{
		mass = 5;
	};
	
	class ChemB: Chemlight_blue 
	{
		mass = 5;
	};
	
	class Hatchet_Swing : CA_Magazine 
	{
		scope = 2;
		autoReload = 0;
		flash = "";
		flashSize = 0;
		initSpeed = 85;
		maxLeadSpeed = 20;
		picture = "\breakingpoint_weapons\icons\m_satchel_ca.paa";
		//modelSpecial = "\breakingpoint_weapons\models\Hatchet\BP_hatchet_loaded.p3d";
		displayName = "Hatchet Swing";
		displayNameMagazine = "Hatchet Swing";
		shortNameMagazine = "Hatchet Swing";
		count = 100000;
		ammo = "BP_Hatchet_Swing_Ammo";
		mass = 0;
	};
	
	class Katana_Swing : Hatchet_Swing 
	{
		displayName = "Katana Swing";
		displayNameMagazine = "Katana Swing";
		shortNameMagazine = "Katana Swing";
		ammo = "BP_Katana_Swing_Ammo";
	};
	
	class Pickaxe_Swing : Hatchet_Swing 
	{
		displayName = "Pickaxe Swing";
		displayNameMagazine = "Pickaxe Swing";
		shortNameMagazine = "Pickaxe Swing";
		ammo = "BP_Pickaxe_Swing_Ammo";
	};
	
	class Hammer_Swing : Hatchet_Swing 
	{
		displayName = "Hammer Swing";
		displayNameMagazine = "Hammer Swing";
		shortNameMagazine = "Hammer Swing";
		ammo = "BP_Hammer_Swing_Ammo";
	};
	
	class Hammer_Swing2 : Hatchet_Swing 
	{
		displayName = "Modified Hammer Swing";
		displayNameMagazine = "Hammer Swing";
		shortNameMagazine = "Hammer Swing";
		ammo = "BP_Hammer_Swing_Ammo2";
	};
	
	class Shovel_Swing: Hatchet_Swing
	{
		displayName = "Shovel Swing";
		displayNameMagazine = "Shovel Swing";
		shortNameMagazine = "Shovel Swing";
		ammo = "BP_Shovel_Swing_Ammo";
	};
	
	class BP_Bayonet_Stab : Hatchet_Swing 
	{
		displayName = "Stab";
		displayNameMagazine = "Stab";
		shortNameMagazine = "Stab";
		selectionFireAnim = "";
		initSpeed = 85;
		ammo = "BP_Bayonet";
	};
	
	class BP_Rifle_Butt : Hatchet_Swing 
	{
		displayName = "Rifle Melee";
		displayNameMagazine = "Rifle Melee";
		shortNameMagazine = "Rifle Melee";
		selectionFireAnim = "";
		initSpeed = 85;
		ammo = "BP_Rifle_Melee";
	};
	
	class BP_Arrow_Mag: CA_Magazine
	{
		scope = 2;
		displayName = "Boarhead Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_ca.paa"; //add different pics for each type
		mass = 1;
		ammo = "BP_Arrow_Ball";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 325;
		tracersEvery = 0;//testing tracers NO TRACERS - U WILL SEE HIT CLOUD!!!!! Tracers broke sense of stealth!
		lastRoundsTracer = 0;
		descriptionShort = "Classic boarhead hunting bolt for PSE TAC Elite Crossbow";
	};
	
	class BP_Arrow_Tranq: CA_Magazine
	{
		scope = 2;
		displayName = "Tranq Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_t_ca.paa";
		mass = 1;
		ammo = "BP_Arrow_Ball_Tranq";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 325;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "Tranq tipped hunting bolt for PSE TAC Elite Crossbow";
	};
	
	class BP_Arrow_Poison: CA_Magazine
	{
		scope = 2;
		displayName = "Poison Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_p_ca.paa";
		mass = 1;
		ammo = "BP_Arrow_Ball_Poison";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 325;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "Poison tipped hunting bolt for PSE TAC Elite Crossbow";
	};
	
	class BP_Arrow_Rambo: CA_Magazine
	{
		scope = 2;
		displayName = "Rambo Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_r_ca.paa";
		mass = 1.3;
		ammo = "BP_Arrow_Ball_Rambo";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 290;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "Explosive tipped hunting bolt for PSE TAC Elite Crossbow";
	};
	class BP_M84_Flash: HandGrenade
	{
		author = "Breaking Point";
		model = "\breakingpoint_weapons\models\m84\m84.p3d";
		displayName = "M84 Flashbang";
		picture = "\breakingpoint_weapons\icons\m_m84_r_ca.paa";
		displayNameShort = "Flashbang";
		ammo = "BP_Flashbang_Ammo";
		mass = 5;
	};
	class BP_AlarmClock_Black: HandGrenade
	{
		author = "Breaking Point";
		model = "\breakingpoint_weapons\models\AlarmClock\BP_AlarmClock.p3d";
		displayName = "Alarm Clock(Black)";
		picture = "\breakingpoint_weapons\icons\m_AlarmClock_r_ca.paa";
		displayNameShort = "Alarm Clock";

		descriptionShort = "";
		ammo = "BP_AlarmClock_Ammo";
		type = 256;
		mass = 2;
		scope = 3;
		value = 1;
		maxLeadSpeed = 7;
		initSpeed = 18;
		namesound = "empty";
		count = 1;
	};
	class BP_AlarmClock_Red: BP_AlarmClock_Black {
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\AlarmClock\AlarmClockRed_co.paa"};
		displayName = "Alarm Clock(Red)";
	};
	class 1Rnd_HE_Grenade_shell;
	class BP_1Rnd_40mm_Flashbang: 1Rnd_HE_Grenade_shell
	{
		author = "Breaking Point";
		displayName = "1Rnd 40mm Flashbang";
		displayNameShort = "1Rnd GL Flashbang";
		descriptionShort = "Flashbang";
		ammo = "BP_GL_Flashbang_Ammo";
	};	
	/*
		Magazines: Guns
	*/
	
	class BP_20Rnd_762x51_BPMag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Ball";
		initSpeed = 833;
		displayName = "20Rnd 7.62x51mm";
		descriptionShort = "7.62x51mm Rifle rounds.";
		mass = 15;
	};
	
	class BP_20Rnd_762x51_M80A1: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_M80A1";
		picture = "\breakingpoint_weapons\icons\BP_m80a1_ca.paa";
		initSpeed = 847;
		displayName = "20Rnd 7.62x51mm M80A1";
		descriptionShort = "Increased hard target penetration and soft target damage."; 
		mass = 16;
	};
	
	class BP_20Rnd_762x51_Mk316Mod0: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Mk316Mod0";
		picture = "\breakingpoint_weapons\icons\BP_MK316_ca.paa";
		initSpeed = 790;
		displayName = "20Rnd 7.62x51mm Mk316Mod0";
		descriptionShort = "Specifically designed for long-range sniping. Increased velocity and improved aerodynamics.";
		mass = 15;
	};
	
	class BP_30Rnd_762x51_BPMag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Ball";
		initSpeed = 833;
		count = 30;
		displayName = "30Rnd 7.62x51mm";
		descriptionShort = "7.62x51mm Rifle rounds.";
		mass = 17;
	};
	
	class BP_30Rnd_762x51_M80A1: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_M80A1";
		picture = "\breakingpoint_weapons\icons\BP_m80a1_ca.paa";
		initSpeed = 847;
		count = 30;
		displayName = "30Rnd 7.62x51mm M80A1";
		descriptionShort = "Increased hard target penetration and soft target damage."; 
		mass = 18;
	};
	
	class BP_30Rnd_762x51_Mk316Mod0: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Mk316Mod0";
		picture = "\breakingpoint_weapons\icons\BP_MK316_ca.paa";
		initSpeed = 790;
		count = 30;
		displayName = "30Rnd 7.62x51mm Mk316Mod0";
		descriptionShort = "Specifically designed for long-range sniping. Increased velocity and improved aerodynamics.";
		mass = 17;
	};
	
	class BP_5Rnd_762x51_Mag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Ball";
		initSpeed = 833;
		count = 5;
		displayName = "5Rnd 7.62x51mm";
		picture = "\breakingpoint_weapons\icons\m_5rnd_762_ca.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort = "7.62x51mm Rifle rounds.";
		mass = 5;
	};
	
	class BP_5Rnd_762m80a1_Mag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_M80A1";
		picture = "\breakingpoint_weapons\icons\m_5rnd_m80a1_ca.paa";
		initSpeed = 847;
		count = 5;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "5Rnd 7.62x51mm M80A1";
		descriptionShort = "Increased hard target penetration and soft target damage."; 
		mass = 6;
	};
	
	class BP_5Rnd_762mk316_Mag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Mk316Mod0";
		initSpeed = 792;
		count = 5;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "5Rnd 7.62x51mm Mk316Mod0";
		picture = "\breakingpoint_weapons\icons\m_5rnd_mk316_ca.paa";
		descriptionShort = "Specifically designed for long-range sniping. Increased velocity and improved aerodynamics.";
		mass = 5;
	};
	
	class BP_10Rnd_762x51_Mag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Ball";
		initSpeed = 833;
		count = 10;
		displayName = "10Rnd 7.62x51mm";
		picture = "\breakingpoint_weapons\icons\m_5rnd_762_ca.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort = "7.62x51mm Rifle rounds in a 10rnd magazine.";
		mass = 8;
	};
	
	class BP_10Rnd_762m80a1_Mag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_M80A1";
		picture = "\breakingpoint_weapons\icons\m_5rnd_m80a1_ca.paa";
		initSpeed = 847;
		count = 10;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "10Rnd 7.62x51mm M80A1";
		descriptionShort = "Increased hard target penetration and soft target damage."; 
		mass = 8;
	};
	
	class BP_10Rnd_762mk316_Mag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Mk316Mod0";
		initSpeed = 792;
		count = 10;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "10Rnd 7.62x51mm Mk316Mod0";
		picture = "\breakingpoint_weapons\icons\m_5rnd_mk316_ca.paa";
		descriptionShort = "Specifically designed for long-range sniping. Increased velocity and improved aerodynamics.";
		mass = 8;
	};
	
	class BP_5Rnd_762Rubber_Mag: 20Rnd_762x51_Mag   
	{
	    ammo = "BP_762x51_Ball_Rubber";
		initSpeed = 550;
		count = 5;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "5Rnd .22 TranQ Rounds";
		picture = "\breakingpoint_weapons\icons\m_5rnd_tranq_ca.paa";
		descriptionShort = "Specialized long range tranquillizer rounds.";
		mass = 7;
	};
	
	class BP_10Rnd_762Rubber_Mag: 20Rnd_762x51_Mag  
	{
	    ammo = "BP_762x51_Ball_Rubber";
		initSpeed = 650;
		count = 10;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "10Rnd 7.62x51mm TranQ+ Rounds";
		picture = "\breakingpoint_weapons\icons\m_5rnd_tranq_ca.paa";
		descriptionShort = "Specialized long range tranquillizer rounds";
		mass = 12;
	};

	class BP_150Rnd_762x51_Box: 150Rnd_762x51_Box
	{
		scope = 2;
		ammo = "BP_762x51_Ball";
		initSpeed = 833;
		displayName = "150Rnd 7.62mm Box";
		picture = "\breakingpoint_weapons\icons\m_m249_ca.paa";
		descriptionshort = "7.62x51mm box magazine";
		mass = 45;
	};
	
	class BP_200Rnd_556x45_MINIMI: CA_Magazine 
	{
		scope = 2;
		displayName = "200Rnd 5.56mm Box";
		picture = "\breakingpoint_weapons\icons\m_m245_ca.paa";
		count = 200;
		initSpeed = 915;
		tracersEvery = 4;
		ammo = "BP_556x45_Ball";
		descriptionShort = "5.56 box magazine";
		mass = 35;
	};
	
	class BP_200Rnd_556x45_TRACER: BP_200Rnd_556x45_MINIMI 
	{
		scope = 2;
		displayName = "200Rnd 5.56mm Box Tracer";
		picture = "\breakingpoint_weapons\icons\m_m245_ca.paa";
		count = 200;
		initSpeed = 915;
		tracersEvery = 1;
		ammo = "BP_556x45_Ball";
		descriptionShort = "5.56 box magazine";
		mass = 35;
	};
	
	class BP_100Rnd_762x51_MINIMI: CA_Magazine 
	{
		scope = 2;
		displayName = "100Rnd 7.62mm Box";
		picture = "\breakingpoint_weapons\icons\m_m249_ca.paa";
		count = 100;
		initSpeed = 833;
		tracersEvery = 3;
		ammo = "BP_762x51_Ball";
		descriptionShort = "7.62x51mm box magazine";
		mass = 40;
	};
	
	class BP_500Rnd_762x51_AI: CA_Magazine 
	{
		scope = 2;
		displayName = "";
		count = 500;
		initSpeed = 1533;
		tracersEvery = 0;
		maxLeadSpeed = 1000;
		ammo = "BP_762x51_AI";
		descriptionShort = "";
		mass = 55;
	};
	
	class BP_100Rnd_50Cal_AI: CA_Magazine 
	{
		scope = 2;
		displayName = "";
		count = 100;
		initSpeed = 1533;
		tracersEvery = 0;
		maxLeadSpeed = 1000;
		ammo = "BP_50Cal_AI";
		descriptionShort = "";
		mass = 55;
	};
	
	class BP_762x51_Box_Tracer: 150Rnd_762x51_Box 
	{
		tracersEvery = 1;
		ammo = "BP_762x51_Ball";
		displayName = "150Rnd 7.62mm Tracer Box";
		descriptionshort = "7.62x51mm box magazine";
		mass = 45;
	};
	
	class BP_556x45_Stanag: 30Rnd_556x45_Stanag 
	{
		ammo = "BP_556x45_Ball";
		initSpeed = 954;
		displayName = "30Rnd 5.56x45mm NATO";
		descriptionShort = "Standard 5.56 NATO magazine";
		tracersEvery = 0;//removed tracer
		lastRoundsTracer = 0;
		mass = 10;
	};
	
	class BP_556x45_Stanag_Tracer: 30Rnd_556x45_Stanag 
	{
		ammo = "BP_556x45_Ball";
		initSpeed = 954;
		displayName = "30Rnd Tracer 5.56x45mm NATO";
		descriptionShort = "Tracer 5.56 NATO magazine";
		tracersEvery = 1;
		lastRoundsTracer = 0;
		mass = 10;
	};
	
	class BP_556old_Stanag: 30Rnd_556x45_Stanag 
	{
		ammo = "BP_556x45old_Ball";
		initSpeed = 720;
		displayName = "Old 30Rnd 5.56x45mm NATO";
		descriptionShort = "Surplus 5.56x45mm NATO magazine. Inconsistent performance";
		mass = 10;
	};
	
	class BP_556x45_StanagSD: 30Rnd_556x45_Stanag 
	{
		ammo = "BP_556x45_Ball_SD";
		initSpeed = 335;
		displayName = "30Rnd 5.56x45mm NATO Subsonic";
		picture = "\breakingpoint_weapons\icons\m_stanag556_SD_x_ca.paa";
		descriptionShort = "Subsonic rounds for use with a Suppressor for maximum noise reduction.";
		mass = 10;
	};
	
	class BP_556x45_StanagM855A1: 30Rnd_556x45_Stanag 
	{
		ammo = "BP_556x45_BallM855A1";
		initSpeed = 970;
		displayName = "30Rnd 5.56x45mm M855A1-EPR";
		picture = "\breakingpoint_weapons\icons\BP_M855A1_ca.paa";
		descriptionShort = "Enhanced Performance Round, next generation 5.56x45mm cartridge similar in performance to the 7.62x51mm NATO.";
		mass = 12;
	};
	
	class BP_556x45_StanagMK262: 30Rnd_556x45_Stanag 
	{
		ammo = "BP_556x45_BallMk262";
		initSpeed = 886;
		count = 20;
		lastRoundsTracer = 0;
		displayName = "20Rnd 5.56x45mm Mk262";
		picture = "\breakingpoint_weapons\icons\BP_MK262_ca.paa";
		descriptionShort = "Special designed marksman round for the Mk12 SPR, greater effective range and soft target damage";
		mass = 10;
	};
	
	class BP_556x45_Rubber: 30Rnd_556x45_Stanag 
	{
		ammo = "BP_556x45_Ball_Rubber";
		initSpeed = 325;
		displayName = "30Rnd 5.56x45mm TranQ Rounds";
		picture = "\breakingpoint_weapons\icons\BP_556Rubber_ca.paa";
		descriptionShort = "5.56x45mm fast-acting Tranquillizer rounds.";
		mass = 10;
	};
	
	class BP_545x39_AK107: 30Rnd_556x45_Stanag 
	{
		scope = 2;
		displayName = "30rnd 545x39mm Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_545x39_Ball";
		count = 30;
		initSpeed = 880;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 10;
		descriptionShort = "5.45x39mm ball";
	};
	class BP_545x39_HP_30rnd: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "30rnd 545x39mm HP Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_545x39_HP";
		count = 30;
		initSpeed = 895;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 10;
		descriptionShort = "Hollow Point rounds";
		//magazineGroup[] = {"545Magazines"};//maggroup doesnt seem to work, shame
	};
	class BP_545x39_30rnd_7N22: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "30rnd 545x39mm 7N22 Magazine";
		picture = "\breakingpoint_weapons\icons\BP_M855A1_ca.paa";
		ammo = "BP_545x39_7N22";
		count = 30;
		initSpeed = 890;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 11;
		descriptionShort = "7N22 boat-tail with steel-penetrator";

		//magazineGroup[] = {"545Magazines"};//maggroup doesnt seem to work, shame
	};
	class BP_545x39_30rnd_Ball_T: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "30rnd 545x39mm 7T3 Tracer Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_545x39_Ball";
		count = 30;
		initSpeed = 895;
		tracersEvery = 1;//tracers enabled
		lastRoundsTracer = 0;
		mass = 10;
		descriptionShort = "30rnd 5.45x39mm Tracer magazine";
	};
	class BP_545x39_RPK107: 30Rnd_556x45_Stanag 
	{
		scope = 2;
		displayName = "75Rnd RPK Drum";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_545x39_Ball";
		count = 75;
		initSpeed = 880;
		mass = 22;
		descriptionShort = "75 round drum magazine";
	};
	
	class BP_762x39_AKM: CA_Magazine 
	{
		scope = 2;
		displayName = "30Rnd AKM Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_762x39_Ball";
		count = 30;
		mass = 15;
		initSpeed = 719;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "30Rnd 7.62x39mm magazine";
	};
	
	class BP_60Rnd_762x39_AKM: CA_Magazine 
	{
		scope = 2;
		displayName = "60Rnd AKM Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_762x39_Ball";
		count = 60;
		mass = 23;
		initSpeed = 719;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "60Rnd 7.62x39mm dual magazine";
	};
	
	class BP_762x54_SVD: CA_Magazine 
	{
		scope = 2;
		displayName = "10Rnd 7.62x54mm Russian";
		picture = "\breakingpoint_weapons\icons\m_svd_ca.paa";
		ammo = "BP_762x54_Ball";
		count = 10;
		mass = 12;
		initSpeed = 828;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "57-N-323S Ball magazine";
	};
	
	class BP_762x54_7N1_10rnd: CA_Magazine 
	{
		scope = 2;
		displayName = "10Rnd 7.62x54mm 7N1";
		picture = "\breakingpoint_weapons\icons\m_svd_ca.paa";
		ammo = "BP_762x54_7N1";
		count = 10;
		mass = 11;
		initSpeed = 865;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7N1 Sniper, Enhanced Aerodynamics";
	};
	
	class BP_762x54_7N13_10rnd: CA_Magazine 
	{
		scope = 2;
		displayName = "10Rnd 7.62x54mm 7N13";
		picture = "\breakingpoint_weapons\icons\m_svd_ca.paa";
		ammo = "BP_762x54_7N13";
		count = 10;
		mass = 13;
		initSpeed = 828;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7N13 AP, Heat-Strengthened penetrator";

	};
	
	class BP_93x64_SVDK: CA_Magazine 
	{
		scope = 2;
		displayName = "10Rnd SVDK Magazine";
		picture = "\breakingpoint_weapons\icons\m_svd_ca.paa";
		ammo = "BP_93x64_Ball";
		count = 10;
		mass = 18;
		initSpeed = 719;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "10Rnd 9.3x64mmR magazine";
	};
	
	class BP_17Rnd_9x19_SD: CA_Magazine   
	{
	    ammo = "BP_9x19_SD";
		count = 17;
		initSpeed = 330;
		displayName = "17Rnd 9mm Subsonic";
		picture = "\breakingpoint_weapons\icons\m_g17SD_ca.paa";
		descriptionShort = "Subsonic 9mm rounds to be used in conjunction with a Suppressor to minimize noise.";
		mass = 6;
	};
	
	class BP_30Rnd_65x39: 30Rnd_65x39_caseless_mag 
	{
		ammo = "BP_65x39_Grendel";
		initSpeed = 786;
		displayName = "30Rnd 6.5x39mm Grendel";
		descriptionShort = "Caseless intermediate rifle rounds";
		mass = 9;
	};
	
	class BP_10Rnd_65x39: BP_30Rnd_65x39 
	{
		count = 10;
		displayName = "10Rnd 6.5x39mm Grendel";
		descriptionShort = "Caseless intermediate rifle rounds";
		mass = 6;
	};
	
	class BP_20Rnd_65x47_Lapua: 30Rnd_65x39_caseless_mag   
	{
	    ammo = "BP_65x47_Lapua";
		initSpeed = 880;
		displayName = "20Rnd 6.5x47mm Lapua";
		count = 20;
		lastRoundsTracer = 0;
		picture = "\breakingpoint_weapons\icons\m_30stanagLapua_caseless_ca.paa";
		descriptionShort = "Increased accuracy, velocity and stopping power over the standard 6.5x39mm round.";
		mass = 8;
	};
	
	class BP_10Rnd_65x47_Lapua: BP_20Rnd_65x47_Lapua 
	{
		count = 10;
		displayName = "10Rnd 6.5x47mm Lapua";
		descriptionShort = "Increased accuracy, velocity and stopping power over the standard 6.5x39mm round.";
		mass = 6;
	};
	
	class BP_30Rnd_65x39_SD: 30Rnd_65x39_caseless_mag 
	{
		ammo = "BP_65x39_SD";
		initSpeed = 335;
		displayName = "30Rnd 6.5x39mm Subsonic";
		picture = "\breakingpoint_weapons\icons\m_30stanagSD_caseless_ca.paa";
		descriptionShort = "Subsonic rounds for use with a Suppressor for maximum noise reduction.";
		mass = 7;
	};
	
	class BP_10Rnd_65x39_SD: 30Rnd_65x39_caseless_mag 
	{
		ammo = "BP_65x39_SD";
		initSpeed = 335;
		count = 10;
		displayName = "10Rnd 6.5x39mm Subsonic";
		picture = "\breakingpoint_weapons\icons\m_30stanagSD_caseless_ca.paa";
		descriptionShort = "Subsonic rounds for use with a Suppressor for maximum noise reduction.";
		mass = 5;
	};
	
	class BP_100Rnd_65x39: 100Rnd_65x39_caseless_mag 
	{
		scope = 2;
		displayName = "100Rnd 6.5x39mm Grendel";
		descriptionShort = "Used in the MXSW";
		initSpeed = 786;
		picture = "\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		count = 100;
		ammo = "BP_65x39_Grendel";
		mass = 20;
	};
	
	class 2000Rnd_65x39_Belt;
	
	class 2000Rnd_65x39_Belt_Tracer_Red : 2000Rnd_65x39_Belt
	{
		tracersEvery=1;
		ammo="B_65x39_Minigun_Caseless";
		displayName="6.5mm 2000Rnd LMG Tracer (Red) Belt";
		descriptionShort="Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 2000<br />Used in: Vehicles";
		displaynameshort="Tracer";
		count=100;
	 };
	
	class BP_5Rnd_127x108_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd 12.7x108mm";
		picture = "\A3\Weapons_F\Data\UI\M_5rnd_127x108_CA.paa";
		count = 5;
		ammo = "BP_127x108_APDS";
		initSpeed = 820;
		descriptionShort = "Armour-piercing anti materiel rounds designed for maximum hard target penetration";
		mass = 10;
	};
	
	class BP_10Rnd_338Lapua_Mag: 7Rnd_408_Mag 
	{
		displayName = "10Rnd .338 Lapua Magnum";
		picture = "\breakingpoint_weapons\icons\m_338Lapua_ca.paa";
		count = 10;
		ammo = "BP_338_Lapua";
		initSpeed = 883;
		descriptionShort = "Specialized cartridge for military long range snipers.";
		mass = 12;
	};

    class BP_10Rnd_338LapuaOVP_Mag: 7Rnd_408_Mag 
	{
		displayName = "10Rnd .338 Lapua Magnum ";
		picture = "\breakingpoint_weapons\icons\m_338Lapua_ca.paa";
		count = 10;
		ammo = "BP_338_LapuaOVP";
		initSpeed = 945;
		descriptionShort = "Specialized overpressure cartridge for military long range snipers.";
		mass = 14;
	};	
	
	class BP_5Rnd_300M_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd Match-Grade .300 WinMag";
		picture = "\breakingpoint_weapons\icons\m_300Match_ca.paa";
		count = 5;
		ammo = "BP_300M_WinMag";
		initSpeed = 993;
		descriptionShort = "Precision Mk248 Mod 1 Match-Grade rounds";
		mass = 5;
	};
	
	class BP_5Rnd_300_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd .300 Winchester Magnum";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 5;
		ammo = "BP_300_WinMag";
		initSpeed = 874;
		descriptionShort = "High power sniper rounds";
		mass = 7;
	};
	
	class BP_5Rnd_Mauser_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd 7.92x57mm Mauser";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 5;
		ammo = "BP_792x57_Mauser";
		initSpeed = 851;
		descriptionShort = "German high power rifle cartridge";
		mass = 7;
	};
	
	class BP_5Rnd_300AAC_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd .300 Blackout Clip";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 5;
		ammo = "BP_300AAC_Ball";
		initSpeed = 723;
		descriptionShort = "Medium power intermediate rounds";
		mass = 5;
	};
	
	class BP_30Rnd_300AAC_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "30Rnd .300 Blackout Magazine";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 30;
		ammo = "BP_300AAC_Ball";
		initSpeed = 723;
		descriptionShort = "Medium power intermediate rounds";
		mass = 13;
	};
	
	class BP_10Rnd_300M_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "10Rnd Match-Grade .300 WinMag";
		picture = "\breakingpoint_weapons\icons\m_300Match_ca.paa";
		count = 10;
		ammo = "BP_300M_WinMag";
		initSpeed = 993;
		descriptionShort = "Precision Mk248 Mod 1 Match-Grade rounds.";
		mass = 8;
	};
	
	class BP_10Rnd_300_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "10Rnd .300 Winchester Magnum";
		picture = "\breakingpoint_weapons\icons\BP_m80a1_ca.paa";
		count = 10;
		ammo = "BP_300_WinMag";
		initSpeed = 874;
		descriptionShort = "High power sniper rounds.";
		mass = 7;
	};
	
	class BP_10Rnd_303_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "10Rnd .303 British";
		picture = "\breakingpoint_weapons\icons\m_303_ca.paa";
		count = 10;
		ammo = "BP_303B_Ball";
		initSpeed = 844;
		descriptionShort = "Standard high power British WWI rounds";
		mass = 10;
	};
	
	class BP_10Rnd_303_JSP_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "10Rnd .303 JSP";
		picture = "\breakingpoint_weapons\icons\m_303_ca.paa";
		count = 10;
		ammo = "BP_303B_JSP";
		initSpeed = 844;
		descriptionShort = ".303 Jacketed Soft Point rounds";
		mass = 10;
	};
	
	class BP_5Rnd_223_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd Remington .223";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 5;
		ammo = "BP_223_Ball";
		initSpeed = 960;
		descriptionShort = "Remington .223 hunting rounds";
		mass = 5;
	};
	
	class BP_5Rnd_223BTHP_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd Remington .223BTHP";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 5;
		ammo = "BP_223BTHP_Ball";
		initSpeed = 893;
		descriptionShort = "Boat Tail Hollow Point Remington .223 hunting rounds";
		mass = 5;
	};
	
	class BP_5Rnd_250_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd Remington .22-250";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 5;
		ammo = "BP_250_Ball";
		initSpeed = 1219;
		descriptionShort = "Remington .22-250 hunting rounds";
		mass = 5;
	};
	
	class BP_5Rnd_3006_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd Springfield 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 5;
		ammo = "BP_3006_Spring";
		initSpeed = 902;
		descriptionShort = "Standard Springfield rounds";
		mass = 7;
	};
	
	class BP_5Rnd_3006M_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd Match-Grade 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06Match_ca.paa";
		count = 5;
		ammo = "BP_3006M_Spring";
		initSpeed = 938;
		descriptionShort = "Match-Grade Hot Loaded 30-06 rounds";
		mass = 7;
	};
	
	class BP_8Rnd_3006_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "8Rnd Springfield 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 8;
		ammo = "BP_3006_Spring";
		initSpeed = 902;
		reloadAction = "ReloadMagazine";
		descriptionShort = "Standard Springfield rounds";
		mass = 12;
	};
	
	class BP_8Rnd_3006M_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "8Rnd Match-Grade 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06Match_ca.paa";
		count = 8;
		ammo = "BP_3006M_Spring";
		initSpeed = 938;
		reloadAction = "ReloadMagazine";
		descriptionShort = "Match-Grade Hot Loaded 30-06 rounds";
		mass = 14;
	};
	
	class BP_20Rnd_3006_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "20Rnd Springfield 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 20;
		ammo = "BP_3006_Spring";
		initSpeed = 902;
		descriptionShort = "Standard Springfield 30-06 rounds";
		mass = 25;
	};
	
	class BP_20Rnd_3006M_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "20Rnd Match Grade 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06Match_ca.paa";
		count = 20;
		ammo = "BP_3006M_Spring";
		initSpeed = 938;
		descriptionShort = "Match-Grade Hot Loaded 30-06 rounds";
		mass = 27;
	};
	
	class BP_5Rnd_22_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "5Rnd .22LR";
		picture = "\breakingpoint_weapons\icons\m_22lr_ca.paa";
		count = 5;
		ammo = "BP_22LR_Ball";
		initSpeed = 340; //https://en.wikipedia.org/wiki/.22_Long_Rifle
		descriptionShort = "Small caliber high velocity rimfire cartridge.";
		mass = 2;
	};
	
	class BP_25Rnd_22_Mag: 5Rnd_127x108_Mag 
	{
		scope = 2;
		displayName = "25Rnd .22LR";
		picture = "\breakingpoint_weapons\icons\m_22lr_ca.paa";
		count = 25;
		ammo = "BP_22LR_Ball";
		initSpeed = 340; //https://en.wikipedia.org/wiki/.22_Long_Rifle
		descriptionShort = "Small caliber high velocity rimfire cartridge.";
		mass = 7;
	};
	
	class BP_7Rnd_408Chey_Mag: 7Rnd_408_Mag 
	{
	    ammo = "BP_408Chey_Ball";
		displayname = "7Rnd 408 CheyTac";
		initSpeed = 908;
		descriptionshort = "High Caliber Anti Materiel rounds";
		mass = 15;
	};
	
	class BP_10Rnd_127x99: 7Rnd_408_Mag 
	{
	    ammo = "BP_127x99_Ball";
		displayname = "10Rnd .50BMG";
		picture = "\breakingpoint_weapons\icons\m_107_ca.paa";
		descriptionshort = "12.7x99mm Anti Materiel rounds";
		mass = 20;
		initSpeed = 815;
		count = 10;
	};
	
	class BP_10Rnd_127x99_RAUF: 7Rnd_408_Mag 
	{
	    ammo = "BP_127x99_PEI";
		displayname = "10Rnd .50BMG Raufoss Mk211";
		picture = "\breakingpoint_weapons\icons\m_107mk_ca.paa";
		descriptionshort = "12.7x99mm Explosive Incendiary Armour Piercing rounds";
		mass = 20;
		initSpeed = 815;
		count = 10;
	};
	
	class 100Rnd_127x99_mag_Tracer_Yellow;
	
	class BP_100Rnd_127x99_box: 100Rnd_127x99_mag_Tracer_Yellow 
	{
		displayName = "100Rnd 50cal Box";
		descriptionShort = "Ammo box for the M2 mounted machine gun";
		mass = 110;
	};
	
	class BP_17Rnd_9x19: 30Rnd_9x21_Mag   
	{
	    ammo = "BP_9x19_Ball";
		count = 17;
		initSpeed = 390;
		displayName = "17Rnd 9x19mm Parabellum";
		descriptionshort = "";
		mass = 5;
	};
	
	class BP_19Rnd_9x19: 30Rnd_9x21_Mag   
	{ 
	    ammo = "BP_9x19_Ball";
		count = 19;
		initSpeed = 390;
		displayName = "19Rnd 9x19mm Parabellum";
		descriptionshort = "";
		mass = 5;
	};
	
	class BP_33Rnd_9x19: 30Rnd_9x21_Mag   
	{
	    ammo = "BP_9x19_Ball";
		count = 30;
		initSpeed = 390;
		displayName = "30Rnd 9x19mm Parabellum";
		descriptionshort = "Extended 9mm magazine";
		mass = 7;
	};
	
	class BP_33Rnd_9x19OVP: 30Rnd_9x21_Mag   
	{
	    ammo = "BP_9x19OVP_Ball";
		displayName = "33Rnd 9x19mm +P+";
		descriptionuse = "33Rnd 9x19mm +P+";
		count = 33;
		initSpeed = 435;
		picture = "\breakingpoint_weapons\icons\m_g18OVP_ca.paa";
		descriptionshort = "Extended overpressure 9mm magazine.";
		mass = 7;
	};
	
	class BP_12Rnd_9x18: 30Rnd_9x21_Mag   
	{
	    count = 12;
	    ammo = "BP_9x18_Ball";
		displayName = "12Rnd 9x18mm Makarov";
		descriptionshort = "Russian 9mm rounds";
		mass = 4;
	};
	
	class BP_30Rnd_9x21_Mag: 30Rnd_9x21_Mag 
	{
        ammo = "BP_9x21_Ball";
		displayname = "30Rnd 9x19mm Parabellum";
		count = 30;
		descriptionshort = "Extended 9mm magazine";
		mass = 7;
	};
	
	class BP_16Rnd_9x21_Mag: 30Rnd_9x21_Mag 
	{
		displayName = "15Rnd 9x19mm Parabellum";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		type = 16;
		count = 15;
		descriptionShort = "Standard 9mm magazine";
		ammo = "BP_9x21_Ball";
		mass = 5;
	};
	
	class BP_15Rnd_9x21_Rubber: 30Rnd_9x21_Mag 
	{
		displayName = "10Rnd TranQ pistol attachment ammo";
		picture = "\breakingpoint_weapons\icons\m_g17Rubber_ca.paa";
		type = 16;
		count = 10;
		initSpeed = 680;
		descriptionShort = "Fast acting Tranquillizer rounds for the 1911 TranQ pistol attachment";
		ammo = "BP_9x19_Rubber";
		mass = 5;
	};
	
	/*extern*/ class 3Rnd_UGL_FlareGreen_F;

	class BP_6Rnd_GreenFlare: 3Rnd_UGL_FlareGreen_F 
	{
		ammo = "CMflare_Chaff_Ammo";
		count = 6;
		displayName = "Pistol Signal Flare";
		descriptionShort = "$STR_A3_CfgMagazines_6Rnd_GreenSignal_F1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		mass = 12;
		initSpeed = 340;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_GreenSignal_CA.paa";
	};
	
	class BP_6Rnd_RedFlare: BP_6Rnd_GreenFlare 
	{
		ammo = "CMflare_Chaff_Ammo";
		displayName = "Pistol Signal Flare";
		descriptionShort = "$STR_A3_CfgMagazines_6Rnd_RedSignal_F1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
		picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
	};
	
	/*class 5Rnd_127x108_Mag: 5Rnd_127x108_Mag 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_APDS_Mag 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 7Rnd_408_Mag: 7Rnd_408_Mag 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 20Rnd_762x51_Mag: 20Rnd_762x51_Mag 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
    class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag_Tracer_Green 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag_Tracer_Red 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag_Tracer_Yellow 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 100Rnd_65x39_caseless_mag: 100Rnd_65x39_caseless_mag 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 30Rnd_65x39_caseless_mag: 30Rnd_65x39_caseless_mag 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_green 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green_mag_Tracer 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 50Rnd_762x51_Box: 50Rnd_762x51_Box 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box_Tracer 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class RPG32_F: RPG32_F 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class RPG32_HE_F: RPG32_HE_F 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class NLAW_F: NLAW_F 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class Titan_AT: Titan_AT 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class Titan_AP: Titan_AP 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};
	
	class Titan_AA: Titan_AA 
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};*/
	
	class BP_15Rnd_9x19OVP: CA_Magazine   
	{
	    ammo = "BP_9x19OVP_Ball";
		count = 15;
		initSpeed = 435;
		displayName = "15Rnd 9x19mm +P+";
		descriptionuse = "15Rnd 9x19mm +P+";
		picture = "\breakingpoint_weapons\icons\m_g17OVP_ca.paa";
		descriptionshort = "Overpressure rounds, increased velocity and stopping power.";
		mass = 5;
	};
	
	class BP_7Rnd_765x17: CA_Magazine   
	{
	    ammo = "BP_765x17_Ball";
		count = 7;
		initSpeed = 310;
		displayName = "7Rnd 7.65mm Browning";
		descriptionuse = "7Rnd 7.65mm Browning";
		picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		descriptionshort = "";
		mass = 5;
	};
	
	class BP_20Rnd_765x17: BP_7Rnd_765x17   
	{
	    ammo = "BP_765x17_Ball";
		count = 20;
		initSpeed = 310;
		displayName = "20Rnd 7.65mm Browning";
		descriptionuse = "20Rnd 7.65mm Browning";
		picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		descriptionshort = "High capacity 7.65mm magazine";
		mass = 17;
	};
	
	class BP_6Rnd_45_Mag: CA_Magazine   
	{
	    ammo = "BP_45ACP";
		displayName = "6Rnd .45ACP";
		count = 6;
		initSpeed = 373;
		picture = "\breakingpoint_weapons\icons\m_revolverJHP_ca.paa";
		descriptionshort = "";
		mass = 7;
	};
	
	class BP_6Rnd_45JHP_Mag: CA_Magazine   
	{
	    ammo = "BP_45JHP";
		displayName = "6Rnd .45JHP";
		count = 6;
		initSpeed = 373;
		picture = "\breakingpoint_weapons\icons\m_revolverJHP_ca.paa";
		descriptionshort = "High velocity Hollow Point rounds for increased soft target damage.";
		mass = 7;
	};
	
	class BP_7Rnd_45acp: CA_Magazine   
	{
	    ammo = "BP_45ACP";
		displayName = "7Rnd .45ACP";
		initSpeed = 350;
		count = 7;
		picture = "\breakingpoint_weapons\icons\m_colt1911_ca.paa";
		descriptionshort = "Standard .45ACP magazine";
		mass = 7;
	};
	
	class BP_8Rnd_45gov: CA_Magazine   
	{
	    ammo = "BP_45GOV";
		initSpeed = 617;
		count = 8;
		displayName = "8Rnd .45-70";
		picture = "\breakingpoint_weapons\icons\m_45govt_ca.paa";
		descriptionshort = "High power 300g hunting rounds";
		mass = 12;
	};
	
	class BP_7Rnd_45JHP: CA_Magazine   
	{
	    ammo = "BP_45JHP";
		count = 7;
		initSpeed = 373;
		displayName = "7Rnd .45JHP+";
		descriptionuse = "7Rnd .45JHP+";
		picture = "\breakingpoint_weapons\icons\m_kim45JHP_ca.paa";
		descriptionshort = "High velocity Hollow Point rounds for increased soft target damage";
		mass = 8;
	};
	
	class BP_7Rnd_45Rubber: CA_Magazine   
	{
	    ammo = "BP_45Rubber";
		displayName = "7Rnd .45ACP TranQ rounds";
		initSpeed = 350;
		count = 7;
		picture = "\breakingpoint_weapons\icons\BP_45Rubber_ca.paa";
		descriptionshort = ".45ACP fast-acting Tranquillizer rounds";
		mass = 7;
	};
	
	/*class BP_12Rnd_45cal: CA_Magazine 
	{
		ammo = "BP_45ACP";
		displayName = "12Rnd .45ACP";
		initSpeed = 350;
		count = 12;
		picture = "\breakingpoint_weapons\icons\BP_45Rubber_ca.paa";
		descriptionshort = "Hi-Capacity .45ACP magazine";
		mass = 9;
	};*/
	
	class BP_12Rnd_45JHP: CA_Magazine 
	{
		ammo = "BP_45JHP";
		displayName = "12Rnd .45JHP+";
		initSpeed = 373;
		count = 12;
		picture = "\breakingpoint_weapons\icons\m_kim45JHP_ca.paa";
		descriptionshort = "Hi-Capacity .45JHP magazine";
		mass = 9;
	};

	class BP_15Rnd_45cal: CA_Magazine 
	{
		ammo = "BP_45ACP";
		displayName = "15Rnd .45ACP";
		initSpeed = 350;
		count = 15;
		picture = "\breakingpoint_weapons\icons\BP_45Rubber_ca.paa";
		descriptionshort = "Hi-Capacity .45ACP magazine";
		mass = 10;
	};
	
	class BP_15Rnd_45JHP: CA_Magazine 
	{
		ammo = "BP_45JHP";
		displayName = "15Rnd .45JHP";
		count = 15;
		initSpeed = 373;
		picture = "\breakingpoint_weapons\icons\m_kim45JHP_ca.paa";
		descriptionshort = "Hi-Capacity .45JHP magazine";
		mass = 10;
	};
	
	class BP_15Rnd_9x19_M9: CA_Magazine 
	{
		ammo = "BP_9x19_Ball";
		initSpeed = 390;
		picture = "\breakingpoint_weapons\icons\m_glock17_ca.paa";
		descriptionshort = "";
		mass = 5;
	};	
	
	class BP_6Rnd_357_Mag: CA_Magazine 
	{
		scope = 2;
		displayName = "6Rnd .357 Magnum";
		count = 6;
		mass = 5;
		picture = "\breakingpoint_weapons\icons\m_44SuperMag_ca.paa";
		ammo = "BP_357mag_ball";
	};
	
	class BP_5Rnd_500Mag : CA_Magazine 
	{
		displayName = "5Rnd .500 Magnum";
		picture = "\breakingpoint_weapons\icons\m_44SuperMag_ca.paa";
		ammo = "BP_500Mag_ball";
		count = 5;
		initSpeed = 600;
		descriptionuse = "5Rnd .500 Magnum";
		mass = 5;
	};
	
	class BP_6Rnd_44Mag : CA_Magazine 
	{
		displayName = "6Rnd .44 Magnum";
		picture = "\breakingpoint_weapons\icons\m_44SuperMag_ca.paa";
		ammo = "BP_44Mag_ball";
		initSpeed = 460;
		count = 6;
		descriptionuse = ".44 Magnum";
		descriptionshort = "High power magnum pistol cartridge";
		mass = 7;
	};
	
	class BP_8Rnd_Slug : CA_Magazine 
	{
		scope = 2;
		displayName = "8Rnd Slugs";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 8;
		initSpeed = 609;
		ammo = "BP_12Gauge_Slug";
		descriptionShort = "High Power 12 Gauge Slugs";
		mass = 12;
	};
	
	class BP_2Rnd_Slug : CA_Magazine 
	{
		scope = 2;
		displayName = "2Rnd Slugs";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 2;
		initSpeed = 609;
		ammo = "BP_12Gauge_Slug";
		descriptionShort = "High Power 12 Gauge Slugs";
		mass = 4;
	};
	
	class BP_8Rnd_Buckshot : CA_Magazine
	{
		scope = 2;
		displayName = "8Rnd 00 Buckshot";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 8;
		initSpeed = 365;
		ammo = "BP_12Gauge_Buck";
		descriptionShort = "12ga 00 Buckshot";
		mass = 10;
	};
	
	class BP_2Rnd_Buckshot : CA_Magazine 
	{
		scope = 2;
		displayName = "2Rnd 00 Buckshot";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 2;
		initSpeed = 365;
		ammo = "BP_12Gauge_Buck";
		descriptionShort = "12ga 00 Buckshot";
		mass = 4;
	};
	
	class BP_8Rnd_MagBuckshot : CA_Magazine 
	{
		scope = 2;
		displayName = "8Rnd Magnum 000 Buckshot";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 8;
		initSpeed = 440;
		ammo = "BP_12Gauge_Buck2";
		descriptionShort = "12ga Magnum 000 Buckshot";
		mass = 15;
	};
	
	class BP_2Rnd_MagBuckshot : CA_Magazine 
	{
		scope = 2;
		displayName = "2Rnd Magnum 000 Buckshot";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 2;
		initSpeed = 440;
		ammo = "BP_12Gauge_Buck2";
		descriptionShort = "12ga Magnum 000 Buckshot";
		mass = 5;
	};
	
	class BP_IED1_Mag: ATMine_Range_Mag 
	{
		mass = 70;
		ammo = "BP_IED";
		picture = "\breakingpoint_weapons\icons\ied_v1_ca.paa";
		displayName = "Proximity IED";
		model = "\A3\Weapons_F\explosives\IED_urban_small.p3d";
		descriptionShort = "Improvised Explosive Device";

		class Library {
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse = "$STR_A3_use_mine";
	};
	
	class BP_1Rnd_HE_shell: CA_Magazine 
	{
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell0";
		displayNameShort = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "BP_40mm_HE";
		initSpeed = 185;
		count = 1;
		nameSound = "";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell1";
		mass = 4;
		reloadAction = "GestureReloadTrgUGL";
	};
	
	class BP_3Rnd_HE_shell: CA_Magazine 
	{
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell1";
		mass = 12;
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "BP_40mm_HE";
		initSpeed = 185;
		count = 3;
		nameSound = "";
		reloadAction = "GestureReloadTrgUGL";
	};
	
	class BP_UGL_FlareWhite: CA_Magazine 
	{
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_UGL_FlareWhite_F_test1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		ammo = "BP_40mm_White";
		initSpeed = 80;
		count = 1;
		nameSound = "";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareWhite_F1";
		weaponPoolAvailable = 1;
		mass = 4;
	};
	
	class BP_UGL_FlareGreen: BP_UGL_FlareWhite 
	{
		displayName = "$STR_A3_CfgMagazines_UGL_FlareGreen_F0";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		ammo = "BP_40mm_Green";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F1";
	};
	
	class BP_UGL_FlareRed: BP_UGL_FlareWhite 
	{
		displayName = "$STR_A3_CfgMagazines_UGL_FlareGreen_F0";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		ammo = "BP_40mm_Red";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F1";
	};
};
//-----------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS CREATION BULLETS|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
class CfgAmmo {
	class Default;	// External class reference
	class BulletCore;	// External class reference
	class BulletBase;	// External class reference
	class ShotgunBase;  // External class reference
	class ShellBase;    // External class reference
	class FlareBase;    // External class reference
	class GrenadeBase;  // External class reference
	class Rocketbase;   // External class reference
	class MissileCore;   // External class reference
	class MineBase;     // External class reference
	class GrenadeHand_Stone;    // External class reference
	class B_762x51_Ball;
	class B_65x39_Caseless;
	class B_9x21_Ball;
	class B_408_Ball;
	class B_556x45_Ball;
	class B_45ACP_Ball;
	class B_127x108_Ball;
	class GrenadeHand;
	class G_40mm_HE;
	class SmokeShell;

	class BP_Flashbang_Ammo: GrenadeHand
	{
		scope = 1;
		hit = 0.001;
		indirectHit = 0.001;
		indirectHitRange = 0.01;
		model = "\breakingpoint_weapons\models\m84\m84.p3d";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 5;
	//	ExplosionEffects = "SUPER_flashExplosion";
		soundHit1[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit2[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit3[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit4[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit5[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit6[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
	//	explosionSoundEffect = "flashbang2";
		explosionTime = 1.5;
	};

	class BP_AlarmClock_Ammo: GrenadeHand 
	{
		model = "\breakingpoint_weapons\models\AlarmClock\BP_AlarmClock.p3d";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		explosionEffectsRadius = 0;
		typicalspeed = 60;
		deflecting = 15;
		cost = 40;
		simulation = "shotShell";
		simulationStep = 0.05;
		shadow = 1;
		soundHit[] = {};
		soundHit1[] = {"breakingpoint_sfx\effects\AlarmClock1.ogg",0.5022777,1,50};
		soundHit2[] = {};
		soundHit3[] = {};
		multiSoundHit[] = {"soundHit1",1};
		soundFly[] = {"",0.1,1,20};
		soundEngine[] = {"",1,1};
		explosionSoundEffect = "";
		CraterEffects = "NoCrater";
		CraterWaterEffects = "ImpactGlassThin";
		explosionEffects = "NoExplosion";
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
		whistleDist = 0;
		explosionTime = 5;
		timeToLive = 50;
		class CamShakeExplode{};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};

	class BP_GL_Flashbang_Ammo: G_40mm_HE
	{
		scope = 1;
		hit = 0.001;
		indirectHit = 0.001;
		indirectHitRange = 0.01;
		model = "\A3\weapons_f\ammo\UGL_slug";
		visibleFire = 0.1;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 4;
	//	ExplosionEffects = "SUPER_flashExplosion";
		soundHit[] = {"",0,1};
		explosionSoundEffect = "";
		explosionTime = 2.5;
	};

	/*class BP_CSGas_Green: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_green";
		smokeColor[] = {0.2125,0.6258,0.48909998,1};
	};*/

	class BP_Arrow_Ball: BulletBase
	{
		hit = 45;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		typicalSpeed = 325;
		airFriction = -0.000267;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 0;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;		
		class CamShakeHit 
		{
			power = 2;
			duration = 1;
			frequency = 25;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 60;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Arrow_Ball_Poison: BulletBase
	{
		hit = 10;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		typicalSpeed = 325;
		airFriction = -0.000267;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 0;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;		
		class CamShakeHit 
		{
			power = 2;
			duration = 1;
			frequency = 25;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 100;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 1; // 0 - Disabled / 1 - Enabled
			InfectionChance = 1; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
	};
	
	class BP_Arrow_Ball_Rambo: GrenadeBase
	{
		hit = 45;
		timeToLive = 30;
		cost = 1;
		indirectHit = 45;
		indirectHitRange = 4;
		cartridge = "";
		typicalSpeed = 290;
		airFriction = -0.000267;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 0;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;
		explosive = 1;
		fuseDistance = 2;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.162278, 1, 1000};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.162278, 1, 1000};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.162278, 1, 1000};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.162278, 1, 1000};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.162278, 1, 1000};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.162278, 1, 1000};
		multiSoundHit[] = {"soundHit1", 0.200000, "soundHit2", 0.200000, "soundHit3", 0.200000, "soundHit4", 0.100000, "soundHit5", 0.150000, "soundHit6", 0.150000};
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";		
		class CamShakeExplode 
		{
			power = "(40*0.2)";
			duration = "((round (40^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((3 + 40^0.5)*8)";
		};
		class CamShakeHit 
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire 
		{
			power = "(0^0.25)";
			duration = "((round (0^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((0^0.5)*8)";
		};
		class CamShakePlayerFire 
		{
			power = 0;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	
	class Throwable: GrenadeHand_stone 
	{
		model = "\A3\Weapons_f\ammo\Handgrenade";
		hit = 0.50000;
		explosionEffectsRadius = 0;
		explosionTime = 0;
		simulation = "shotShell"; 
		CraterEffects = "NoCrater";
		typicalspeed = 25;
		fuseDistance = 0;
		timeToLive = 45;
		indirectHit = 0.100000;
		indirectHitRange = 1;
		deflecting = 10;
		soundHit1[] = {};
		soundHit2[] = {};
		soundHit3[] = {};
		soundHit4[] = {};
		soundHit5[] = {};
		soundHit6[] = {};
		soundImpactDefault1[] = {"A3\sounds_f\weapons\hits\concrete_3", 2.511886, 1, 10};
		impactGroundSoft[] = {"soundImpactDefault1", 1};
		impactGroundHard[] = {"soundImpactDefault1", 1};
		impactMan[] = {"soundImpactDefault1", 1};
		impactIron[] = {"soundImpactDefault1", 1};
		impactArmor[] = {"soundImpactDefault1", 1};
		impactBuilding[] = {"soundImpactDefault1", 1};
		impactFoliage[] = {"soundImpactDefault1", 1};
		impactWood[] = {"soundImpactDefault1", 1};
		impactGlass[] = {"soundImpactDefault1", 1};
		impactGlassArmored[] = {"soundImpactDefault1", 1};
		impactConcrete[] = {"soundImpactDefault1", 1};
		impactRubber[] = {"soundImpactDefault1", 1};
		impactPlastic[] = {"soundImpactDefault1", 1};
		impactDefault[] = {"soundImpactDefault1", 1};
		impactMetal[] = {"soundImpactDefault1", 1};
		impactMetalplate[] = {"soundImpactDefault1", 1};
		impactWater[] = {"soundImpactDefault1", 1};
		soundDefault1[] = {"A3\sounds_f\weapons\hits\concrete_3", 1.800000, 1, 10};
		soundDefault2[] = {"A3\sounds_f\weapons\hits\concrete_5", 1.800000, 1, 10};
		soundDefault3[] = {"A3\sounds_f\weapons\hits\concrete_7", 1.800000, 1, 10};
		soundDefault4[] = {"A3\sounds_f\weapons\hits\hard_ground_1", 1.812538, 1, 10};
		soundDefault5[] = {"A3\sounds_f\weapons\hits\hard_ground_2", 1.812538, 1, 10};
		soundGlass1[] = {"A3\sounds_f\weapons\hits\glass_5", 1.812538, 1, 100};
		soundGlass2[] = {"A3\sounds_f\weapons\hits\glass_6", 1.812538, 1, 100};
		soundGlass3[] = {"A3\sounds_f\weapons\hits\glass_arm_6", 1.858925, 1, 60};
		soundGlass4[] = {"A3\sounds_f\weapons\hits\glass_arm_7", 1.858925, 1, 60};
		soundRubber1[] = {"A3\sounds_f\weapons\hits\tyre_4", 0.891251, 1, 10};
		soundRubber2[] = {"A3\sounds_f\weapons\hits\tyre_7", 0.891251, 1, 10};
		soundWater1[] = {"A3\sounds_f\weapons\hits\water_4", 1.000000, 1, 10};
		hitDefault[] = {"soundDefault1", 0.200000, "soundDefault2", 0.200000, "soundDefault3", 0.200000, "soundDefault4", 0.200000, "soundDefault5", 0.200000};
		hitGlass[] = {"soundGlass1", 0.4000000, "soundGlass2", 0.400000, "soundGlass3", 0.100000, "soundGlass4", 0.100000};	
		hitRubber[] = {"soundRubber1", 0.600000, "soundRubber2", 0.4000000};
		hitWater[] = {"soundWater1", 0.125000};		
		class HitEffects 
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
		};
	};
	
	class BP_ThrowingKnife: Throwable 
	{
		hit = 10.50000;
		typicalspeed = 20;
		model = "\breakingpoint\models\bp_knife.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Knife1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Knife2.wav", 1.584893, 1, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 4;
			duration = 3;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_InfectedNeedle: Throwable 
	{
		model = "\breakingpoint\models\bp_morphine2.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 1;
			MedicalChance = 100;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 1; // 0 - Disabled / 1 - Enabled
			InfectionChance = 1; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Book1: Throwable 
	{
		model = "\breakingpoint\models\bp_book1.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 10;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 0;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Book2: Throwable 
	{
		model = "\breakingpoint\models\bp_book2.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 10;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 0;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Book3: Throwable 
	{
		model = "\breakingpoint\models\bp_book3.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 10;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 0;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Mug: Throwable 
	{
		model = "\breakingpoint\models\bp_mug.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 25;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Brick1: Throwable 
	{
		hit = 7.450000;
		legFracture = true;
		model = "\breakingpoint\models\bp_brick1.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 6;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 85;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Brick2: Throwable 
	{
		hit = 7.750000;
		legFracture = true;
		model = "\breakingpoint\models\bp_brick2.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 8;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 85;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Pottery: Throwable 
	{
		model = "\breakingpoint\models\bp_pottery.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 25;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Videotape: Throwable 
	{
		model = "\breakingpoint\models\bp_videotape.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 5;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_ZipDisk: Throwable 
	{
		model = "\breakingpoint\models\bp_zipdisk.p3d";
        soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 5;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Rock: Throwable 
	{
		hit = 4.750000;
		model = "\breakingpoint\models\bp_rock.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 4;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 65;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Plate1: Throwable 
	{
		hit = 2.750000;
		model = "\breakingpoint\models\bp_plate1.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Plate2: Throwable 
	{
		hit = 3.750000;
		model = "\breakingpoint\models\bp_plate2.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_TennisBall: Throwable 
	{
		hit = 7.750000;
		model = "\breakingpoint\models\bp_tennisball.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Tennis1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Tennis1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 95;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_EmptyCan: Throwable 
	{
		hit = 0.750000;
		model = "\breakingpoint\models\bp_canempty.p3d";		
		class CamShakeHit 
		{
			power = 2;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_HammerTime: Throwable 
	{
		hit = 7.750000;
		model = "\breakingpoint\models\bp_hammer.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};		
		class CamShakeHit 
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 95;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class Melee : BulletBase 
	{
		timeToLive = 0.05;
		typicalSpeed = 70;
		airFriction = -0.00001;
		proxyShape = "";
		explosive = 0;
		cartridge = "";
		simulation = "shotRocket";
		model = "\A3\Weapons_F\empty.p3d";		
		muzzleEffect = "";
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 0.22000;
		visibleFireTime = 0;	// how long is it visible
		maxControlRange = 1;	// max range for manual control, 0 = no control (passive weapon)
		soundDefault1[] = {};
		soundDefault2[] = {};
		soundDefault3[] = {};
		soundDefault4[] = {};
		soundDefault5[] = {};
		soundHitBody1[] = {};
		soundHitBody2[] = {};
		soundConcrete1[] = {};
		soundConcrete2[] = {};
		soundConcrete3[] = {};
		soundGlass1[] = {"A3\sounds_f\weapons\hits\glass_5", 1.812538, 1, 100};
		soundGlass2[] = {"A3\sounds_f\weapons\hits\glass_6", 1.812538, 1, 100};
		soundGlass3[] = {"A3\sounds_f\weapons\hits\glass_arm_6", 1.858925, 1, 10};
		soundGlass4[] = {"A3\sounds_f\weapons\hits\glass_arm_7", 1.858925, 1, 10};
		soundGroundHard1[] = {};
		soundGroundHard2[] = {};
		soundRubber1[] = {"A3\sounds_f\weapons\hits\tyre_4", 0.891251, 1, 10};
		soundRubber2[] = {"A3\sounds_f\weapons\hits\tyre_7", 0.891251, 1, 10};
		soundWater1[] = {"A3\sounds_f\weapons\hits\water_4", 1.000000, 1, 10};
		bulletFly1[] = {"", 0.000008, 1, 30};
		bulletFly2[] = {"", 0.794328, 1, 30};
		bulletFly3[] = {"", 0.794328, 1, 30};
		bulletFly4[] = {"", 0.794328, 1, 30};
		bulletFly5[] = {"", 0.794328, 1, 30};
		bulletFly6[] = {"", 0.794328, 1, 30};
		bulletFly7[] = {"", 0.794328, 1, 30};
		bulletFly8[] = {"", 0.794328, 1, 30};
		bulletFly[] = {"bulletFly1", 0.166000, "bulletFly2", 0.166000, "bulletFly3", 0.166000, "bulletFly4", 0.166000, "bulletFly5", 0.166000, "bulletFly6", 0.167000, "bulletFly7", 0.166000, "bulletFly8", 0.167000};
		hitDefault[] = {"soundDefault1", 0.200000, "soundDefault2", 0.200000, "soundDefault3", 0.200000, "soundDefault4", 0.200000, "soundDefault5", 0.200000};
		hitGlass[] = {"soundGlass1", 0.4000000, "soundGlass2", 0.400000, "soundGlass3", 0.100000, "soundGlass4", 0.100000};
		hitGroundHard[] = {"soundGroundHard1", 0.600000, "soundGroundHard2", 0.400000};		
		hitConcrete[] = {"soundConcrete1", 0.33000, "soundConcrete2", 0.33000, "soundConcrete3", 0.34000};
		hitRubber[] = {"soundRubber1", 0.600000, "soundRubber2", 0.4000000};
		hitWater[] = {"soundWater1", 0.125000};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		supersonicCrackNear[] = {"", 0.354813, 1, 10};
		supersonicCrackFar[] = {"", 0.281838, 1, 10};
		cost = 0.01;
		deflecting = 0;
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		effectsSmoke = "";
		explosionEffects = "";
		craterEffects = "";		
		class HitEffects 
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "";
			hitGroundHard = "";
			hitWater = "ImpactEffectsWater";
			default_mat = "";
		};
	};
	
	class BP_Stab : BulletBase 
	{
		hit = 5;
		//indirectHit = 10;
		//indirectHitRange = 1;
		explosive = "false";
		timeToLive = 0.05;
		typicalSpeed = 70;
		airFriction = -0.00001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 0.22000;
		visibleFireTime = 0;	// how long is it visible
		maxControlRange = 1;	// max range for manual control, 0 = no control (passive weapon)
		soundDefault1[] = {};
		soundDefault2[] = {};
		soundDefault3[] = {};
		soundDefault4[] = {};
		soundDefault5[] = {};
		soundHitBody1[] = {};
		soundHitBody2[] = {};
		soundConcrete1[] = {};
		soundConcrete2[] = {};
		soundConcrete3[] = {};
		soundGlass1[] = {"A3\sounds_f\weapons\hits\glass_5", 1.812538, 1, 10};
		soundGlass2[] = {"A3\sounds_f\weapons\hits\glass_6", 1.812538, 1, 10};
		soundGlass3[] = {"A3\sounds_f\weapons\hits\glass_arm_6", 1.858925, 1, 10};
		soundGlass4[] = {"A3\sounds_f\weapons\hits\glass_arm_7", 1.858925, 1, 10};
		soundGroundHard1[] = {};
		soundGroundHard2[] = {};
		soundRubber1[] = {"A3\sounds_f\weapons\hits\tyre_4", 0.891251, 1, 10};
		soundRubber2[] = {"A3\sounds_f\weapons\hits\tyre_7", 0.891251, 1, 10};
		soundWater1[] = {"A3\sounds_f\weapons\hits\water_4", 1.000000, 1, 10};
		hitDefault[] = {"soundDefault1", 0.200000, "soundDefault2", 0.200000, "soundDefault3", 0.200000, "soundDefault4", 0.200000, "soundDefault5", 0.200000};
		hitGlass[] = {"soundGlass1", 0.4000000, "soundGlass2", 0.400000, "soundGlass3", 0.100000, "soundGlass4", 0.100000};
		hitGroundHard[] = {"soundGroundHard1", 0.600000, "soundGroundHard2", 0.400000};		
		hitConcrete[] = {"soundConcrete1", 0.33000, "soundConcrete2", 0.33000, "soundConcrete3", 0.34000};
		hitRubber[] = {"soundRubber1", 0.600000, "soundRubber2", 0.4000000};
		hitWater[] = {"soundWater1", 0.125000};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		supersonicCrackNear[] = {"", 0, 0, 0};
		supersonicCrackFar[] = {"", 0, 0, 0};		
		deflecting = 0;
		explosionEffects = "ImpactBlood";
		craterEffects = "ImpactEffectsBlood";
		model = "\A3\Weapons_F\empty.p3d";		
		class HitEffects 
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "";
			hitGroundHard = "";
			hitWater = "ImpactEffectsWater";
			default_mat = "";
		};
	};
	
	class BP_Hatchet_Swing_Ammo : Melee 
	{
		hit = 10;
		typicalSpeed = 85;
		timeToLive = 0.015;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 0.30000;
		deflecting = 0;		
		model = "\A3\Weapons_F\empty.p3d";		
		class Melee 
		{
			damageHit = 0.35; // Hit Damage (Zombies)
			damageBlood = 3500; // Blood Damage (Players)
			anim = "GestureSwing";
			radius = 2.1; //Radius In Meters Of Targets
			angle = 50; //Angle Of Hit Detection
			sounds[] = 
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.384893, 1, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.284893, 1.1, 30}
			};
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Katana_Swing_Ammo : Melee 
	{	
		hit = 12;
		typicalSpeed = 85;
		//explosive = 1;
		//explosionTime = 0.1;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 0.30000;
		model = "\A3\Weapons_F\empty.p3d";		
		class Melee 
		{
			damageHit = 0.7; // Hit Damage (Zombies)
			damageBlood = 4700; // Blood Damage (Players)
			anim = "GestureSwing3";
			radius = 2.2; //Radius In Meters Of Targets
			angle = 82; //Angle Of Hit Detection
			sounds[] = 
			{
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.284893, 1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.184893, 1.1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.584893, 0.8, 10}
			};
		
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Pickaxe_Swing_Ammo : Melee 
	{	
		hit = 10;
		typicalSpeed = 85;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 0.30000;
		legFracture = false;
		deflecting = 0;
		explosionEffects = "";
		craterEffects = "";		
		model = "\A3\Weapons_F\empty.p3d";		
		class Melee 
		{
			damageHit = 0.5; // Hit Damage (Zombies)
			damageBlood = 4500; // Blood Damage (Players)
			anim = "GestureSwing2";
			radius = 2.4; //Radius In Meters Of Targets
			angle = 50; //Angle Of Hit Detection
			sounds[] = 
			{
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.284893, 1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.184893, 1.1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.584893, 0.8, 10}
			};
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Hammer_Swing_Ammo : Melee 
	{	
		hit = 10;
		typicalSpeed = 85;
		//explosive = 1;
		//explosionTime = 0.1;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.02;
		caliber = 0.30000;
		legFracture = true;
		explosionEffects = "";
		craterEffects = "";		
		model = "\A3\Weapons_F\empty.p3d";		
		class Melee 
		{
			damageHit = 0.8; // Hit Damage (Zombies)
			damageBlood = 4000; // Blood Damage (Players)
			anim = "GestureSwing2";
			radius = 2.7; //Radius In Meters Of Targets
			angle = 60; //Angle Of Hit Detection
			sounds[] = 
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.384893, 1, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.284893, 1.1, 30}
			};
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 1;
			MedicalChance = 95;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Shovel_Swing_Ammo: Melee
	{
		hit = 10;
		typicalSpeed = 85;
		timeToLive = 0.02;
		airFriction = -0.00001;
		soundFly[] = {"",0,1};
		soundEngine[] = {"",0,1};
		visibleFire = 0.1;
		audibleFire = 0.02;
		caliber = 0.30000;
		legFracture = 0;
		deflecting = 0;
		explosionEffects = "";
		craterEffects = "";		
		model = "\A3\Weapons_F\empty.p3d";		
		class Melee
		{
			damageHit = 0.30;
			damageBlood = 2850;
			anim = "GestureSwing2";
			radius = 2.5;
			angle = 70;
			sounds[] = 
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.384893, 1, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.284893, 1.1, 30}
			};
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 45;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 60;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Hammer_Swing_Ammo2 : Melee 
	{	
		hit = 15;
		typicalSpeed = 85;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.02;
		caliber = 0.30000;
		legFracture = true;
		explosionEffects = "";
		craterEffects = "";		
		model = "\A3\Weapons_F\empty.p3d";		
		class Melee 
		{
			damageHit = 1; // Hit Damage (Zombies)
			damageBlood = 5000; // Blood Damage (Players)
			anim = "GestureSwing2";
			radius = 2.7; //Radius In Meters Of Targets
			angle = 65; //Angle Of Hit Detection
			sounds[] = 
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.384893, 1, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.284893, 1.1, 30}
			};
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 85;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_Rifle_Melee : BP_Stab 
	{	
		hit = 4;
		explosive = "false";
		simulation = "shotShell";
		timeToLive = 0.025;
		class Melee 
		{
			damageHit = 0.5; // Hit Damage (Zombies)
			damageBlood = 1000; // Blood Damage (Players)
			anim = "GestureMelee";
			radius = 2.0; //Radius In Meters Of Targets
			angle = 35; //Angle Of Hit Detection
			sounds[] = 
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.084893, 1, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 30},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 0.884893, 1.1, 30}
			};
		};	
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 30;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};	
	class BP_Bayonet : BP_Stab 
	{
		hit = 6;
		explosive = "false";
		simulation = "shotShell";
		timeToLive = 0.03;
		class Melee 
		{
			damageHit = 0.6; // Hit Damage (Zombies)
			damageBlood = 2000; // Blood Damage (Players)
			anim = "GestureStab";
			radius = 2.0; //Radius In Meters Of Targets
			angle = 35; //Angle Of Hit Detection
			sounds[] = 
			{
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.284893, 1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.184893, 1.1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.584893, 0.8, 10}
			};
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 60;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	class BP_762x51_Ball: B_762x51_Ball  
	{
	    hit = 20.99;
		typicalSpeed = 833;
		simulationStep = 0.09;
		caliber = 1.5700000;
		airFriction = -0.000790;
		audibleFire = 25;
		visibleFire = 30;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 150};		
		class CamShakeHit 
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 60;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
    };
	
	class BP_762OVP_Ball: B_762x51_Ball  
	{
	    hit = 22.09;
		typicalSpeed = 893;
		caliber = 1.7700000;
		airFriction = -0.000790;
		audibleFire = 25;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 150};		
		class CamShakeHit 
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 70;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
    };
	
    class BP_762x51_M80A1: B_762x51_Ball 
	{
	    hit = 22.80;
		typicalSpeed = 847;
		simulationStep = 0.12;
		airFriction = -0.000733;	
		caliber = 2.1500000;
		audibleFire = 28;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.191838, 1, 180};		
		class CamShakeFire 
		{
			power = 1;
			duration = 0.300000;
			frequency = 20;
			distance = 5;
		};
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_762x51_AI: B_762x51_Ball  
	{
	    hit = 40.60;
		typicalSpeed = 1533;
		simulationStep = 0.95;
		airFriction = -0.000070;	
		caliber = 5.1500000;
		audibleFire = 0;
		visibleFire = 0;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.691838, 1, 180};		
		class CamShakeFire 
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakeHit 
		{
			power = 15;
			duration = 2;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 0;
			MedicalChance = 0;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_50Cal_AI: B_762x51_Ball  {
	    hit = 90.60;
		typicalSpeed = 1533;
		simulationStep = 0.95;
		airFriction = -0.000070;	
		caliber = 7.1500000;
		audibleFire = 0;
		visibleFire = 0;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.691838, 1, 180};		
		class CamShakeFire 
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakeHit 
		{
			power = 15;
			duration = 2;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 0;
			MedicalChance = 0;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_762OVP_M80A1: B_762x51_Ball  
	{
	    hit = 23.60;
		typicalSpeed = 920;
		airFriction = -0.000770;	
		caliber = 2.2500000;
		audibleFire = 28;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.191838, 1, 180};		
		class CamShakeFire 
		{
			power = 1;
			duration = 0.300000;
			frequency = 20;
			distance = 5;
		};
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_762x51_Mk316Mod0: B_762x51_Ball  
	{
	    hit = 21.10;
		typicalSpeed = 790;
		simulationStep = 0.12;
		airFriction = -0.000600;	
		caliber = 1.6700000;
		audibleFire = 25;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 170};		
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_762OVP_Mk316Mod0: B_762x51_Ball  
	{
	    hit = 22.10;
		typicalSpeed = 815;
		simulationStep = 0.12;
		airFriction = -0.000703;	
		caliber = 1.6700000;
		audibleFire = 25;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 170};		
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_556x45_Ball: B_556x45_Ball //LEFT OFF HERE
	{ 
		hit = 12.87;
		typicalSpeed = 940;
		indirectHit = 0;
		indirectHitRange = 0;
		simulationStep = 0.10;
		airFriction = -0.001670;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1.5;
		audibleFire = 17;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_556OVP_Ball: B_556x45_Ball 
	{
		hit = 13.87;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 985;
		airFriction = -0.00167;
		caliber = 0.700000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		audibleFire = 20;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_556x45old_Ball: B_556x45_Ball 
	{
		hit = 10.87;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 820;
		airFriction = -0.001970;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		audibleFire = 20;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_556x45_BallMk262: B_556x45_Ball 
	{
		hit = 17.95;
		indirectHit = 0;
		typicalSpeed = 886;
		indirectHitRange = 0;
		simulationStep = 0.13;
		airFriction = -0.000982;
		caliber = 0.900000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		legFracture = true;
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		audibleFire = 19;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 60;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_556OVP_Mk262: B_556x45_Ball 
	{
		hit = 18.95;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 910;
		airFriction = -0.000982;
		caliber = 0.900000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		legFracture = true;
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		audibleFire = 20;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_556x45_BallM855A1: B_556x45_Ball 
	{
		hit = 18.00;
		airFriction = -0.000982;
		simulationStep = 0.11;
		caliber = 1.350000;
		typicalSpeed = 970;
		audibleFire = 22;
		visibleFire = 10;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.181838, 1, 175};
		
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 60;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
    };
	
	class BP_556x45_OVPM855A1: B_556x45_Ball 
	{
		hit = 19.87;
		airFriction = -0.000982;
		caliber = 1.370000;
		typicalSpeed = 960;
		audibleFire = 27;
		visibleFire = 10;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.181838, 1, 175};
		
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 70;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
    };
	
	class BP_556x45_Ball_SD: B_556x45_Ball 
	{
		hit = 16.75;
		audibleFire = 2.50000;
		visibleFire = 10;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 1;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 45;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_NonLethal: B_556x45_Ball 
	{ 
	    hit = 1.50;
		typicalSpeed = 680;
		airFriction = -0.003100;
		audibleFire = 1;
		visibleFire = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
	};
	
	class BP_Arrow_Ball_Tranq: BP_NonLethal
	{
		hit = 2;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		typicalSpeed = 325;
		airFriction = -0.000467;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 1;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;		
		class CamShakeHit 
		{
			power = 10;
			duration = 2;
			frequency = 20;
		};		
			class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 15;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
		
	};
	
	class BP_762x51_Ball_Rubber: BP_NonLethal 
	{
		hit = 1.90;
		typicalSpeed = 650;
		simulationStep = 0.09;
		audibleFire = 5.00000;
		visibleFire = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.100000;
		airFriction = -0.001700;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 150};		
		class CamShakeHit 
		{
			power = 10;
			duration = 2;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 1;
			MedicalChance = 60;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 15;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_556x45_Ball_Rubber: BP_NonLethal 
	{
		hit = 1.25;
		audibleFire = 10.50000;
		visibleFire = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.100000;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};		
		class CamShakeHit 
		{
			power = 10;
			duration = 2;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 1;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 15;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_545x39_Ball: B_556x45_Ball 
	{
		hit = 10.90;
		cartridge = "FxCartridge_65";
		audibleFire = 14;
		visibleFire = 10;
		typicalSpeed = 880;
		simulationStep = 0.09;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.000000;
		tracerStartTime = 0.114000;//100m delay
		tracerEndTime = 1.7;
		airFriction = -0.001478;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.20000, 1, 30};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.000, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 45;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_545OVP_Ball: B_556x45_Ball 
	{
		hit = 11.90;
		cartridge = "FxCartridge_65";
		audibleFire = 14;
		visibleFire = 10;
		typicalSpeed = 920;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.000000;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		airFriction = -0.001453;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.20000, 1, 30};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.000, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 65;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	class BP_545x39_HP: B_556x45_Ball
	{
		hit = 12.75;
		cartridge = "FxCartridge_65";
		audibleFire = 14;
		visibleFire = 10;
		typicalSpeed = 895;
		simulationStep = 0.09;
		caliber = 0.2;//low value to simulate HP poor penetration
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.125;
		tracerEndTime = 1;
		airFriction = -0.001687;//worse airfriction because HP, not JHP
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_545x39_Ball",0.2,1,30};//bekfix custom, perhaps unnecessary
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_545x39_Ball_far",1,1,150};
		class Medical
		{
			InstantBleeding = 1;
			MedicalState = 3;
			MedicalChance = 70;//bekfix inc this or lower 556
			BleedingLevel = 3;
			BleedingChance = 93;
			Infection = 0;
			InfectionChance = 0.5;
			Knockout = 0;
			KnockoutChance = 0.2;
			scale = 0;
		};
	};
	class BP_545x39_7N22: B_556x45_Ball
	{
		hit = 16.75;
		cartridge = "FxCartridge_65";
		audibleFire = 14;
		visibleFire = 10;
		typicalSpeed = 890;
		simulationStep = 0.09;
		caliber = 1.34;//high value for AP round
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.125;
		tracerEndTime = 1;
		airFriction = -0.001435;//slightly better airfriction from boat-tail
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_545x39_Ball",0.2,1,30};//bekfix custom, perhaps unnecessary
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_545x39_Ball_far",1,1,150};
		class Medical
		{
			InstantBleeding = 1;
			MedicalState = 3;
			MedicalChance = 70;
			BleedingLevel = 3;
			BleedingChance = 60;
			Infection = 0;
			InfectionChance = 0.5;
			Knockout = 0;
			KnockoutChance = 0.2;
			scale = 0;
		};
	};
	
	class BP_762x39_Ball: BulletBase 
	{
		hit = 17.00;
		indirectHit = 0;
		indirectHitRange = 0;
		simulationStep = 0.09;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 26;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 719;
		caliber = 0.8500;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.00160;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 25;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 35;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 1;
			duration = 0.200000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit 
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_762x39OVP_Ball: BulletBase 
	{
		hit = 18.00;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 30;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 760;
		caliber = 0.9500;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.00160;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 65;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 1;
			duration = 0.200000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit 
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_762x54_Ball: BulletBase 
	{
		hit = 21.50;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 35;
		simulationStep = 0.09;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 828;
		caliber = 1.6;
		legFracture = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.000760;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 55;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 48;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_762x54_7N1: BulletBase 
	{
		hit = 18.25;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 35;
		simulationStep = 0.09;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 865;//faster, lighter bullet
		caliber = 1.6;
		legFracture = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.000590;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 55;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 49;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};

		class CamShakeHit {
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_762x54_7N13: BulletBase 
	{
		hit = 23.78;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 38;
		simulationStep = 0.09;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 828;
		caliber = 2.29;//ap round
		legFracture = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.000760;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 62;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 55;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};

		class CamShakeHit {
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_762x54_OVPBall: BulletBase 
	{
		hit = 22.34;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 35;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 895;
		caliber = 1.7;
		legFracture = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.00083;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};

    class BP_93x64_Ball: BulletBase 
	{
		hit = 26;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 55;
		simulationStep = 0.10;
		visibleFireTime = 3;
		typicalSpeed = 719;
		caliber = 1.970000;
		legFracture = true;
		airFriction = -0.000925;
		muzzleEffect = "BIS_Effects_HeavySniper";
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 2;
			duration = 0.500000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_93x64_OVPBall: BulletBase 
	{
		hit = 27.5;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 55;
		visibleFireTime = 3;
		typicalSpeed = 785;
		caliber = 2.170000;
		legFracture = true;
		airFriction = -0.000925;
		muzzleEffect = "BIS_Effects_HeavySniper";
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 95;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 4;
			duration = 0.500000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_9x19_SD: B_9x21_Ball  
	{
	    hit = 8.90;
		audibleFire = 2.050000;
		visibleFire = 10;
		simulationStep = 0.09;
		airFriction = -0.000767;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 25;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_9x19_Rubber: BP_NonLethal   
	{
		hit = 1.90;
		audibleFire = 4.050000;
		visibleFire = 10;
		simulationStep = 0.09;
		indirectHit = 0;
		indirectHitRange = 0;
		airFriction = -0.002767;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};		
		class CamShakeHit {
			power = 7;
			duration = 2;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 1;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_65x39_Grendel: B_65x39_Caseless   
	{
	    hit = 14.75;
		typicalSpeed = 786;
		simulationStep = 0.115;
		audibleFire = 22;
		visibleFire = 10;
		airFriction = -0.000783;
		caliber = 0.800000;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.101838, 1, 150};		
		class CamShakeHit 
		{
			power = 4;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 40;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_65x47_Lapua: B_65x39_Caseless   
	{
	    hit = 19.55;
		typicalSpeed = 880;
		simulationStep = 0.13;
		audibleFire = 30;
		visibleFire = 10;
		airFriction = -0.000767;
		caliber = 1.370000;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.224813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.181838, 1, 175};		
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_65x39_SD: B_65x39_Caseless   
	{
	    hit = 11.50;
		typicalSpeed = 335;
		simulationStep = 0.09;
		audibleFire = 1.60000;
		visibleFire = 10;
		airFriction = -0.000467;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};		
		class CamShakeHit 
		{
			power = 2;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 1;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
	};
	
	class BP_338_Lapua: B_408_Ball  
	{
	    hit = 52;
		cartridge = "FxCartridge_127";
		typicalSpeed = 883;
		simulationStep = 0.12;
		indirectHit = 20;
		indirectHitRange = 0.500000;
		audibleFire = 45;
		visibleFire = 10;
		airFriction = -0.00056;
		caliber = 2.700000;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.424813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.481838, 1, 175};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 10;
			duration = 0.500000;
			frequency = 20;
			distance = 20;
		};
		class CamShakeHit 
		{
			power = 25;
			duration = 1;
			frequency = 20;
		};
    };
	
	class BP_338_LapuaOVP: B_408_Ball  
	{
	    hit = 55;
		cartridge = "FxCartridge_127";
		typicalSpeed = 995;
		indirectHit = 15;
		simulationStep = 0.09;
		indirectHitRange = 0.400000;
		audibleFire = 47;
		visibleFire = 10;
		airFriction = -0.00056;
		caliber = 3.200000;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.524813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.581838, 1, 175};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 12;
			duration = 0.500000;
			frequency = 20;
			distance = 30;
		};
		class CamShakeHit 
		{
			power = 25;
			duration = 1;
			frequency = 20;
		};
    };
	
	class BP_300_WinMag: B_762x51_Ball  
	{
	    hit = 25.65;
		typicalSpeed = 874;
		indirectHit = 0;
		indirectHitRange = 0.000000;
		simulationStep = 0.09;
		audibleFire = 32;
		visibleFire = 10;
		airFriction = -0.000800;
		caliber = 2.150000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.081838, 1, 180};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.4; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit 
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_792x57_Mauser: B_762x51_Ball  
	{
	    hit = 25.75;
		typicalSpeed = 841;
		indirectHit = 0;
		indirectHitRange = 0.000000;
		simulationStep = 0.09;
		audibleFire = 35;
		visibleFire = 10;
		airFriction = -0.000808;
		caliber = 2.150000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.081838, 1, 180};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.4; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit 
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_300M_WinMag: B_408_Ball  
	{
	    hit = 27.75;
		cartridge = "FxCartridge_127";
		typicalSpeed = 993;
		simulationStep = 0.12;
		indirectHit = 0;
		indirectHitRange = 0.000000;
		audibleFire = 35;
		visibleFire = 10;
		airFriction = -0.000815;
		caliber = 2.350000;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.191838, 1, 200};	
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.9; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.9; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit 
		{
			power = 12;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_300AAC_Ball: B_762x51_Ball  
	{
	    hit = 17.00;
		typicalSpeed = 723;
		simulationStep = 0.09;
		indirectHit = 0;
		indirectHitRange = 0;
		audibleFire = 12;
		visibleFire = 10;
		airFriction = -0.001462;
		caliber = 0.850000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.081838, 1, 180};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.4; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_300AAC_OVPBall: B_762x51_Ball  
	{
	    hit = 18.20;
		typicalSpeed = 767;
		simulationStep = 0.09;
		indirectHit = 0;
		indirectHitRange = 0;
		audibleFire = 12;
		visibleFire = 10;
		airFriction = -0.001462;
		caliber = 0.850000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.081838, 1, 180};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.4; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_223_Ball: B_408_Ball  
	{
	    hit = 14.15;
		cartridge = "FxCartridge_762";
		typicalSpeed = 1056;
		simulationStep = 0.10;
		audibleFire = 15;
		visibleFire = 10;
		airFriction = -0.001294;
		caliber = 0.70000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};		
		class CamShakeHit 
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 55;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_223OVP_Ball: B_408_Ball  
	{
	    hit = 15.95;
		cartridge = "FxCartridge_762";
		typicalSpeed = 980;
		simulationStep = 0.10;
		audibleFire = 17;
		visibleFire = 10;
		airFriction = -0.001294;
		caliber = 0.80000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};		
		class CamShakeHit 
		{
			power = 4;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 55;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_223BTHP_Ball: B_408_Ball  
	{
	    hit = 14.85;
		cartridge = "FxCartridge_762";
		typicalSpeed = 893;
		simulationStep = 0.13;
		audibleFire = 20;
		visibleFire = 10;
		airFriction = -0.000985;
		caliber = 0.90000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};		
		class CamShakeHit 
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 95;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_223BTHP_OVPBall: B_408_Ball  
	{
	    hit = 15.95;
		cartridge = "FxCartridge_762";
		typicalSpeed = 950;
		simulationStep = 0.13;
		audibleFire = 20;
		visibleFire = 10;
		airFriction = -0.000985;
		caliber = 0.60000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};		
		class CamShakeHit 
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 95;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_250_Ball: B_408_Ball  
	{
	    hit = 17.15;
		cartridge = "FxCartridge_762";
		typicalSpeed = 1219;
		simulationStep = 0.14;
		audibleFire = 20;
		visibleFire = 10;
		airFriction = -0.001505;
		caliber = 0.70000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};		
		class CamShakeHit 
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 55;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_250OVP_Ball: B_408_Ball  
	{
	    hit = 18.35;
		cartridge = "FxCartridge_762";
		typicalSpeed = 1268;
		simulationStep = 0.15;
		audibleFire = 20;
		visibleFire = 10;
		airFriction = -0.001505;
		caliber = 0.70000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};		
		class CamShakeHit 
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 55;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_3006_Spring: B_408_Ball  
	{
	    hit = 21.25;
		cartridge = "FxCartridge_762";
		typicalSpeed = 902;
		simulationStep = 0.09;
		audibleFire = 27;
		visibleFire = 10;
		airFriction = -0.000855;
		caliber = 1.270000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};		
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 75;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_3006M_Spring: B_408_Ball  
	{
	    hit = 24.25;
		cartridge = "FxCartridge_762";
		typicalSpeed = 938;
		simulationStep = 0.11;
		audibleFire = 26;
		visibleFire = 10;
		airFriction = -0.000908;
		caliber = 1.700000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 1.181838, 1, 175};		
		class CamShakeHit 
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.4; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_303B_Ball: B_762x51_Ball  
	{
	    hit = 19.55;
		typicalSpeed = 818;
		caliber = 1.2700000;
		simulationStep = 0.09;
		airFriction = -0.001132;
		visibleFire = 10;
		audibleFire = 30;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 1.101838, 1, 150};		
		class CamShakeHit 
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
    };
	
	class BP_303B_JSP: B_762x51_Ball
	{
		hit = 21.6;
		typicalSpeed = 844;
		caliber = 1.09;//bekfix lowered because SoftPoint
		simulationStep = 0.09;
		airFriction = -0.001132;
		visibleFire = 10;
		audibleFire = 30;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball",0.214813,1,50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far",1.101838,1,150};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			InstantBleeding = 1;
			MedicalState = 2;
			MedicalChance = 93;
			BleedingLevel = 3;
			BleedingChance = 96;
			Infection = 0;
			InfectionChance = 0.5;
			Knockout = 0;
			KnockoutChance = 0.2;
			scale = 0;
		};
	};
	
	class BP_22LR_Ball: B_9x21_Ball   
	{
	    hit = 9.65;
		typicalSpeed = 520;
		simulationStep = 0.09;
		audibleFire = 2;
		visibleFire = 10;
		airFriction = -0.001832;
		supersonicCrackNear[] = {""};
		supersonicCrackFar[] = {""};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 40;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 25;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_408Chey_Ball: B_408_Ball   
	{
	    hit = 59;
		typicalSpeed = 908;
		airFriction = -0.000448;
		//explosive = 1;
		//explosionTime = 0.00001;
		caliber = 3.300000;
		simulationStep = 0.14;
		audibleFire = 60;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_127x108_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_127x108_Ball_far", 1.181838, 1, 200};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 5;
			duration = 0.600000;
			frequency = 20;
			distance = 30;
		};
		class CamShakeHit 
		{
			power = 55;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_127x108_APDS: B_127x108_Ball 
	{
		hit = 80;
		caliber = 3.600000;
		simulationStep = 0.12;
		typicalSpeed = 820;
		airFriction = -0.000450;
		audibleFire = 60;
		visibleFire = 10;
		indirectHit = 40;
		indirectHitRange = 0.810000;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_127x108_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_127x108_Ball_far", 1.281838, 1, 200};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 35;
			duration = 0.400000;
			frequency = 20;
			distance = 30;
		};		
		class CamShakePlayerFire 
		{
			power = 50;
			duration = 0.400000;
			frequency = 20;
		};
		class CamShakeHit 
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_127x99_Ball: BulletBase 
	{
		hit = 85;
		typicalSpeed = 815;
		simulationStep = 0.12;
		indirectHit = 30;
		indirectHitRange = 0.300000;
		cartridge = "FxCartridge_127";
		visibleFire = 48;
		audibleFire = 70;
		visibleFireTime = 3;
		cost = 20;
		airFriction = -0.000611;
		caliber = 4.200000;
		model = "\A3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.200000;
		tracerStartTime = 0.065000;
		tracerEndTime = 1;
		nvgOnly = 1;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakePlayerFire 
		{
			power = 30;
			duration = 0.300000;
			frequency = 20;
		};		
		class CamShakeFire 
		{
			power = 15;
			duration = 0.300000;
			frequency = 20;
			distance = 30;
		};
		class CamShakeHit 
		{
			power = 50;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_127x99_PEI: BP_127x99_Ball 
	{
		hit = 130;
		indirectHit = 50;
		indirectHitRange = 1.000000;
		simulationStep = 0.12;
		cost = 20;
		typicalSpeed = 815;
		explosive = 0.050000;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		caliber = 5.5;
		model = "\A3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.200000;
		tracerStartTime = 0.065000;
		tracerEndTime = 3.500000;
		nvgOnly = 1;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakePlayerFire 
		{
			power = 55;
			duration = 0.500000;
			frequency = 20;
		};		
		class CamShakeFire 
		{
			power = 15;
			duration = 0.500000;
			frequency = 20;
			distance = 30;
		};
		class CamShakeHit 
		{
			power = 75;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_9x19_Ball: B_9x21_Ball   
	{
	    hit = 9.45;
		typicalSpeed = 390;
		simulationStep = 0.09;
		audibleFire = 10;
		visibleFire = 10;
		airFriction = -0.001900;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.024813, 1, 20};
		supersonicCrackFar[] = {/*"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.081838, 1, 100*/};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 35;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_9x21_Ball: B_9x21_Ball 
	{
		hit = 9.47;
		typicalSpeed = 320;
		audibleFire = 12;
		visibleFire = 10;
		simulationStep = 0.09;
		caliber = 0.4;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.054813, 1, 20};
		supersonicCrackFar[] = {/*"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.081838, 1, 100*/};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 35;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_9x18_Ball: B_9x21_Ball   
	{
	    hit = 9.35;
		typicalSpeed = 319;
		audibleFire = 8.00000;
		visibleFire = 10;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.114813, 1, 20};
		supersonicCrackFar[] = {/*"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.021838, 1, 100*/};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 30;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 25;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_9x19OVP_Ball: B_9x21_Ball   
	{
	    hit = 9.80;
		typicalSpeed = 335;
		caliber = 0.3;
		audibleFire = 15;
		visibleFire = 10;
		legFracture = true;
		simulationStep = 0.10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.104813, 1, 20};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.081838, 1, 100};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 80;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_765x17_Ball: B_9x21_Ball   
	{
	    hit = 9.60;
		typicalSpeed = 310;
		caliber = 0.55;
		audibleFire = 10;
		visibleFire = 10;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.104813, 1, 20};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.081838, 1, 100};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 2;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_45ACP: B_45ACP_Ball 
	{ 
	    hit = 13.95;
		typicalSpeed = 280;
		audibleFire = 18;
		visibleFire = 10;
		simulationStep = 0.09;
		supersonicCrackNear[] = {/*"\breakingpoint_jsrs\sounds\B_45ACP_Ball", 0.124813, 1, 30*/};
		supersonicCrackFar[] = {/*"\breakingpoint_jsrs\sounds\B_45ACP_Ball_far", 1.081838, 1, 75*/};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 50;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.5; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_45GOV: B_45ACP_Ball 
	{ 
	    hit = 22.65;
		typicalSpeed = 617;
		audibleFire = 23;
		visibleFire = 10;
		airFriction = -0.001918;
		legFracture = true;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_45ACP_Ball", 0.124813, 1, 30};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_45ACP_Ball_far", 1.081838, 1, 75};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.5; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeHit 
		{
			power = 20;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_45JHP: B_45ACP_Ball 
	{ 
	    hit = 18;
		typicalSpeed = 330;
		airFriction = -0.002000;
		audibleFire = 12;
		visibleFire = 10;
		legFracture = true;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_45ACP_Ball", 0.124813, 1, 30};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_45ACP_Ball_far", 1.081838, 1, 75};		
		class CamShakeHit 
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 90;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_45Rubber: BP_NonLethal 
	{ 		
		class CamShakeHit 
		{
			power = 20;
			duration = 3;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 97;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 1;
			BleedingChance = 25;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_357mag_ball: B_45ACP_Ball 
	{
		hit = 14.100000;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 450;
		airFriction = -0.001500;
		audibleFire = 25.00000;
		visibleFire = 10;
		simulationStep = 0.09;
		caliber = 0.300000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.274813, 1, 40};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.101838, 1, 150};		
		class CamShakeHit 
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 3;
			MedicalChance = 30;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 2;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_500Mag_ball : Bulletbase 
	{
		hit = 22.85;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 600;
		airFriction = -0.0011;
		caliber = 1.200000;
		audibleFire = 35.00000;
		visibleFire = 10;
		legFracture = true;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.274813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.201838, 1, 150};		
		class CamShakeHit 
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};
	
	class BP_44Mag_ball : Bulletbase 
	{
		hit = 19.00;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 460;
		indirectHit = 8;
		indirectHitRange = 0.200000;
		airFriction = -0.001900;
		caliber = 0.620000;
		simulationStep = 0.09;
		visibleFire = 18.00000;
		audibleFire = 35.00000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.274813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.201838, 1, 225};	
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 4;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};		
		class CamShakeFire 
		{
			power = 3;
			duration = 0.500000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit 
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_12Gauge_Slug: BulletBase 
	{
		hit = 23;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		typicalSpeed = 609;
		visibleFire = 10;
		audibleFire = 27;
		airFriction = -0.00215;
		caliber = 1.0;
		deflecting = 30;
		simulation = "shotShell";
		model = "";
		explosive = "false";
		legFracture = true;
		simulationStep = 0.09;
		muzzleEffect = "";
		effectsMissile = "";		
		class CamShakeHit 
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_12Gauge_Buck: BulletBase 
	{
		hit = 9.50;
		//indirectHit = 4;
		//indirectHitRange = 0.400000;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 365;
		visibleFire = 4;
		audibleFire = 25;
		airFriction = -0.003000;
		caliber = 0.3;
		deflecting = 60;
		simulation = "shotSpread";
		model = "";
		explosive = "false";
		simulationStep = 0.09;
		muzzleEffect = "";
		effectsMissile = "";
		class CamShakeHit 
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_12Gauge_Buck2: BulletBase 
	{
		hit = 9.90;
		//indirectHit = 4;
		//indirectHitRange = 0.400000;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 440;
		visibleFire = 4;
		audibleFire = 27;
		airFriction = -0.002000;
		caliber = 0.6;
		deflecting = 60;
		simulation = "shotSpread";
		model = "";
		explosive = "false";
		legFracture = true;
		simulationStep = 0.09;
		muzzleEffect = "";
		effectsMissile = "";		
		class CamShakeFire 
		{
			power = 6;
			duration = 0.500000;
			frequency = 20;
			distance = 1;
		};
		class CamShakeHit 
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};
	
	class BP_40mm_HE: GrenadeBase 
	{
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.162278, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.162278, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.162278, 1, 2000};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.162278, 1, 2000};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.162278, 1, 2000};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.162278, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.200000, "soundHit2", 0.200000, "soundHit3", 0.200000, "soundHit4", 0.100000, "soundHit5", 0.150000, "soundHit6", 0.150000};
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model = "\A3\weapons_f\ammo\UGL_slug";
		hit = 37;
		indirectHit = 12;
		indirectHitRange = 5;
		visibleFire = 1;
		audibleFire = 3;
		visibleFireTime = 3;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001000;
		fuseDistance = 15;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 2;
		class CamShakeExplode 
		{
			power = "(40*0.2)";
			duration = "((round (40^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((3 + 40^0.5)*8)";
		};
		class CamShakeHit 
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire 
		{
			power = "(0^0.25)";
			duration = "((round (0^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((0^0.5)*8)";
		};
		class CamShakePlayerFire 
		{
			power = 0;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};
	
	class BP_40mm_White: FlareBase 
	{
		hit = 10;
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.500000, 0.500000, 0.500000, 0.500000};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 0.500000};
		effectFlare = "CounterMeasureFlare";
		brightness = 12;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	
	class BP_40mm_Green: BP_40mm_White 
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.250000, 0.500000, 0.250000, 0};
	};
	
	class BP_40mm_Red: BP_40mm_White 
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.500000, 0.250000, 0.250000, 0};
	};
	
	class BP_IED: MineBase 
	{
		hit = 50;
		indirectHit = 20;
		indirectHitRange = 20;
		audibleFire = 50;
		model = "\A3\Weapons_F\explosives\IED_urban_small.p3d";
		modelModelDisabled = "\A3\Weapons_F\explosives\IED_urban_small.p3d";
		icon = "iconExplosiveAP";
		defaultMagazine = "BP_IED1_Mag";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_1", 3.162278, 1, 1500};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.862341, 1, 50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.862341, 1, 50};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 20;
		mineTrigger = "RemoteTrigger";		
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 5 - Surgery Kit
			MedicalState = 5;
			MedicalChance = 70;
			
			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 75bps / 3 - 100bps
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0.1 -> 1.0

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0.1 -> 1.0

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Signal_Green: FlareBase 
	{
		hit = 2;
		model = "\A3\Weapons_F_Kart\Ammo\tracer_green.p3d";
		lightColor[] = {0.250000, 0.500000, 0.250000, 0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 0.500000};
		effectFlare = "CounterMeasureFlare";
		brightness = 12;
		size = 3;
		triggerTime = 0.600000;
		triggerSpeedCoef = 1;
		timeToLive = 15;
		dayLight = 1;
	};

	class BP_Signal_Red: BP_Signal_Green 
	{
		model = "\A3\Weapons_F_Kart\Ammo\tracer_red.p3d";
		lightColor[] = {0.500000, 0.250000, 0.250000, 0};
	};
};

class CfgMineTriggers 
{
	/*extern*/ class RangeTrigger;

	class BP_ShortTrigger: RangeTrigger 
	{
		mineTriggerRange = 5;
		mineTriggerActivationRange = 10;
	};
};