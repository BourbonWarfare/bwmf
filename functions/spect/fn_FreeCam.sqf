private ["_commitTime","_delta","_zLevel","_pos","_visPos","_mode","_currPos","_mX","_mY","_mZ","_accel","_accelshift","_scroll","_rX","_y","_z"];
// F3 - Spectator Script
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// Menu shown/hidden
if (abs (f_cam_menuShownTime - time) <= 0.1 && !f_cam_menuShown) then {// disable due to being a bit wonky
  [true] spawn f_fnc_showMenu;
};
if (abs (f_cam_menuShownTime - time) >= 1 && f_cam_menuShown) then { // disable due to being a bit wonky
  [false] spawn f_fnc_showMenu;
};

// if freemode.
f_cam_camera camSetFov f_cam_fovZoom;
switch (f_cam_mode) do {
  case (0): { // first person
    cameraEffectEnableHUD true;
    _commitTime = ((1.0 - ((speed vehicle f_cam_curTarget)/65))/3) max 0.1;
    _delta = (-(2*(0.3 max f_cam_zoom)));
    _zLevel = sin(f_cam_angleY)*(2*(0.3 max f_cam_zoom));
    _visPos = visiblePositionASL f_cam_curTarget;
    if (!(surfaceIsWater _visPos)) then {_visPos = ASLtoATL (_visPos)};
    f_cam_fakecamera camSetPos [_visPos select 0,_visPos select 1,(_visPos select 2) + 1.5];
    f_cam_fakecamera camCommit _commitTime;
    f_cam_camera camSetRelPos[(sin(f_cam_angleX)*_delta)*cos(f_cam_angleY), (cos(f_cam_angleX)*_delta)*cos(f_cam_angleY), _zLevel];
    f_cam_camera camCommit _commitTime;
  };
  case (1): { // third person
    if (vehicle cameraOn != cameraOn) then {
      _mode = "internal";
      if (gunner (vehicle cameraon) == cameraon) then { _mode = "gunner" };
      if (driver (vehicle cameraon) == cameraon) then { _mode = "gunner" };
      if (commander (vehicle cameraon) == cameraon) then { _mode = "gunner" };
      vehicle cameraOn switchCamera _mode;
    };
    if (vehicle cameraOn == cameraOn && !f_cam_ads) then {
      cameraon switchCamera "internal";
    };
  };
  case (3): { // free
    _delta = (time - f_cam_timestamp) * 10;
    f_cam_freecamera camSetFov f_cam_fovZoom;
    _currPos = getposASL f_cam_freecamera;
    _mX = 0;
    _mY = 0;
    _mZ = 0;
    _height = 0 max (((getPosATL f_cam_freecamera) select 2) - 2);
    _accel = 0.3 max (_height / 5); // 0.8
    _accelshift = _accel * 4.25;//2;
    if (f_cam_freecam_buttons select 0) then { // W
      if (f_cam_shift_down) then { _mY = _accelshift; }
      else { _mY = _accel; };
    };
    if (f_cam_freecam_buttons select 1) then { // S
      if (f_cam_shift_down) then { _mY = -_accelshift; }
      else { _mY = -_accel; };
    };
    if(f_cam_freecam_buttons select 2) then { // A
      if (f_cam_shift_down) then { _mX = -_accelshift; }
      else { _mX = -_accel; };
    };

    if (f_cam_freecam_buttons select 3) then { // D
      if (f_cam_shift_down) then { _mX = _accelshift; }
      else { _mX = _accel; };
    };
    if (f_cam_freecam_buttons select 4) then { // Q
      _scroll = 1 * ((sqrt _height) / 2);
      if (abs _scroll < 0.1) then {
        if (_scroll < 0) then { _scroll = -0.1; }
        else { _scroll = 0.1; };
      };
      _mZ = _scroll;
    };
    if (f_cam_freecam_buttons select 5) then { // Z
      _scroll = -1*((sqrt _height)/2);
      if (abs _scroll < 0.1) then {
        if (_scroll < 0) then { _scroll = -0.1;}
        else { _scroll = 0.1;};
      };
      _mZ = _scroll;
    };
    if (f_cam_scrollHeight < 0 || f_cam_scrollHeight > 0) then {
      _scroll = -f_cam_scrollHeight * _delta * 3;
      f_cam_scrollHeight = _scroll;
      if(f_cam_scrollHeight < 0.2 && f_cam_scrollHeight > -0.2) then {
        f_cam_scrollHeight = 0;
      };
      _scroll = _scroll*((sqrt _height)/2);
      if (abs _scroll < 0.1) then {
        if (_scroll < 0) then { _scroll = -0.1; }
        else { _scroll = 0.1; };
      };
      _mZ = _mZ + _scroll;
    };

    _mX = _delta * _mX;
    _mY = _delta * _mY;

    _x = (_currPos select 0) + (_mX * (cos f_cam_angleX)) + (_mY * (sin f_cam_angleX));
    _y = (_currPos select 1) - (_mX * (sin f_cam_angleX)) + (_mY * (cos f_cam_angleX));
    _newHeight = (getTerrainHeightASL [_x, _y]);
    _z = ((_currPos select 2) + _mZ) min (650 + _newHeight);
    f_cam_freecamera setPosASL [_x, _y, _z max _newHeight];
    f_cam_freecamera setDir f_cam_angleX;
    [f_cam_freecamera, f_cam_angleY, 0] call BIS_fnc_setPitchBank;
    f_cam_scrollHeight = 0;
    f_cam_timestamp = time;
  };
};

cameraEffectEnableHUD true;
showCinemaBorder false;
