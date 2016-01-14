/*
  Author: AACO
  Description: Function to help mission makers set soft time limits to misisons
  Parameters:
    0 (Optional): NUMBER - Targeted mission length in minutes (default: 30)
    1 (Optional): BOOL - Start timer after safe start (default: false)
    2 (Optional): STRING - Message to hint to everyone when the timer expires (default: "Time is up")
    3 (Optional): BOOL - Add target end mission time to player briefing (default: false)
  Usage: Add to init
    [0,1,2,3] call F_fnc_missionTimer;
  Example:
    [20, true, "The mission is over", true] call F_fnc_setTeamColours;
*/

params [
  ["_targetMinuteTime", 30, [0]],
  ["_afterSafeStart", false, [false]],
  ["_message", "Time is up", [""]],
  ["_addToDiary", false, [false]]
];

if (_afterSafeStart) then {
  waitUntil { PABST_ADMIN_SAFESTART_public_isSafe }; // Make sure safe start is on
  waitUntil { !PABST_ADMIN_SAFESTART_public_isSafe }; // Wait until safe start is off
};

if (hasInterface && _addToDiary) then { // For all players and if we should add to diary, add in game mission end time to briefing
  fn_numberToTwoDigitString { // Helper function to make sure each part of the time is two digits
    params [["_number", 0, [0]]]; // Should be good data, double check for good luck
    private _stringNumber = str _number; //Turn the input number into a string

    if (count (toArray _stringNumber) < 2) then { // If the input is not two digits, make it so
      _stringNumber = "0" + _stringNumber;
    };
    _stringNumber
  };

  private _targetDaytime = daytime * (_targetMinuteTime / 60));
  private _targetHour = floor (_targetDaytime % 24);
  private _targetMinute = floor ((_targetDaytime - _targetHour) * 60);
  player createDiaryRecord ["diary", ["Mission Timer", format ["Target end of mission time: %1:%2",
                                                               [_targetHour] call fn_numberToTwoDigitString,
                                                               [_targetMinute] call fn_numberToTwoDigitString]]];
};

if (isServer) then { // Only spawn the thread on the server
  [_targetMinuteTime, _message] spawn {
    params ["_targetMinuteTime", "_message"]; // Guaranteed "good" values, no checks
    waitUntil { sleep 1; time > (60 * _targetMinuteTime) }; // Check every second to see if time is past end mission time
    _message remoteExecCall ["hint"]; // Send the hint to everything (ignore future JIPs)
  };
};
