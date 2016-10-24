params["_control","_button"];

switch (_button) do {
  case 0: { // Toggle AI BUTTON
    f_cam_playersOnly = !f_cam_playersOnly;
    f_cam_listUnits = [];
    lbClear 2103;
    if (f_cam_playersOnly) then { _control ctrlSetText "Players only"; }
    else { _control ctrlSetText "All units"; };
  };
  case 1: { // Side Filter
    // 0 = ALL, 1 = BLUFOR , 2 = OPFOR, 3 = INDFOR , 4 = Civ
    f_cam_sideButton = f_cam_sideButton + 1;
    if (f_cam_sideButton > 4) then { f_cam_sideButton = 0 };
    f_cam_side = switch (f_cam_sideButton) do {
      case 0: {nil};
      case 1: {west};
      case 2: {east};
      case 3: {independent};
      case 4: {civilian};
    };
    _control ctrlSetText (f_cam_sideNames select f_cam_sideButton);
    f_cam_listUnits = [];
    lbClear 2103;
  };
  case 2: {
    f_cam_toggleTags = !f_cam_toggleTags;
  };
  case 3: { // Third/First Person Button
    [] call f_cam_ToggleFPCamera;
    if (f_cam_toggleCamera) then { _control ctrlSetText "Third Person"; }
    else { _control ctrlSetText "First Person"; };
  };
  case 4: {
      0 spawn {
          private ["_spectMuted"];

          _spectMuted = false;
          if (!isNil "ACRE_MUTE_SPECTATORS") then { _spectMuted = ACRE_MUTE_SPECTATORS; };

          _camera = f_cam_camera;

          [] call F_fnc_ForceExit;
          ACRE_MUTE_SPECTATORS = true;

          _camera call bis_fnc_cameraOld;
          waituntil {sleep 0.1; isNil "BIS_DEBUG_CAM"};

          ACRE_MUTE_SPECTATORS = _spectMuted;
          [player,objNull,player,0,true] spawn F_fnc_CamInit;
      };
  };
  case 5: { // Tracers/Notracers Button
      [] call f_cam_ToggleTracers;
      if (f_cam_toggleTracersV) then {
          _control ctrlSetText "Tracers On";
      } else {
          _control ctrlSetText "Tracers Off";
      };
  };
  case 6: {
      [] call f_cam_AdminZeus;
  }
};
