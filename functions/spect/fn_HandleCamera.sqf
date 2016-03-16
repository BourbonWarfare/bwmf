f_cam_mouseCord params ["_x","_y"];
f_cam_MouseButton params["_leftButton","_rightButton"];

f_cam_mouseDeltaX = f_cam_mouseLastX - (_x);
f_cam_mouseDeltaY = f_cam_mouseLastY - (_y);

if (_rightButton && !_leftButton) then {
  f_cam_angleX = (f_cam_angleX - (f_cam_mouseDeltaX*360));
  f_cam_angleY = (f_cam_angleY + (f_cam_mouseDeltaY*180)) min 89 max -89;
};

if (f_cam_ctrl_down && _rightButton && _leftButton) then {
  f_cam_fovZoom = 0.7;
};

f_cam_mouseLastX = _x;
f_cam_mouseLastY = _y;
