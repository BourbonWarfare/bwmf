// ACE Settings: (see http://forums.bourbonwarfare.com/viewtopic.php?f=8&t=2026)
class ACE_Settings {
  /*   Run potato briefings at start up   */
  class potato_briefing_brief_addCredits {
    typeName = "BOOL";
    value = 1;
  };
  class potato_briefing_brief_addOrbat {
    typeName = "BOOL";
    value = 1;
  };

  /*   Enable potato markers   */
  class potato_markers_groupAndUnitEnabled {
    typeName = "BOOL";
    value = 1;
  };
  class potato_markers_intraFireteamEnabled {
    typeName = "BOOL";
    value = 1;
  };

  /*   Start safestart on mission start   */
  class potato_safeStart_enabled {
    typeName = "BOOL";
    value = 1;
  };

  /*   Enable/disable VCOM   */
  class potato_aiFrameworks_vcom_enabled {
    typeName = "BOOL";
    value = 0;
  };

  /*   Setup AI skills   */
  class potato_missionModules_aiSkill_set {
    typeName = "BOOL";
    value = 1;
  };
  class potato_missionModules_aiSkill_aimingAccuracy_min {
    typeName = "SCALAR";
    value = 0.25;
  };
  class potato_missionModules_aiSkill_aimingAccuracy_max {
    typeName = "SCALAR";
    value = 0.60;
  };
  class potato_missionModules_aiSkill_aimingShake_min {
    typeName = "SCALAR";
    value = 0.6;
  };
  class potato_missionModules_aiSkill_aimingShake_max {
    typeName = "SCALAR";
    value = 0.9;
  };
  class potato_missionModules_aiSkill_aimingSpeed_min {
    typeName = "SCALAR";
    value = 0.3;
  };
  class potato_missionModules_aiSkill_aimingSpeed_max {
    typeName = "SCALAR";
    value = 0.7;
  };
  class potato_missionModules_aiSkill_commanding_min {
    typeName = "SCALAR";
    value = 0.7;
  };
  class potato_missionModules_aiSkill_commanding_max {
    typeName = "SCALAR";
    value = 1;
  };
  class potato_missionModules_aiSkill_courage_min {
    typeName = "SCALAR";
    value = 0.8;
  };
  class potato_missionModules_aiSkill_courage_max {
    typeName = "SCALAR";
    value = 1;
  };
  class potato_missionModules_aiSkill_general_min {
    typeName = "SCALAR";
    value = 0.7;
  };
  class potato_missionModules_aiSkill_general_max {
    typeName = "SCALAR";
    value = 1;
  };
  class potato_missionModules_aiSkill_reloadSpeed_min {
    typeName = "SCALAR";
    value = 0.5;
  };
  class potato_missionModules_aiSkill_reloadSpeed_max {
    typeName = "SCALAR";
    value = 0.8;
  };
  class potato_missionModules_aiSkill_spotDistance_min {
    typeName = "SCALAR";
    value = 0.8;
  };
  class potato_missionModules_aiSkill_spotDistance_max {
    typeName = "SCALAR";
    value = 1;
  };
  class potato_missionModules_aiSkill_spotTime_min {
    typeName = "SCALAR";
    value = 0.3;
  };
  class potato_missionModules_aiSkill_spotTime_max {
    typeName = "SCALAR";
    value = 0.7;
  };
};
