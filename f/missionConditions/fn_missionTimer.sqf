/*
  Author: AACO
  Description: Function to help mission makers set soft time limits to missions
  Usage: Add to init.sqf [0,1,2,3] spawn F_fnc_missionTimer;
  Parameters:
    0 (Optional): NUMBER - Targeted mission length in minutes (default: 30)
    1 (Optional): BOOL - Start timer after safe start (default: false)
    2 (Optional): BOOL - Add target end mission time to player briefing (default: false)
    3 (Optional): STRING - Message to hint to everyone when the timer expires (default: "Time is up")
  Example: [20, true, true, "The mission is over"] spawn F_fnc_missionTimer;
  Note:
    Using "spawn" is required, if the function is "called" the waitUntils
    can not be guaranteed to function properly
*/

params [
  ["_targetMinuteTime", 30, [0]],
  ["_afterSafeStart", false, [false]],
  ["_addToDiary", false, [false]],
  ["_message", "Time is up", [""]]
];

waitUntil { !(isNil "f_param_endMissionTimer") }; // Ensure mission parameter is populated

// Mission parameter overrides
if (f_param_endMissionTimer < 0) exitWith {}; // "Off"
if (f_param_endMissionTimer > 0) then { _targetMinuteTime = f_param_endMissionTimer; };

if (_afterSafeStart) then {
  waitUntil { !(isNil "PABST_ADMIN_SAFESTART_public_isSafe") }; // Make sure safe start is not nil
  waitUntil { sleep 1; !PABST_ADMIN_SAFESTART_public_isSafe }; // Wait until safe start is off, check every second
};

if (_addToDiary) then {
  if (isServer) then { // do the calc on the server, then transmit to all clients (including JIPs)
    fn_numberToTwoDigitString = { // Helper function to make sure each part of the time is two digits
      params [["_number", 0, [0]]]; // Should be good data, double check for good luck
      private _stringNumber = str _number; //Turn the input number into a string

      if (count (toArray _stringNumber) < 2) then { // If the input is not two digits, make it so
        _stringNumber = "0" + _stringNumber;
      };
      _stringNumber
    };

    private _targetDaytime = daytime + (_targetMinuteTime / 60);
    private _targetHour = floor (_targetDaytime % 24);
    private _targetMinute = floor ((_targetDaytime - _targetHour) * 60);
    private _targetSecond = floor (((((_targetDaytime) - (_targetHour)) * 60) - _targetMinute)  * 60);
    F_mission_timer_diary_entry = format ["Target end of mission time: %1:%2:%3",
                                          [_targetHour] call fn_numberToTwoDigitString,
                                          [_targetMinute] call fn_numberToTwoDigitString,
                                          [_targetSecond] call fn_numberToTwoDigitString];
    publicVariable "F_mission_timer_diary_entry";
  };
  if (hasInterface) then {
    waitUntil { !(isNil "F_mission_timer_diary_entry") }; // wait until the server transmits the entry
    player createDiaryRecord ["diary", ["Mission Timer", F_mission_timer_diary_entry]];
  };
};

if (isServer) then { // Only spawn the thread on the server
  [_targetMinuteTime, _message] spawn {
    params ["_targetMinuteTime", "_message"]; // Guaranteed "good" values, no checks
    private _targetSecondTime = time + (60 * _targetMinuteTime);
    waitUntil { sleep 1; time > _targetSecondTime }; // Check every second to see if time is past end mission time
    F_mission_timer_complete = true;
    publicVariable "F_mission_timer_complete";
    _message remoteExecCall ["hint"]; // Send the hint to everything
  };
};
