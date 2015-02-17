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

	if(isNil "DAC_STRPlayers")		then {	DAC_STRPlayers= ["UnitOPFOR_CO","UnitOPFOR_CO_M","UnitOPFOR_CO_UAV","UnitOPFOR_CO_D","UnitOPFOR_DC","UnitOPFOR_DC_M","UnitOPFOR_DC_UAV","UnitOPFOR_DC_D","UnitOPFOR_ASL_SL","UnitOPFOR_ASL_M","UnitOPFOR_A1_FTL","UnitOPFOR_A1_AR","UnitOPFOR_A1_AAR","UnitOPFOR_A1_AT","UnitOPFOR_A2_FTL","UnitOPFOR_A2_AR","UnitOPFOR_A2_AAR","UnitOPFOR_A2_AT","UnitOPFOR_A3_FTL","UnitOPFOR_A3_AR","UnitOPFOR_A3_AAR","UnitOPFOR_A3_AT","UnitOPFOR_BSL_SL","UnitOPFOR_BSL_M","UnitOPFOR_B1_FTL","UnitOPFOR_B1_AR","UnitOPFOR_B1_AAR","UnitOPFOR_B1_AT","UnitOPFOR_B2_FTL","UnitOPFOR_B2_AR","UnitOPFOR_B2_AAR","UnitOPFOR_B2_AT","UnitOPFOR_B3_FTL","UnitOPFOR_B3_AR","UnitOPFOR_B3_AAR","UnitOPFOR_B3_AT","UnitOPFOR_CSL_SL","UnitOPFOR_CSL_M","UnitOPFOR_C1_FTL","UnitOPFOR_C1_AR","UnitOPFOR_C1_AAR","UnitOPFOR_C1_AT","UnitOPFOR_C2_FTL","UnitOPFOR_C2_AR","UnitOPFOR_C2_AAR","UnitOPFOR_C2_AT","UnitOPFOR_C3_FTL","UnitOPFOR_C3_AR","UnitOPFOR_C3_AAR","UnitOPFOR_C3_AT","UnitOPFOR_TH1_P","UnitOPFOR_TH1_CP","UnitOPFOR_TH2_P","UnitOPFOR_TH2_CP","UnitOPFOR_TH3_P","UnitOPFOR_TH3_CP","UnitOPFOR_TH4_P","UnitOPFOR_TH4_CP","UnitOPFOR_IFV1_C","UnitOPFOR_IFV1_G","UnitOPFOR_IFV1_D","UnitOPFOR_IFV2_C","UnitOPFOR_IFV2_G","UnitOPFOR_IFV2_D","UnitOPFOR_IFV3_C","UnitOPFOR_IFV3_G","UnitOPFOR_IFV3_D","UnitOPFOR_IFV4_C","UnitOPFOR_IFV4_G","UnitOPFOR_IFV4_D","UnitOPFOR_TNK1_C","UnitOPFOR_TNK1_G","UnitOPFOR_TNK1_D","UnitOPFOR_AH1_P","UnitOPFOR_AH1_CP","UnitOPFOR_MMG1_FTL","UnitOPFOR_MMG1_G","UnitOPFOR_MMG1_AG","UnitOPFOR_HMG1_FTL","UnitOPFOR_HMG1_G","UnitOPFOR_HMG1_AG","UnitOPFOR_MAT1_FTL","UnitOPFOR_MAT1_G","UnitOPFOR_MAT1_AG","UnitOPFOR_HAT1_FTL","UnitOPFOR_HAT1_G","UnitOPFOR_HAT1_AG","UnitOPFOR_MTR1_FTL","UnitOPFOR_MTR1_G","UnitOPFOR_MTR1_AG","UnitOPFOR_MSAM1_FTL","UnitOPFOR_MSAM1_G","UnitOPFOR_MSAM1_AG","UnitOPFOR_WSL_SL","UnitOPFOR_WSL_M","UnitOPFOR_ST1_SP","UnitOPFOR_ST1_SN","UnitOPFOR_ENG1_FTL","UnitOPFOR_ENG1_A1","UnitOPFOR_ENG1_A2","UnitOPFOR_ENG1_A3","UnitOPFOR_DT1_TL","UnitOPFOR_DT1_D1","UnitOPFOR_DT1_D2","UnitOPFOR_DT1_D3","UnitMSV_CO","UnitMSV_CO_M","UnitMSV_CO_UAV","UnitMSV_CO_D","UnitMSV_CO_VG","UnitMSV_Plt1CO_CO","UnitMSV_Plt1CO_DC","UnitMSV_ASL_SL","UnitMSV_ASL_VG","UnitMSV_ASL_VD","UnitMSV_ASL_SR","UnitMSV_ASL_AR","UnitMSV_ASL_M","UnitMSV_ASL_R","UnitMSV_ASL_GR","UnitMSV_ASL_AGR","UnitMSV_BSL_SL","UnitMSV_B1_VG","UnitMSV_B1_VD","UnitMSV_BSL_SR","UnitMSV_B2_AR","UnitMSV_BSL_M","UnitMSV_B2_R","UnitMSV_B1_GR","UnitMSV_B2_AGR","UnitMSV_CSL_SL","UnitMSV_C1_VG","UnitMSV_C1_VD","UnitMSV_CSL_SR","UnitMSV_C2_AR","UnitMSV_CSL_M","UnitMSV_C2_R","UnitMSV_C1_GR","UnitMSV_C2_AGR","UnitMSV_Plt2CO_CO","UnitMSV_Plt2CO_DC","UnitMSV_DSL_SL","UnitMSV_D1_VG","UnitMSV_D1_VD","UnitMSV_DSL_SR","UnitMSV_D2_AR","UnitMSV_DSL_M","UnitMSV_D2_R","UnitMSV_D1_GR","UnitMSV_D2_AGR","UnitMSV_ESL_SL","UnitMSV_E1_VG","UnitMSV_E1_VD","UnitMSV_ESL_SR","UnitMSV_E2_AR","UnitMSV_ESL_M","UnitMSV_E2_R","UnitMSV_E1_GR","UnitMSV_E2_AGR","UnitMSV_FSL_SL","UnitMSV_F1_VG","UnitMSV_F1_VD","UnitMSV_F2_AR","UnitMSV_FSL_SR","UnitMSV_FSL_M","UnitMSV_F2_R","UnitMSV_F1_GR","UnitMSV_F2_AGR","UnitMSV_Plt3CO_CO","UnitMSV_W1_VG","UnitMSV_W1_VD","UnitMSV_W2_VG","UnitMSV_W2_VD","UnitMSV_MMG1_G","UnitMSV_MMG1_AG","UnitMSV_MMG2_G","UnitMSV_MMG2_AG","UnitMSV_MMG3_G","UnitMSV_MMG3_AG","UnitMSV_MAT1_G","UnitMSV_MAT1_AG","UnitMSV_MAT2_G","UnitMSV_MAT2_AG","UnitMSV_MAT3_G","UnitMSV_MAT3_AG","UnitMSV_FOR_SL","UnitMSV_FOR_AR","UnitMSV_FOR_R","UnitMSV_FOR_R1","UnitMSV_ENG1_FTL","UnitMSV_ENG1_A1","UnitMSV_ENG1_A2","UnitMSV_ENG1_A3","UnitMSV_TNK1_C","UnitMSV_TNK1_G","UnitMSV_TNK1_D","UnitMSV_AH1_P","UnitMSV_AH1_CP","UnitMSV_AH2_P","UnitMSV_AH2_CP","UnitMSV_TH1_P","UnitMSV_TH1_CP","UnitMSV_TH2_P","UnitMSV_TH2_CP","UnitMSV_JIP_SL1","UnitMSV_JIP_SL2","UnitMSV_JIP_G2","UnitMSV_JIP_G1","UnitMSV_JIP_AR1","UnitMSV_JIP_AR2","UnitMSV_JIP_D2","UnitMSV_JIP_D1","UnitMSV_JIP_SR1","UnitMSV_JIP_SR2","UnitMSV_JIP_M1","UnitMSV_JIP_M2","UnitMSV_JIP_R2","UnitMSV_JIP_R1","UnitMSV_JIP_GR2","UnitMSV_JIP_GR1","UnitMSV_JIP_AGR1","UnitMSV_JIP_AGR2","UnitNATO_CO_UAV","UnitNATO_ASL_SL","UnitNATO_ASL_M","UnitNATO_A1_FTL","UnitNATO_A1_AR","UnitNATO_A1_AAR","UnitNATO_A1_AT","UnitNATO_A2_FTL","UnitNATO_A2_AR","UnitNATO_A2_AAR","UnitNATO_A2_AT","UnitNATO_A3_FTL","UnitNATO_A3_AR","UnitNATO_A3_AAR","UnitNATO_A3_AT","UnitNATO_BSL_SL","UnitNATO_BSL_M","UnitNATO_B1_FTL","UnitNATO_B1_AR","UnitNATO_B1_AAR","UnitNATO_B1_AT","UnitNATO_B2_FTL","UnitNATO_B2_AR","UnitNATO_B2_AAR","UnitNATO_B2_AT","UnitNATO_B3_FTL","UnitNATO_B3_AR","UnitNATO_B3_AAR","UnitNATO_B3_AT","UnitNATO_CSL_SL","UnitNATO_CSL_M","UnitNATO_C1_FTL","UnitNATO_C1_AR","UnitNATO_C1_AAR","UnitNATO_C1_AT","UnitNATO_C2_FTL","UnitNATO_C2_AR","UnitNATO_C2_AAR","UnitNATO_C2_AT","UnitNATO_C3_FTL","UnitNATO_C3_AR","UnitNATO_C3_AAR","UnitNATO_C3_AT","UnitNATO_TH1_P","UnitNATO_TH1_CP","UnitNATO_TH1_G1","UnitNATO_TH1_G2","UnitNATO_TH2_P","UnitNATO_TH2_CP","UnitNATO_TH2_G1","UnitNATO_TH2_G2","UnitNATO_TH3_P","UnitNATO_TH3_CP","UnitNATO_TH3_G1","UnitNATO_TH3_G2","UnitNATO_TH4_P","UnitNATO_TH4_CP","UnitNATO_TH4_G1","UnitNATO_TH4_G2","UnitNATO_IFV1_C","UnitNATO_IFV1_G","UnitNATO_IFV1_D","UnitNATO_IFV2_C","UnitNATO_IFV2_G","UnitNATO_IFV2_D","UnitNATO_IFV3_C","UnitNATO_IFV3_G","UnitNATO_IFV3_D","UnitNATO_IFV4_C","UnitNATO_IFV4_G","UnitNATO_IFV4_D","UnitNATO_TNK1_C","UnitNATO_TNK1_G","UnitNATO_TNK1_D","UnitNATO_AH1_P","UnitNATO_AH1_CP","UnitNATO_MMG1_FTL","UnitNATO_MMG1_G","UnitNATO_MMG1_AG","UnitNATO_HMG1_FTL","UnitNATO_HMG1_G","UnitNATO_HMG1_AG","UnitNATO_MAT1_FTL","UnitNATO_MAT1_G","UnitNATO_MAT1_AG","UnitNATO_HAT1_FTL","UnitNATO_HAT1_G","UnitNATO_HAT1_AG","UnitNATO_MTR1_FTL","UnitNATO_MTR1_G","UnitNATO_MTR1_AG","UnitNATO_MSAM1_FTL","UnitNATO_MSAM1_G","UnitNATO_MSAM1_AG","UnitNATO_WSL_SL","UnitNATO_WSL_M","UnitNATO_ST1_SP","UnitNATO_ST1_SN","UnitNATO_ENG1_FTL","UnitNATO_ENG1_A1","UnitNATO_ENG1_A2","UnitNATO_ENG1_A3","UnitNATO_DT1_TL","UnitNATO_DT1_D1","UnitNATO_DT1_D2","UnitNATO_DT1_D3","UnitNATO_CoyCO","UnitNATO_Coy_M","UnitNATO_CoyXO","UnitNATO_1PLT","UnitNATO_1PLT_M","UnitNATO_1PLT_SGT","UnitNATO_2PLT","UnitNATO_2PLT_M","UnitNATO_2PLT_SGT","UnitNATO_DSL_SL","UnitNATO_DSL_M","UnitNATO_D1_FTL","UnitNATO_D1_AR","UnitNATO_D1_AAR","UnitNATO_D1_AT","UnitNATO_D2_FTL","UnitNATO_D2_AR","UnitNATO_D2_AAR","UnitNATO_D2_AT","UnitNATO_D3_FTL","UnitNATO_D3_AR","UnitNATO_D3_AAR","UnitNATO_D3_AT","UnitNATO_ESL_SL","UnitNATO_ESL_M","UnitNATO_E1_FTL","UnitNATO_E1_AR","UnitNATO_E1_AAR","UnitNATO_E1_AT","UnitNATO_E2_FTL","UnitNATO_E2_AR","UnitNATO_E2_AAR","UnitNATO_E2_AT","UnitNATO_E3_FTL","UnitNATO_E3_AR","UnitNATO_E3_AAR","UnitNATO_E3_AT","UnitNATO_fsl_SL","UnitNATO_fsl_M","UnitNATO_F1_FTL","UnitNATO_F1_AR","UnitNATO_F1_AAR","UnitNATO_F1_AT","UnitNATO_F2_FTL","UnitNATO_F2_AR","UnitNATO_F2_AAR","UnitNATO_F2_AT","UnitNATO_F3_FTL","UnitNATO_F3_AR","UnitNATO_F3_AAR","UnitNATO_F3_AT","UnitIND_CO","UnitIND_CO_M","UnitIND_CO_UAV","UnitIND_CO_D","UnitIND_DC","UnitIND_DC_M","UnitIND_DC_UAV","UnitIND_DC_D","UnitIND_ASL_SL","UnitIND_ASL_M","UnitIND_A1_FTL","UnitIND_A1_AR","UnitIND_A1_AAR","UnitIND_A1_AT","UnitIND_A2_FTL","UnitIND_A2_AR","UnitIND_A2_AAR","UnitIND_A2_AT","UnitIND_A3_FTL","UnitIND_A3_AR","UnitIND_A3_AAR","UnitIND_A3_AT","UnitIND_BSL_SL","UnitIND_BSL_M","UnitIND_B1_FTL","UnitIND_B1_AR","UnitIND_B1_AAR","UnitIND_B1_AT","UnitIND_B2_FTL","UnitIND_B2_AR","UnitIND_B2_AAR","UnitIND_B2_AT","UnitIND_B3_FTL","UnitIND_B3_AR","UnitIND_B3_AAR","UnitIND_B3_AT","UnitIND_CSL_SL","UnitIND_CSL_M","UnitIND_C1_FTL","UnitIND_C1_AR","UnitIND_C1_AAR","UnitIND_C1_AT","UnitIND_C2_FTL","UnitIND_C2_AR","UnitIND_C2_AAR","UnitIND_C2_AT","UnitIND_C3_FTL","UnitIND_C3_AR","UnitIND_C3_AAR","UnitIND_C3_AT","UnitIND_TH1_P","UnitIND_TH1_CP","UnitIND_TH2_P","UnitIND_TH2_CP","UnitIND_IFV1_C","UnitIND_IFV1_G","UnitIND_IFV1_D","UnitIND_IFV2_C","UnitIND_IFV2_G","UnitIND_IFV2_D","UnitIND_IFV3_C","UnitIND_IFV3_G","UnitIND_IFV3_D","UnitIND_IFV4_C","UnitIND_IFV4_G","UnitIND_IFV4_D","UnitIND_TNK1_C","UnitIND_TNK1_G","UnitIND_TNK1_D","UnitIND_AH1_P","UnitIND_AH1_CP","UnitIND_MMG1_FTL","UnitIND_MMG1_G","UnitIND_MMG1_AG","UnitIND_HMG1_FTL","UnitIND_HMG1_G","UnitIND_HMG1_AG","UnitIND_MAT1_FTL","UnitIND_MAT1_G","UnitIND_MAT1_AG","UnitIND_HAT1_FTL","UnitIND_HAT1_G","UnitIND_HAT1_AG","UnitIND_MTR1_FTL","UnitIND_MTR1_G","UnitIND_MTR1_AG","UnitIND_MSAM1_FTL","UnitIND_MSAM1_G","UnitIND_MSAM1_AG","UnitIND_WSL_SL","UnitIND_WSL_M","UnitIND_ST1_SP","UnitIND_ST1_SN","UnitIND_ENG1_FTL","UnitIND_ENG1_A1","UnitIND_ENG1_A2","UnitIND_ENG1_A3","UnitIND_DT1_TL","UnitIND_DT1_D1","UnitIND_DT1_D2","UnitIND_DT1_D3","UnitNATO_ASL_SL","UnitNATO_ASL_M"]};
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