class CfgLoadouts {
	class blu_f {
		class B_Soldier_F // rifleman
		{
			uniform[] = {"U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_tshirt","U_B_CombatUniform_mcam_vest"};  /// randomized
			vest[] = {"V_TacVest_blk","V_TacVest_brn"}; /// randomized
			headgear[] = {"H_HelmetB","H_HelmetB_plain_mcamo"}; /// randomized
			backpack[] = {"B_AssaultPack_mcamo"}; /// randomized
			backpackItems[] = {"AGM_Bandage:3","AGM_Morphine"}
			weapons[] = {"arifle_MX_pointer_F"}; /// randomized
			launchers[] = {}; /// randomized
			handguns[] = {}; /// randomized
			magazines[] = {"30Rnd_65x39_caseless_mag:7","30Rnd_65x39_caseless_mag_Tracer:2","HandGrenade:3","MiniGrenade:3","SmokeShell:4"};
			items[] = {};
			linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemWatch"};
			attachments[] = {"optic_Holosight"};
		};
		class B_officer_F : B_Soldier_F // CO and DC
		{
			weapons[] = {"arifle_MX_GL_F"};
			magazines[] = {"1Rnd_HE_Grenade_shell:4","1Rnd_Smoke_Grenade_shell:3","11Rnd_45ACP_Mag:2","30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"};
			handguns[] = {"hgun_Pistol_heavy_01_F"}; /// randomized
			linkedItems[] += {"ItemGPS"};
		};
		class B_Soldier_SL_F : B_Soldier_F // SL
		{
			weapons[] = {"arifle_MX_GL_F"};
			magazines[] = {"1Rnd_HE_Grenade_shell:4","1Rnd_Smoke_Grenade_shell:3","11Rnd_45ACP_Mag:2","30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"};
			handguns[] = {"hgun_Pistol_heavy_01_F"}; /// randomized
			linkedItems[] += {"ItemGPS"};
		};
		class B_Soldier_SL_F : B_Soldier_F // SL
		{
			weapons[] = {"arifle_MX_GL_F"};
			magazines[] = {"1Rnd_HE_Grenade_shell:4","1Rnd_Smoke_Grenade_shell:3","11Rnd_45ACP_Mag:2","30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"};
			handguns[] = {"hgun_Pistol_heavy_01_F"}; /// randomized
			linkedItems[] += {"ItemGPS"};
		};
	};
};