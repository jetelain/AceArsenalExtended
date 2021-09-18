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
	class RankBase
	{
		label = CSTRING(Rank);
		changeingame = 0;
		centerImage = 1;
		values[] = {
			"2CL","1CL","CPL","CCH",
			"ESO","SGT","SCH","ADJ","ADC","MAJ",
			"ASP","SLT","LTN","CNE","CMD","LCL","LCL2","COL",
			"G2","G3","G4","G5"};
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
			image = QPATHTOF(data\patchs\GRADE\BV_1CL.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_1CL.paa);
		};
		class CPL
		{
			description="Caporal";
			image = QPATHTOF(data\patchs\GRADE\BV_CPL.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_CPL.paa);
		};
		class CCH
		{
			description="Caporal-chef";
			image = QPATHTOF(data\patchs\GRADE\BV_CCH.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_CCH.paa);
		};
		/*class CC1
		{
			description="Caporal-chef de première classe";
			image = QPATHTOF(data\patchs\GRADE\BV_CC1.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_CC1.paa);
		};
		*/
		class ESO
		{
			description="Elève Sous-Officier";
			image = QPATHTOF(data\patchs\GRADE\BV_ESO.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_ESO.paa);
		};
		class SGT
		{
			description="Sergent";
			image = QPATHTOF(data\patchs\GRADE\BV_SGT.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_SGT.paa);
		};
		class SCH
		{
			description="Sergent-chef";
			image = QPATHTOF(data\patchs\GRADE\BV_SCH.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_SCH.paa);
		};
		class ADJ
		{
			description="Adjudant";
			image = QPATHTOF(data\patchs\GRADE\BV_ADJ.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_ADJ.paa);
		};
		class ADC
		{
			description="Adjudant-chef";
			image = QPATHTOF(data\patchs\GRADE\BV_ADC.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_ADC.paa);
		};
		class MAJ
		{
			description="Major";
			image = QPATHTOF(data\patchs\GRADE\BV_MJR.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_MJR.paa);
		};
		class ASP
		{
			description="Aspirant";
			image = QPATHTOF(data\patchs\GRADE\BV_ASP.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_ASP.paa);
		};
		class SLT
		{
			description="Sous-lieutenant";
			image = QPATHTOF(data\patchs\GRADE\BV_SLT.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_SLT.paa);
		};
		class LTN
		{
			description="Lieutenant";
			image = QPATHTOF(data\patchs\GRADE\BV_LTN.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_LTN.paa);
		};
		class CNE
		{
			description="Capitaine";
			image = QPATHTOF(data\patchs\GRADE\BV_CNE.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_CNE.paa);
		};
		class CMD
		{
			description="Commandant";
			image = QPATHTOF(data\patchs\GRADE\BV_CMD.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_CMD.paa);
		};
		class LCL
		{
			description="Lieutenant-colonel";
			image = QPATHTOF(data\patchs\GRADE\BV_LCL.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_LCL.paa);
		};
		class LCL2
		{
			description="Lieutenant-colonel";
			image = QPATHTOF(data\patchs\GRADE\BV_LCL_2.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_LCL_2.paa);
		};
		class COL
		{
			description="Colonel";
			image = QPATHTOF(data\patchs\GRADE\BV_COL.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_COL.paa);
		};
		class G2
		{
			description="Général de brigade";
			image = QPATHTOF(data\patchs\GRADE\BV_G2.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_G2.paa);
		};
		class G3
		{
			description="Général de division";
			image = QPATHTOF(data\patchs\GRADE\BV_G3.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_G3.paa);
		};
		class G4
		{
			description="Général de corps d'armée";
			image = QPATHTOF(data\patchs\GRADE\BV_G4.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_G4.paa);
		};
		class G5
		{
			description="Général d'armée";
			image = QPATHTOF(data\patchs\GRADE\BV_G5.paa);
			texture = QPATHTOF(data\patchs\GRADE\BV_G5.paa);
		};
	};


	class BloodTypeBase
	{
		label = CSTRING(BloodType);
		changeingame = 0;
		centerImage = 1;
		
		#define BLOOD_TYPE_LIST(COLOR)  QUOTE(APOS_##COLOR),QUOTE(ANEG_##COLOR),QUOTE(BPOS_##COLOR),QUOTE(BNEG_##COLOR),QUOTE(OPOS_##COLOR),QUOTE(ONEG_##COLOR),QUOTE(ABPOS_##COLOR),QUOTE(ABNEG_##COLOR)
		values[] = {"none",BLOOD_TYPE_LIST(SAND),BLOOD_TYPE_LIST(GREEN)/*,BLOOD_TYPE_LIST(BLACK)*/};
		
		class none
		{
			label=CSTRING(None);
			image = "";
			texture = "";
		};
		
		#define BLOOD_TYPE_PATTERN(COLOR)                 \
		class APOS_##COLOR                                 \
		{                                                 \
			label="A+";                                   \
			image   = QPATHTOF(data\patchs\SANG\##COLOR##_A_POS.paa); \
			texture = QPATHTOF(data\patchs\SANG\##COLOR##_A_POS.paa); \
		};                                                \
		class ANEG_##COLOR                                 \
		{                                                 \
			label="A-";                                   \
			image   = QPATHTOF(data\patchs\SANG\##COLOR##_A_NEG.paa); \
			texture = QPATHTOF(data\patchs\SANG\##COLOR##_A_NEG.paa); \
		};                                                \
		class BPOS_##COLOR                                 \
		{                                                 \
			label="B+";                                   \
			image   = QPATHTOF(data\patchs\SANG\##COLOR##_B_POS.paa); \
			texture = QPATHTOF(data\patchs\SANG\##COLOR##_B_POS.paa); \
		};                                                \
		class BNEG_##COLOR                                 \
		{                                                 \
			label="B-";                                   \
			image   = QPATHTOF(data\patchs\SANG\##COLOR##_B_NEG.paa); \
			texture = QPATHTOF(data\patchs\SANG\##COLOR##_B_NEG.paa); \
		};                                                \
		class OPOS_##COLOR                                 \
		{                                                 \
			label="O+";                                   \
			image   = QPATHTOF(data\patchs\SANG\##COLOR##_O_POS.paa); \
			texture = QPATHTOF(data\patchs\SANG\##COLOR##_O_POS.paa); \
		};                                                \
		class ONEG_##COLOR                                 \
		{                                                 \
			label="O-";                                   \
			image   = QPATHTOF(data\patchs\SANG\##COLOR##_O_NEG.paa); \
			texture = QPATHTOF(data\patchs\SANG\##COLOR##_O_NEG.paa); \
		};                                                \
		class ABPOS_##COLOR                                \
		{                                                 \
			label="AB+";                                  \
			image   = QPATHTOF(data\patchs\SANG\##COLOR##_AB_POS.paa); \
			texture = QPATHTOF(data\patchs\SANG\##COLOR##_AB_POS.paa); \
		};                                                \
		class ABNEG_##COLOR                                \
		{                                                 \
			label="AB-";                                  \
			image   = QPATHTOF(data\patchs\SANG\##COLOR##_AB_NEG.paa); \
			texture = QPATHTOF(data\patchs\SANG\##COLOR##_AB_NEG.paa); \
		};
		/*BLOOD_TYPE_PATTERN(BLACK)*/
		BLOOD_TYPE_PATTERN(GREEN)
		BLOOD_TYPE_PATTERN(SAND)
	};

	class FlagBase
	{
		label = "Drapeau";
		changeingame = 0;
		centerImage = 1;
		values[] = {"none","FRANCE_BV","FRANCE_HV","FRANCE_SABLE","FRANCE_LEGION_BLANC_HV","FRANCE_LEGION_JAUNE_HV","NATO_BLACK","NATO_BLEU"};
		class none
		{
			label=CSTRING(None);
			image = "";
			texture = "";
		};
		class FRANCE_BV
		{
			label="BV";
			image = QPATHTOF(data\patchs\DRAPEAU\FRANCE_BV.paa);
			texture = QPATHTOF(data\patchs\DRAPEAU\FRANCE_BV.paa);
		};
		class FRANCE_HV
		{
			label="HV";
			image = QPATHTOF(data\patchs\DRAPEAU\FRANCE_HV.paa);
			texture = QPATHTOF(data\patchs\DRAPEAU\FRANCE_HV.paa);
		};
		class FRANCE_SABLE
		{
			label="SABLE";
			image = QPATHTOF(data\patchs\DRAPEAU\FRANCE_SABLE.paa);
			texture = QPATHTOF(data\patchs\DRAPEAU\FRANCE_SABLE.paa);
		};
		class FRANCE_LEGION_BLANC_HV
		{
			label="Legion";
			image = QPATHTOF(data\patchs\DRAPEAU\FRANCE_LEGION_BLANC_HV.paa);
			texture = QPATHTOF(data\patchs\DRAPEAU\FRANCE_LEGION_BLANC_HV.paa);
		};
		class FRANCE_LEGION_JAUNE_HV
		{
			label="Legion";
			image = QPATHTOF(data\patchs\DRAPEAU\FRANCE_LEGION_JAUNE_HV.paa);
			texture = QPATHTOF(data\patchs\DRAPEAU\FRANCE_LEGION_JAUNE_HV.paa);
		};
		class NATO_BLACK
		{
			label="OTAN";
			image = QPATHTOF(data\patchs\DRAPEAU\NATO_BLACK.paa);
			texture = QPATHTOF(data\patchs\DRAPEAU\NATO_BLACK.paa);
		};
		class NATO_BLEU
		{
			label="OTAN";
			image = QPATHTOF(data\patchs\DRAPEAU\NATO_BLEU.paa);
			texture = QPATHTOF(data\patchs\DRAPEAU\NATO_BLEU.paa);
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
			// textureoptions[]={"rank","bloodtype","flag"}; //will be added in v7.1 in september 
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
			class rank : RankBase {
				hiddenselection = "grade";
			};
			class bloodtype : BloodTypeBase {
				hiddenselection = "sang";
			};
			class flag : FlagBase {
				hiddenselection = "drapeau";
			};
		};

		class amf_g3
		{
			label = "Crye G3";
			author = "Arma Mod France";
			options[] = {"sleeves"};
			class sleeves // coventional name
			{
				values[] = {"Full", "Half"};
			};
		};

		class amf_uniform_f3
		{
			label = "Treillis F3";
			author = "Arma Mod France";
			options[] = {"camo","gloves"};
			// textureoptions[]={"rank","bloodtype","flag"}; //will be added later, need to wait for updated p3ds
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
			class rank : RankBase {
				hiddenselection = "grade";
			};
			class bloodtype : BloodTypeBase {
				hiddenselection = "sang";
			};
			class flag : FlagBase {
				hiddenselection = "drapeau";
			};
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
			class rank : RankBase {
				values[] = {
					"2CL","1CL","CPL","CCH",
					"ESO","SGT","SCH","ADJ","ADC","MAJ",
					"ASP","SLT","LTN","CNE","CMD"};
			};
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
			class rank : RankBase {
				values[] = {
					"2CL","1CL","CPL","CCH",
					"ESO","SGT","SCH","ADJ","ADC","MAJ",
					"ASP","SLT","LTN","CNE","CMD"};
			};
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

		class amf_plate
		{
			label = "EAGLE MC-CIRAS";
			author = "Arma Mod France";
			options[] = {"camo","loadout"};
			class camo
			{
				values[] = {"OD","TAN"};
			};
			class loadout
			{
				label = CSTRING(Loadout);
				values[] = {"none","GV"};
			};
		};

		class amf_spectra
		{
			label = "MSA SPECTRA";
			author = "Arma Mod France";
			options[] = {"camo"};
			class camo
			{
				values[] = {"OD","CE","DA","UN"};
			};
		};

		class amf_tcnvg
		{
			label = "MSA TC-NVG";
			author = "Arma Mod France";
			options[] = {"camo"};
			class camo
			{
				values[] = {"CE","DA"};
			};
		};

		class amf_scar_h
		{
			label = "FN SCAR H";
			author = "Arma Mod France";
			options[] = {"camo","variant"};
			class camo
			{
				values[] = {"BLK", "TAN"};
			};
			class variant
			{
				values[] = {"STD", "CQC"};
			};
		};

	};

	class CfgGlasses 
	{
		class amf_balaclava
		{
			label = "CAGOULE";
			author = "Arma Mod France";
			options[] = {"camo","sordin","goggles"};
			class camo
			{
				values[] = {"BLK", "OD", "TAN", "RGR"};
			};
			class sordin : SordinBase {};
			class goggles : GogglesBase {};

		};
	};



};
