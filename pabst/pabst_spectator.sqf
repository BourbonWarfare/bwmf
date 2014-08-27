#define CAMERA_MODE_INTERNAL 				1
#define CAMERA_MODE_EXTERNAL 				2
#define CAMERA_MODE_FREE					3
#define CAMERA_MODE_TOP						4
#define DEFAULT_ATTACHTO_AZIMUTH			180
#define DEFAULT_ATTACHTO_ALTITUDE			10
#define DEFAULT_ATTACHTO_DISTANCE			2.5
#define SLEEP_MAP_COMMIT_TIME				0.5
#define VISION_MODE_STRINGS					["Normal", "Night Vision", "White Hot", "Black Hot", "Thermal"]
#define MOUSE_SPEED							5
#define TAGS_RANGE_NAME						50
#define TAGS_RANGE_MAX						1000
#define TAGS_TEXTSIZE						0.04

#define IDC_MAP_TRACK						1600
#define IDC_MAP_SIZE						1601
#define IDC_MODE_BASE						1690
#define IDC_FILTERAI						1661
#define IDC_NAMETAGS						1662
#define IDC_LISTBOX_ARRAY					20001
#define IDC_LISTBOX_MAP						2200
#define IDC_LISTBOX_XVISION					2108

#define MAP_POSITION_ARRAY					[[0 * safezoneW + safezoneX, 0.65  * safezoneH + safezoneY, 0.35 * safezoneW, 0.35 * safezoneH], [0 * safezoneW + safezoneX, 1  * safezoneH + safezoneY, 0,0], [0 * safezoneW + safezoneX, 0.25  * safezoneH + safezoneY, 0.45 * safezoneW, 0.75 * safezoneH] ]

PABST_SPECT_init = {
	if (isDedicated) exitWith {};
	if (!isNil "PABST_SPECT_started") exitWith {systemChat format ["spectator already running"];};
	PABST_SPECT_started = true;
	
	// ("x39_MedSys_Gui_Overlay_layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];	//try and disable xmed's red screen
	if (!isNil "X39_MedSys_var_ppEffects_ColorCorrections") then {ppEffectDestroy X39_MedSys_var_ppEffects_ColorCorrections;};
	if (!isNil "X39_MedSys_var_ppEffects_ColorInversion") then {ppEffectDestroy X39_MedSys_var_ppEffects_ColorInversion;};
	if (!isNil "X39_MedSys_var_ppEffects_ChromAberration") then {ppEffectDestroy X39_MedSys_var_ppEffects_ChromAberration;};
	if (!isNil "X39_MedSys_var_ppEffects_Blur") then {ppEffectDestroy X39_MedSys_var_ppEffects_Blur;};
	
	if (!isNil "acre_api_fnc_setSpectator") then {[true] call acre_api_fnc_setSpectator;};
	
	if (!isNil "AGM_UnconsciousCC") then {
		AGM_UnconsciousCC ppEffectEnable false;
		AGM_UnconsciousCC ppEffectCommit 1;
	};
	if (!isNil "AGM_UnconsciousRB") then {
		AGM_UnconsciousRB ppEffectEnable false;
		AGM_UnconsciousRB ppEffectCommit 1;
	};
	
	"chromAberration" ppEffectEnable false;
	[] spawn {
		sleep 1;			//solve race condition shit
		"chromAberration" ppEffectEnable false;
	};
	
	BIS_fnc_feedback_allowPP = false;	//disable death blur
	
	//Script's Global Variables
	PABST_SPECT_cameraMode 			= CAMERA_MODE_EXTERNAL;
	PABST_SPECT_cameraTarget 		= if (player == player) then {player} else {allUnits select 0};
	PABST_SPECT_azimuth				= -1;
	PABST_SPECT_altitude			= -1;
	PABST_SPECT_attachTo_distance	= -1;
	PABST_SPECT_theCamera 			= "camera" camCreate (position PABST_SPECT_cameraTarget); 
	PABST_SPECT_visionMode			= 0;
	PABST_SPECT_mapPositionIndex	= 0;
	PABST_SPECT_keysPressed			= [];
	PABST_SPECT_targetsAlive		= [];
	PABST_SPECT_filterAI			= false;
	PABST_SPECT_showNameTags 		= true;
	PABST_SPECT_autoTrackMap		= true;
	
	PABST_SPECT_theCamera camSetFOV 1.25;
	
	
	
	_seagull = if (player == player) then {
		[_this, 0, objNull, [objNull]] call BIS_fnc_PARAM;
	} else {
		[_this, 1, objNull, [objNull]] call BIS_fnc_PARAM;
	};
	
	_seagull setpos [0,0,0];

	if (count _this > 0) then {//what was this for again??
		if (!isNull (_this select 0)) then {(_this select 0) setPos [0,0,0];};
	};
	
	[] spawn PABST_SPECT_updateGUI;
	[] spawn PABST_SPECT_updateCameraTrack;
	// addMissionEventHandler ["Draw3D", PABST_SPECT_onEachFrame];
	["PABST_SPECT_eachFrame", "onEachFrame", "PABST_SPECT_onEachFrame"] call BIS_fnc_addStackedEventHandler;
	// systemChat format ["%1 - Camera Init Done", time];
};


// P_TEST = {
	// {
		// drawIcon3d ["", [1,1,1,1], getpos _x, 1, 1, 0, "shit", 0, 0.04, "PuristaMedium"];
	// } forEach allunits;
// };

PABST_SPECT_onEachFrame = {	
	// systemChat format ["time is %1", time];
	if (PABST_SPECT_showNameTags) then {
		{
			if (alive _x) then {
				_xDistance = (_x distance PABST_SPECT_theCamera);
				if (_xDistance < TAGS_RANGE_MAX) then {
					_xPosition = visiblePosition _x;
					_xColor = [side (group _x)] call PABST_SPECT_util_getColor;
					_xIcon = gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "icon");
					_xName = "";
					_crewCount = count (crew (vehicle _x));
					_directionToCamera = ([PABST_SPECT_theCamera, _x] call BIS_fnc_dirTo) - (getDir _x);

					
					if (_xDistance < TAGS_RANGE_NAME) then {
						if (isPlayer _x) then {
							_xName = (name _x);
						} else {
							_xName = format ["*AI* - %1", gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "displayName")];
						};
						
						if (_crewCount > 1) then {
							_xName = format ["%1 (+%2)", _xName, ((count (crew (vehicle _x))) - 1)];
						};
					};
					
					if (vehicle _x != _x) then {
						if (((crew (vehicle _x)) select 0) == _x) then {
							drawIcon3D [_xIcon, _xColor, _xPosition, 0.75, 0.75, _directionToCamera, _xName, 0, TAGS_TEXTSIZE, "PuristaMedium"];
						};
					} else {
						drawIcon3D [_xIcon, _xColor, _xPosition, 0.65, 0.65, _directionToCamera, _xName, 0, TAGS_TEXTSIZE, "PuristaMedium"];
					};
				};
			};
		} forEach allUnits;
	};
};


PABST_SPECT_updateGUI = {
	disableSerialization; 
	waitUntil {
		//-------Start: UI Display-----------
		_dialogUpAtStart = dialog;
		if (!_dialogUpAtStart) then {
			sleep 1.25;		//just to make it easier to get escape menu
			createDialog "PABST_SPECT_dialog";
			((uiNamespace getVariable "PABST_SPECT_theDialog") displayCtrl 1602) ctrlSetTextColor [0,1,0,1];
		};
		_dialog = uiNamespace getVariable "PABST_SPECT_theDialog";
		
		//Camera Mode: Set Button Status (green text)
		{	
			if (PABST_SPECT_cameraMode == _x) then {
				(_dialog displayCtrl (IDC_MODE_BASE + _x)) ctrlSetTextColor [0,1,0,1];
			} else {
				(_dialog displayCtrl (IDC_MODE_BASE + _x)) ctrlSetTextColor [1,1,1,1];
			};
		} forEach [CAMERA_MODE_EXTERNAL, CAMERA_MODE_FREE, CAMERA_MODE_INTERNAL];	//, CAMERA_MODE_TOP
		
		(_dialog displayCtrl IDC_FILTERAI) ctrlSetTextColor (if (PABST_SPECT_filterAI) then {[0,1,0,1]} else {[1,1,1,1]});
		(_dialog displayCtrl IDC_NAMETAGS) ctrlSetTextColor (if (PABST_SPECT_showNameTags) then {[0,1,0,1]} else {[1,1,1,1]});

		if (PABST_SPECT_autoTrackMap) then {
			if (ctrlMapAnimDone (_dialog displayCtrl IDC_LISTBOX_MAP)) then {
				_cameraPosition = if (PABST_SPECT_cameraMode == CAMERA_MODE_INTERNAL) then {position PABST_SPECT_cameraTarget} else {position PABST_SPECT_theCamera};
				(_dialog displayCtrl IDC_LISTBOX_MAP) ctrlMapAnimAdd [SLEEP_MAP_COMMIT_TIME, (ctrlMapScale (_dialog displayCtrl IDC_LISTBOX_MAP)), _cameraPosition];
				ctrlMapAnimCommit (_dialog displayCtrl IDC_LISTBOX_MAP);
			};
			(_dialog displayCtrl IDC_MAP_TRACK) ctrlSetTextColor [0,1,0,1];
		} else {
			(_dialog displayCtrl IDC_MAP_TRACK) ctrlSetTextColor [1,1,1,1];
		};
		
		//Update Player Listbox, When Needed
		if ((!_dialogUpAtStart) || ((count PABST_SPECT_targetsAlive) != ({(!PABST_SPECT_filterAI || isPlayer _x) && (alive _x)} count allUnits))) then {
			lnbClear (_dialog displayCtrl IDC_LISTBOX_ARRAY);
			PABST_SPECT_targetsAlive = [];
			{
				_theGroup = _x;
				_listedGroup = false;
				{
					if ((!PABST_SPECT_filterAI || isPlayer _x) && (alive _x)) then {
						PABST_SPECT_targetsAlive set [(count PABST_SPECT_targetsAlive), _x];
						_xName = if (isPlayer _x) then {
							(name _x);
						} else {
							format ["*AI* - %1", gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "displayName")];
						};
						if (!_listedGroup) then {
							_listedGroup = true;
							_groupString = groupID _theGroup;
							_groupcolor = [side (_theGroup)] call PABST_SPECT_util_getColor;
							(_dialog displayCtrl IDC_LISTBOX_ARRAY) lnbAddRow [_groupString, _xName];
							(_dialog displayCtrl IDC_LISTBOX_ARRAY) lnbSetColor [[(count PABST_SPECT_targetsAlive - 1), 0], _groupcolor];
						} else {
							(_dialog displayCtrl IDC_LISTBOX_ARRAY) lnbAddRow ["", _xName];
						};
					};	
				} forEach (units _x);
			} forEach allGroups;
		};
		
		//Update Player Listbox Selection, When Needed
		_targetIndex = PABST_SPECT_targetsAlive find PABST_SPECT_cameraTarget;
		if (_targetIndex > 0) then {
			if (_targetIndex != lnbCurSelRow (_dialog displayCtrl IDC_LISTBOX_ARRAY)) then {
				(_dialog displayCtrl IDC_LISTBOX_ARRAY) lnbSetCurSelRow _targetIndex;
			};
		};
		
		if ((lbSize (_dialog displayCtrl IDC_LISTBOX_XVISION)) == 0) then {
			{
				(_dialog displayCtrl IDC_LISTBOX_XVISION) lbAdd format ["%1", _x];
			} forEach VISION_MODE_STRINGS;
		};
		if ((lbCurSel (_dialog displayCtrl IDC_LISTBOX_XVISION)) != PABST_SPECT_visionMode) then {
			(_dialog displayCtrl IDC_LISTBOX_XVISION) lbSetCurSel PABST_SPECT_visionMode;
		};
		//-------End: UI Display-----------
		false;
	};
};

PABST_SPECT_updateCameraTrack ={
	_currentCameraMode = -100;
	_currentCameraTarget = objNull;
	_newModeOrTargetCode = {(_currentCameraMode != PABST_SPECT_cameraMode) || ((PABST_SPECT_cameraMode != CAMERA_MODE_FREE) && (_currentCameraTarget != PABST_SPECT_cameraTarget))};
	_keysActiveCode = {(count PABST_SPECT_keysPressed) > 0};
	waitUntil{
		if (!dialog) then {waitUntil{dialog};};
		if (call _newModeOrTargetCode) then {
			_currentCameraMode  	= PABST_SPECT_cameraMode;
			_currentCameraTarget 	= PABST_SPECT_cameraTarget;
			
			switch (PABST_SPECT_cameraMode) do {
			case (CAMERA_MODE_INTERNAL): {
					PABST_SPECT_theCamera cameraEffect ["terminate", "BACK"];
					PABST_SPECT_theCamera camCommit 0; 
					PABST_SPECT_theCamera attachTo [PABST_SPECT_cameraTarget, [0,0,1.6]];

				};
				
			case (CAMERA_MODE_EXTERNAL): {
					detach PABST_SPECT_theCamera;
					PABST_SPECT_theCamera camCommit 0;
					PABST_SPECT_azimuth	= DEFAULT_ATTACHTO_AZIMUTH;
					PABST_SPECT_altitude	= DEFAULT_ATTACHTO_ALTITUDE;
					PABST_SPECT_attachTo_distance	= DEFAULT_ATTACHTO_DISTANCE;
					PABST_SPECT_theCamera cameraEffect ["internal","back"];  
					PABST_SPECT_theCamera camSetTarget PABST_SPECT_cameraTarget;
					
					cameraEffectEnableHUD true;
					showCinemaBorder false;		
				};
				
			case (CAMERA_MODE_FREE): {
					PABST_SPECT_theCamera cameraEffect ["terminate", "BACK"];
					PABST_SPECT_theCamera camCommit 0; 
					_oldCamPosition = position PABST_SPECT_theCamera;
					PABST_SPECT_azimuth = direction PABST_SPECT_theCamera;
					PABST_SPECT_altitude = atan ((vectorDir PABST_SPECT_theCamera) select 2);
					camDestroy PABST_SPECT_theCamera;
					
					PABST_SPECT_theCamera = "camera" camCreate (_oldCamPosition); 
					PABST_SPECT_theCamera cameraEffect ["internal","back"];  
					PABST_SPECT_theCamera setDir PABST_SPECT_azimuth;
					[PABST_SPECT_theCamera, PABST_SPECT_altitude, 0] call BIS_fnc_setPitchBank;
					
					cameraEffectEnableHUD true;
					showCinemaBorder false;		
				};
			};
		};
		
		switch (PABST_SPECT_cameraMode) do {
		case (CAMERA_MODE_INTERNAL) : {
				if ((cameraon != PABST_SPECT_cameraTarget) && (vehicle PABST_SPECT_cameraTarget == PABST_SPECT_cameraTarget)) then {
					PABST_SPECT_cameraTarget switchCamera "internal";
				};
				if ((cameraon != (vehicle PABST_SPECT_cameraTarget)) && (vehicle PABST_SPECT_cameraTarget != PABST_SPECT_cameraTarget)) then {
					(vehicle PABST_SPECT_cameraTarget) switchCamera "gunner";//todo					
				};
			};
		case (CAMERA_MODE_EXTERNAL): {
				if (call _keysActiveCode) then {
					if ("KEY_W" in PABST_SPECT_keysPressed) then {PABST_SPECT_attachTo_distance = (((PABST_SPECT_attachTo_distance - 0.15) max 1) min 50);};
					if ("KEY_S" in PABST_SPECT_keysPressed) then {PABST_SPECT_attachTo_distance = (((PABST_SPECT_attachTo_distance + 0.15) max 1) min 50);};
					if ("KEY_D" in PABST_SPECT_keysPressed) then {PABST_SPECT_azimuth = (((PABST_SPECT_azimuth - 2) + 360) % 360);};
					if ("KEY_A" in PABST_SPECT_keysPressed) then {PABST_SPECT_azimuth = (((PABST_SPECT_azimuth + 2) + 360) % 360);};
					if ("KEY_Q" in PABST_SPECT_keysPressed) then {PABST_SPECT_altitude = ((PABST_SPECT_altitude + 2) min 89);};
					if ("KEY_Z" in PABST_SPECT_keysPressed) then {PABST_SPECT_altitude = ((PABST_SPECT_altitude - 2) max -89);};
				};
				if ((camCommitted PABST_SPECT_theCamera) ||_keysActiveCode) then {
					_distance = PABST_SPECT_theCamera distance PABST_SPECT_cameraTarget;
					_commitTime = ((_distance / 500) max 0.7) min 1.5;
					if (_distance > 1500) then {_commitTime = 0;};	//too much lag to transition long range
					if (call _keysActiveCode) then { _commitTime = 0.04;};
					_offX = PABST_SPECT_attachTo_distance * (cos PABST_SPECT_altitude) * (sin PABST_SPECT_azimuth);
					_offY = PABST_SPECT_attachTo_distance * (cos PABST_SPECT_altitude) * (cos PABST_SPECT_azimuth);
					_offZ = PABST_SPECT_attachTo_distance * (sin PABST_SPECT_altitude) + 1.6;
					PABST_SPECT_theCamera camSetRelPos [_offX, _offY, _offZ];
					PABST_SPECT_theCamera camCommit _commitTime;
				};
			};
		case (CAMERA_MODE_FREE) : {
				if (call _keysActiveCode) then {
					_currentCameraPosition = getPosASL PABST_SPECT_theCamera;
					_movementX = 0;
					_movementY = 0;
					_movementZ = 0;
					_movementSpeed = 0.7;
					if ("KEY_SHIFT" in PABST_SPECT_keysPressed) then {_movementSpeed = 5;};
					if ("KEY_W" in PABST_SPECT_keysPressed) then {_movementY = _movementSpeed;};
					if ("KEY_S" in PABST_SPECT_keysPressed) then {_movementY = -1 * _movementSpeed;};
					if ("KEY_D" in PABST_SPECT_keysPressed) then {_movementX = _movementSpeed;};
					if ("KEY_A" in PABST_SPECT_keysPressed) then {_movementX = -1 * _movementSpeed;};
					if ("KEY_Q" in PABST_SPECT_keysPressed) then {_movementZ = _movementSpeed;};
					if ("KEY_Z" in PABST_SPECT_keysPressed) then {_movementZ = -1 * _movementSpeed;};
					_newX = (_currentCameraPosition select 0) + (_movementX * (cos PABST_SPECT_azimuth)) + (_movementY * (sin PABST_SPECT_azimuth));
					_newY = (_currentCameraPosition select 1) - (_movementX * (sin PABST_SPECT_azimuth)) + (_movementY * (cos PABST_SPECT_azimuth));
					_newZ = ((_currentCameraPosition select 2) + (_movementZ)) max (getTerrainHeightASL [_newX, _newY]);
					PABST_SPECT_theCamera setPosASL [_newX, _newY, _newZ];
					PABST_SPECT_theCamera setDir PABST_SPECT_azimuth;
					[PABST_SPECT_theCamera, PABST_SPECT_altitude, 0] call BIS_fnc_setPitchBank;
				};
			};
		};
		false//waitUntil runforever
	};
};

//-------------------GUI Hooks---------------------------------------------------
PABST_SPECT_UI_mapClick = {
	_mouseButton = _this select 1;
	switch (_mouseButton) do {
	case (0): {//left
			
			if (PABST_SPECT_cameraMode == CAMERA_MODE_FREE) then {
				_clickPos = (_this select 0) ctrlMapScreenToWorld [(_this select 2), (_this select 3)];
				_clickPos set [2, ((getPos PABST_SPECT_theCamera) select 2)];
				PABST_SPECT_theCamera setPos _clickPos;
			};
		};
	case (1): {//right
			if (PABST_SPECT_autoTrackMap) then {
				PABST_SPECT_autoTrackMap = false;
				ctrlMapAnimClear (_this select 0);
			};
		};
		
	};
};
PABST_SPECT_UI_mapTrack = {
	PABST_SPECT_autoTrackMap = !PABST_SPECT_autoTrackMap;
};
PABST_SPECT_UI_filterAI = {
	PABST_SPECT_filterAI = !PABST_SPECT_filterAI;
};
PABST_SPECT_UI_nameTags = {
	PABST_SPECT_showNameTags = !PABST_SPECT_showNameTags;
};
PABST_SPECT_UI_mapSize = {
	PABST_SPECT_mapPositionIndex = (PABST_SPECT_mapPositionIndex + 1) % (count MAP_POSITION_ARRAY);
	disableSerialization;
	_dialog = uiNamespace getVariable "PABST_SPECT_theDialog";
	(_dialog displayCtrl IDC_LISTBOX_MAP) ctrlSetPosition (MAP_POSITION_ARRAY select PABST_SPECT_mapPositionIndex);
	(_dialog displayCtrl IDC_LISTBOX_MAP) ctrlCommit 1;
};
PABST_SPECT_UI_rightList = {
	_currentlyShown = ctrlShown ((uiNamespace getVariable "PABST_SPECT_theDialog") displayCtrl 2300);
	((uiNamespace getVariable "PABST_SPECT_theDialog") displayCtrl 2300) ctrlShow (!_currentlyShown);
	((uiNamespace getVariable "PABST_SPECT_theDialog") displayCtrl 1602) ctrlSetTextColor (if (!_currentlyShown) then {[0,1,0,1]} else {[1,1,1,1]});
};


PABST_SPECT_UI_onKeyAction = {
	_type 		= _this select 0;
	_pressed	= _this select 1;
	_keyNumber		= (_this select 2) select 1;
	_actionString = "";
	
	if (_type == 'key') then {
		_actionString = switch (_keyNumber) do {
		case (16): {"KEY_Q"};
		case (17): {"KEY_W"};
		case (30): {"KEY_A"};
		case (31): {"KEY_S"};
		case (32): {"KEY_D"};
		case (44): {"KEY_Z"};
		case (42): {"KEY_SHIFT"};
			default {""};
		};
	};
	if (_type == 'mouse') then {
		if (_keyNumber == 1) then {
			_mouseX = (_this select 2) select 2;
			_mouseY = (_this select 2) select 3;
			if ((_mouseX > ((safezoneX) + ((MAP_POSITION_ARRAY select PABST_SPECT_mapPositionIndex) select 2))) || (_mouseY < ((MAP_POSITION_ARRAY select PABST_SPECT_mapPositionIndex) select 1))) then {
				_actionString = "MOUSE_RIGHT";
			};
		};
	};
	if (_actionString == "") exitWith {};
	
	if (_pressed) then {
		if (!(_actionString in PABST_SPECT_keysPressed)) then {
			PABST_SPECT_keysPressed = PABST_SPECT_keysPressed + [_actionString];
		};
	} else {
		PABST_SPECT_keysPressed = PABST_SPECT_keysPressed - [_actionString];
	};
};


PABST_SPECT_UI_onMouseMoving = {
	if ("MOUSE_RIGHT" in PABST_SPECT_keysPressed) then {
		_deltaX = _this select 1;
		_deltaY = _this select 2;
		PABST_SPECT_azimuth = (((PABST_SPECT_azimuth + MOUSE_SPEED * _deltaX) + 360) % 360);
		PABST_SPECT_altitude = ((PABST_SPECT_altitude - MOUSE_SPEED * (safezoneH / safezoneW) * _deltaY) min 89) max -89;
	};
};
PABST_SPECT_UI_onMouseWheel = {
	_wheelMovement = _this select 1;
	switch (PABST_SPECT_cameraMode) do {
	case (CAMERA_MODE_EXTERNAL): {
			PABST_SPECT_attachTo_distance = (((PABST_SPECT_attachTo_distance - _wheelMovement / 2) max 1) min 50);
		};
	case (CAMERA_MODE_FREE): {
			_cameraVector = vectorDir PABST_SPECT_theCamera;
			_cameraPos = getPos PABST_SPECT_theCamera;
			{
				_cameraPos set [_forEachIndex, (_x + 2 * _wheelMovement * (_cameraVector select _forEachIndex))];
			} forEach _cameraPos;
			PABST_SPECT_theCamera setPos _cameraPos;
		};
	};
};
PABST_SPECT_UI_updateCameraMode = {
	_newMode = _this select 0;
	PABST_SPECT_cameraMode = _newMode;
};

PABST_SPECT_UI_onListBoxChange = {
	// systemChat format ["%1 - %2", "PABST_SPECT_UI_onListBoxChange", _this];
	// if (PABST_SPECT_cameraMode == CAMERA_MODE_FREE) exitWith {};
	_index = (_this select 1);
	if ((_index < 0) || (_index >= (count PABST_SPECT_targetsAlive))) exitWith {systemChat format ["(%1) - PABST_SPECT_UI_onListBoxChange bounds", time]};
	_newSelectedUnit = PABST_SPECT_targetsAlive select (_this select 1);
	if (_newSelectedUnit != PABST_SPECT_cameraTarget) then {
		PABST_SPECT_cameraTarget = _newSelectedUnit;
	};
};

PABST_SPECT_UI_updateVisionMode = {
	_newVisionMode = _this select 1;
	PABST_SPECT_visionMode = _newVisionMode;
	switch (PABST_SPECT_visionMode) do {
	case 0: {
			camusenvg false;
			false SetCamUseTi 0;
		};
	case 1: {
			camusenvg true;
			false SetCamUseTi 0;
		};
	case 2: {
			camusenvg false;
			true SetCamUseTi 0;
		};	
	case 3: {
			camusenvg false;
			true SetCamUseTi 1;
		};
	case 4: {
			camusenvg false;
			true SetCamUseTi 7;
		};
	};
};

PABST_SPECT_UI_onEachMapFrame = {
	_theMap = _this select 0;
	_theMap drawIcon ["\A3\ui_f\data\GUI\Rsc\RscDisplayMissionEditor\iconCamera_ca.paa", [0,0,0,1], position PABST_SPECT_theCamera, 20, 20, direction PABST_SPECT_theCamera, "", 0];
	{
		_xText = if ((isPlayer _x) && (leader group _x == _x)) then {groupID (group _x)} else {""};
		_xIcon = gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "icon");
		_xColor = [side (group _x)] call PABST_SPECT_util_getColor;
		_theMap drawIcon [_xIcon, _xColor, position (vehicle _x), 20, 20, direction (vehicle _x), _xText, 0];
	} forEach allunits;
};

PABST_SPECT_util_getColor = {
	_theSide = _this select 0;
	switch (_theSide) do {
	case (west): {[0,0.45,0.9,1]};
	case (east): {[0.75,0,0,1]};
	case (resistance): {[0,0.75,0,1]};
	case (civilian): {[0.6,0,0.75,1]};
		default {[1,1,1,1]};
	};
};

_this call PABST_SPECT_init;