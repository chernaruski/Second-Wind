//////////////////////////////////////////////////////////////////
// BP: Second Wind.
// Visual enhancement for distant view.
// Created by: Malcain
//////////////////////////////////////////////////////////////////

// Script to enforce shadows and texture quality whenever you use optics.
// Should not negatively affect FPS due to optics FOV decrease.

//waitUntil { !isNull(findDisplay 46); };
//waitUntil {!isNull player; sleep 5; };

//if (!hasInterface) exitwith {};

[] spawn {
// Variables
_dvs_vpref = getShadowDistance; // detect player's preferred shadow distance
if (_dvs_vpref == 100) then {_dvs_vpref = 60}; //workaround, as "getShadowDistance" command doesn't return values lower than 100... set it to minimum if it returned 100.
//_dvs_min = 350; // Minimum zoomed shadow distance
//_dvs_max = 1350; // Maximum zoomed shadow distance
_zoomed = "n"; // start off not zoomed in

// Initial shadowdistance 
_oldvdist = _dvs_vpref;
_svdist = _dvs_vpref;

sleep 1;

//Adjust shadowdistance when zooming/unzooming
while {true} do {
	_zoom = round (call BP_fnc_trueZoom * 10) / 10;
	_zoom_factor = linearConversion [2,10,_zoom,350,1350,true]; //min to max conversion.
	
	
	if (_zoom >= 2) then { //minimum zoom to enforce dvs
		_svdist = _zoom_factor;
	} else {
		_svdist = _dvs_vpref;
	};

// Set shadowdistance if it has changed since last check
	if (_svdist != _oldvdist or getShadowDistance != _svdist) then 
	{
		setShadowDistance _svdist;
	};

	_oldvdist = _svdist;

	sleep 0.1;
};
};

	/*_cameraview = cameraView; //update cameraview variable
if ((_cameraview == "GUNNER") and (_zoomed == "y")) then {
sleep 0.1;
	if (_zoom >= 3) then {
	_svdist = 1350;
	} else {
	_svdist = _dvs_vpref;
	};
};
if ((_cameraview == "GUNNER") and (_zoomed == "n")) then {
sleep 0.01;
if (_zoom >= 3) then {
_svdist = 1350; 
};
_zoomed="y"};
if (((_cameraview == "INTERNAL") or (_cameraview == "EXTERNAL")) and (_zoomed == "y")) then {
_svdist = _dvs_vpref;
_zoomed="n"};
*/