//////////////////////////////////////////////////////
//
//             F3 - RESPAWN SETTINGS
//         Credits: Snippers, Head & 1Tac (AACO is going to steal a bit of credit here too)
//
//////////////////////////////////////////////////////

// To open the respawn dialog just call from the debug console (even in spectator):
//   createDialog "respawnMenuDialog";

///////////// RESPAWN ROLE SETTINGS

// These are the roles that area shown in the respawn GUI.
// Format: AssignGear Role, GUI Display Name

respawnMenuRoles = [
	["sl","Squad Leader"],
	["sm","Squad Medic"],
    ["ftl","Fireteam Leader"],
    ["ar","Automatic Rifleman"],
    ["aar","Assistant Automatic Rifleman"],
    ["rat","Rifleman: Antitank"],
	["r","Rifleman"],
	["g","Grenadier"],
	["ag","Assistant Grenadier"],
	["s","Marksman"],
	["sd","Squad Driver"],
	["sg","Squad Gunner"],
    ["mmgg","MMG - Gunner"],
    ["mmgag","MMG - Assistant"],
    ["matg","MAT - Gunner"],
    ["matag","MAT - Assistant"],
    ["vc","Crewman - Vehicle Crew"],
    ["vd","Crewman - Vehicle Driver"],
    ["pp","Aircrewman - Pilot"],
    ["pcc","Aircrewman - Crew Chief (Repair)"]
];

///////////// FACTION SETTINGS

// Factions that will appear in the respawn GUI.
// These MUST be defined in CfgFactionClasses

respawnMenuFactions = [
    ["blu_f","NATO"],
    ["opf_f","CSAT"],
    ["ind_f","AAF"],
    ["rhs_faction_msv","MSV"]   
];

// Respawn Classes
// This function is designed to choose the classname of a new unit based on the faction and specified unit type.
// This is important as the ability to perform certain tasks can be derived from being a certain class.

fn_respawnSelectClass = {
    params["_faction","_typeOfUnit"];
	//Needed to convert index to unit type string
	_typeOfUnit = (respawnMenuRoles select _typeOfUnit) select 0;
    
    //Setup a default value.
    _type = "C_man_1";

    switch (_faction) do {
        case "blu_f": {
            switch (_typeOfUnit) do {
				case "sl": { _type = "B_Soldier_SL_F"};
				case "sm": { _type = "B_medic_F"};
				case "ftl": { _type = "B_Soldier_TL_F"};
				case "ar": { _type = "B_soldier_AR_F"};
				case "aar": { _type = "B_Soldier_AAR_F"};
				case "rat": { _type = "B_Soldier_LAT_F"};
				case "r": { _type = "B_Soldier_F"};
				case "mmgg": { _type = "B_support_MG_F"};
				case "mmgag": { _type = "B_Soldier_A_F"};
				case "matg": { _type = "B_soldier_AT_F"};
				case "matag": { _type = "B_soldier_AAT_F"};
				case "vc": { _type = "B_crew_F"};
				case "vd": { _type = "B_soldier_repair_F"};
				case "pp": { _type = "B_Helipilot_F"};
				case "pcc": { _type = "B_soldier_repair_F"};
                default  { _type = "B_Soldier_F"; };
            };
        };
        case "opf_f":{
            switch (_typeOfUnit) do {
				case "sl": { _type = "O_Soldier_SL_F"};
				case "sm": { _type = "O_medic_F"};
				case "ftl": { _type = "O_Soldier_TL_F"};
				case "ar": { _type = "O_soldier_AR_F"};
				case "aar": { _type = "O_Soldier_AAR_F"};
				case "rat": { _type = "O_Soldier_LAT_F"};
				case "r": { _type = "O_Soldier_F"};
				case "mmgg": { _type = "O_support_MG_F"};
				case "mmgag": { _type = "O_Soldier_A_F"};
				case "matg": { _type = "O_soldier_AT_F"};
				case "matag": { _type = "O_soldier_AAT_F"};
				case "vc": { _type = "O_crew_F"};
				case "vd": { _type = "O_soldier_repair_F"};
				case "pp": { _type = "O_Helipilot_F"};
				case "pcc": { _type = "O_soldier_repair_F"};
                default  { _type = "O_Soldier_F"; };
            };
        };
        case "ind_f": {
            switch (_typeOfUnit) do {
				case "sl": { _type = "I_Soldier_SL_F"};
				case "sm": { _type = "I_medic_F"};
				case "ftl": { _type = "I_Soldier_TL_F"};
				case "ar": { _type = "I_soldier_AR_F"};
				case "aar": { _type = "I_Soldier_AAR_F"};
				case "rat": { _type = "I_Soldier_LAT_F"};
				case "r": { _type = "I_Soldier_F"};
				case "mmgg": { _type = "I_support_MG_F"};
				case "mmgag": { _type = "I_Soldier_A_F"};
				case "matg": { _type = "I_soldier_AT_F"};
				case "matag": { _type = "I_soldier_AAT_F"};
				case "vc": { _type = "I_crew_F"};
				case "vd": { _type = "I_soldier_repair_F"};
				case "pp": { _type = "I_Helipilot_F"};
				case "pcc": { _type = "I_soldier_repair_F"};
                default  { _type = "I_Soldier_F"; };
            };
        };
        case "rhs_faction_msv" : {
            switch (_typeOfUnit) do {
				case "sl": { _type = "rhs_msv_sergeant"};
				case "sm": { _type = "rhs_msv_medic"};
				case "ftl": { _type = "rhs_msv_junior_sergeant"};
				case "ar": { _type = "rhs_msv_machinegunner"};
				case "r": { _type = "rhs_msv_rifleman"};
				case "g": { _type = "rhs_msv_at"};
				case "ag": { _type = "rhs_msv_strelok_rpg_assist"};
				case "s": { _type = "rhs_msv_marksman"};
				case "sd": { _type = "rhs_msv_engineer"};
				case "sg": { _type = "rhs_msv_crew"};
				case "mmgg": { _type = "rhs_msv_machinegunner"};
				case "mmgag": { _type = "rhs_msv_machinegunner_assistant"};
				case "matg": { _type = "rhs_msv_at"};
				case "matag": { _type = "rhs_msv_strelok_rpg_assist"};
				case "vc": { _type = "rhs_msv_crew"};
				case "vd": { _type = "rhs_msv_engineer"};
				case "pp": { _type = "rhs_pilot_transport_heli"};
				case "pcc": { _type = "rhs_msv_engineer"};
				default  { _type = "rhs_msv_rifleman"; };
            };
        };
        default {};
    };
    
    // Return the value of _type
    _type
};