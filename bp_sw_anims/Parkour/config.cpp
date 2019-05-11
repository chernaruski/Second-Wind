class CfgPatches
{
	class BaBe_EM_Anims
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Anims_F"
		};
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class StandBase;
	class States
	{
		class Babe_em_anim_base: StandBase
		{
			actions="RifleStandActions";
			adjstance="m";
			aiming="Empty";
			aimingBody="Empty";
			aimPrecision=1;
			boundingSphere=1;
			camShakeFire=1;
			canBlendStep=0;
			canPullTrigger=1;
			canReload=1;
			collisionShape="A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			collisionShapeSafe="";
			connectAs="";
			connectFrom[]={};
			ConnectTo[]={};
			disableWeapons=0;
			disableWeaponsLong=0;
			duty=1;
			enableAutoActions=0;
			enableBinocular=1;
			enableDirectControl=1;
			enableMissile=0;
			enableOptics=1;
			equivalentTo="";
			file="\A3\anims_f\Data\Anim\Sdr\ovr\erc\stp\ras\rfl\AovrPercMstpSrasWrflDf";
			forceAim=1;
			GetOutPara="";
			hasCollShapeSafe=0;
			head="headDefault";
			headBobMode=2;
			headBobStrength=-0.5;
			idle="idleDefault";
			ignoreMinPlayTime[]=
			{
				"Unconscious"
			};
			interpolateFrom[]={};
			InterpolateTo[]={};
			interpolateWith[]={};
			interpolationrestart=1;
			interpolationspeed=200;
			leaning="Empty";
			leaningFactorBeg=1;
			leaningFactorEnd=1;
			leaningFactorZeroPoint=-1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			legs="Empty";
			limitGunMovement=1;
			looped=0;
			minPlayTime=0.69;
			onLadder=0;
			onLandBeg=0;
			onLandEnd=0;
			preload=0;
			ragdoll=0;
			relSpeedMax=1;
			relSpeedMin=0.5;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			showHandGun=0;
			showItemInHand=0;
			showItemInRightHand=0;
			showWeaponAim=1;
			soundEdge[]={0.40000001,0.75,0.89999998};
			soundOverride="crawl";
			soundEnabled=1;
			speed=0.60000002;
			static=1;
			terminal=0;
			useIdles=1;
			variantAfter[]={30,30,30};
			variantsAI[]={};
			variantsPlayer[]={};
			visibleSize=0.70012099;
			Walkcycles=1;
			weaponIK=1;
			weaponLowered=0;
		};
		class Babe_anim_base_rfl: Babe_em_anim_base
		{
			weaponIK=0;
			disableWeapons=1;
			leftHandIKCurve[]={0,0,0.5,1};
			rightHandIKCurve[]={1,1,0.5,1};
			connectTo[]={};
			connectFrom[]={};
			InterpolateTo[]=
			{
				"amovpercmstpsraswrfldnon",
				0.02,
				"amovpercmrunsraswrfldf",
				0.02,
				"amovpercmevasraswrfldf",
				0.02,
				"amovpercmtacsraswrfldf",
				0.02,
				"amovpercmwlksraswrfldf",
				0.02,
				"asswpercmstpsnonwnondnon",
				0.2
			};
			interpolatefrom[]=
			{
				"amovpercmstpsraswrfldnon",
				0.02,
				"amovpercmrunsraswrfldf",
				0.02,
				"amovpercmevasraswrfldf",
				0.02,
				"amovpercmtacsraswrfldf",
				0.02,
				"amovpercmwlksraswrfldf",
				0.02,
				"asswpercmstpsnonwnondnon",
				0.2
			};
		};
		class Babe_anim_base_pst: Babe_em_anim_base
		{
			actions="PistolStandActions";
			weaponIK=0;
			disableWeapons=1;
			forceAim=1;
			showHandGun=1;
			leftHandIKCurve[]={0,0,0.5,1};
			rightHandIKCurve[]={1,1,0.5,1};
			connectTo[]={};
			connectFrom[]={};
			InterpolateTo[]=
			{
				"amovpercmstpsraswpstdnon",
				0.02,
				"amovpercmrunsraswpstdf",
				0.02,
				"amovpercmevasraswpstdf",
				0.02,
				"amovpercmtacsraswpstdf",
				0.02,
				"amovpercmwlksraswpstdf",
				0.02,
				"asswpercmstpsnonwnondnon",
				0.2
			};
			interpolatefrom[]=
			{
				"amovpercmstpsraswpstdnon",
				0.02,
				"amovpercmrunsraswpstdf",
				0.02,
				"amovpercmevasraswpstdf",
				0.02,
				"amovpercmtacsraswpstdf",
				0.02,
				"amovpercmwlksraswpstdf",
				0.02,
				"asswpercmstpsnonwnondnon",
				0.2
			};
		};
		class Babe_anim_base_ua: Babe_em_anim_base
		{
			actions="CivilStandActions";
			weaponIK=0;
			disableWeapons=1;
			showHandGun=0;
			leftHandIKCurve[]={0,0,0.5,1};
			rightHandIKCurve[]={1,1,0.5,1};
			connectTo[]={};
			connectFrom[]={};
			InterpolateTo[]=
			{
				"amovpercmstpsnonwnondnon",
				0.2,
				"amovpercmrunsnonwnondf",
				0.2,
				"amovpercmevasnonwnondf",
				0.2,
				"amovpercmwlksnonwnondf",
				0.2,
				"asswpercmstpsnonwnondnon",
				0.2
			};
			interpolatefrom[]=
			{
				"amovpercmstpsnonwnondnon",
				0.2,
				"amovpercmrunsnonwnondf",
				0.2,
				"amovpercmevasnonwnondf",
				0.2,
				"amovpercmwlksnonwnondf",
				0.2,
				"asswpercmstpsnonwnondnon",
				0.2
			};
		};
		class Babe_climbOverHer_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\climbOverHer_rfl.rtm";
			speed=0.34999999;
		};
		class Babe_climbOverHer_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\climbOverHer_pst.rtm";
			speed=0.34999999;
		};
		class Babe_climbOverHer_ua: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\climbOverH.rtm";
			speed=0.2;  //0.1657
		};
		class Babe_climbOverH_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\climbOverH_rfl.rtm";
			speed=0.55000001;
		};
		class Babe_climbOverH_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\climbOverH_pst.rtm";
			speed=0.55000001;
		};
		class Babe_climbOverH_ua: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\climbOverM.rtm";
			speed=0.3529; //0.3529
		};
		class Babe_climbOver_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\climbOver_rfl.rtm";
			speed=0.85000002;
		};
		class Babe_climbOver_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\climbOver_pst.rtm";
			speed=0.85000002;
		};
		class Babe_climbOver_ua: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\climbOverL.rtm";
			speed=0.65000002;
		};
		class Babe_climbOnHer_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\climbOnHer_rfl.rtm";
			speed=0.35
		};
		class Babe_climbOnHer_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\climbOnHer_pst.rtm";
			speed=0.35;
		};
		class Babe_climbOnHer_ua: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\climbOnH.rtm";
			speed=0.3; //0.2654 - base
		};
		class Babe_climbOnH_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\climbOnH_rfl.rtm";
			speed=0.55000001;
		};
		class Babe_climbOnH_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\climbOnH_pst.rtm";
			speed=0.55000001;
		};
		class Babe_climbOnH_ua: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\climbOnM.rtm";
			speed=0.55000001;
		};
		class Babe_climbOn_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\climbOn_pst.rtm";
			speed=1.05;
		};
		class ClimbOnLow: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\climbOnL.rtm";
			speed=0.65; //speed 0.3448
		};
		class Babe_climbOn_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\climbOn_rfl.rtm";
			speed=1.05;
		};
		class Babe_stepOn_ua: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\stepOn_ua.rtm";
			speed=1.3;
		};
		class Babe_stepOn_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\stepOn_pst.rtm";
			speed=1.3;
		};
		class Babe_stepOn_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\stepOn_rfl.rtm";
			speed=1.3;
		};
		class Babe_vaultover_ua: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\vaultover_ua.rtm";
			speed=1.2;
		};
		class Babe_vaultover_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\vaultover_pst.rtm";
			speed=1.2;
		};
		class Babe_vaultover_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\vaultover_rfl.rtm";
			speed=1.2;
		};
		class Babe_drop_ua: Babe_anim_base_ua
		{
			file="\babe\babe_em\animations\jumpDown.rtm";
			speed=0.85000002;
		};
		class Babe_drop_pst: Babe_anim_base_pst
		{
			file="\babe\babe_em\animations\drop_pst.rtm";
			speed=0.85000002;
		};
		class Babe_drop_rfl: Babe_anim_base_rfl
		{
			file="\babe\babe_em\animations\drop_rfl.rtm";
			speed=0.85000002;
		};
	};
};
