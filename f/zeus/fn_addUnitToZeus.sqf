if (isServer) then {
  if (!isNil "PABST_ADMIN_zeusModule") then {
    PABST_ADMIN_zeusModule addCuratorEditableObjects [_this, true];
  }
  else {
    _this spawn {
      waitUntil { !isNil "PABST_ADMIN_zeusModule" || time > 60 };
      PABST_ADMIN_zeusModule addCuratorEditableObjects [_this, true];
    };
  };
};
