// F3 - Disable Saving and Auto Saving
enableSaving [false, false];

// F3 - Mute Orders and Reports
enableSentences false;

// F3 - Briefing
[] call F_fnc_showBriefing;
[] call F_fnc_showOrbatNotes;

// F3 - Buddy Team Colours
[] call F_fnc_setTeamColours;

// F3 - View Distance
setViewDistance 2500;

// BWMF - Mission Timer/Safe Start
if (!isNil "PABST_fnc_safeStart") then {[] spawn PABST_fnc_safeStart;};

// F3 - Radio Framework
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
[] call F_Radios_fnc_acreRadioSetup;

// BWMF: DAC Debug Params
[] call F_DAC_fnc_setupDacParams;

// BWMF: Group and FTL Markers
[] call F_Markers_fnc_playerInit;
