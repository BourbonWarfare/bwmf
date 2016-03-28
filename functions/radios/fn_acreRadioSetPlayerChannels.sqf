#define CHANNELS_ARRAYS     [ \
  ["ASL","A1", "A2","A3"], \
  ["BSL","B1", "B2","B3"], \
  ["CSL","C1", "C2","C3"], \
  ["1PLT","MMG1","MMG2","MAT1","MAT2","MSAM1"], \
  ["COY","TH1", "TH2", "TH3", "TH4", "AH1"], \
  ["DSL","D1", "D2","D3"], \
  ["ESL","E1", "E2","E3"], \
  ["FSL","F1", "F2","F3"], \
  ["2PLT"] \
  ]

#define LR_CHANNELS_ARRAYS  [ \
  ["1PLT","MMG1","MMG2","MAT1","MAT2","MSAM1", "ASL","A1","A2","A3", "BSL","B1","B2","B3", "CSL","C1", "C2","C3"], \
  ["2PLT", "DSL","D1", "D2","D3", "ESL","E1", "E2","E3", "FSL","F1", "F2","F3"], \
  [], \
  ["COY","TH1", "TH2", "TH3", "TH4", "AH1"], \
  [], \
  [] \
  ]

if (!hasInterface) exitWith {};

[] spawn {
  _addSignalsBriefing = {
    params ["_groupID", "_languagesPlayerSpeaks", "_groupFreqIndex", "_groupLRFreqIndex"];
    if (player getVariable ["F_Signals_Created", false]) exitWith {};
    uiSleep 5;

    _cleanLines = {
      params ["_array", ["_maxPerLine", 25], ["_newLineSpace", "      "]];
      private _output = [];
      private _charCount = 0;
      {
        _charCount = _charCount + count _x;
        if (_charCount > _maxPerLine) then {
          _output pushBack format ["<br/>%1%2", _newLineSpace, _x];
          _charCount = count _x;
        } else {
          _output pushBack format ["%1", _x];
        };
        nil
      } count _array;
      _output joinString ", "
    };

    //Show Spoken Languages:
    private _languageDisplayNames = [];
    {
      private _playerShortName = _x;
      private _displayName = "err";
      {
        _x params ["_xShort", "_xDisplay"];
        if (_xShort == _playerShortName) exitWith {_languageDisplayNames pushBack _xDisplay};
        nil
      } count F_available_languages;
      nil
    } count _languagesPlayerSpeaks;
    private _diaryBuilder = [];
    _diaryBuilder pushBack format ["<font size=15>You speak: %1</font><br/>", ([_languageDisplayNames] call _cleanLines)];

    //Show Radio Nets:
    private _hasSR = false;
    private _hasLR = false;
    {
      if (_x isKindOf ["ACRE_PRC343", configFile >> "CfgWeapons"]) then {_hasSR = true;};
      if (_x isKindOf ["ACRE_PRC148", configFile >> "CfgWeapons"]) then {_hasLR = true;};
      if (_x isKindOf ["ACRE_PRC117F", configFile >> "CfgWeapons"]) then {_hasLR = true;};
      nil
    } count (items player);

    diag_log text format ["[BW] - SIGNALS Briefing %1 - [%2,%3]", _this, _hasSR, _hasLR];

    _diaryBuilder pushBack "<br/><font size=15>SR Radio Net (343)</font><br/>";
    {
      if (_hasSR && {_groupFreqIndex == _forEachIndex}) then {
        _diaryBuilder pushBack format [" <font color='#ff0000' size=14>&gt;%1:</font> %2<br/>", (_forEachIndex + 1), ([_x] call _cleanLines)];
      } else {
        _diaryBuilder pushBack format ["  <font size=14>%1:</font> %2<br/>", (_forEachIndex + 1), ([_x] call _cleanLines)];
      };
    } forEach CHANNELS_ARRAYS;

    _diaryBuilder pushBack "<br/><font size=15>LR Radio Net (148/117)</font><br/>";
    {
      if (_hasLR && {_groupLRFreqIndex == _forEachIndex}) then {
        _diaryBuilder pushBack format [" <font color='#ff0000' size=14>&gt;%1:</font> %2<br/>", (_forEachIndex + 1), ([_x] call _cleanLines)];
      } else {
        _diaryBuilder pushBack format ["  <font size=14>%1:</font> %2<br/>", (_forEachIndex + 1), ([_x] call _cleanLines)];
      };
    } forEach LR_CHANNELS_ARRAYS;

    _diaryBuilder pushBack "<br/><br/>Note: Subject to change.";

    _diaryBuilder pushBack "<br/><br/><execute expression='[] call F_Radios_fnc_reinitRadio;'>Reinitialize radios</execute>";

    player createDiaryRecord ["diary", ["SIGNALS", _diaryBuilder joinString ""]];
    player setVariable ["F_Signals_Created", true];
  };

  if (player != player) then {waitUntil {player == player};};
  if (!alive player) then {waitUntil {alive player};};
  waitUntil {player getVariable ["F_Gear_Setup", false]};
  diag_log text format ["[BW] - Player Stable, Seting Presets for Side %1", playerside];

  private _languagesPlayerSpeaks = player getVariable ["f_languages", []];

  switch (side (group player)) do {
    case west: {
      if (_languagesPlayerSpeaks isEqualTo []) then {_languagesPlayerSpeaks = ["en"];};
      ["ACRE_PRC343", "west343"] call acre_api_fnc_setPreset;
      ["ACRE_PRC148", "west148"] call acre_api_fnc_setPreset;
      ["ACRE_PRC117F", "west117"] call acre_api_fnc_setPreset;
    };
    case east: {
      if (_languagesPlayerSpeaks isEqualTo []) then {_languagesPlayerSpeaks = ["ru"];};
      ["ACRE_PRC343", "east343"] call acre_api_fnc_setPreset;
      ["ACRE_PRC148", "east148"] call acre_api_fnc_setPreset;
      ["ACRE_PRC117F", "east117"] call acre_api_fnc_setPreset;
    };
    case independent: {
      if (_languagesPlayerSpeaks isEqualTo []) then {_languagesPlayerSpeaks = ["ar"];};
      ["ACRE_PRC343", "indp343"] call acre_api_fnc_setPreset;
      ["ACRE_PRC148", "indp148"] call acre_api_fnc_setPreset;
      ["ACRE_PRC117F", "indp117"] call acre_api_fnc_setPreset;
    };
    case civilian: {
      if (_languagesPlayerSpeaks isEqualTo []) then {_languagesPlayerSpeaks = ["ar"];};
    };
  };

  _languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;

  //Wait for F3_GroupID from server
  private _groupID = (group player) getVariable ["F3_GroupID", "-1"];
  if (_groupID == "-1") then {
    _wait = 10;
    waitUntil {
      diag_log text format ["[BW] waiting on F3_GroupID"];
      uiSleep 1;
      _wait = _wait - 1;
      _groupID = (group player) getVariable ["F3_GroupID", "-1"];
      (_groupID != "-1") || {_wait < 0}
    };
  };

  private _groupFreqIndex = -1;
  private _groupLRFreqIndex = -1;

  if (_groupID != "-1") then {
    private _splitName = _groupID splitString " ";
    if ((count _splitName) > 1) then {
      private _groupName = (_splitName select 1);
      {
        if (_groupName in _x) exitWith { _groupFreqIndex = _forEachIndex; };
      } forEach CHANNELS_ARRAYS;

      {
        if (_groupName in _x) exitWith { _groupLRFreqIndex = _forEachIndex; };
      } forEach LR_CHANNELS_ARRAYS;
    };
  };

  private _srFreqIndex = player getVariable ["F_Radio_SR", -1];
  private _lrFreqIndex = player getVariable ["F_Radio_LR", -1];

  if (_srFreqIndex != -1) then {
    _groupFreqIndex = _srFreqIndex - 1;
  };
  if (_lrFreqIndex != -1) then {
    _groupLRFreqIndex = _lrFreqIndex - 1;
  };

  if (_groupFreqIndex == -1) then {
    diag_log text format ["[BW] Unknown Group (Using Default) [%1]", _groupID];
    _groupFreqIndex = 0;
  };
  if (_groupLRFreqIndex == -1) then {
    diag_log text format ["[BW] Unknown LR Group (Using Default) [%1]", _groupID];
    _groupLRFreqIndex = 0;
  };

  diag_log text format ["[BW] - Channels Ready to Set [SR%1/LR%2] from group %3", (_groupFreqIndex + 1), (_groupLRFreqIndex + 1), _groupID];

  [_groupID, _languagesPlayerSpeaks, _groupFreqIndex, _groupLRFreqIndex] spawn _addSignalsBriefing;

  waitUntil {[player] call acre_api_fnc_isInitialized};
  diag_log text format ["[BW] - acre_api_fnc_isInitialized @ %1, setting radios", time];

  private _radio343 = ["ACRE_PRC343"] call acre_api_fnc_getRadioByType;
  if ((!isNil "_radio343") && {_radio343 != ""}) then {
    systemChat format ["[%1] is set to CH [%2]", _radio343, (_groupFreqIndex + 1)];
    [_radio343, (_groupFreqIndex + 1)] call acre_api_fnc_setRadioChannel;
  };

  private _radio148 = ["ACRE_PRC148"] call acre_api_fnc_getRadioByType;
  if ((!isNil "_radio148") && {_radio148 != ""}) then {
    systemChat format ["[%1] is set to CH [%2]", _radio148, (_groupLRFreqIndex + 1)];
    [_radio148, (_groupLRFreqIndex + 1)] call acre_api_fnc_setRadioChannel;
  };

  private _radio117 = ["ACRE_PRC117F"] call acre_api_fnc_getRadioByType;
  if ((!isNil "_radio117") && {_radio117 != ""}) then {
    systemChat format ["[%1] is set to CH [%2]", _radio117, (_groupLRFreqIndex + 1)];
    [_radio117, (_groupLRFreqIndex + 1)] call acre_api_fnc_setRadioChannel;
  };
};
