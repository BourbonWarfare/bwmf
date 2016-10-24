// F3 - Spectator Script
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// params
params [
  ["_seagull", objNull, [objNull]],
  ["_deadUnit", player, [objNull]],
  ["_respawnType", 3, [3]],
  ["_respawnDelay", 3, [3]],
  ["_forced", false, [false]]
];

// escape the script if you are not a seagull unless forced
if (typeof _seagull != "seagull" && !_forced || !hasInterface) exitWith {};
if (!isNil "_seagull") then { camDestroy _seagull; };

waituntil { missionnamespace getvariable ["BIS_fnc_feedback_allowDeathScreen", true] || isNull (_deadUnit) || _forced };

if (!isNil "BIS_fnc_feedback_allowPP") then {
  BIS_fnc_feedback_allowPP = false; // disable effects death effects
};

_deadUnit setVariable ["timeOfDeath", serverTime, true];

if (isNull _deadUnit) then {
  if (count playableUnits > 0) then {
    _deadUnit = (playableUnits select 0);
  } else {
    _deadUnit = (allUnits select 0);
  };
};

// Set spectator mode for whichever radio system is in use
if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
  [true] call acre_api_fnc_setSpectator;
  if (!isNil "potato_radios_availableLanguages") then {
    _languages = [];
    {
      _languages pushBack (_x select 0);
      nil
    } count potato_radios_availableLanguages;
    _languages call acre_api_fnc_babelSetSpokenLanguages;
  };
};

_listBox = 2103;
lbClear _listBox;
// set inital values.
#include "macros.hpp"
f_cam_controls = [F_CAM_HELPFRAME,F_CAM_HELPBACK,F_CAM_MOUSEHANDLER,F_CAM_UNITLIST,F_CAM_MODESCOMBO,F_CAM_SPECTEXT,F_CAM_SPECHELP,F_CAM_HELPCANCEL,F_CAM_HELPCANCEL,F_CAM_MINIMAP,F_CAM_FULLMAP,F_CAM_BUTTIONFILTER,F_CAM_BUTTIONTAGS,F_CAM_BUTTIONTAGSNAME,F_CAM_BUTTIONFIRSTPERSON,F_CAM_BUTTIONTRACERS,F_CAM_DIVIDER];
f_cam_units = [];
f_cam_players = [];
f_cam_startX = 0;
f_cam_startY = 0;
f_cam_detlaX = 0;
f_cam_detlaY = 0;
f_cam_zoom = 0;
f_cam_hideUI = false;
f_cam_map_zoom = 0.5;
f_cam_mode = 0;
f_cam_toggleCamera = false;
f_cam_toggleTracersV = false;
f_cam_playersOnly = false;
f_cam_toggleTags = true;
f_cam_ads = false;
f_cam_nvOn = false;
f_cam_tiBHOn = false;
f_cam_tiWHOn = false;
f_cam_tagsEvent = -1;
f_cam_mShift = false;
f_cam_freecamOn = false;
f_cam_toggleTagsName = true;
f_cam_mapMode = 0;
f_cam_MouseButton = [false,false];
f_cam_mouseCord = [0.5,0.5];
f_cam_mouseDeltaX = 0.5;
f_cam_mouseDeltaY = 0.5;
f_cam_mouseLastX = 0.5;
f_cam_mouseLastY = 0.5;
f_cam_angleYcached  = 0;
f_cam_angleX = 0;
f_cam_tracerOn = false;
f_cam_angleY = 60;
f_cam_ctrl_down = false;
f_cam_shift_down = false;
f_cam_freecam_buttons = [false,false,false,false,false,false];
f_cam_forcedExit = false;
f_cam_timestamp = time;
f_cam_muteSpectators = true;

// Menu (Top left)
f_cam_menuControls = [2111,2112,2113,2114,2511,2512,2101,4302];
f_cam_menuShownTime = 0;
f_cam_menuShown = true;
f_cam_menuWorking = false;
f_cam_sideButton = 0; // 0 = ALL, 1 = BLUFOR , 2 = OPFOR, 3 = INDFOR , 4 = Civ
f_cam_sideNames = ["All Sides","Blufor","Opfor","Indfor","Civ"];

// Colors
f_cam_blufor_color = [BLUFOR] call bis_fnc_sideColor;
f_cam_opfor_color = [OPFOR] call bis_fnc_sideColor;
f_cam_indep_color = [independent] call bis_fnc_sideColor;
f_cam_civ_color = [civilian] call bis_fnc_sideColor;
f_cam_empty_color = [sideUnknown] call bis_fnc_sideColor;

// Camera
f_cam_angle = 360;
f_cam_zoom = 3;
f_cam_height = 3;
f_cam_fovZoom = 1.2;
f_cam_scrollHeight = 0;
f_cam_cameraMode = 0; // set camera mode (default)

// ====================================================================================

//script by Hypnomatic, saved me a lot of time
hyp_var_tracer_tracedUnits = [];
addMissionEventHandler ["Draw3D", {
    {
        private["_unit"];
        _unit = _x;
        {
            private["_positions","_color","_muzzleVelocity"];
            _positions = _unit getVariable [format["hyp_var_tracer_projectile_%1", _x], []];
            _color     = _unit getVariable ["hyp_var_tracer_color", [1,0,0,1]];
            _muzzleVelocity = _positions select 0 select 1;

            for "_i" from 0 to (count _positions) - 2 do {

                //Variant of Dslyecxi's awesome color tracking modification
                if (_unit getVariable ["hyp_var_tracer_trackVel", false]) then {
                    private["_velocity"];
                    _velocity = (_positions select _i) select 1;
                    _color = switch true do {
                        case (_velocity / _muzzleVelocity >= .75) : {[1,0,0,1]};
                        case (_velocity / _muzzleVelocity >= .50) : {[.5,.5,0,1]};
                        case (_velocity / _muzzleVelocity >= .25) : {[0,1,0,1]};
                        case (_velocity / _muzzleVelocity >= .10) : {[0,0,1,1]};
                        case (_velocity / _muzzleVelocity >= 0.0) : {[1,1,1,1]};
                        default {_color};
                    };
                };

                drawLine3D [_positions select _i select 0, _positions select (_i + 1) select 0, _color];
            };
        } forEach ( _unit getVariable["hyp_var_tracer_activeIndexes", []] );
    } forEach hyp_var_tracer_tracedUnits;
}];
hyp_fnc_traceFire = {
    private["_this","_unit","_color","_lifetime","_interval","_maxDistance","_maxDuration","_eventHandle"];
    _unit        = [_this, 0, player, [objNull]] call BIS_fnc_param;
    _color       = [_this, 1, [1,0,0,1], [[]], [4]] call BIS_fnc_param;
    _lifetime    = [_this, 2, -1, [0]] call BIS_fnc_param;
    _interval    = [_this, 3, 0, [0]] call BIS_fnc_param;
    _maxDistance = [_this, 4, -1, [0]] call BIS_fnc_param;
    _maxDuration = [_this, 5, -1, [0]] call BIS_fnc_param;
    _trackVel    = [_this, 6, false, [false]] call BIS_fnc_param;

    _unit setVariable ["hyp_var_tracer_color", _color];
    _unit setVariable ["hyp_var_tracer_lifetime", _lifetime];
    _unit setVariable ["hyp_var_tracer_interval", _interval];
    _unit setVariable ["hyp_var_tracer_trackVel", _trackVel];
    _unit setVariable ["hyp_var_tracer_maxDistance", _maxDistance];
    _unit setVariable ["hyp_var_tracer_maxDuration", _maxDuration];
    _unit setVariable ["hyp_var_tracer_currentIndex", 0];
    _unit setVariable ["hyp_var_tracer_activeIndexes", []];
    _unit setVariable ["hyp_var_tracer_initialized", true];

    _eventHandle = _unit addEventHandler ["fired", {
        [_this, (position(_this select 6)),(velocity (_this select 6)) distance [0,0,0]] spawn hyp_fnc_traceFireEvent;
    }];
    _unit setVariable ["hyp_var_tracer_eventHandle", _eventHandle];
    hyp_var_tracer_tracedUnits set [count hyp_var_tracer_tracedUnits, _unit];
};

hyp_fnc_traceFireEvent = {
    private["_this","_params","_initialPos","_unit","_projectile","_color","_lifetime","_interval","_maxDistance",
            "_maxDuration","_startTime","_skippedFrames","_positions","_projIndex","_activeIndexes","_initialVel"];
    _params        = _this select 0;
    _initialPos    = _this select 1;
    _initialVel    = _this select 2;
    _unit          = _params select 0;
    _projectile    = _params select 6;
    _color         = _unit getVariable "hyp_var_tracer_color";
    _lifetime      = _unit getVariable "hyp_var_tracer_lifetime";
    _interval      = _unit getVariable "hyp_var_tracer_interval";
    _maxDistance   = _unit getVariable "hyp_var_tracer_maxDistance";
    _maxDuration   = _unit getVariable "hyp_var_tracer_maxDuration";
    _startTime     = diag_tickTime;
    _skippedFrames = _interval; //Number of frames since last full operation.  Starts at interval value to record first position
    _positions     = [[_initialPos,_initialVel]];
    _projIndex     = -1;
    _activeIndexes = [];

    _projIndex     = _unit getVariable "hyp_var_tracer_currentIndex"; //Get the index to assign to the bullet
    _unit setVariable ["hyp_var_tracer_currentIndex", _projIndex + 1]; //Increment index for next bullet

    //Initialize final array into which all positions for the current projectile will be stored...
    _unit setVariable [format["hyp_var_tracer_projectile_%1", _projIndex], _positions];
    //...Then update the activeIndexes to indicate that the projectile is active
    _activeIndexes = _unit getVariable "hyp_var_tracer_activeIndexes";
    _activeIndexes set [count _activeIndexes, _projIndex];
    _unit setVariable ["hyp_var_tracer_activeIndexes", _activeIndexes];
    _activeIndexes = nil; //Completely nil this variable just as a safety measure, as the data it holds may be outdated now

    //Loop to run as long as the projectile's line is being updated
    waitUntil {

        //First, handle skipping frames on an interval
        if (_interval != 0 && _skippedFrames < _interval) exitWith {_skippedFrames = _skippedFrames + 1; false}; //Check and handle if frame should be skipped
        if (_interval != 0) then {_skippedFrames = 0;}; //Reset skipped frame counter on recording a frame
        //Next, check if the bullet still exists
        if (!alive _projectile) exitWith {true};
        //Finally, handle the duration and distance checks
        if (_maxDuration != -1 && ((diag_tickTime - _startTime) >= _maxDuration)) exitWith {true}; //Break loop if duration for tracking has been exceeded
        if (_maxDistance != -1 && ((_initialPos distance _projectile) >= _maxDistance)) exitWith {true}; //Break loop if distance for tracking has been exceeded

        //Now, checks have all been run, so let's do the actual bullet tracking stuff
        _positions set [count _positions, [position _projectile, (velocity _projectile) distance [0,0,0]]];
        _unit setVariable [format["hyp_var_tracer_projectile_%1", _projIndex], _positions];
    };

    //Now, if a lifetime is specified, wait until it has elapsed, then delete all data for that projectile
    if (_lifetime != -1) then {
        waitUntil {(diag_tickTime - _startTime) >= _lifetime};
        //Remove the current projectile's index from the activeIndexes...
        _activeIndexes = _unit getVariable "hyp_var_tracer_activeIndexes";
        _activeIndexes = _activeIndexes - [_projIndex];
        _unit setVariable ["hyp_var_tracer_activeIndexes", _activeIndexes];
        //... Then delete the data for the projectile itself
        _unit setVariable [format["hyp_var_tracer_projectile_%1", _projIndex], nil]; //Delete the projectile's data
    };
};

//Clears all lines created by a given unit manually
hyp_fnc_traceFireClear = {
    private["_this","_unit"];
    _unit = _this select 0;
    {
        _unit setVariable [format["hyp_var_tracer_projectile_%1", _x], nil];
    } forEach (_unit getVariable ["hyp_var_tracer_activeIndexes", []]);
    _unit setVariable ["hyp_var_tracer_activeIndexes", []];
};

//Completely removes this script from a unit
hyp_fnc_traceFireRemove = {
    private["_this","_unit"];
    _unit = _this select 0;

    _unit removeEventHandler ["fired", (_unit getVariable ["hyp_var_tracer_eventHandle", 0])];
    {
        _unit setVariable [format["hyp_var_tracer_projectile_%1", _x], nil];
    } forEach (_unit getVariable ["hyp_var_tracer_activeIndexes", []]);
    _unit setVariable ["hyp_var_tracer_color", nil];
    _unit setVariable ["hyp_var_tracer_lifetime", nil];
    _unit setVariable ["hyp_var_tracer_interval", nil];
    _unit setVariable ["hyp_var_tracer_maxDistance", nil];
    _unit setVariable ["hyp_var_tracer_maxDuration", nil];
    _unit setVariable ["hyp_var_tracer_currentIndex", nil];
    _unit setVariable ["hyp_var_tracer_activeIndexes", []];
    _unit setVariable ["hyp_var_tracer_eventHandle", nil];
};

f_cam_listUnits = [];

f_cam_checkAcreMute = {
  params ["_inputKey", "_inputShift", "_inputCtrl", "_inputAlt"];
  (["ACRE2", "HeadSet"] call CBA_fnc_getKeybind select 5) params ["_key", "_modifiers"];
  _modifiers params ["_shift", "_ctrl", "_alt"];

  (_inputKey == _key &&
    _inputShift isEqualTo _shift &&
    _inputCtrl isEqualTo _ctrl &&
    _inputAlt isEqualTo _alt)
};

f_cam_ToggleFPCamera = {
  f_cam_toggleCamera = !f_cam_toggleCamera;
  if (f_cam_toggleCamera) then {
    f_cam_mode = 1; //(view)
    f_cam_camera cameraEffect ["terminate", "BACK"];
    f_cam_curTarget switchCamera "internal";
  }
  else {
    f_cam_mode = 0;
    f_cam_camera cameraEffect ["internal", "BACK"];
  };
  call F_fnc_ReloadModes;
};

f_cam_ToggleTracers = {
	f_cam_toggleTracersV = !f_cam_toggleTracersV;
	if (f_cam_toggleTracersV) then {
		{
			if (side _x == east) then {
				[_x, [1,0,0,1], 0.8, 0, nil, 2] call hyp_fnc_traceFire;
			};
			if (side _x == west) then {
				[_x, [0,0,1,1], 0.8, 0, nil, 2] call hyp_fnc_traceFire;
			};
			if (side _x == resistance) then {
				[_x, [0,1,0,1], 0.8, 0, nil, 2] call hyp_fnc_traceFire;
			};
		} forEach allUnits;
	} else {
		{
			[_x] call hyp_fnc_traceFireRemove
		} forEach allUnits;
	};
};

f_cam_AdminZeus = {
	if ((serverCommandAvailable "#kick") || POTATO_ADMIN) then {

    [true] call F_fnc_ForceExit;

		[player, true] remoteExecCall [potato_adminMenu_fnc_zeusConnectCurator, 2];
		openCuratorInterface;
		[] spawn {
			waitUntil {sleep 0.2; !isNull (findDisplay 312)};
			waitUntil {sleep 0.2; ((isNull (findDisplay 312)) && (isNil "bis_fnc_moduleRemoteControl_unit"))};
			[player, false] remoteExecCall [potato_adminMenu_fnc_zeusConnectCurator, 2];
			[player,player,player,0,true] spawn f_fnc_CamInit; //reinitialize spectator
		};
	} else {
		systemChat "You are not authorized to use Zeus.";
	};
};

f_cam_GetCurrentCam = {
  _camera = f_cam_camera;
  switch(f_cam_mode) do {
    case 0: {
        _camera = f_cam_camera; // Standard
    };
    case 1: {
      _camera = cameraOn; // FP
    };
    case 3: {
      _camera = f_cam_freecamera; // freecam
    };
  };
  _camera
};

// create the UI
createDialog "f_spec_dialog";
// add keyboard events
// hide minimap
((findDisplay 9228) displayCtrl 1350) ctrlShow false;
((findDisplay 9228) displayCtrl 1350) mapCenterOnCamera false;

// hide big map
((findDisplay 9228) displayCtrl 1360) ctrlShow false;
((findDisplay 9228) displayCtrl 1360) mapCenterOnCamera false;

f_cam_helptext = "<t color='#EAA724'><br />Hold right-click to pan the camera<br />Use the scroll wheel or numpad+/- to zoom in and out.<br />Use ctrl + rightclick to fov zoom<br /><br />Press H to show and close the help window.<br />Press M to toggle between no map,minimap and full size map.<br />T for switching on tracers on the map<br/>Space to switch to freecam <br/>Press H to close this window</t>";
((findDisplay 9228) displayCtrl 1310) ctrlSetStructuredText parseText (f_cam_helptext);
// create the camera and set it up.
f_cam_camera = "camera" camCreate [position _deadUnit select 0, position _deadUnit select 1, 3];
f_cam_fakecamera = "camera" camCreate [position _deadUnit select 0,position _deadUnit select 1,3];
f_cam_curTarget = _deadUnit;
f_cam_freecamera = "camera" camCreate [position _deadUnit select 0,position _deadUnit select 1,3];
f_cam_camera camCommit 0;
f_cam_fakecamera camCommit 0;
f_cam_camera cameraEffect ["internal","back"];
f_cam_camera camSetTarget f_cam_fakecamera;
f_cam_camera camSetFov 1.2;
f_cam_freecamera camSetFov 1.2;

f_cam_MouseMoving = false;
cameraEffectEnableHUD true;
showCinemaBorder false;

f_cam_fired = [];
{
  _event = _x addEventHandler ["fired", { f_cam_fired = f_cam_fired - [objNull];f_cam_fired pushBack (_this select 6) }];
  _x setVariable ["f_cam_fired_eventid" ,_event];
  nil
} count (allunits + vehicles);

// spawn sub scripts
call f_fnc_ReloadModes;
lbSetCurSel [2101,0];

f_cam_updatevalues_script = [] spawn F_fnc_UpdateValues;
["f_spect_tags", "onEachFrame", {_this call F_fnc_DrawTags}] call BIS_fnc_addStackedEventHandler;
["f_spect_cams", "onEachFrame", {_this call F_fnc_FreeCam}] call BIS_fnc_addStackedEventHandler;
