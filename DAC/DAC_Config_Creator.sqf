//////////////////////////////
//    Dynamic-AI-Creator    //
//    Version 3.1b - 2014   //
//--------------------------//
//    DAC_Config_Creator    //
//--------------------------//
//    Script by Silola      //
//    silola@freenet.de     //
//////////////////////////////

scalar = "any";DAC_Init_Camps = 0;

waituntil{time > 0.3};

if(isAIcontroller) then {if(local player) then {DAC_Code = 1} else {DAC_Code = 0}} else {if(isnull player) then {DAC_Code = 3} else {DAC_Code = 2}};

//===============|
// DAC_Settings	 |
//===============|=============================================================================================|

	if(isNil "DAC_STRPlayers")		then {	DAC_STRPlayers= ["UnitCSAT_CO","UnitCSAT_CO_M","UnitCSAT_CO_UAV","UnitCSAT_CO_D","UnitCSAT_DC","UnitCSAT_DC_M","UnitCSAT_DC_UAV","UnitCSAT_DC_D","UnitCSAT_ASL_SL","UnitCSAT_ASL_M","UnitCSAT_A1_FTL","UnitCSAT_A1_AR","UnitCSAT_A1_AAR","UnitCSAT_A1_AT","UnitCSAT_A2_FTL","UnitCSAT_A2_AR","UnitCSAT_A2_AAR","UnitCSAT_A2_AT","UnitCSAT_A3_FTL","UnitCSAT_A3_AR","UnitCSAT_A3_AAR","UnitCSAT_A3_AT","UnitCSAT_BSL_SL","UnitCSAT_BSL_M","UnitCSAT_B1_FTL","UnitCSAT_B1_AR","UnitCSAT_B1_AAR","UnitCSAT_B1_AT","UnitCSAT_B2_FTL","UnitCSAT_B2_AR","UnitCSAT_B2_AAR","UnitCSAT_B2_AT","UnitCSAT_B3_FTL","UnitCSAT_B3_AR","UnitCSAT_B3_AAR","UnitCSAT_B3_AT","UnitCSAT_CSL_SL","UnitCSAT_CSL_M","UnitCSAT_C1_FTL","UnitCSAT_C1_AR","UnitCSAT_C1_AAR","UnitCSAT_C1_AT","UnitCSAT_C2_FTL","UnitCSAT_C2_AR","UnitCSAT_C2_AAR","UnitCSAT_C2_AT","UnitCSAT_C3_FTL","UnitCSAT_C3_AR","UnitCSAT_C3_AAR","UnitCSAT_C3_AT","UnitCSAT_TH1_P","UnitCSAT_TH1_CP","UnitCSAT_TH2_P","UnitCSAT_TH2_CP","UnitCSAT_TH3_P","UnitCSAT_TH3_CP","UnitCSAT_TH4_P","UnitCSAT_TH4_CP","UnitCSAT_IFV1_C","UnitCSAT_IFV1_G","UnitCSAT_IFV1_D","UnitCSAT_IFV2_C","UnitCSAT_IFV2_G","UnitCSAT_IFV2_D","UnitCSAT_IFV3_C","UnitCSAT_IFV3_G","UnitCSAT_IFV3_D","UnitCSAT_IFV4_C","UnitCSAT_IFV4_G","UnitCSAT_IFV4_D","UnitCSAT_TNK1_C","UnitCSAT_TNK1_G","UnitCSAT_TNK1_D","UnitCSAT_AH1_P","UnitCSAT_AH1_CP","UnitCSAT_MMG1_FTL","UnitCSAT_MMG1_G","UnitCSAT_MMG1_AG","UnitCSAT_HMG1_FTL","UnitCSAT_HMG1_G","UnitCSAT_HMG1_AG","UnitCSAT_MAT1_FTL","UnitCSAT_MAT1_G","UnitCSAT_MAT1_AG","UnitCSAT_HAT1_FTL","UnitCSAT_HAT1_G","UnitCSAT_HAT1_AG","UnitCSAT_MTR1_FTL","UnitCSAT_MTR1_G","UnitCSAT_MTR1_AG","UnitCSAT_MSAM1_FTL","UnitCSAT_MSAM1_G","UnitCSAT_MSAM1_AG","UnitCSAT_WSL_SL","UnitCSAT_WSL_M","UnitCSAT_ST1_SP","UnitCSAT_ST1_SN","UnitCSAT_ENG1_FTL","UnitCSAT_ENG1_A1","UnitCSAT_ENG1_A2","UnitCSAT_ENG1_A3","UnitCSAT_DT1_TL","UnitCSAT_DT1_D1","UnitCSAT_DT1_D2","UnitCSAT_DT1_D3","UnitMSV_CO","UnitMSV_CO_M","UnitMSV_CO_UAV","UnitMSV_CO_D","UnitMSV_CO_VG","UnitMSV_Plt1CO_CO","UnitMSV_Plt1CO_DC","UnitMSV_ASL_SL","UnitMSV_ASL_VG","UnitMSV_ASL_VD","UnitMSV_ASL_SR","UnitMSV_ASL_AR","UnitMSV_ASL_M","UnitMSV_ASL_R","UnitMSV_ASL_GR","UnitMSV_ASL_AGR","UnitMSV_BSL_SL","UnitMSV_B1_VG","UnitMSV_B1_VD","UnitMSV_BSL_SR","UnitMSV_B2_AR","UnitMSV_BSL_M","UnitMSV_B2_R","UnitMSV_B1_GR","UnitMSV_B2_AGR","UnitMSV_CSL_SL","UnitMSV_C1_VG","UnitMSV_C1_VD","UnitMSV_CSL_SR","UnitMSV_C2_AR","UnitMSV_CSL_M","UnitMSV_C2_R","UnitMSV_C1_GR","UnitMSV_C2_AGR","UnitMSV_Plt2CO_CO","UnitMSV_Plt2CO_DC","UnitMSV_DSL_SL","UnitMSV_D1_VG","UnitMSV_D1_VD","UnitMSV_DSL_SR","UnitMSV_D2_AR","UnitMSV_DSL_M","UnitMSV_D2_R","UnitMSV_D1_GR","UnitMSV_D2_AGR","UnitMSV_ESL_SL","UnitMSV_E1_VG","UnitMSV_E1_VD","UnitMSV_ESL_SR","UnitMSV_E2_AR","UnitMSV_ESL_M","UnitMSV_E2_R","UnitMSV_E1_GR","UnitMSV_E2_AGR","UnitMSV_FSL_SL","UnitMSV_F1_VG","UnitMSV_F1_VD","UnitMSV_F2_AR","UnitMSV_FSL_SR","UnitMSV_FSL_M","UnitMSV_F2_R","UnitMSV_F1_GR","UnitMSV_F2_AGR","UnitMSV_Plt3CO_CO","UnitMSV_W1_VG","UnitMSV_W1_VD","UnitMSV_W2_VG","UnitMSV_W2_VD","UnitMSV_MMG1_G","UnitMSV_MMG1_AG","UnitMSV_MMG2_G","UnitMSV_MMG2_AG","UnitMSV_MMG3_G","UnitMSV_MMG3_AG","UnitMSV_MAT1_G","UnitMSV_MAT1_AG","UnitMSV_MAT2_G","UnitMSV_MAT2_AG","UnitMSV_MAT3_G","UnitMSV_MAT3_AG","UnitMSV_FOR_SL","UnitMSV_FOR_AR","UnitMSV_FOR_R","UnitMSV_FOR_R1","UnitMSV_ENG1_FTL","UnitMSV_ENG1_A1","UnitMSV_ENG1_A2","UnitMSV_ENG1_A3","UnitMSV_TNK1_C","UnitMSV_TNK1_G","UnitMSV_TNK1_D","UnitMSV_AH1_P","UnitMSV_AH1_CP","UnitMSV_AH2_P","UnitMSV_AH2_CP","UnitMSV_TH1_P","UnitMSV_TH1_CP","UnitMSV_TH2_P","UnitMSV_TH2_CP","UnitMSV_JIP_SL1","UnitMSV_JIP_SL2","UnitMSV_JIP_G2","UnitMSV_JIP_G1","UnitMSV_JIP_AR1","UnitMSV_JIP_AR2","UnitMSV_JIP_D2","UnitMSV_JIP_D1","UnitMSV_JIP_SR1","UnitMSV_JIP_SR2","UnitMSV_JIP_M1","UnitMSV_JIP_M2","UnitMSV_JIP_R2","UnitMSV_JIP_R1","UnitMSV_JIP_GR2","UnitMSV_JIP_GR1","UnitMSV_JIP_AGR1","UnitMSV_JIP_AGR2","UnitNATO_CO_UAV","UnitNATO_ASL_SL","UnitNATO_ASL_M","UnitNATO_A1_FTL","UnitNATO_A1_AR","UnitNATO_A1_AAR","UnitNATO_A1_AT","UnitNATO_A2_FTL","UnitNATO_A2_AR","UnitNATO_A2_AAR","UnitNATO_A2_AT","UnitNATO_A3_FTL","UnitNATO_A3_AR","UnitNATO_A3_AAR","UnitNATO_A3_AT","UnitNATO_BSL_SL","UnitNATO_BSL_M","UnitNATO_B1_FTL","UnitNATO_B1_AR","UnitNATO_B1_AAR","UnitNATO_B1_AT","UnitNATO_B2_FTL","UnitNATO_B2_AR","UnitNATO_B2_AAR","UnitNATO_B2_AT","UnitNATO_B3_FTL","UnitNATO_B3_AR","UnitNATO_B3_AAR","UnitNATO_B3_AT","UnitNATO_CSL_SL","UnitNATO_CSL_M","UnitNATO_C1_FTL","UnitNATO_C1_AR","UnitNATO_C1_AAR","UnitNATO_C1_AT","UnitNATO_C2_FTL","UnitNATO_C2_AR","UnitNATO_C2_AAR","UnitNATO_C2_AT","UnitNATO_C3_FTL","UnitNATO_C3_AR","UnitNATO_C3_AAR","UnitNATO_C3_AT","UnitNATO_TH1_P","UnitNATO_TH1_CP","UnitNATO_TH1_G1","UnitNATO_TH1_G2","UnitNATO_TH2_P","UnitNATO_TH2_CP","UnitNATO_TH2_G1","UnitNATO_TH2_G2","UnitNATO_TH3_P","UnitNATO_TH3_CP","UnitNATO_TH3_G1","UnitNATO_TH3_G2","UnitNATO_TH4_P","UnitNATO_TH4_CP","UnitNATO_TH4_G1","UnitNATO_TH4_G2","UnitNATO_IFV1_C","UnitNATO_IFV1_G","UnitNATO_IFV1_D","UnitNATO_IFV2_C","UnitNATO_IFV2_G","UnitNATO_IFV2_D","UnitNATO_IFV3_C","UnitNATO_IFV3_G","UnitNATO_IFV3_D","UnitNATO_IFV4_C","UnitNATO_IFV4_G","UnitNATO_IFV4_D","UnitNATO_TNK1_C","UnitNATO_TNK1_G","UnitNATO_TNK1_D","UnitNATO_AH1_P","UnitNATO_AH1_CP","UnitNATO_MMG1_FTL","UnitNATO_MMG1_G","UnitNATO_MMG1_AG","UnitNATO_HMG1_FTL","UnitNATO_HMG1_G","UnitNATO_HMG1_AG","UnitNATO_MAT1_FTL","UnitNATO_MAT1_G","UnitNATO_MAT1_AG","UnitNATO_HAT1_FTL","UnitNATO_HAT1_G","UnitNATO_HAT1_AG","UnitNATO_MTR1_FTL","UnitNATO_MTR1_G","UnitNATO_MTR1_AG","UnitNATO_MSAM1_FTL","UnitNATO_MSAM1_G","UnitNATO_MSAM1_AG","UnitNATO_WSL_SL","UnitNATO_WSL_M","UnitNATO_ST1_SP","UnitNATO_ST1_SN","UnitNATO_ENG1_FTL","UnitNATO_ENG1_A1","UnitNATO_ENG1_A2","UnitNATO_ENG1_A3","UnitNATO_DT1_TL","UnitNATO_DT1_D1","UnitNATO_DT1_D2","UnitNATO_DT1_D3","UnitNATO_CoyCO","UnitNATO_Coy_M","UnitNATO_CoyXO","UnitNATO_1PLT","UnitNATO_1PLT_M","UnitNATO_1PLT_SGT","UnitNATO_2PLT","UnitNATO_2PLT_M","UnitNATO_2PLT_SGT","UnitNATO_DSL_SL","UnitNATO_DSL_M","UnitNATO_D1_FTL","UnitNATO_D1_AR","UnitNATO_D1_AAR","UnitNATO_D1_AT","UnitNATO_D2_FTL","UnitNATO_D2_AR","UnitNATO_D2_AAR","UnitNATO_D2_AT","UnitNATO_D3_FTL","UnitNATO_D3_AR","UnitNATO_D3_AAR","UnitNATO_D3_AT","UnitNATO_ESL_SL","UnitNATO_ESL_M","UnitNATO_E1_FTL","UnitNATO_E1_AR","UnitNATO_E1_AAR","UnitNATO_E1_AT","UnitNATO_E2_FTL","UnitNATO_E2_AR","UnitNATO_E2_AAR","UnitNATO_E2_AT","UnitNATO_E3_FTL","UnitNATO_E3_AR","UnitNATO_E3_AAR","UnitNATO_E3_AT","UnitNATO_fsl_SL","UnitNATO_fsl_M","UnitNATO_F1_FTL","UnitNATO_F1_AR","UnitNATO_F1_AAR","UnitNATO_F1_AT","UnitNATO_F2_FTL","UnitNATO_F2_AR","UnitNATO_F2_AAR","UnitNATO_F2_AT","UnitNATO_F3_FTL","UnitNATO_F3_AR","UnitNATO_F3_AAR","UnitNATO_F3_AT","UnitAAF_CO","UnitAAF_CO_M","UnitAAF_CO_UAV","UnitAAF_CO_D","UnitAAF_DC","UnitAAF_DC_M","UnitAAF_DC_UAV","UnitAAF_DC_D","UnitAAF_ASL_SL","UnitAAF_ASL_M","UnitAAF_A1_FTL","UnitAAF_A1_AR","UnitAAF_A1_AAR","UnitAAF_A1_AT","UnitAAF_A2_FTL","UnitAAF_A2_AR","UnitAAF_A2_AAR","UnitAAF_A2_AT","UnitAAF_A3_FTL","UnitAAF_A3_AR","UnitAAF_A3_AAR","UnitAAF_A3_AT","UnitAAF_BSL_SL","UnitAAF_BSL_M","UnitAAF_B1_FTL","UnitAAF_B1_AR","UnitAAF_B1_AAR","UnitAAF_B1_AT","UnitAAF_B2_FTL","UnitAAF_B2_AR","UnitAAF_B2_AAR","UnitAAF_B2_AT","UnitAAF_B3_FTL","UnitAAF_B3_AR","UnitAAF_B3_AAR","UnitAAF_B3_AT","UnitAAF_CSL_SL","UnitAAF_CSL_M","UnitAAF_C1_FTL","UnitAAF_C1_AR","UnitAAF_C1_AAR","UnitAAF_C1_AT","UnitAAF_C2_FTL","UnitAAF_C2_AR","UnitAAF_C2_AAR","UnitAAF_C2_AT","UnitAAF_C3_FTL","UnitAAF_C3_AR","UnitAAF_C3_AAR","UnitAAF_C3_AT","UnitAAF_TH1_P","UnitAAF_TH1_CP","UnitAAF_TH2_P","UnitAAF_TH2_CP","UnitAAF_IFV1_C","UnitAAF_IFV1_G","UnitAAF_IFV1_D","UnitAAF_IFV2_C","UnitAAF_IFV2_G","UnitAAF_IFV2_D","UnitAAF_IFV3_C","UnitAAF_IFV3_G","UnitAAF_IFV3_D","UnitAAF_IFV4_C","UnitAAF_IFV4_G","UnitAAF_IFV4_D","UnitAAF_TNK1_C","UnitAAF_TNK1_G","UnitAAF_TNK1_D","UnitAAF_AH1_P","UnitAAF_AH1_CP","UnitAAF_MMG1_FTL","UnitAAF_MMG1_G","UnitAAF_MMG1_AG","UnitAAF_HMG1_FTL","UnitAAF_HMG1_G","UnitAAF_HMG1_AG","UnitAAF_MAT1_FTL","UnitAAF_MAT1_G","UnitAAF_MAT1_AG","UnitAAF_HAT1_FTL","UnitAAF_HAT1_G","UnitAAF_HAT1_AG","UnitAAF_MTR1_FTL","UnitAAF_MTR1_G","UnitAAF_MTR1_AG","UnitAAF_MSAM1_FTL","UnitAAF_MSAM1_G","UnitAAF_MSAM1_AG","UnitAAF_WSL_SL","UnitAAF_WSL_M","UnitAAF_ST1_SP","UnitAAF_ST1_SN","UnitAAF_ENG1_FTL","UnitAAF_ENG1_A1","UnitAAF_ENG1_A2","UnitAAF_ENG1_A3","UnitAAF_DT1_TL","UnitAAF_DT1_D1","UnitAAF_DT1_D2","UnitAAF_DT1_D3","UnitNATO_ASL_SL","UnitNATO_ASL_M"]};
	if(isNil "DAC_AI_Count_Level")	then {		DAC_AI_Count_Level  = [[2,4],[3,6],[4,8],[6,12],[10,12]]			};
	if(isNil "DAC_Dyn_Weather") 	then {		DAC_Dyn_Weather		= [0,0,0,[0, 0, 0],0]						};
	if(isNil "DAC_Reduce_Value") 	then {		DAC_Reduce_Value	= [800,850,0]								};
	if(isNil "DAC_AI_Spawn") 		then {		DAC_AI_Spawn		= [[10,5,5],[10,5,15],0,120,250,1]			};
	if(isNil "DAC_Delete_Value") 	then {		DAC_Delete_Value	= [[180,150],[180,150],0,360,100,0]				};
	if(isNil "DAC_Del_PlayerBody") 	then {		DAC_Del_PlayerBody	= [0,0]										};
	if(isNil "DAC_Com_Values") 		then {		DAC_Com_Values		= [1,2,0,0]									};
	if(isNil "DAC_AI_AddOn") 		then {		DAC_AI_AddOn		= 1											};
	if(isNil "DAC_AI_Level") 		then {		DAC_AI_Level		= 3											};
	if(isNil "DAC_Res_Side") 		then {		DAC_Res_Side		= 2											};
	if(isNil "DAC_Marker") 			then {		DAC_Marker			= 2											};
	if(isNil "DAC_WP_Speed") 		then {		DAC_WP_Speed		= 0.01										};
	if(isNil "DAC_Join_Action")		then {		DAC_Join_Action		= false										};
	if(isNil "DAC_Fast_Init") 		then {		DAC_Fast_Init		= false										};
	if(isNil "DAC_Player_Marker")	then {		DAC_Player_Marker	= false										};
	if(isNil "DAC_Direct_Start")	then {		DAC_Direct_Start	= false										};
	if(isNil "DAC_Activate_Sound")	then {		DAC_Activate_Sound	= false										};
	if(isNil "DAC_Auto_UnitCount")	then {		DAC_Auto_UnitCount	= [8,10]									};
	if(isNil "DAC_Player_Support")	then {		DAC_Player_Support	= [10,[4,2000,3,1000]]						};
	if(isNil "DAC_SaveDistance")	then {		DAC_SaveDistance	= [500,["DAC_Save_Pos"]]					};
	if(isNil "DAC_Radio_Max")		then {		DAC_Radio_Max		= DAC_AI_Level								};

	DAC_BadBuildings 	= 	[];
	DAC_GunNotAllowed	= 	[];
	DAC_VehNotAllowed	= 	[];
	DAC_Locked_Veh		=	[];
	DAC_SP_Soldiers     =   ["B_soldier_AR_F","B_G_soldier_AR_F","O_soldier_AR_F","O_soldierU_AR_F","O_G_soldier_AR_F","I_soldier_AR_F","I_G_soldier_AR_F","SAA_AutomaticRifleman","QUD_AutomaticRifleman","GME_AutomaticRifleman","DRI_AutomaticRifleman"];
	DAC_Data_Array 		= 	[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,[]];
	DAC_Marker_Val		= 	[];
	DAC_Zones			=	[];
	//=============================================================================================================|

	_scr = [] spawn (compile preprocessFile "\DAC_Source\Scripts\DAC_Start_Creator.sqf");
	waituntil {scriptdone _scr};
	sleep 0.1;
	waituntil {(DAC_Basic_Value > 0)};

if(DAC_Code < 2) then
{
	//===========================================|
	// StartScriptOnServer                       |
	//===========================================|
	//player sidechat "ServerStart"
	//[] execVM "myServerScript.sqf";
	//onMapSingleClick "_fun = [_pos,_shift]execVM ""Action.sqf""";
}
else
{
	if(DAC_Code == 3) then
	{
		//===========================================|
		// StartScriptOnJipClient                    |
		//===========================================|
		//player sidechat "JipClientStart"
		//[] execVM "myJipClientScript.sqf";
	}
	else
	{
		//===========================================|
		// StartScriptOnClient                       |
		//===========================================|
		//player sidechat "ClientStart"
		//[] execVM "myClientScript.sqf";
		//onMapSingleClick "_fun = [_pos,_shift]execVM ""Action.sqf""";
	};
};