//////////////////////////////////////////////////////
//
//             F3 - RESPAWN SETTINGS
//         Credits: Snippers, Head & 1Tac (AACO is going to steal a bit of credit here too)
//         To open the respawn dialog just call from the debug console (even in spectator):
//         createDialog "respawnMenuDialog";
//
//////////////////////////////////////////////////////

#define UNK "\A3\ui_f\data\map\markers\nato\b_unknown.paa"
#define INF "\A3\ui_f\data\map\markers\nato\b_inf.paa"
#define HQ "\A3\ui_f\data\map\markers\nato\b_hq.paa"
#define MMG "\A3\ui_f\data\map\markers\nato\b_support.paa"
#define MAT "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"
#define IFV "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"
#define TNK "\A3\ui_f\data\map\markers\nato\b_armor.paa"
#define AIR "\A3\ui_f\data\map\markers\nato\b_air.paa"

#define RED [0.9,0,0,1]
#define BLUE [0,0,1,1]
#define GREEN [0,0.8,0,1]
#define WHITE [1,1,1,1]
#define ORANGE [1,0.647,0,1]

// These are the roles that area shown in the respawn GUI.
// Format: AssignGear Role, GUI Display Name
// Group name, SR net, LR net
respawnMenuGroupNames = [
  ["",1,1,UNK,WHITE],
  ["ASL",1,1,HQ,RED],
  ["A1",1,1,INF,RED],
  ["A2",1,1,INF,RED],
  ["BSL",2,1,HQ,BLUE],
  ["B1",2,1,INF,BLUE],
  ["B2",2,1,INF,BLUE],
  ["CSL",3,1,HQ,GREEN],
  ["C1",3,1,INF,GREEN],
  ["C2",3,1,INF,GREEN],
  ["1PLT",4,1,HQ,ORANGE],
  ["DSL",5,2,HQ,RED],
  ["D1",5,2,INF,RED],
  ["D2",5,2,INF,RED],
  ["ESL",6,2,HQ,BLUE],
  ["E1",6,2,INF,BLUE],
  ["E2",6,2,INF,BLUE],
  ["FSL",7,2,HQ,GREEN],
  ["F1",7,2,INF,GREEN],
  ["F2",7,2,INF,GREEN],
  ["1PLT",8,2,HQ,ORANGE],
  ["MMG1",12,4,MMG,ORANGE],
  ["MMG2",12,4,MMG,ORANGE],
  ["MAT1",12,4,MAT,ORANGE],
  ["MAT2",12,4,MAT,ORANGE],
  ["MSAM1",12,4,MAT,ORANGE],
  ["MSAM2",12,4,MAT,ORANGE],
  ["TH1",10,4,AIR,RED],
  ["TH2",10,4,AIR,BLUE],
  ["TH3",10,4,AIR,RED],
  ["TH4",10,4,AIR,BLUE],
  ["IFV1",11,4,IFV,RED],
  ["IFV2",11,4,IFV,BLUE],
  ["IFV3",11,4,IFV,RED],
  ["IFV4",11,4,IFV,BLUE],
  ["AH1",10,4,AIR,RED],
  ["AH2",10,4,AIR,BLUE],
  ["TNK1",11,4,TNK,RED],
  ["TNK2",11,4,TNK,BLUE]
];

respawnMenuRoles = [
  ["CO", "Commander"],
  ["SL", "Squad Leader"],
  ["M", "Squad Medic"],
  ["FTL", "Fireteam Leader"],
  ["AR", "Automatic Rifleman"],
  ["AAR", "Assistant Automatic Rifleman"],
  ["RAT", "Rifleman: Antitank"],
  ["R1", "Rifleman 1"],
  ["R2", "Rifleman 2"],
  ["MMGG", "MMG - Gunner"],
  ["MMGAG", "MMG - Assistant"],
  ["MATG", "MAT - Gunner"],
  ["MATAG", "MAT - Assistant"],
  ["MSAMG", "MSAM - Gunner"],
  ["MSAMAG", "MSAM - Assistant"],
  ["C", "Crewman - Vehicle Crew"],
  ["D", "Crewman - Vehicle Driver"],
  ["PP", "Aircrewman - Pilot"],
  ["PCC", "Aircrewman - Crew Chief (Repair)"]
];

// Factions that will appear in the respawn GUI.
// These MUST be defined in CfgFactionClasses
respawnMenuFactions = [
  ["blu_f", "NATO"],
  ["opf_f", "CSAT"],
  ["ind_f", "AAF"]
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
        case "C": { _type = "I_crew_F"};
        case "D": { _type = "I_soldier_repair_F"};
        case "PP": { _type = "I_Helipilot_F"};
        case "PCC": { _type = "I_soldier_repair_F"};
        default  { _type = "I_Soldier_F"; };
      };
    };
    default {};
  };

  // Return the value of _type
  _type
};
