class CfgPatches
{
	class Wolf_magGroup_compat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_FHAWCovert","rhs_c_weapons","BWA3_Comp_ACE","hlcweapons_g3"};
		version = "1";
		projectName = "Wolf Compat";
		author = "Dedmen";
	};
};

class CfgMagazineWells
{
	class M2010_300wm
	{
		HLC_Magazines[] = {"hlc_5rnd_300WM_FMJ_AWM","hlc_5rnd_300WM_mk248_AWM","hlc_5rnd_300WM_BTSP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_SBT_AWM","hlc_5rnd_300WM_T_AWM"};
	};
	class UGL_m230
	{
		BI[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
		ACE[] = {"ACE_HuntIR_M203"};
	};
	class Stanag_762x51_small
	{
		RHSUSF_Magazines_Stanag_762x51_small[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
	};
	class Stanag_762x51
	{
		RHSUSF_Magazines_Stanag_762x51_small[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
		ACE_Magazines_Stanag_762x51[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mag_SD","ACE_10Rnd_762x51_M118LR_Mag","ACE_10Rnd_762x51_Mk316_Mod_0_Mag","ACE_10Rnd_762x51_Mk319_Mod_0_Mag","ACE_10Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
		BW_Magazines_Stanag_762x51[] = {"BWA3_10Rnd_762x51_G28","BWA3_10Rnd_762x51_G28_AP","BWA3_10Rnd_762x51_G28_Tracer_Dim","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_Tracer","BWA3_10Rnd_762x51_G28_LR"};
		HLC_Magazines_Stanag_762x51[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_t_G3","hlc_20rnd_762x51_Mk316_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_S_G3","hlc_20Rnd_762x51_bball_amt","hlc_20Rnd_762x51_mk316_amt","hlc_20Rnd_762x51_T_amt","hlc_20Rnd_762x51_b_amt"};
		RHSUSF_Magazines_Stanag_762x51[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
	};
	class Stanag_762x51_big
	{
		RHSUSF_Magazines_Stanag_762x51_small[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
		ACE_Magazines_Stanag_762x51[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mag_SD","ACE_10Rnd_762x51_M118LR_Mag","ACE_10Rnd_762x51_Mk316_Mod_0_Mag","ACE_10Rnd_762x51_Mk319_Mod_0_Mag","ACE_10Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
		BW_Magazines_Stanag_762x51[] = {"BWA3_10Rnd_762x51_G28","BWA3_10Rnd_762x51_G28_AP","BWA3_10Rnd_762x51_G28_Tracer_Dim","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_Tracer","BWA3_10Rnd_762x51_G28_LR"};
		HLC_Magazines_Stanag_762x51[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_t_G3","hlc_20rnd_762x51_Mk316_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_S_G3","hlc_20Rnd_762x51_bball_amt","hlc_20Rnd_762x51_mk316_amt","hlc_20Rnd_762x51_T_amt","hlc_20Rnd_762x51_b_amt"};
		RHSUSF_Magazines_Stanag_762x51[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
		HLC_Magazines_Stanag_762x51_big[] = {"hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_MDIM_G3","hlc_50Rnd_762x51_B_M14"};
	};
	class Stanag_556x45
	{
		BW_Magazines_Stanag_556x45[] = {"BWA3_B_556x45_Ball_AP","BWA3_B_556x45_Ball_SD","BWA3_B_556x45_Ball"};
		ACE_Magazines_Stanag_556x45[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		HLC_Magazines_Stanag_556x45[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_SOST","hlc_30rnd_556x45_SPR","hlc_30rnd_556x45_S","hlc_30rnd_556x45_MDim","hlc_30rnd_556x45_TDim"};
		RHSUSF_Magazines_Stanag_556x45[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag"};
	};
	class Stanag_556x45_Big
	{
		BW_Magazines_Stanag_556x45[] = {"BWA3_B_556x45_Ball_AP","BWA3_B_556x45_Ball_SD","BWA3_B_556x45_Ball"};
		ACE_Magazines_Stanag_556x45[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		HLC_Magazines_Stanag_556x45[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_SOST","hlc_30rnd_556x45_SPR","hlc_30rnd_556x45_S","hlc_30rnd_556x45_MDim","hlc_30rnd_556x45_TDim"};
		RHSUSF_Magazines_Stanag_556x45[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag"};
		BW_Magazines_Stanag_556x45_Big[] = {"BWA3_100Rnd_556x45_G36","BWA3_100Rnd_556x45_G36_Tracer"};
		HLC_Magazines_Stanag_556x45_Big[] = {"hlc_50rnd_556x45_EPR","hlc_100rnd_556x45_EPR_G36"};
		BI_Magazines_Stanag_556x45_Big[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F"};
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_MX_Base_F: Rifle_Base_F{};
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_g3_base: Rifle_Base_F
	{
		magazineWell[] += {"Stanag_762x51_big"};
	};
	class hlc_rifle_hk53: hlc_g3_base
	{
		magazineWell[] += {"Stanag_556x45"};
	};
	class hlc_rifle_hk33a2: hlc_g3_base
	{
		magazineWell[] += {"Stanag_556x45"};
	};
	class BWA3_G36: Rifle_Base_F
	{
		magazineWell[] += {"Stanag_556x45_Big"};
	};
	class BWA3_G38: Rifle_Base_F
	{
		magazineWell[] += {"Stanag_556x45_Big"};
	};
	class BWA3_G28_Standard: Rifle_Long_Base_F
	{
		magazineWell[] += {"Stanag_762x51_big"};
	};
	class R3F_HK417M: Rifle_Base_F
	{
		magazineWell[] += {"Stanag_762x51_big"};
	};
	class R3F_HK416M: Rifle_Base_F
	{
		magazineWell[] += {"Stanag_556x45_Big"};
		class Lance_Grenades: UGL_F
		{
			magazineWell[] += {"UGL_m230"};
		};
	};
	class R3F_SIG551: Rifle_Base_F
	{
		magazineWell[] += {"Stanag_556x45_Big"};
	};
	class CUP_srifle_M24_des: Rifle_Base_F
	{
		magazineWell[] += {"Stanag_762x51_small","M2010_300wm"};
	};
	class rhs_weap_XM2010_Base_F: Rifle_Base_F
	{
		magazineWell[] += {"M2010_300wm","Stanag_762x51_small"};
	};
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		magazineWell[] += {"Stanag_556x45_Big"};
	};
	class rhs_weap_m14ebrri: srifle_EBR_F
	{
		magazineWell[] += {"Stanag_762x51_big"};
	};
	class hlc_AWC_base: Rifle_Base_F
	{
		magazineWell[] += {"M2010_300wm","Stanag_762x51"};
	};
};
