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

		class RankBase
		{
			material = AMFPATCHES(data\GRADE\GRADE.rvmat);
		};
		class 2CL
		{
			label="SDT";
			description="Deuxième classe";
			image = "";
			texture = "";
			material = "\a3\data_f\default.rvmat";
		};
		class 1CL : RankBase
		{
			description="Première classe (distinction)";
			image = AMFPATCHES(data\GRADE\BV_1CL.paa);
			texture = AMFPATCHES(data\GRADE\BV_1CL.paa);
		};
		class CPL : RankBase
		{
			description="Caporal";
			image = AMFPATCHES(data\GRADE\BV_CPL.paa);
			texture = AMFPATCHES(data\GRADE\BV_CPL.paa);
		};
		class CCH : RankBase
		{
			description="Caporal-chef";
			image = AMFPATCHES(data\GRADE\BV_CCH.paa);
			texture = AMFPATCHES(data\GRADE\BV_CCH.paa);
		};
		/*class CC1
		{
			description="Caporal-chef de première classe";
			image = AMFPATCHES(data\GRADE\BV_CC1.paa);
			texture = AMFPATCHES(data\GRADE\BV_CC1.paa);
		};
		*/
		class ESO : RankBase
		{
			description="Elève Sous-Officier";
			image = AMFPATCHES(data\GRADE\BV_ESO.paa);
			texture = AMFPATCHES(data\GRADE\BV_ESO.paa);
		};
		class SGT : RankBase
		{
			description="Sergent";
			image = AMFPATCHES(data\GRADE\BV_SGT.paa);
			texture = AMFPATCHES(data\GRADE\BV_SGT.paa);
		};
		class SCH : RankBase
		{
			description="Sergent-chef";
			image = AMFPATCHES(data\GRADE\BV_SCH.paa);
			texture = AMFPATCHES(data\GRADE\BV_SCH.paa);
		};
		class ADJ : RankBase
		{
			description="Adjudant";
			image = AMFPATCHES(data\GRADE\BV_ADJ.paa);
			texture = AMFPATCHES(data\GRADE\BV_ADJ.paa);
		};
		class ADC : RankBase
		{
			description="Adjudant-chef";
			image = AMFPATCHES(data\GRADE\BV_ADC.paa);
			texture = AMFPATCHES(data\GRADE\BV_ADC.paa);
		};
		class MAJ : RankBase
		{
			description="Major";
			image = AMFPATCHES(data\GRADE\BV_MJR.paa);
			texture = AMFPATCHES(data\GRADE\BV_MJR.paa);
		};
		class ASP : RankBase
		{
			description="Aspirant";
			image = AMFPATCHES(data\GRADE\BV_ASP.paa);
			texture = AMFPATCHES(data\GRADE\BV_ASP.paa);
		};
		class SLT : RankBase
		{
			description="Sous-lieutenant";
			image = AMFPATCHES(data\GRADE\BV_SLT.paa);
			texture = AMFPATCHES(data\GRADE\BV_SLT.paa);
		};
		class LTN : RankBase
		{
			description="Lieutenant";
			image = AMFPATCHES(data\GRADE\BV_LTN.paa);
			texture = AMFPATCHES(data\GRADE\BV_LTN.paa);
		};
		class CNE : RankBase
		{
			description="Capitaine";
			image = AMFPATCHES(data\GRADE\BV_CNE.paa);
			texture = AMFPATCHES(data\GRADE\BV_CNE.paa);
		};
		class CMD : RankBase
		{
			description="Commandant";
			image = AMFPATCHES(data\GRADE\BV_CMD.paa);
			texture = AMFPATCHES(data\GRADE\BV_CMD.paa);
		};
		class LCL : RankBase
		{
			description="Lieutenant-colonel";
			image = AMFPATCHES(data\GRADE\BV_LCL.paa);
			texture = AMFPATCHES(data\GRADE\BV_LCL.paa);
		};
		class LCL2 : RankBase
		{
			description="Lieutenant-colonel";
			image = AMFPATCHES(data\GRADE\BV_LCL_2.paa);
			texture = AMFPATCHES(data\GRADE\BV_LCL_2.paa);
		};
		class COL : RankBase
		{
			description="Colonel";
			image = AMFPATCHES(data\GRADE\BV_COL.paa);
			texture = AMFPATCHES(data\GRADE\BV_COL.paa);
		};
		class G2 : RankBase
		{
			description="Général de brigade";
			image = AMFPATCHES(data\GRADE\BV_G2.paa);
			texture = AMFPATCHES(data\GRADE\BV_G2.paa);
		};
		class G3 : RankBase
		{
			description="Général de division";
			image = AMFPATCHES(data\GRADE\BV_G3.paa);
			texture = AMFPATCHES(data\GRADE\BV_G3.paa);
		};
		class G4 : RankBase
		{
			description="Général de corps d'armée";
			image = AMFPATCHES(data\GRADE\BV_G4.paa);
			texture = AMFPATCHES(data\GRADE\BV_G4.paa);
		};
		class G5 : RankBase
		{
			description="Général d'armée";
			image = AMFPATCHES(data\GRADE\BV_G5.paa);
			texture = AMFPATCHES(data\GRADE\BV_G5.paa);
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
			material = "\a3\data_f\default.rvmat";
		};
		
		class BloodBase
		{
			material = AMFPATCHES(data\SANG\SANG.rvmat);
		};

		#define BLOOD_TYPE_PATTERN(COLOR)                 \
		class APOS_##COLOR : BloodBase                    \
		{                                                 \
			label="A+";                                   \
			image   = AMFPATCHES(data\SANG\##COLOR##_A_POS.paa); \
			texture = AMFPATCHES(data\SANG\##COLOR##_A_POS.paa); \
		};                                                \
		class ANEG_##COLOR : BloodBase                    \
		{                                                 \
			label="A-";                                   \
			image   = AMFPATCHES(data\SANG\##COLOR##_A_NEG.paa); \
			texture = AMFPATCHES(data\SANG\##COLOR##_A_NEG.paa); \
		};                                                \
		class BPOS_##COLOR : BloodBase                    \
		{                                                 \
			label="B+";                                   \
			image   = AMFPATCHES(data\SANG\##COLOR##_B_POS.paa); \
			texture = AMFPATCHES(data\SANG\##COLOR##_B_POS.paa); \
		};                                                \
		class BNEG_##COLOR : BloodBase                    \
		{                                                 \
			label="B-";                                   \
			image   = AMFPATCHES(data\SANG\##COLOR##_B_NEG.paa); \
			texture = AMFPATCHES(data\SANG\##COLOR##_B_NEG.paa); \
		};                                                \
		class OPOS_##COLOR : BloodBase                    \
		{                                                 \
			label="O+";                                   \
			image   = AMFPATCHES(data\SANG\##COLOR##_O_POS.paa); \
			texture = AMFPATCHES(data\SANG\##COLOR##_O_POS.paa); \
		};                                                \
		class ONEG_##COLOR : BloodBase                    \
		{                                                 \
			label="O-";                                   \
			image   = AMFPATCHES(data\SANG\##COLOR##_O_NEG.paa); \
			texture = AMFPATCHES(data\SANG\##COLOR##_O_NEG.paa); \
		};                                                \
		class ABPOS_##COLOR : BloodBase                   \
		{                                                 \
			label="AB+";                                  \
			image   = AMFPATCHES(data\SANG\##COLOR##_AB_POS.paa); \
			texture = AMFPATCHES(data\SANG\##COLOR##_AB_POS.paa); \
		};                                                \
		class ABNEG_##COLOR : BloodBase                   \
		{                                                 \
			label="AB-";                                  \
			image   = AMFPATCHES(data\SANG\##COLOR##_AB_NEG.paa); \
			texture = AMFPATCHES(data\SANG\##COLOR##_AB_NEG.paa); \
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
			material = "\a3\data_f\default.rvmat";
		};
		class FRANCE_BV
		{
			label="BV";
			image = AMFPATCHES(data\DRAPEAU\FRANCE_BV.paa);
			texture = AMFPATCHES(data\DRAPEAU\FRANCE_BV.paa);
			material = AMFPATCHES(data\DRAPEAU\FRANCE.rvmat);
		};
		class FRANCE_HV
		{
			label="HV";
			image = AMFPATCHES(data\DRAPEAU\FRANCE_HV.paa);
			texture = AMFPATCHES(data\DRAPEAU\FRANCE_HV.paa);
			material = AMFPATCHES(data\DRAPEAU\FRANCE.rvmat);
		};
		class FRANCE_SABLE
		{
			label="SABLE";
			image = AMFPATCHES(data\DRAPEAU\FRANCE_SABLE.paa);
			texture = AMFPATCHES(data\DRAPEAU\FRANCE_SABLE.paa);
			material = AMFPATCHES(data\DRAPEAU\FRANCE.rvmat);
		};
		class FRANCE_LEGION_BLANC_HV
		{
			label="Legion";
			image = AMFPATCHES(data\DRAPEAU\FRANCE_LEGION_BLANC_HV.paa);
			texture = AMFPATCHES(data\DRAPEAU\FRANCE_LEGION_BLANC_HV.paa);
			material = AMFPATCHES(data\DRAPEAU\FRANCE_LEGION.rvmat);
		};
		class FRANCE_LEGION_JAUNE_HV
		{
			label="Legion";
			image = AMFPATCHES(data\DRAPEAU\FRANCE_LEGION_JAUNE_HV.paa);
			texture = AMFPATCHES(data\DRAPEAU\FRANCE_LEGION_JAUNE_HV.paa);
			material = AMFPATCHES(data\DRAPEAU\FRANCE_LEGION.rvmat);
		};
		class NATO_BLACK
		{
			label="OTAN";
			image = AMFPATCHES(data\DRAPEAU\NATO_BLACK.paa);
			texture = AMFPATCHES(data\DRAPEAU\NATO_BLACK.paa);
			material = AMFPATCHES(data\DRAPEAU\NATO_BLACK.rvmat);
		};
		class NATO_BLEU
		{
			label="OTAN";
			image = AMFPATCHES(data\DRAPEAU\NATO_BLEU.paa);
			texture = AMFPATCHES(data\DRAPEAU\NATO_BLEU.paa);
			material = AMFPATCHES(data\DRAPEAU\NATO_BLEU.rvmat);
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
	
	class GlovesColorBase
	{
		hiddenselection = "Camo4";
		label = "Couleur gants";
		values[] = {"BLK", "TAN"};
		class BLK 
		{
			texture="!DEFAULT!";
		};
		class TAN 
		{
			texture = "amf_uniforms\data\usp_gloves_tan_CO.paa";
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

	class GogglesOrFaceShieldBase : GogglesBase
	{
		values[] = {"none", "down", "FS"};
		class FS 
		{
			label = CSTRING(FaceShield);
			changeingame = -1;
		};
	};

	class CfgWeapons 
	{
		class amf_uniform_ubas
		{
			label = "Treillis F3/Ubas";
			author = "Arma Mod France";
			options[] = {"camo","sleeves","gloves"};
			textureoptions[]={"rank","bloodtype","flag","glovescolor"};

			class camo // conventional name
			{
				values[] = {"CE_TAN","CE_OD","DA","SERVAL","TUNDRA"};
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
				class TUNDRA
				{
					label = "TUNDRA";
					image = QPATHTOF(data\tundra.paa);
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
			class glovescolor : GlovesColorBase {};
		};

		class amf_uniform_t4s2
		{
			label = "Treillis T4S2";
			author = "Arma Mod France";
			options[] = {"camo","gloves"};
			textureoptions[]={"rank","bloodtype","flag","glovescolor"};
			class camo // coventional name
			{
				values[] = {"CE","DA","SERVAL"};
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
			class glovescolor : GlovesColorBase {};
		};

		class amf_g3
		{
			label = "Crye G3";
			author = "Arma Mod France";

			options[] = {"camo", "sleeves"};
			class camo // coventional name
			{
				values[] = {"MTP", "BLK", "OD", "TAN"};
			};
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
			textureoptions[]={"rank","bloodtype","flag","glovescolor"}; //will be added later, need to wait for updated p3ds
			class camo // coventional name
			{
				values[] = {"CE","DA","SERVAL","MTP","TUNDRA"};
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
				class TUNDRA
				{
					label = "TUNDRA";
					image = QPATHTOF(data\tundra.paa);
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
			class glovescolor : GlovesColorBase {};
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
			class goggles : GogglesOrFaceShieldBase {};

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
			class goggles : GogglesOrFaceShieldBase {};

		};

		class amf_smb
		{
			label = "NFM SMB";
			author = "Arma Mod France";
			options[] = {"camo","weapon", "loadout", "belt"};
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
		};

		class amf_smb_tp
		{
			label = "NFM SMB (TP)";
			author = "Arma Mod France";
			options[] = {"camo","weapon"};
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
		};

		class amf_jpc
		{
			label = "CRYE PRECISION JPC";
			author = "Arma Mod France";
			options[] = {"camo","loadout"};
			class camo
			{
				values[] = {"TDF", "BLK", "OD", "MTP", "TAN"};
			};
			class loadout
			{
				label = CSTRING(Loadout);
				values[] = {"L1", "L2", "L3"};
			};
		};


		class amf_opscore_xp
		{
			label = "OPSCORE FAST XP";
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

		class amf_opscore_fs
		{
			label = "OPSCORE FAST FS";
			author = "Arma Mod France";
			options[] = {"camo"};
			class camo
			{
				values[] = {"OD", "BLK", "TAN", "GRY"};
			};
		};

		class amf_opscore_bump
		{
			label = "OPSCORE BUMP";
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
				values[] = {"OD","CE","DA","UN","UN2","FO"};
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

		class amf_scar_l
		{
			label = "FN SCAR L";
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

		class amf_S3
		{
			label = "FRAG S3";
			author = "Arma Mod France";
			options[] = {"camo"};
			class camo
			{
				values[] = {"CE", "DA"};
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
			};
		};

		
		class amf_714
		{
			label = "HK 417A2";
			author = "Arma Mod France";
			options[] = {"camo","size"};
			class camo
			{
				values[] = {"BLK", "TAN"};
			};
			class size
			{
				label = CSTRING(Size);
				values[] = {"S16", "S13"};
				class S16
				{
					label = "16""";
				};
				class S13
				{
					label = "13""";
				};
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
	class CfgVehicles
	{
		class AMF_FELIN
		{
			label = "TECPACK Felin 45L";
			author = "Arma Mod France";
			options[] = {"camo","loadout"};
			class camo
			{
				values[] = {"OD","TAN"};
			};			
			class loadout
			{
				label = CSTRING(Loadout);
				changeingame = 0;
				values[] = {"STD", "MED","TFAR"};
			};
		};		
		
		class AMF_rush24
		{
			label = "5.11 RUSH24 2.0";
			author = "Arma Mod France";
			options[] = {"camo"};
			class camo
			{
				values[] = {"OD","TAN", "BLK", "TDF", "MTP"};
			};			
		};
	};


};
