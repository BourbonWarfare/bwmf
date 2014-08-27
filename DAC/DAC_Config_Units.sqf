//////////////////////////////
//    Dynamic-AI-Creator    //
//    Version 2.1 - 2009    //
//--------------------------//
//    DAC_Config_Units      //
//--------------------------//
//    Script by Silola      //
//    silola@freenet.de     //
//////////////////////////////

private ["_TypNumber","_TempArray","_Unit_Pool_S","_Unit_Pool_V","_Unit_Pool_T","_Unit_Pool_A"];
_TypNumber = _this select 0;_TempArray = [];

switch (_TypNumber) do
{
//-------------------------------------------------------------------------------------------------
// REDFOR (A3)
  case 0:
  {
    _Unit_Pool_S = ["O_crew_F","O_Helipilot_F","O_Soldier_SL_F","O_soldier_AR_F","O_soldier_AR_F","O_soldier_exp_F","O_soldier_GL_F","O_soldier_GL_F","O_soldier_M_F","O_medic_F","O_soldier_AA_F","O_soldier_repair_F","O_Soldier_F","O_Soldier_F","O_soldier_LAT_F","O_soldier_LAT_F","O_soldier_lite_F","O_soldier_TL_F","O_soldier_TL_F"];
    _Unit_Pool_V = ["O_MRAP_02_F","O_MRAP_02_gmg_F","O_MRAP_02_hmg_F"];
    _Unit_Pool_T = ["O_MBT_02_arty_F","I_APC_Wheeled_03_cannon_F","O_APC_Tracked_02_cannon_F","O_APC_Wheeled_02_rcws_F","O_MBT_02_cannon_F","O_APC_Tracked_02_AA_F"];
  _Unit_Pool_A = ["O_Heli_Attack_02_F","O_Heli_Light_02_F","O_Heli_Light_02_armed_F"];
  };
//-------------------------------------------------------------------------------------------------
// BLUFOR (A3)
  case 1:
  {
    _Unit_Pool_S = ["B_crew_F","B_Helipilot_F","B_Soldier_SL_F","B_soldier_AR_F","B_soldier_AR_F","B_soldier_exp_F","B_soldier_GL_F","B_soldier_GL_F","B_soldier_AA_F","B_soldier_M_F","B_medic_F","B_soldier_repair_F","B_Soldier_F","B_Soldier_F","B_soldier_LAT_F","B_soldier_LAT_F","B_soldier_lite_F","B_soldier_TL_F","B_soldier_TL_F"];
    _Unit_Pool_V = ["B_MRAP_01_F","B_MRAP_01_gmg_F","B_MRAP_01_hmg_F"];
    _Unit_Pool_T = ["B_APC_Wheeled_01_cannon_F","B_APC_Tracked_01_AA_F","B_APC_Tracked_01_rcws_F","B_MBT_01_cannon_F","B_MBT_01_arty_F","B_MBT_01_mlrs_F"];
    _Unit_Pool_A = ["B_Heli_Light_01_armed_F","B_Heli_Transport_01_camo_F","B_Heli_Light_01_F"];
  };
//-------------------------------------------------------------------------------------------------
// Independent (A3)
  case 2:
  {
    _Unit_Pool_S = ["I_crew_F","I_helipilot_F","I_officer_F","I_Soldier_LAT_F","I_Soldier_LAT_F","I_Soldier_AA_F","I_Soldier_M_F","I_Soldier_GL_F","I_Soldier_exp_F","I_engineer_F","I_medic_F","I_Soldier_AR_F","I_Soldier_A_F"];
    _Unit_Pool_V = ["I_Truck_02_covered_F","I_Truck_02_transport_F","I_MRAP_03_hmg_F","I_MRAP_03_gmg_F","I_MRAP_03_F"];
    _Unit_Pool_T = ["I_MBT_03_cannon_F","I_APC_tracked_03_cannon_F","I_APC_Wheeled_03_cannon_F"];
    _Unit_Pool_A = ["I_Heli_light_03_F"];
  };
//-------------------------------------------------------------------------------------------------
// Civilians (A3)
  case 3:
  {
    _Unit_Pool_S = ["C_man_1","C_man_1","C_man_1","C_man_polo_1_F","C_man_polo_2_F","C_man_polo_3_F","C_man_polo_4_F","C_man_polo_5_F","C_man_polo_6_F","C_man_1_1_F","C_man_1_2_F","C_man_1_3_F"];
    _Unit_Pool_V = ["C_Van_01_box_F","C_Van_01_transport_F","C_Offroad_01_F","C_Hatchback_01_sport_F","C_Hatchback_01_F"];
    _Unit_Pool_T = ["C_Van_01_box_F","C_Van_01_transport_F","C_Offroad_01_F","C_Hatchback_01_sport_F","C_Hatchback_01_F"];
    _Unit_Pool_A = [];
  };
  //-------------------------------------------------------------------------------------------------
    // FIA BLUFOR (A3) (Uses Nato units for armor and choppers)
  case 4:
  {
    _Unit_Pool_S = ["B_G_engineer_F","B_G_medic_F","B_G_officer_F","B_G_Soldier_A_F","B_G_Soldier_AR_F","B_G_Soldier_exp_F","B_G_Soldier_F","B_G_Soldier_GL_F","B_G_Soldier_LAT_F","B_G_Soldier_lite_F","B_G_Soldier_M_F","B_G_Soldier_SL_F","B_G_Soldier_TL_F"];
    _Unit_Pool_V = ["B_G_Offroad_01_F","B_G_Offroad_01_armed_F","B_G_Van_01_transport_F","B_G_Van_01_fuel_F"];
    _Unit_Pool_T = ["B_APC_Wheeled_01_cannon_F","B_APC_Tracked_01_AA_F","B_APC_Tracked_01_rcws_F","B_MBT_01_cannon_F","B_MBT_01_arty_F","B_MBT_01_mlrs_F"];
    _Unit_Pool_A = ["B_Heli_Light_01_armed_F","B_Heli_Transport_01_camo_F","B_Heli_Light_01_F"];
  };

  // Middle-east Rebels (CAF_AG)
  case 5:
  {
    _Unit_Pool_S = ["CAF_AG_ME_T_AK47","CAF_AG_ME_T_AK47","CAF_AG_ME_T_AK47","CAF_AG_ME_T_AK47","CAF_AG_ME_T_RPK74","CAF_AG_ME_T_RPG","CAF_AG_ME_T_PKM","CAF_AG_ME_T_AK47","CAF_AG_ME_T_AK47","CAF_AG_ME_T_RPG","CAF_AG_ME_T_AK47"];
    _Unit_Pool_V = ["CAF_AG_ME_T_Offroad_armed_01","CAF_AG_ME_T_Offroad_armed_01","CAF_AG_ME_T_van_01"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };

   // Syrian Arab Army (MEC, Woodland Camo, AK weapons)
  case 6:
  {
    _Unit_Pool_S = ["SAA_Crewman","SAA_Pilot","SAA_Officer","SAA_Rifleman","SAA_Rifleman","SAA_Rifleman","SAA_AutomaticRifleman","SAA_Grenadier","SAA_RPG7Grenadier""SAA_Medic","SAA_ATSoldier","SAA_RPG7Soldier"];
    _Unit_Pool_V = ["SAA_Offroad_01","SAA_Offroad_armed_01"];
    _Unit_Pool_T = ["SAA_T72","SAA_T55","SAA_BMP1","SAA_BMP2","SAA_ZSU23"];
    _Unit_Pool_A = ["SAA_KA60","SAA_MI48"];
  };

      // Quds (MEC, G3/MG3 with MRCO sights)
  case 7:
  {
    _Unit_Pool_S = ["QUD_Crewman","QUD_Pilot","QUD_Officer","QUD_Rifleman","QUD_Rifleman","QUD_Rifleman","QUD_SquadLeader","QUD_AutomaticRifleman","QUD_ATSoldier","QUD_Engineer","QUD_MachineGunner","QUD_Rifleman","QUD_Rifleman","QUD_Grenadier","QUD_RPG7Grenadier","QUD_Medic","QUD_ATSoldier","QUD_RPG7Soldier"];
    _Unit_Pool_V = ["QUD_Offroad_01","QUD_Offroad_armed_01","QUD_Offroad_armed_01"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };

   // Generic Middle East (MEC, Desert with AK Weapons)
  case 8:
  {
    _Unit_Pool_S = ["GME_Crewman","GME_Pilot","GME_Officer","GME_Rifleman","GME_Rifleman","GME_Rifleman","GME_Rifleman","GME_SquadLeader","GME_AutomaticRifleman","GME_AutomaticRifleman","GME_Rifleman","GME_MachineGunner","GME_ATSoldier","GME_Engineer","GME_Grenadier","GME_RPG7Grenadier","GME_Medic","GME_ATSoldier","GME_RPG7Soldier"];
    _Unit_Pool_V = ["GME_Offroad_01","GME_Offroad_armed_01","GME_Offroad_01","GME_Offroad_armed_01","GME_Offroad_armed_01","GME_Kamaz_transport","GME_Kamaz_covered"];
    _Unit_Pool_T = ["GME_T55","GME_T55","GME_T72","GME_BMP1","GME_BMP1","GME_BMP1","GME_BMP2","GME_BMP2","GME_BMP2","GME_ZSU23"];
    _Unit_Pool_A = ["GME_KA60","GME_KA60","GME_KA60","GME_MI48"];
  };

  // Middle East Irregulars (INDFOR)
  case 9:
  {
    _Unit_Pool_S = ["DRI_Crewman","DRI_Pilot","DRI_Officer","DRI_Rifleman","DRI_Rifleman","DRI_Rifleman","DRI_Rifleman","DRI_SquadLeader","DRI_AutomaticRifleman","DRI_AutomaticRifleman","DRI_Rifleman","DRI_MachineGunner","DRI_ATSoldier","DRI_Engineer","DRI_Grenadier","DRI_RPG7Grenadier","DRI_Medic","DRI_ATSoldier","DRI_RPG7Soldier"];
    _Unit_Pool_V = ["dri_Offroad_01_F","dri_Offroad_01_F","dri_Offroad_01_armed_F","dri_Offroad_01_armed_F","dri_Offroad_01_armed_F","dri_Truck_02_logistic_F","dri_Truck_02_covered_F"];
    _Unit_Pool_T = [];
    _Unit_Pool_A = [];
  };
//-------------------------------------------------------------------------------------------------
  Default
  {
    if(DAC_Basic_Value != 5) then
    {
      DAC_Basic_Value = 5;publicvariable "DAC_Basic_Value",
      hintc "Error: DAC_Config_Units > No valid config number";
    };
    if(true) exitwith {};
  };
};

if(count _this == 2) then
{
  _TempArray = _TempArray + [_Unit_Pool_S,_Unit_Pool_V,_Unit_Pool_T,_Unit_Pool_A];
}
else
{
  _TempArray = _Unit_Pool_V + _Unit_Pool_T + _Unit_Pool_A;
};
_TempArray