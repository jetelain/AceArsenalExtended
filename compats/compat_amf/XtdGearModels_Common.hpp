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
class AMF_RankBaseBV
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

class AMF_RankBaseHV
{
	label = CSTRING(Rank);
	changeingame = 0;
	centerImage = 1;
	values[] = {
		"2CL","1CL","CPL","CCH","CC1",
		"SGT","SCH","SCHBM2","ADJ","MAJ",
		"ASP","SLT","LTN","CNE","CDT","LCL","COL"};
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

	#define RANK_TERRE(REALID,NAMEID,LABEL) \
	class REALID : RankBase  \
	{  \
		description = LABEL;  \
		image = AMFPATCHES(data\GRADE_HV\TERRE\##NAMEID##_TERRE_CO.paa);  \
		texture = AMFPATCHES(data\GRADE_HV\TERRE\##NAMEID##_TERRE_CO.paa);  \
		material = AMFPATCHES(data\GRADE_HV\RVMAT\##NAMEID##.rvmat);  \
	}; 

	RANK_TERRE(1CL,1ER,"Première classe (distinction)")
	RANK_TERRE(CPL,CAL,"Caporal")
	RANK_TERRE(CCH,CCH,"Caporal-chef")
	RANK_TERRE(CC1,CCH_CT1,"Caporal-chef de 1ére classe")
	/*RANK_TERRE(SGT,1ER,"Elève Sous-Officier")*/
	RANK_TERRE(SGT,SGT,"Sergent")
	RANK_TERRE(SCH,SCH01,"Sergent-chef")
	RANK_TERRE(SCHBM2,SCH02,"Sergent-chef BM2")
	RANK_TERRE(ADJ,ADJ,"Adjudant")
	/*RANK_TERRE(ADC,1ER,"Adjudant-chef")*/
	RANK_TERRE(MAJ,MAJ,"Major")
	RANK_TERRE(ASP,ASP,"Aspirant")
	RANK_TERRE(SLT,SLT,"Sous-lieutenant")
	RANK_TERRE(LTN,LTN,"Lieutenant")
	RANK_TERRE(CNE,CNE,"Capitaine")
	RANK_TERRE(CDT,CDT,"Commandant")
	RANK_TERRE(LCL,LCL,"Lieutenant-colonel")
	RANK_TERRE(COL,COL,"Colonel")
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
	values[] = {"none", "OAKLEY"};
	changeingame = 1;
	class none 
	{
		label = CSTRING(None);
		actionlabel=CSTRING(GogglesNoneAction);
		icon = QPATHTOF(data\nogoggles.paa);
	};
	class OAKLEY 
	{
		label = CSTRING(GogglesDown);
		actionlabel=CSTRING(GogglesDownAction);
		itemingame = "AMF_MSC_GOGGLES_BLK";
		icon = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
	};
};

class GogglesOrFaceShieldBase : GogglesBase
{
	values[] = {"none", "OAKLEY", "FS"};
	class FS 
	{
		label = CSTRING(FaceShield);
		changeingame = -1;
	};
};


class AMF_CamoBase 
{
	class CE
	{
		label = "CE/TAN";
		image = QPATHTOF(data\ce_tan.paa);
	};
	class CEOD
	{
		label = "CE/OD";
		image = QPATHTOF(data\ce_od.paa);
	};
	class DADA
	{
		label = "DA";
		image = QPATHTOF(data\da.paa);
	};
	class CEDA
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