#define TRUE true
#define FALSE false
#define PREFIX bwmf
#define LOG(STR, VAR) diag_log text format["[%1] (%2) LOG: %3: %4", #PREFIX,  #SCRIPT, STR,  VAR]
#define TRACE(STR, VAR) systemChat text format["[%1] (%2) TRACE: %3: %4", #PREFIX,  #SCRIPT, STR,  VAR]
#define VAR_NAME(VAR) PREFIX##_##SCRIPT##_##VAR
#define SET_MISSION_VAR(VAR, VAL) missionNamespace setVariable [#VAR_NAME(VAR), VAL]
#define GET_MISSION_VAR(VAR, DEFAULT_VAL) missionNamespace getVariable [QUOTE(VAR_NAME(VAR)), DEFAULT_VAL]
#define CARGO_COUNT(VIC) count FullCrew [VIC, "Cargo", false]
#define QUOTE(VAR) #VAR