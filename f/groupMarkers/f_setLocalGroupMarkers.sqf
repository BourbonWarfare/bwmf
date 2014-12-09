// F3 - Folk Group Markers
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// DECLARE VARIABLES AND FUNCTIONS

private ["_unitfaction"];

// ====================================================================================

// MAKE SURE THE PLAYER INITIALIZES PROPERLY

if (!isDedicated && (isNull player)) then
{
    waitUntil {sleep 0.1; !isNull player};
};

// ====================================================================================

// DETECT PLAYER FACTION
// The following code detects what faction the player's slot belongs to, and stores
// it in the private variable _unitfaction

_unitfaction = toLower (faction player);

// If the unitfaction is different from the group leader's faction, the latters faction is used
if (_unitfaction != toLower (faction (leader group player))) then {_unitfaction = toLower (faction (leader group player))};

// ====================================================================================
switch (_unitfaction) do
{
// ====================================================================================

// MARKERS: BLUFOR > NATO
// Markers seen by players in NATO slots.

	case "blu_f":
	{
		["GrpNATO_COY", 0, "COY", "ColorYellow"] spawn f_fnc_localGroupMarker;
		["GrpNATO_1PLT", 0, "1PLT", "ColorYellow"] spawn f_fnc_localGroupMarker;
		["GrpNATO_2PLT", 0, "2PLT", "ColorYellow"] spawn f_fnc_localGroupMarker;

		["GrpNATO_ASL", 0, "ASL", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpNATO_A1", 1, "A1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpNATO_A2", 1, "A2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpNATO_A3", 1, "A3", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpNATO_BSL", 0, "BSL", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpNATO_B1", 1, "B1", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpNATO_B2", 1, "B2", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpNATO_B3", 1, "B3", "ColorBlue"] spawn f_fnc_localGroupMarker;

		["GrpNATO_CSL", 0, "CSL", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpNATO_C1", 1, "C1", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpNATO_C2", 1, "C2", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpNATO_C3", 1, "C3", "ColorGreen"] spawn f_fnc_localGroupMarker;

		["GrpNATO_DSL", 0, "DSL", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpNATO_D1", 1, "D1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpNATO_D2", 1, "D2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpNATO_D3", 1, "D3", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpNATO_ESL", 0, "ESL", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpNATO_E1", 1, "E1", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpNATO_E2", 1, "E2", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpNATO_E3", 1, "E3", "ColorBlue"] spawn f_fnc_localGroupMarker;

		["GrpNATO_FSL", 0, "FSL", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpNATO_F1", 1, "F1", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpNATO_F2", 1, "F2", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpNATO_F3", 1, "F3", "ColorGreen"] spawn f_fnc_localGroupMarker;

		["GrpNATO_MMG1", 2, "MMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpNATO_MAT1", 3, "MAT1", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpNATO_ST1",  4, "ST1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpNATO_HMG1",  2, "HMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpNATO_MTR1",  5, "MTR1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpNATO_HAT1",  3, "MAT2", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpNATO_MSAM1",  3, "SAM1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpNATO_HSAM1",  3, "WSL", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpNATO_ENG1",  6, "ENG1", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpNATO_IFV1",  7, "IFV1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpNATO_IFV2",  7, "IFV2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpNATO_IFV3",  7, "IFV3", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpNATO_IFV4",  7, "IFV4", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpNATO_IFV5",  7, "IFV5", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpNATO_IFV6",  7, "IFV6", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpNATO_IFV7",  7, "IFV7", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpNATO_IFV8",  7, "IFV8", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpNATO_TNK1",  8, "TNK1", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpNATO_TH1",  9, "TH1", "ColorRed"] spawn f_fnc_localGroupMarker;
 		["GrpNATO_TH2",  9, "TH2", "ColorRed"] spawn f_fnc_localGroupMarker;
 		["GrpNATO_TH3",  9, "TH3", "ColorBlue"] spawn f_fnc_localGroupMarker;
 		["GrpNATO_TH4",  9, "TH4", "ColorBlue"] spawn f_fnc_localGroupMarker;
 		["GrpNATO_TH5",  9, "TH5", "ColorGreen"] spawn f_fnc_localGroupMarker;
  		["GrpNATO_TH6",  9, "TH6", "ColorGreen"] spawn f_fnc_localGroupMarker;
   		["GrpNATO_TH7",  9, "TH7", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpNATO_TH8",  9, "TH8", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpNATO_AH1",  9, "AH1", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpNATO_DT1",  4, "DT1", "ColorOrange"] spawn f_fnc_localGroupMarker;


		["UnitNATO_ASL_M", 0, "AM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_BSL_M", 0, "BM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_CSL_M", 0, "CM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_WSL_M", 0, "WM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_COY_M", 0, "COYMed", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_1PLT_M", 0, "1PLTMed", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_2PLT_M", 0, "2PLTMed", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_DSL_M", 0, "DM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_ESL_M", 0, "EM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitNATO_FSL_M", 0, "FM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;


	};

// ====================================================================================

// MARKERS: OPFOR > CSAT
// Markers seen by players in CSAT slots.

	case "opf_f":
	{
		["GrpCSAT_CO", 0, "CO", "ColorYellow"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_DC", 0, "DC", "ColorYellow"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_ASL", 0, "ASL", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_A1", 1, "A1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_A2", 1, "A2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_A3", 1, "A3", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_BSL", 0, "BSL", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_B1", 1, "B1", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_B2", 1, "B2", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_B3", 1, "B3", "ColorBlue"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_CSL", 0, "CSL", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_C1", 1, "C1", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_C2", 1, "C2", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_C3", 1, "C3", "ColorGreen"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_MMG1", 2, "MMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_MAT1", 3, "MAT1", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_ST1",  4, "ST1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_HMG1",  2, "HMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_MTR1",  5, "MTR1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_HAT1",  3, "MAT2", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_MSAM1",  3, "SAM1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_HSAM1",  3, "WSL", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_ENG1",  6, "ENG1", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpCSAT_IFV1",  7, "IFV1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_IFV2",  7, "IFV2", "ColorRed"] spawn f_fnc_localGroupMarker;
 		["GrpCSAT_IFV3",  7, "IFV3", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_IFV4",  7, "IFV4", "ColorBlue"] spawn f_fnc_localGroupMarker;
 		["GrpCSAT_IFV5",  7, "IFV5", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_IFV6",  7, "IFV6", "ColorGreen"] spawn f_fnc_localGroupMarker;
 		["GrpCSAT_IFV7",  7, "IFV7", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_IFV8",  7, "IFV8", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpCSAT_TNK1",  8, "TNK1", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_TH1",  9, "TH1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_TH2",  9, "TH2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_TH3",  9, "TH3", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_TH4",  9, "TH4", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_TH5",  9, "TH5", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_TH6",  9, "TH6", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_TH7",  9, "TH7", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpCSAT_TH8",  9, "TH8", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_AH1",  9, "AH1", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpCSAT_DT1",  4, "DT1", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["UnitCSAT_CO_M", 0, "COM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitCSAT_DC_M", 0, "DCM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitCSAT_ASL_M", 0, "AM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitCSAT_BSL_M", 0, "BM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitCSAT_CSL_M", 0, "CM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitCSAT_WSL_M", 0, "WM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
	};


// ====================================================================================

// MARKERS: OPFOR > MSV
// Markers seen by players in MSV slots.

	case "rhs_faction_msv":
	{
		["GrpMSV_CO", 0, "COY", "ColorYellow"] spawn f_fnc_localGroupMarker;

		["GrpMSV_Plt1CO", 0, "1Plt", "ColorYellow"] spawn f_fnc_localGroupMarker;
		["GrpMSV_Plt2CO", 0, "2Plt", "ColorYellow"] spawn f_fnc_localGroupMarker;
		["GrpMSV_Plt3CO", 0, "3Plt", "ColorYellow"] spawn f_fnc_localGroupMarker;

		["GrpMSV_ASL", 0, "AS", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_BSL", 0, "BS", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpMSV_CSL", 0, "CS", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpMSV_DSL", 0, "DS", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_ESL", 0, "ES", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpMSV_FSL", 0, "FS", "ColorGreen"] spawn f_fnc_localGroupMarker;

		["GrpMSV_FOR", 0, "RECON", "ColorBlue"] spawn f_fnc_localGroupMarker;

		["GrpMSV_MMG1", 2, "MMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_MMG2", 2, "MMG2", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_MMG3", 2, "MMG3", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_MAT1", 3, "MAT1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_MAT2", 3, "MAT2", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_MAT3", 3, "MAT3", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpMSV_ST1",  4, "ST1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_HMG1",  2, "HMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_MTR1",  5, "MTR1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_MTR2",  5, "MTR2", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_HAT1",  3, "MAT2", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_MSAM1",  3, "SAM1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpMSV_HSAM1",  3, "WSL", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpMSV_ENG1",  6, "ENG1", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpMSV_WV1",  7, "WV1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_WV2",  7, "WV2", "ColorRed"] spawn f_fnc_localGroupMarker;

 		["GrpMSV_TNK1",  8, "TNK1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_TNK2",  8, "TNK2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_TNK3",  8, "TNK3", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpMSV_TH1",  9, "TH1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_TH2",  9, "TH2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_AH1",  9, "AH1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_AH2",  9, "AH2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpMSV_FW1",  9, "CAS", "ColorRed"] spawn f_fnc_localGroupMarker;

		["UnitMSV_CO_M", 0, "COM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_DC_M", 0, "DCM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_ASL_M", 0, "AM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_BSL_M", 0, "BM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_CSL_M", 0, "CM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_DSL_M", 0, "DM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_ESL_M", 0, "EM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_FSL_M", 0, "FM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;

		["UnitMSV_CO_VG", 0, "PV", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_ASL_VG", 0, "AV", "ColorRed"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_B1_VG", 0, "BV", "ColorBlue"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_C1_VG", 0, "CV", "ColorGreen"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_D1_VG", 0, "DV", "ColorRed"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_E1_VG", 0, "EV", "ColorBlue"] spawn f_fnc_localSpecialistMarker;
		["UnitMSV_F1_VG", 0, "FV", "ColorGreen"] spawn f_fnc_localSpecialistMarker;

	};

// ====================================================================================

// MARKERS: INDEPEDENT > AAF
// Markers seen by players in AAF slots.

	case "ind_f":
	{
		["GrpAAF_CO", 0, "CO", "ColorYellow"] spawn f_fnc_localGroupMarker;
		["GrpAAF_DC", 0, "DC", "ColorYellow"] spawn f_fnc_localGroupMarker;

		["GrpAAF_ASL", 0, "ASL", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpAAF_A1", 1, "A1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpAAF_A2", 1, "A2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpAAF_A3", 1, "A3", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpAAF_BSL", 0, "BSL", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpAAF_B1", 1, "B1", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpAAF_B2", 1, "B2", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpAAF_B3", 1, "B3", "ColorBlue"] spawn f_fnc_localGroupMarker;

		["GrpAAF_CSL", 0, "CSL", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpAAF_C1", 1, "C1", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpAAF_C2", 1, "C2", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpAAF_C3", 1, "C3", "ColorGreen"] spawn f_fnc_localGroupMarker;

		["GrpAAF_MMG1", 2, "MMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpAAF_MAT1", 3, "MAT1", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpAAF_ST1",  4, "ST1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpAAF_HMG1",  2, "HMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpAAF_MTR1",  5, "MTR1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpAAF_HAT1",  3, "MAT2", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpAAF_MSAM1",  3, "SAM1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpAAF_HSAM1",  3, "WSL", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpAAF_ENG1",  6, "ENG1", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpAAF_IFV1",  7, "IFV1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpAAF_IFV2",  7, "IFV2", "ColorRed"] spawn f_fnc_localGroupMarker;
 		["GrpAAF_IFV3",  7, "IFV3", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpAAF_IFV4",  7, "IFV4", "ColorBlue"] spawn f_fnc_localGroupMarker;
 		["GrpAAF_IFV5",  7, "IFV5", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpAAF_IFV6",  7, "IFV6", "ColorGreen"] spawn f_fnc_localGroupMarker;
 		["GrpAAF_IFV7",  7, "IFV7", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpAAF_IFV8",  7, "IFV8", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpAAF_TNK1",  8, "TNK1", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpAAF_TH1",  9, "TH1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpAAF_TH2",  9, "TH2", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpAAF_TH3",  9, "TH3", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpAAF_TH4",  9, "TH4", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpAAF_AH1",  9, "AH1", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpAAF_DT1",  4, "DT1", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["UnitAAF_CO_M", 0, "COM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitAAF_DC_M", 0, "DCM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitAAF_ASL_M", 0, "AM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitAAF_BSL_M", 0, "BM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitAAF_CSL_M", 0, "CM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitAAF_WSL_M", 0, "WM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
	};
// ====================================================================================

// MARKERS: BLUFOR > FIA
// Markers seen by players in BLUFOR-FIA slots.

	case "blu_g_f":
	{
		["GrpFIA_CO", 0, "CO", "ColorYellow"] spawn f_fnc_localGroupMarker;
		["GrpFIA_DC", 0, "DC", "ColorYellow"] spawn f_fnc_localGroupMarker;

		["GrpFIA_ASL", 0, "ASL", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpFIA_A1", 1, "A1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpFIA_A2", 1, "A2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpFIA_A3", 1, "A3", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpFIA_BSL", 0, "BSL", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpFIA_B1", 1, "B1", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpFIA_B2", 1, "B2", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpFIA_B3", 1, "B3", "ColorBlue"] spawn f_fnc_localGroupMarker;

		["GrpFIA_CSL", 0, "CSL", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpFIA_C1", 1, "C1", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpFIA_C2", 1, "C2", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpFIA_C3", 1, "C3", "ColorGreen"] spawn f_fnc_localGroupMarker;

		["GrpFIA_MMG1", 2, "MMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpFIA_MAT1", 3, "MAT1", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpFIA_ST1",  4, "ST1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpFIA_HMG1",  2, "HMG1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpFIA_MTR1",  5, "MTR1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpFIA_HAT1",  3, "MAT2", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpFIA_MSAM1",  3, "SAM1", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpFIA_HSAM1",  3, "WSL", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpFIA_ENG1",  6, "ENG1", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpFIA_IFV1",  7, "IFV1", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpFIA_IFV2",  7, "IFV2", "ColorRed"] spawn f_fnc_localGroupMarker;
		["GrpFIA_IFV3",  7, "IFV3", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpFIA_IFV4",  7, "IFV4", "ColorBlue"] spawn f_fnc_localGroupMarker;
		["GrpFIA_IFV5",  7, "IFV5", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpFIA_IFV6",  7, "IFV6", "ColorGreen"] spawn f_fnc_localGroupMarker;
		["GrpFIA_IFV7",  7, "IFV7", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpFIA_IFV8",  7, "IFV8", "ColorOrange"] spawn f_fnc_localGroupMarker;

 		["GrpFIA_TNK1",  8, "TNK1", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpFIA_TH1",  9, "TH1", "ColorRed"] spawn f_fnc_localGroupMarker;
 		["GrpFIA_TH2",  9, "TH2", "ColorRed"] spawn f_fnc_localGroupMarker;
 		["GrpFIA_TH3",  9, "TH3", "ColorBlue"] spawn f_fnc_localGroupMarker;
 		["GrpFIA_TH4",  9, "TH4", "ColorBlue"] spawn f_fnc_localGroupMarker;
 		["GrpFIA_TH5",  9, "TH5", "ColorGreen"] spawn f_fnc_localGroupMarker;
  		["GrpFIA_TH6",  9, "TH6", "ColorGreen"] spawn f_fnc_localGroupMarker;
   		["GrpFIA_TH7",  9, "TH7", "ColorOrange"] spawn f_fnc_localGroupMarker;
		["GrpFIA_TH8",  9, "TH8", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["GrpFIA_AH1",  9, "AH1", "ColorRed"] spawn f_fnc_localGroupMarker;

		["GrpFIA_DT1",  4, "DT1", "ColorOrange"] spawn f_fnc_localGroupMarker;

		["UnitFIA_CO_M", 0, "COM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitFIA_DC_M", 0, "DCM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitFIA_ASL_M", 0, "AM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitFIA_BSL_M", 0, "BM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitFIA_CSL_M", 0, "CM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;
		["UnitFIA_WSL_M", 0, "WM", "ColorBlack"] spawn f_fnc_localSpecialistMarker;

	};


};

// ====================================================================================


