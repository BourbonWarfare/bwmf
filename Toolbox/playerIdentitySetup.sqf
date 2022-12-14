// Player identity script created by Pabst Mirror, ArgoChris, kORIN and Mozaik
// file created and modified by watermelon

/**
 *	To use this script, create a new InitPlayerLocal.sqf file and paste this script into it.
 * 	Note that this script only runs once when the player is first loaded into the mission.
 *	To preserve faces for COOPs, try running this alongside the identitySetup.sqf script.
 */

// Face array initialization
// these two fields dictate which faces players on BLUFOR will spawn with
_westFaces = ["WhiteHead_01","WhiteHead_02","WhiteHead_03"];
_westFace = _eastFaces select (floor (random (count _eastFaces)));

// these two fields dictate which faces players on OPFOR will spawn with
_eastFaces = ["PersianHead_A3_01","PersianHead_A3_02","PersianHead_A3_03"];
_eastFace = _eastFaces select (floor (random (count _eastFaces)));

// these two fields dictate which faces players on INDFOR will spawn with
_guerFaces = ["GreekHead_A3_01","GreekHead_A3_02","GreekHead_A3_03"];
_guerFace = _guerFaces select (floor (random (count _guerFaces)));

// these if statements apply the faces onto the player object
if (playerSide == west) then {
	[player, _westFace] remoteExec ["setFace", 0, player]; 
};
if (playerSide == east) then {
	[player, _eastFace] remoteExec ["setFace", 0, player]; 
};
if (playerSide == resistance) then {
	[player, _guerFace] remoteExec ["setFace", 0, player]; 
};