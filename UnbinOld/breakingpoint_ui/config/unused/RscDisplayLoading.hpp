// Generated by unRap v1.06 by Kegetys

class RscDisplayLoading {
	idd = 102;
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'Loading'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'Loading'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	
	class Variants {
		class LoadingOne {};
		
		class Loading : RscDisplayLoadMission {};
	};
};
