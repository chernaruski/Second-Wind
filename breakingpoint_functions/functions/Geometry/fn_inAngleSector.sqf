scriptName "Functions\geometry\fn_inAngleSector.sqf";

//------------------
// Authors: Peter Morrison (snYpir) & Philipp Pilhofer (raedor), optimised by Killzone_Kid
// Purpose: Checks if a position lies within an angle sector
// Arguments: [<center position>,<center angle of sector>,<sector width>,<position>]
// Return: boolean
//
/*
	Returns true if <position> lies within the sector defined by <center position>,
	<center angle of sector> and <sector width>. Use this function to determine if
	a position lies within a certain angle from another position (ie the <center position>). 
	Example:
	[position player,getdir player,30,position enemy_tank] call BIS_fnc_inAngleSector
	will return true if the vehicle named enemy_tank is within 30 degrees of where the player is pointing.
*/
//Example: [ position player, getDir player, 30, position _helipad] call BP_fnc_inAngleCheck;

params ["_center", "_dir", "_sector", "_pos"];

private _dirTo = _center getDir _pos;
acos ([sin _dir, cos _dir, 0] vectorCos [sin _dirTo, cos _dirTo, 0]) <= _sector/2