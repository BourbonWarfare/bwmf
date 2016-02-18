// F3 - Briefing
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

if (!hasInterface) exitWith {};

#define FRAMEWORK_VERSION_DATE "2015/02/18"

// MAKE SURE THE PLAYER INITIALIZES PROPERLY
[] spawn {
  if (player != player) then {waitUntil {player == player};};
  if (!alive player) then {waitUntil {alive player};};

  //Auto add credits from description.ext:
  _missionName = getText (missionConfigFile >> "onLoadName");
  _authorName = getText (missionConfigFile >> "author");
  _worldName = getText (configFile >> "CfgWorlds" >> worldName >> "description");
  player createDiaryRecord ["diary", ["Credits", format ["
  <font size=16>%1</font><br/>
  <font size=13>by %2</font><br/>
  <font size=13>on %3</font><br/>
  <br/>
  <br/>
  <br/>
  Bourbon Warfare Mission Framework<br/>
  Version %4<br/>
  Based on F3 (http://www.ferstaberinde.com/f3/en/)
  ", _missionName, _authorName, _worldName, FRAMEWORK_VERSION_DATE]]];

  // If the player's side is different from the group leader's side, the leader's side is used (Possible, but unlikely)
  private _unitSide = side (leader group player);

  switch (_unitSide) do {
    case (west): {
      #include "briefing_west.sqf"
    };
    case (east): {
      #include "briefing_east.sqf"
    };
    case (independent): {
      #include "briefing_independent.sqf"
    };
    case (civilian): {
      #include "briefing_civilian.sqf"
    };
    default {
      diag_log format ["[BW] ERROR (fn_showBriefing.sqf): You really messed up. Could not find side: %1", _unitSide];
    };
  };
};
