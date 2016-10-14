params ["_player","_isJip"];

// ====================================================================================
// SCMF - JIP Units Auto-teleportation
// Credits: Bismarck
if (_isJip && !isNil "PABST_ADMIN_SAFESTART_public_isSafe" && {!PABST_ADMIN_SAFESTART_public_isSafe}) then {
  [] execVM "f\common\f_JIP_autoTeleport.sqf";
};
// ====================================================================================
