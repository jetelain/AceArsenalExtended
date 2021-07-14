class XtdGearModels
{
	class SordinBase
	{
		label = "MSA SORDIN";
		changeingame = 0;
		values[] = {"none", "OD", "BLK", "TAN"};
		class none
		{
			label = CSTRING(None);
		};
		class OD
		{
			label = "OD";
			descritpion = "Olive Drab";
			image="#(rgb,8,8,3)color(0.3,0.29,0.24,1)";
		};
		class BLK
		{
			label = "Black";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};
		class TAN
		{
			label = "TAN";
			image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
		};
	};
	class VestRankBase
	{
		label = CSTRING(Rank);
		changeingame = 0;
		centerImage = 1;
		values[] = {"2CL","1CL","CPL","CCH","CC1","SGT","SCH","ADJ","ADC","MAJ","ASP","LTN"};
		class 2CL
		{
			label="SDT";
			description="Deuxième classe";
			image = "";
			texture = "";
		};
		class 1CL
		{
			description="Première classe (distinction)";
			image = "amf_vests\data\grades\1cl_co.paa";
			texture = "amf_vests\data\grades\1cl_co.paa";
		};
		class CPL
		{
			description="Caporal";
			image = "amf_vests\data\grades\cpl_co.paa";
			texture = "amf_vests\data\grades\cpl_co.paa";
		};
		class CCH
		{
			description="Caporal-chef";
			image = "amf_vests\data\grades\cplchef_co.paa";
			texture = "amf_vests\data\grades\cplchef_co.paa";
		};
		class CC1
		{
			description="Caporal-chef de première classe";
			image = "amf_vests\data\grades\cplchef1_co.paa";
			texture = "amf_vests\data\grades\cplchef1_co.paa";
		};
		class SGT
		{
			description="Sergent";
			image = "amf_vests\data\grades\sgt_co.paa";
			texture = "amf_vests\data\grades\sgt_co.paa";
		};
		class SCH
		{
			description="Sergent-chef";
			image = "amf_vests\data\grades\sgtchef_co.paa";
			texture = "amf_vests\data\grades\sgtchef_co.paa";
		};
		class ADJ
		{
			description="Adjudant";
			image = "amf_vests\data\grades\adj_co.paa";
			texture = "amf_vests\data\grades\adj_co.paa";
		};
		class ADC
		{
			description="Adjudant-chef";
			image = "amf_vests\data\grades\adjchel_co.paa";
			texture = "amf_vests\data\grades\adjchel_co.paa";
		};
		class MAJ
		{
			description="Major";
			image = "amf_vests\data\grades\maj_co.paa";
			texture = "amf_vests\data\grades\maj_co.paa";
		};
		class ASP
		{
			description="Aspirant";
			image = "amf_vests\data\grades\asp_co.paa";
			texture = "amf_vests\data\grades\asp_co.paa";
		};
		class LTN
		{
			description="Lieutenant";
			image = "amf_vests\data\grades\lt_co.paa";
			texture = "amf_vests\data\grades\lt_co.paa";
		};
	};


	class BloodTypeBase
	{
		label = CSTRING(BloodType);
		changeingame = 0;
		centerImage = 1;
		values[] = {"none","APOS","ANEG","BPOS","BNEG","OPOS","ONEG","ABPOS","ABNEG"};
		class none
		{
			label=CSTRING(None);
			image = "";
			texture = "";
		};
		class APOS
		{
			label="A+";
			image = "amf_vests\data\blood\apos_co.paa";
			texture = "amf_vests\data\blood\apos_co.paa";
		};
		class ANEG
		{
			label="A-";
			image = "amf_vests\data\blood\aneg_co.paa";
			texture = "amf_vests\data\blood\aneg_co.paa";
		};
		class BPOS
		{
			label="B+";
			image = "amf_vests\data\blood\bpos_co.paa";
			texture = "amf_vests\data\blood\bpos_co.paa";
		};
		class BNEG
		{
			label="B-";
			image = "amf_vests\data\blood\bneg_co.paa";
			texture = "amf_vests\data\blood\bneg_co.paa";
		};
		class OPOS
		{
			label="O+";
			image = "amf_vests\data\blood\opos_co.paa";
			texture = "amf_vests\data\blood\opos_co.paa";
		};
		class ONEG
		{
			label="O-";
			image = "amf_vests\data\blood\oneg_co.paa";
			texture = "amf_vests\data\blood\oneg_co.paa";
		};
		class ABPOS
		{
			label="AB+";
			image = "amf_vests\data\blood\abpos_co.paa";
			texture = "amf_vests\data\blood\abpos_co.paa";
		};
		class ABNEG
		{
			label="AB-";
			image = "amf_vests\data\blood\abneg_co.paa";
			texture = "amf_vests\data\blood\abneg_co.paa";
		};
	};


	class GlovesBase
	{
		label = CSTRING(Gloves);
		values[] = {"none", "MX"};
		changeingame = 1;
		class none 
		{
			label = CSTRING(None);
			actionlabel=CSTRING(GlovesNoneAction);
			icon = QPATHTOF(data\nogloves.paa);
		};
		class MX 
		{
			label = CSTRING(GlovesMX);
			actionlabel=CSTRING(GlovesMXAction);
			itemingame = "AMF_MSC_MXGLV_BLK";
			icon = QPATHTOF(data\mx.paa);
		};
	};

	class GogglesBase
	{
		label = CSTRING(Goggles);
		values[] = {"none", "down"};
		changeingame = 1;
		class none 
		{
			label = CSTRING(None);
			actionlabel=CSTRING(GogglesNoneAction);
			icon = QPATHTOF(data\nogoggles.paa);
		};
		class down 
		{
			label = CSTRING(GogglesDown);
			actionlabel=CSTRING(GogglesDownAction);
			itemingame = "AMF_MSC_GOGGLES_BLK";
			icon = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		};
	};

	class CfgWeapons 
	{
		class amf_uniform_ubas
		{
			label = "Treillis F3/Ubas";
			author = "Arma Mod France";
			options[] = {"camo","sleeves","gloves"};
			// textureoptions[]={"rank","bloodtype"}; will be added in v7.1 in september 
			class camo // coventional name
			{
				values[] = {"CE_TAN","CE_OD","DA","SERVAL"};
				class CE_TAN
				{
					label = "CE/TAN";
					image = QPATHTOF(data\ce_tan.paa);
				};
				class CE_OD
				{
					label = "CE/OD";
					image = QPATHTOF(data\ce_od.paa);
				};
				class DA
				{
					label = "DA";
					image = QPATHTOF(data\da.paa);
				};
				class SERVAL
				{
					label = "SERVAL";
					image = QPATHTOF(data\serval.paa);
				};
			};
			class sleeves // coventional name
			{
				values[] = {"Full", "Half"};
			};
			class gloves : GlovesBase { };
			class rank : VestRankBase {
				hiddenselection = "grade";
			};
			class bloodtype : BloodTypeBase {
				hiddenselection = "sang";
			};
		};

		class amf_uniform_f3
		{
			label = "Treillis F3";
			author = "Arma Mod France";
			options[] = {"camo","gloves"};
			class camo // coventional name
			{
				values[] = {"CE","DA","SERVAL","MTP"};
				class CE
				{
					label = "CE";
					image = QPATHTOF(data\ce.paa);
				};
				class DA
				{
					label = "DA";
					image = QPATHTOF(data\da.paa);
				};
				class SERVAL
				{
					label = "SERVAL";
					image = QPATHTOF(data\serval.paa);
				};
			};
			class gloves : GlovesBase { };
		};

		class amf_felin
		{
			label = "MSA Felin";
			author = "Arma Mod France";
			options[] = {"camo","sordin","goggles"};
			class camo
			{
				values[] = {"none", "mount", "ce", "TAN", "ONU"};
				class none
				{
					label = CSTRING(None);
				};
				class mount
				{
					label = "Mount";
				};
				class ce
				{
					label = "CE";
					descritpion = "Centre-Europe";
					image = QPATHTOF(data\ce.paa);
				};
				class TAN
				{
					label = "TAN";
					image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
				};
			};
			class sordin : SordinBase {};
			class goggles : GogglesBase {};
		};



		class amf_tc3000
		{
			label = "MSA TC-3000";
			author = "Arma Mod France";
			options[] = {"camo","sordin","goggles"};
			class camo
			{
				values[] = {"OD", "TAN"};
			};
			class sordin : SordinBase {};
			class goggles : GogglesBase {};

		};

		class amf_tc3001
		{
			label = "MSA TC-3001";
			author = "Arma Mod France";
			options[] = {"camo","sordin","goggles"};
			class camo
			{
				values[] = {"OD", "TAN"};
			};
			class sordin : SordinBase {};
			class goggles : GogglesBase {};
		};

		class amf_tc800
		{
			label = "MSA TC-800";
			author = "Arma Mod France";
			options[] = {"camo","sordin","goggles"};
			class camo
			{
				values[] = {"OD", "BLK", "TAN"};
			};
			class sordin : SordinBase {};
			class goggles : GogglesBase {};

		};

		class amf_tc801
		{
			label = "MSA TC-801";
			author = "Arma Mod France";
			options[] = {"camo","sordin","goggles"};
			class camo
			{
				values[] = {"OD", "BLK", "TAN"};
			};
			class sordin : SordinBase {};
			class goggles : GogglesBase {};

		};

		class amf_smb
		{
			label = "NFM SMB";
			author = "Arma Mod France";
			options[] = {"camo","weapon", "loadout", "belt", "rank"};
			class camo
			{
				changeingame = 0;
				values[] = {"TAN", "OD"};
			};
			class weapon
			{
				label = CSTRING(Magazines);
				changeingame = 0;
				values[] = {"HK416","FAMAS"};
			};
			class loadout
			{
				label = CSTRING(Loadout);
				changeingame = 0;
				values[] = {"LG","GV","CDG","SC2","AR"};
			};
			class belt
			{
				label = CSTRING(Belt);
				changeingame = 0;
				values[] = {"no","yes"};
				class no
				{
					label = CSTRING(BeltNo);
				};
				class yes
				{
					label = CSTRING(BeltYes);
				};
			};
			class rank : VestRankBase {};
		};

		class amf_smb_tp
		{
			label = "NFM SMB (TP)";
			author = "Arma Mod France";
			options[] = {"camo","weapon", "loadout", "belt","rank"};
			class camo
			{
				values[] = {"TAN", "OD"};
			};
			class weapon
			{
				label = CSTRING(Magazines);
				changeingame = 0;
				values[] = {"FRF2","HK417","SCARH"};
			};
			class loadout
			{
				label = CSTRING(Loadout);
				changeingame = 0;
				values[] = {"TP"};
			};
			class belt
			{
				label = CSTRING(Belt);
				changeingame = 0;
				values[] = {"no","yes"};
				class no
				{
					label = CSTRING(BeltNo);
				};
				class yes
				{
					label = CSTRING(BeltYes);
				};
			};
			class rank : VestRankBase {};
		};

		class amf_opscore_xp
		{
			label = "GENTEX OPSCORE FAST XP";
			author = "Arma Mod France";
			options[] = {"camo","sordin","goggles"};
			class camo
			{
				values[] = {"OD", "BLK", "TAN", "GRY"};
			};
			class sordin : SordinBase {
				values[] = {"BLK","TAN","OD"};
			};
			class goggles : GogglesBase {};

		};

		class amf_opscore_bump
		{
			label = "GENTEX OPSCORE BUMP";
			author = "Arma Mod France";
			options[] = {"camo","sordin","goggles","top"};
			class camo
			{
				values[] = {"OD", "BLK", "TAN", "GRY"};
			};
			class sordin : SordinBase {
				values[] = {"BLK","TAN","OD"};
			};
			class goggles : GogglesBase {};

			class top
			{
				label = "Top";
				changeingame = 0;
				values[] = {"none", "irf"};
				class none
				{
					label = CSTRING(None);
				};
				class irf
				{
					label = "IRF";
				};
			};
		};


		class amf_hk416a5_short
		{
			label = "HK416 A5 11""";
			author = "Arma Mod France";
			options[] = {"camo","butt","handguard"};
			class camo
			{
				values[] = {"BLK","TAN","TDF","Paint"};
			};
			class butt
			{
				label = CSTRING(Butt);
				values[] = {"STD","MOE","UBR"};
			};
			class handguard
			{
				label = CSTRING(Handguard);
				values[] = {"STD","SMR"};
			};
		};

		class amf_hk416a5_long
		{
			label = "HK416 A5 13""";
			author = "Arma Mod France";
			options[] = {"camo","butt","handguard"};
			class camo
			{
				values[] = {"BLK","TAN","TDF","Paint"};
			};
			class butt
			{
				label = CSTRING(Butt);
				values[] = {"STD","MOE","UBR"};
			};
			class handguard
			{
				label = CSTRING(Handguard);
				values[] = {"STD","SMR"};
			};
		};

		
		class amf_dcs
		{
			label = "DCS WARRIOR ASSAULT";
			author = "Arma Mod France";
			options[] = {"camo","loadout"};
			class camo
			{
				values[] = {"TDF","OD","TAN","BLK","MTP"};
			};
			class loadout
			{
				label = CSTRING(Loadout);
				values[] = {"L1","L2","L3","L4","L5"};
			};
		};
	};
};
