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

	if(isNil "DAC_STRPlayers")		then {		DAC_STRPlayers		= ["s1","s2","s3","s4","s5","s6","s7","s8","s9","s10","UnitNATO_CO","UnitNATO_CO_M","UnitNATO_CO_UAV","UnitNATO_CO_D","UnitNATO_DC","UnitNATO_DC_M","UnitNATO_DC_UAV","UnitNATO_DC_D","UnitNATO_ASL_SL","UnitNATO_ASL_M","UnitNATO_A1_FTL","UnitNATO_A1_AR","UnitNATO_A1_AAR","UnitNATO_A1_AT","UnitNATO_A2_FTL","UnitNATO_A2_AR","UnitNATO_A2_AAR","UnitNATO_A2_AT","UnitNATO_A3_FTL","UnitNATO_A3_AR","UnitNATO_A3_AAR","UnitNATO_A3_AT","UnitNATO_BSL_SL","UnitNATO_BSL_M","UnitNATO_B1_FTL","UnitNATO_B1_AR","UnitNATO_B1_AAR","UnitNATO_B1_AT","UnitNATO_B2_FTL","UnitNATO_B2_AR","UnitNATO_B2_AAR","UnitNATO_B2_AT","UnitNATO_B3_FTL","UnitNATO_B3_AR","UnitNATO_B3_AAR","UnitNATO_B3_AT","UnitNATO_CSL_SL","UnitNATO_CSL_M","UnitNATO_C1_FTL","UnitNATO_C1_AR","UnitNATO_C1_AAR","UnitNATO_C1_AT","UnitNATO_C2_FTL","UnitNATO_C2_AR","UnitNATO_C2_AAR","UnitNATO_C2_AT","UnitNATO_C3_FTL","UnitNATO_C3_AR","UnitNATO_C3_AAR","UnitNATO_C3_AT","UnitCSAT_CO","UnitCSAT_CO_M","UnitCSAT_CO_UAV","UnitCSAT_CO_D","UnitCSAT_DC","UnitCSAT_DC_M","UnitCSAT_DC_UAV","UnitCSAT_DC_D","UnitCSAT_ASL_SL","UnitCSAT_ASL_M","UnitCSAT_A1_FTL","UnitCSAT_A1_AR","UnitCSAT_A1_AAR","UnitCSAT_A1_AT","UnitCSAT_A2_FTL","UnitCSAT_A2_AR","UnitCSAT_A2_AAR","UnitCSAT_A2_AT","UnitCSAT_A3_FTL","UnitCSAT_A3_AR","UnitCSAT_A3_AAR","UnitCSAT_A3_AT","UnitCSAT_BSL_SL","UnitCSAT_BSL_M","UnitCSAT_B1_FTL","UnitCSAT_B1_AR","UnitCSAT_B1_AAR","UnitCSAT_B1_AT","UnitCSAT_B2_FTL","UnitCSAT_B2_AR","UnitCSAT_B2_AAR","UnitCSAT_B2_AT","UnitCSAT_B3_FTL","UnitCSAT_B3_AR","UnitCSAT_B3_AAR","UnitCSAT_B3_AT","UnitCSAT_CSL_SL","UnitCSAT_CSL_M","UnitCSAT_C1_FTL","UnitCSAT_C1_AR","UnitCSAT_C1_AAR","UnitCSAT_C1_AT","UnitCSAT_C2_FTL","UnitCSAT_C2_AR","UnitCSAT_C2_AAR","UnitCSAT_C2_AT","UnitCSAT_C3_FTL","UnitCSAT_C3_AR","UnitCSAT_C3_AAR","UnitCSAT_C3_AT","UnitNATO_MMG1_FTL","UnitNATO_MMG1_G","UnitNATO_MMG1_AG","UnitNATO_MAT1_G","UnitNATO_MAT1_AG","UnitNATO_HMG1_FTL","UnitNATO_HMG1_G","UnitNATO_HMG1_AG","UnitNATO_HAT1_G","UnitNATO_HAT1_AG","UnitNATO_ENG1_FTL","UnitNATO_ENG1_A1","UnitNATO_ENG1_A2","UnitNATO_ENG1_A3","UnitNATO_DT1_TL","UnitNATO_DT1_D1","UnitNATO_DT1_D2","UnitNATO_DT1_D3","UnitNATO_TH1_P","UnitNATO_TH1_CP","UnitNATO_TH1_G1","UnitNATO_TH1_G2","UnitCSAT_MMG1_G","UnitCSAT_MMG1_AG","UnitCSAT_MAT1_G","UnitCSAT_MAT1_AG","UnitCSAT_ENG1_FTL","UnitCSAT_ENG1_A1","UnitCSAT_ENG1_A2","UnitCSAT_ENG1_A3","UnitCSAT_DT1_TL","UnitCSAT_DT1_D1","UnitCSAT_DT1_D2","UnitCSAT_DT1_D3","UnitCSAT_TH1_P","UnitCSAT_TH1_CP","UnitAAF_CO","UnitAAF_CO_M","UnitAAF_CO_UAV","UnitAAF_CO_D","UnitAAF_DC","UnitAAF_DC_M","UnitAAF_DC_UAV","UnitAAF_DC_D","UnitAAF_ASL_SL","UnitAAF_ASL_M","UnitAAF_A1_FTL","UnitAAF_A1_AR","UnitAAF_A1_AAR","UnitAAF_A1_AT","UnitAAF_A2_FTL","UnitAAF_A2_AR","UnitAAF_A2_AAR","UnitAAF_A2_AT","UnitAAF_A3_FTL","UnitAAF_A3_AR","UnitAAF_A3_AAR","UnitAAF_A3_AT","UnitAAF_BSL_SL","UnitAAF_BSL_M","UnitAAF_B1_FTL","UnitAAF_B1_AR","UnitAAF_B1_AAR","UnitAAF_B1_AT","UnitAAF_B2_FTL","UnitAAF_B2_AR","UnitAAF_B2_AAR","UnitAAF_B2_AT","UnitAAF_B3_FTL","UnitAAF_B3_AR","UnitAAF_B3_AAR","UnitAAF_B3_AT","UnitAAF_CSL_SL","UnitAAF_CSL_M","UnitAAF_C1_FTL","UnitAAF_C1_AR","UnitAAF_C1_AAR","UnitAAF_C1_AT","UnitAAF_C2_FTL","UnitAAF_C2_AR","UnitAAF_C2_AAR","UnitAAF_C2_AT","UnitAAF_C3_FTL","UnitAAF_C3_AR","UnitAAF_C3_AAR","UnitAAF_C3_AT","UnitAAF_MMG1_G","UnitAAF_MMG1_AG","UnitAAF_MAT1_G","UnitAAF_MAT1_AG","UnitAAF_ENG1_FTL","UnitAAF_ENG1_A1","UnitAAF_ENG1_A2","UnitAAF_ENG1_A3","UnitAAF_DT1_TL","UnitAAF_DT1_D1","UnitAAF_DT1_D2","UnitAAF_DT1_D3","UnitAAF_TH1_P","UnitAAF_TH1_CP","UnitNATO_TH2_P","UnitNATO_TH2_CP","UnitNATO_TH2_G1","UnitNATO_TH2_G2","UnitNATO_TH3_P","UnitNATO_TH3_CP","UnitNATO_TH3_G1","UnitNATO_TH3_G2","UnitNATO_TH4_P","UnitNATO_TH4_CP","UnitNATO_TH4_G1","UnitNATO_TH4_G2","UnitNATO_TH5_P","UnitNATO_TH5_CP","UnitNATO_TH5_G1","UnitNATO_TH5_G2","UnitNATO_TH6_P","UnitNATO_TH6_CP","UnitNATO_TH6_G1","UnitNATO_TH6_G2","UnitNATO_TH7_P","UnitNATO_TH7_CP","UnitNATO_TH7_G1","UnitNATO_TH7_G2","UnitNATO_TH8_P","UnitNATO_TH8_CP","UnitNATO_TH8_G1","UnitNATO_TH8_G2","UnitNATO_IFV1_C","UnitNATO_IFV1_G","UnitNATO_IFV1_D","UnitNATO_IFV2_C","UnitNATO_IFV2_G","UnitNATO_IFV2_D","UnitNATO_IFV3_C","UnitNATO_IFV3_G","UnitNATO_IFV3_D","UnitNATO_IFV4_C","UnitNATO_IFV4_G","UnitNATO_IFV4_D","UnitNATO_IFV5_C","UnitNATO_IFV5_G","UnitNATO_IFV5_D","UnitNATO_IFV6_C","UnitNATO_IFV6_G","UnitNATO_IFV6_D","UnitNATO_IFV7_C","UnitNATO_IFV7_G","UnitNATO_IFV7_D","UnitNATO_IFV8_C","UnitNATO_IFV8_G","UnitNATO_IFV8_D","UnitNATO_TNK1_C","UnitNATO_TNK1_G","UnitNATO_TNK1_D","UnitNATO_AH1_P","UnitNATO_AH1_CP","UnitAAF_TH2_P","UnitAAF_TH2_CP","UnitAAF_TH3_P","UnitAAF_TH3_CP","UnitAAF_TH4_P","UnitAAF_TH4_CP","UnitCSAT_TH2_P","UnitCSAT_TH2_CP","UnitCSAT_TH3_P","UnitCSAT_TH3_CP","UnitCSAT_TH4_P","UnitCSAT_TH4_CP","UnitCSAT_TH5_P","UnitCSAT_TH5_CP","UnitCSAT_TH6_P","UnitCSAT_TH6_CP","UnitCSAT_TH7_P","UnitCSAT_TH7_CP","UnitCSAT_TH8_P","UnitCSAT_TH8_CP","UnitCSAT_IFV1_C","UnitCSAT_IFV1_G","UnitCSAT_IFV1_D","UnitCSAT_IFV2_C","UnitCSAT_IFV2_G","UnitCSAT_IFV2_D","UnitCSAT_IFV3_C","UnitCSAT_IFV3_G","UnitCSAT_IFV3_D","UnitCSAT_IFV4_C","UnitCSAT_IFV4_G","UnitCSAT_IFV4_D","UnitCSAT_IFV5_C","UnitCSAT_IFV5_G","UnitCSAT_IFV5_D","UnitCSAT_IFV6_C","UnitCSAT_IFV6_G","UnitCSAT_IFV6_D","UnitCSAT_IFV7_C","UnitCSAT_IFV7_G","UnitCSAT_IFV7_D","UnitCSAT_IFV8_C","UnitCSAT_IFV8_G","UnitCSAT_IFV8_D","UnitCSAT_TNK1_C","UnitCSAT_TNK1_G","UnitCSAT_TNK1_D","UnitCSAT_AH1_P","UnitCSAT_AH1_CP","UnitAAF_IFV1_C","UnitAAF_IFV1_G","UnitAAF_IFV1_D","UnitAAF_IFV2_C","UnitAAF_IFV2_G","UnitAAF_IFV2_D","UnitAAF_IFV3_C","UnitAAF_IFV3_G","UnitAAF_IFV3_D","UnitAAF_IFV4_C","UnitAAF_IFV4_G","UnitAAF_IFV4_D","UnitAAF_IFV5_C","UnitAAF_IFV5_G","UnitAAF_IFV5_D","UnitAAF_IFV6_C","UnitAAF_IFV6_G","UnitAAF_IFV6_D","UnitAAF_IFV7_C","UnitAAF_IFV7_G","UnitAAF_IFV7_D","UnitAAF_IFV8_C","UnitAAF_IFV8_G","UnitAAF_IFV8_D","UnitAAF_TNK1_C","UnitAAF_TNK1_G","UnitAAF_TNK1_D","UnitAAF_AH1_P","UnitAAF_AH1_CP","UnitFIA_CO","UnitFIA_CO_M","UnitFIA_CO_UAV","UnitFIA_CO_D","UnitFIA_DC","UnitFIA_DC_M","UnitFIA_DC_UAV","UnitFIA_DC_D","UnitFIA_ASL_SL","UnitFIA_ASL_M","UnitFIA_A1_FTL","UnitFIA_A1_AR","UnitFIA_A1_AAR","UnitFIA_A1_AT","UnitFIA_A2_FTL","UnitFIA_A2_AR","UnitFIA_A2_AAR","UnitFIA_A2_AT","UnitFIA_A3_FTL","UnitFIA_A3_AR","UnitFIA_A3_AAR","UnitFIA_A3_AT","UnitFIA_BSL_SL","UnitFIA_BSL_M","UnitFIA_B1_FTL","UnitFIA_B1_AR","UnitFIA_B1_AAR","UnitFIA_B1_AT","UnitFIA_B2_FTL","UnitFIA_B2_AR","UnitFIA_B2_AAR","UnitFIA_B2_AT","UnitFIA_B3_FTL","UnitFIA_B3_AR","UnitFIA_B3_AAR","UnitFIA_B3_AT","UnitFIA_CSL_SL","UnitFIA_CSL_M","UnitFIA_C1_FTL","UnitFIA_C1_AR","UnitFIA_C1_AAR","UnitFIA_C1_AT","UnitFIA_C2_FTL","UnitFIA_C2_AR","UnitFIA_C2_AAR","UnitFIA_C2_AT","UnitFIA_C3_FTL","UnitFIA_C3_AR","UnitFIA_C3_AAR","UnitFIA_C3_AT","UnitFIA_HMG1_FTL","UnitFIA_HMG1_G","UnitFIA_HMG1_AG","UnitFIA_MMG1_FTL","UnitFIA_MMG1_G","UnitFIA_MMG1_AG","UnitFIA_MAT1_FTL","UnitFIA_MAT1_G","UnitFIA_MAT1_AG","UnitFIA_HAT1_FTL","UnitFIA_HAT1_G","UnitFIA_HAT1_AG","UnitFIA_ENG1_FTL","UnitFIA_ENG1_A1","UnitFIA_ENG1_A2","UnitFIA_ENG1_A3","UnitNATO_MTR1_FTL","UnitNATO_MTR1_G","UnitNATO_MTR1_AG","UnitNATO_MSAM1_FTL","UnitNATO_MSAM1_G","UnitNATO_MSAM1_AG","UnitNATO_ST1_SP","UnitNATO_ST1_SN","UnitNATO_WSL_SL","UnitNATO_WSL_M","UnitAAF_MTR1_FTL","UnitAAF_MTR1_G","UnitAAF_MTR1_AG","UnitAAF_MSAM1_FTL","UnitAAF_MSAM1_G","UnitAAF_MSAM1_AG","UnitAAF_ST1_SP","UnitAAF_ST1_SN","UnitAAF_WSL_SL","UnitAAF_WSL_M","UnitAAF_MMG1_FTL","UnitAAF_MMG1_G","UnitAAF_MMG1_AG","UnitAAF_MAT1_G","UnitAAF_MAT1_AG","UnitAAF_HMG1_FTL","UnitAAF_HMG1_G","UnitAAF_HMG1_AG","UnitAAF_HAT1_G","UnitAAF_HAT1_AG","UnitCSAT_MTR1_FTL","UnitCSAT_MTR1_G","UnitCSAT_MTR1_AG","UnitCSAT_MSAM1_FTL","UnitCSAT_MSAM1_G","UnitCSAT_MSAM1_AG","UnitCSAT_ST1_SP","UnitCSAT_ST1_SN","UnitCSAT_WSL_SL","UnitCSAT_WSL_M","UnitCSAT_MMG1_FTL","UnitCSAT_MMG1_G","UnitCSAT_MMG1_AG","UnitCSAT_MAT1_G","UnitCSAT_MAT1_AG","UnitCSAT_HMG1_FTL","UnitCSAT_HMG1_G","UnitCSAT_HMG1_AG","UnitCSAT_HAT1_G","UnitCSAT_HAT1_AG"]};
	if(isNil "DAC_AI_Count_Level")	then {		DAC_AI_Count_Level  = [[2,4],[3,6],[4,8],[6,12],[1,0]]			};
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