//////////////////////////////////////////////////////
//
//             F3 - RESPAWN SETTINGS
//         Credits: Snippers, Head & 1Tac (AACO is going to steal a bit of credit here too)
//         To open the respawn dialog just call from the debug console (even in spectator):
//         createDialog "respawnMenuDialog";
//
//////////////////////////////////////////////////////

// These are the roles that area shown in the respawn GUI.
// Format: AssignGear Role, GUI Display Name
// Group name, SR net, LR net
respawnMenuGroupNames = [
  ["", 1, 1],
  ["ASL", 1, 1],
  ["A1", 1, 1],
  ["A2", 1, 1],
  ["BSL", 2, 1],
  ["B1", 2, 1],
  ["B2", 2, 1],
  ["CSL", 3, 1],
  ["C1", 3, 1],
  ["C2", 3, 1],
  ["1PLT", 4, 1],
  ["DSL", 6, 2],
  ["D1", 6, 2],
  ["D2", 6, 2],
  ["ESL", 7, 2],
  ["E1", 7, 2],
  ["E2", 7, 2],
  ["FSL", 8, 2],
  ["F1", 8, 2],
  ["F2", 8, 2],
  ["2PLT", 9, 2],
  ["MMG1", 10, 4],
  ["MMG2", 10, 4],
  ["MAT1", 10, 4],
  ["MAT2", 10, 4],
  ["MSAM1", 10, 4],
  ["HMG", 10, 4],
  ["HAT", 10, 4],
  ["TH1", 12, 4],
  ["TH2", 12, 4],
  ["TH3", 12, 4],
  ["TH4", 12, 4],
  ["IFV1", 14, 4],
  ["IFV2", 14, 4],
  ["IFV3", 14, 4],
  ["IFV4", 14, 4],
  ["AH1", 13, 4],
  ["AH2", 13, 4],
  ["TNK1", 15, 4],
  ["TNK2", 15, 4],
  ["TNK3", 15, 4],
  ["TNK4", 15, 4]
];

respawnMenuRoles = [
  ["CO", "Commander"],
  ["SL", "Squad Leader"],
  ["M", "Squad Medic"],
  ["FTL", "Fireteam Leader"],
  ["AR", "Automatic Rifleman"],
  ["AAR", "Assistant Automatic Rifleman"],
  ["RAT", "Rifleman: Antitank"],
  ["R", "Rifleman (MSV)"],
  ["R1", "Rifleman 1"],
  ["R2", "Rifleman 2"],
  ["GR", "Grenadier"],
  ["AGR", "Assistant Grenadier"],
  ["S", "Marksman"],
  ["VD", "Squad Driver"],
  ["VG", "Squad Gunner"],
  ["MMGG", "MMG - Gunner"],
  ["MMGAG", "MMG - Assistant"],
  ["MATG", "MAT - Gunner"],
  ["MATAG", "MAT - Assistant"],
  ["MSAMG", "MSAM - Gunner"],
  ["MSAMAG", "MSAM - Assistant"],
  ["VC", "Crewman - Vehicle Commander"],
  ["C", "Crewman - Vehicle Crew"],
  ["D", "Crewman - Vehicle Driver"],
  ["PP", "Aircrewman - Pilot"],
  ["PCC", "Aircrewman - Crew Chief (Repair)"],
  ["SSL","Special Squad Leader"],
  ["SM","Special Corpsman"],
  ["SFTL","Special Fireteam Leader"],
  ["SAR","Special Autorifleman"],
  ["SAAR","Special Ass Autorifleman"],
  ["SRAT","Special Rifleman AT"],
  ["HMGG","Heavy Machinegunner"],
  ["HMGAG","Heavy Ass Machinegunner"],
  ["HATG","Heavy AT Gunner"],
  ["HATAG","Heavy AT Assist"]
];

// Factions that will appear in the respawn GUI.
// These MUST be defined in CfgFactionClasses
respawnMenuFactions = [
  ["blu_f", "NATO"],
  ["opf_f", "CSAT"],
  ["ind_f", "AAF"],
  ["rhs_faction_msv", "MSV"],
  ["rhs_faction_usmc_wd","USMC"],
  ["rhs_faction_usn","USN - Corpsman"]
];

// Respawn Classes
// This function is designed to choose the classname of a new unit based on the faction and specified unit type.
// This is important as the ability to perform certain tasks can be derived from being a certain class.
fn_respawnSelectClass = {
  params["_faction","_typeOfUnit"];

  //Setup a default value.
  _type = "C_man_1";
  switch (_faction) do {
    case "blu_f": {
      switch (_typeOfUnit) do {
        case "CO": { _type = "B_officer_F"};
        case "SL": { _type = "B_Soldier_SL_F"};
        case "M": { _type = "B_medic_F"};
        case "FTL": { _type = "B_Soldier_TL_F"};
        case "AR": { _type = "B_soldier_AR_F"};
        case "AAR": { _type = "B_Soldier_AAR_F"};
        case "RAT": { _type = "B_Soldier_LAT_F"};
        case "MMGG": { _type = "B_support_MG_F"};
        case "MMGAG": { _type = "B_Soldier_A_F"};
        case "MATG": { _type = "B_soldier_AT_F"};
        case "MATAG": { _type = "B_soldier_AAT_F"};
        case "MSAMG": { _type = "B_soldier_AA_F"};
        case "MSAMAG": { _type = "B_soldier_AAA_F"};
        case "VC": { _type = "B_crew_F"};
        case "C": { _type = "B_crew_F"};
        case "D": { _type = "B_soldier_repair_F"};
        case "PP": { _type = "B_Helipilot_F"};
        case "PCC": { _type = "B_soldier_repair_F"};
        default  { _type = "B_Soldier_F"; };
      };
    };
    case "opf_f":{
      switch (_typeOfUnit) do {
        case "CO": { _type = "O_officer_F"};
        case "SL": { _type = "O_Soldier_SL_F"};
        case "M": { _type = "O_medic_F"};
        case "FTL": { _type = "O_Soldier_TL_F"};
        case "AR": { _type = "O_soldier_AR_F"};
        case "AAR": { _type = "O_Soldier_AAR_F"};
        case "RAT": { _type = "O_Soldier_LAT_F"};
        case "MMGG": { _type = "O_support_MG_F"};
        case "MMGAG": { _type = "O_Soldier_A_F"};
        case "MATG": { _type = "O_soldier_AT_F"};
        case "MATAG": { _type = "O_soldier_AAT_F"};
        case "MSAMG": { _type = "O_soldier_AA_F"};
        case "MSAMAG": { _type = "O_soldier_AAA_F"};
        case "VC": { _type = "O_crew_F"};
        case "C": { _type = "O_crew_F"};
        case "D": { _type = "O_soldier_repair_F"};
        case "PP": { _type = "O_Helipilot_F"};
        case "PCC": { _type = "O_soldier_repair_F"};
        default  { _type = "O_Soldier_F"; };
      };
    };
    case "ind_f": {
      switch (_typeOfUnit) do {
        case "CO": { _type = "I_officer_F"};
        case "SL": { _type = "I_Soldier_SL_F"};
        case "M": { _type = "I_medic_F"};
        case "FTL": { _type = "I_Soldier_TL_F"};
        case "AR": { _type = "I_soldier_AR_F"};
        case "AAR": { _type = "I_Soldier_AAR_F"};
        case "RAT": { _type = "I_Soldier_LAT_F"};
        case "MMGG": { _type = "I_support_MG_F"};
        case "MMGAG": { _type = "I_Soldier_A_F"};
        case "MATG": { _type = "I_soldier_AT_F"};
        case "MATAG": { _type = "I_soldier_AAT_F"};
        case "MSAMG": { _type = "I_soldier_AA_F"};
        case "MSAMAG": { _type = "I_soldier_AAA_F"};
        case "VC": { _type = "I_crew_F"};
        case "C": { _type = "I_crew_F"};
        case "D": { _type = "I_soldier_repair_F"};
        case "PP": { _type = "I_Helipilot_F"};
        case "PCC": { _type = "I_soldier_repair_F"};
        default  { _type = "I_Soldier_F"; };
      };
    };
    case "rhs_faction_msv" : {
      switch (_typeOfUnit) do {
        case "CO": { _type = "rhs_msv_officer"};
        case "SL": { _type = "rhs_msv_sergeant"};
        case "M": { _type = "rhs_msv_medic"};
        case "FTL": { _type = "rhs_msv_junior_sergeant"};
        case "AR": { _type = "rhs_msv_machinegunner"};
        case "GR": { _type = "rhs_msv_at"};
        case "AGR": { _type = "rhs_msv_strelok_rpg_assist"};
        case "S": { _type = "rhs_msv_marksman"};
        case "VD": { _type = "rhs_msv_engineer"};
        case "VG": { _type = "rhs_msv_crew"};
        case "MMGG": { _type = "rhs_msv_machinegunner"};
        case "MMGAG": { _type = "rhs_msv_machinegunner_assistant"};
        case "MATG": { _type = "rhs_msv_at"};
        case "MATAG": { _type = "rhs_msv_strelok_rpg_assist"};
        case "VC": { _type = "rhs_msv_crew"};
        case "C": { _type = "rhs_msv_crew"};
        case "D": { _type = "rhs_msv_engineer"};
        case "PP": { _type = "rhs_pilot_transport_heli"};
        case "PCC": { _type = "rhs_msv_engineer"};
        default  { _type = "rhs_msv_rifleman"; };
      };
    };
    case "rhs_faction_usmc_wd" : {
      switch (_typeOfUnit) do {
        case "CO": { _type = "rhsusf_usmc_marpat_wd_officer"};
        case "SL": { _type = "rhsusf_usmc_marpat_wd_squadleader"};
        case "FTL": { _type = "rhsusf_usmc_marpat_wd_teamleader"};
        case "AR": { _type = "rhsusf_usmc_marpat_wd_autorifleman_m249"};
        case "AAR": { _type = "rhsusf_usmc_marpat_wd_autorifleman_m249_ass"};
        case "RAT": { _type = "rhsusf_usmc_marpat_wd_riflemanat"};
        case "MMGG": { _type = "rhsusf_usmc_marpat_wd_machinegunner"};
        case "MMGAG": { _type = "rhsusf_usmc_marpat_wd_machinegunner_ass"};
        case "MATG": { _type = "rhsusf_usmc_marpat_wd_smaw"};
        case "MATAG": { _type = "rhsusf_usmc_marpat_wd_javelin"};
        case "MSAMG": { _type = "rhsusf_usmc_marpat_wd_stinger"};
        case "VC": { _type = "rhsusf_usmc_marpat_wd_combatcrewman"};
        case "G": { _type = "rhsusf_usmc_marpat_wd_crewman"};
        case "D": { _type = "rhsusf_usmc_marpat_wd_engineer"};
        case "PP": { _type = "rhsusf_usmc_marpat_wd_helipilot"};
        case "PCC": { _type = "rhsusf_usmc_marpat_wd_helicrew"};
        case "SSL": { _type = "rhsusf_usmc_recon_marpat_wd_teamleader"};
        case "SFTL": { _type = "rhsusf_usmc_recon_marpat_wd_teamleader_fast"};
        case "SAR": { _type = "rhsusf_usmc_recon_marpat_wd_machinegunner"};
        case "SAAR": { _type = "rhsusf_usmc_recon_marpat_wd_marksman"};
        case "SRAT": { _type = "rhsusf_usmc_recon_marpat_wd_rifleman_at"};
        case "HMGG": { _type = "rhsusf_usmc_lar_marpat_wd_machinegunner"};
        case "HMGAG": { _type = "rhsusf_usmc_lar_marpat_wd_marksman"};
        case "HATG": { _type = "rhsusf_usmc_lar_marpat_wd_crewman"};
        case "HATAG": { _type = "rhsusf_usmc_lar_marpat_wd_combatcrewman"};
        default  { _type = "rhsusf_usmc_marpat_wd_rifleman"; };
      };
    };
    case "rhs_faction_usn" : {
      switch (_typeOfUnit) do {
        case "M": { _type = "rhsusf_navy_marpat_wd_medic"};
        case "SM": { _type = "rhsusf_navy_sarc_w_fast"};
        default  { _type = "rhsusf_navy_marpat_wd_medic"; };
      };
    };
    default {};
  };

  // Return the value of _type
  _type
};
