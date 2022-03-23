


#define PATTERN_SMB_R(name, m, c, l, w, b, r, tex) \
	class ##name##_##r : name                      \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			camo = #c;                            \
			loadout = #l;                         \
			weapon = #w;                          \
			belt = #b;                            \
			rank = #r;                         \
		};                                        \
		class ItemInfo : ItemInfo { \
			hiddenSelectionsTextures[]= { tex, "" }; \
		}; \
		hiddenSelectionsTextures[]= { tex, "" }; \
	}; 											  

#define PATTERN_SMB(name, base, m, c, l, w, b) \
	class name: base                              \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			camo = #c;                            \
			loadout = #l;                         \
			weapon = #w;                          \
			belt = #b;                            \
			rank = "1CL"                          \
		};                                        \
		class ItemInfo; \
		hiddenSelectionsTextures[]= { AMFPATCHES(data\GRADE_VEST\BV_1CL.paa), "" }; \
	}; 											  \
	PATTERN_SMB_R(name,m, c, l, w, b, 2CL, "") \
	PATTERN_SMB_R(name,m, c, l, w, b, CPL, AMFPATCHES(data\GRADE_VEST\BV_CPL.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, CCH, AMFPATCHES(data\GRADE_VEST\BV_CCH.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, ESO, AMFPATCHES(data\GRADE_VEST\BV_ESO.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, SGT, AMFPATCHES(data\GRADE_VEST\BV_SGT.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, SCH, AMFPATCHES(data\GRADE_VEST\BV_SCH.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, ADJ, AMFPATCHES(data\GRADE_VEST\BV_ADJ.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, ADC, AMFPATCHES(data\GRADE_VEST\BV_ADC.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, MAJ, AMFPATCHES(data\GRADE_VEST\BV_MJR.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, ASP, AMFPATCHES(data\GRADE_VEST\BV_ASP.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, SLT, AMFPATCHES(data\GRADE_VEST\BV_SLT.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, LTN, AMFPATCHES(data\GRADE_VEST\BV_LTN.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, CNE, AMFPATCHES(data\GRADE_VEST\BV_CNE.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, CMD, AMFPATCHES(data\GRADE_VEST\BV_CMD.paa))  


class CfgWeapons
{
	class Uniform_Base;
	class H_HelmetB;
	class ItemCore;

	
	// amf_smb
	PATTERN_SMB(amf_smb_gr,           ItemCore,   amf_smb,TAN,LG,HK416,no)
	PATTERN_SMB(amf_smb_gr_famas,     amf_smb_gr, amf_smb,TAN,LG,FAMAS,no)
	PATTERN_SMB(amf_smb_gr_famas_grn, amf_smb_gr, amf_smb,OD, LG,FAMAS,no)
	PATTERN_SMB(amf_smb_gr_grn,       amf_smb_gr, amf_smb,OD, LG,HK416,no)
	PATTERN_SMB(amf_smb_grb,          ItemCore,   amf_smb,TAN,LG,HK416,yes)
	PATTERN_SMB(amf_smb_grb_famas,    amf_smb_grb,amf_smb,TAN,LG,FAMAS,yes)
	PATTERN_SMB(amf_smb_grb_famas_grn,amf_smb_grb,amf_smb,OD, LG,FAMAS,yes)
	PATTERN_SMB(amf_smb_grb_grn,      amf_smb_grb,amf_smb,OD, LG,HK416,yes)
	PATTERN_SMB(amf_smb_in,           ItemCore,   amf_smb,TAN,GV,HK416,no)
	PATTERN_SMB(amf_smb_in_famas,     amf_smb_in, amf_smb,TAN,GV,FAMAS,no)
	PATTERN_SMB(amf_smb_in_famas_grn, amf_smb_in, amf_smb,OD, GV,FAMAS,no)
	PATTERN_SMB(amf_smb_in_grn,       amf_smb_in, amf_smb,OD, GV,HK416,no)
	PATTERN_SMB(amf_smb_inb,          ItemCore,   amf_smb,TAN,GV,HK416,yes)
	PATTERN_SMB(amf_smb_inb_famas,    amf_smb_inb,amf_smb,TAN,GV,FAMAS,yes)
	PATTERN_SMB(amf_smb_inb_famas_grn,amf_smb_inb,amf_smb,OD, GV,FAMAS,yes)
	PATTERN_SMB(amf_smb_inb_grn,      amf_smb_inb,amf_smb,OD, GV,HK416,yes)
	PATTERN_SMB(amf_smb_me,           ItemCore,   amf_smb,TAN,SC2,HK416,no)
	PATTERN_SMB(amf_smb_me_famas,     amf_smb_me, amf_smb,TAN,SC2,FAMAS,no)
	PATTERN_SMB(amf_smb_me_famas_grn, amf_smb_me, amf_smb,OD, SC2,FAMAS,no)
	PATTERN_SMB(amf_smb_me_grn,       amf_smb_me, amf_smb,OD, SC2,HK416,no)
	PATTERN_SMB(amf_smb_meb,          ItemCore,   amf_smb,TAN,SC2,HK416,yes)
	PATTERN_SMB(amf_smb_meb_famas,    amf_smb_meb,amf_smb,TAN,SC2,FAMAS,yes)
	PATTERN_SMB(amf_smb_meb_famas_grn,amf_smb_meb,amf_smb,OD, SC2,FAMAS,yes)
	PATTERN_SMB(amf_smb_meb_grn,      amf_smb_meb,amf_smb,OD, SC2,HK416,yes)
	PATTERN_SMB(amf_smb_tl,           ItemCore,   amf_smb,TAN,CDG,HK416,no)
	PATTERN_SMB(amf_smb_tl_famas,     amf_smb_tl, amf_smb,TAN,CDG,FAMAS,no)
	PATTERN_SMB(amf_smb_tl_famas_grn, amf_smb_tl, amf_smb,OD, CDG,FAMAS,no)
	PATTERN_SMB(amf_smb_tl_grn,       amf_smb_tl, amf_smb,OD, CDG,HK416,no)
	PATTERN_SMB(amf_smb_tlb,          ItemCore,   amf_smb,TAN,CDG,HK416,yes)
	PATTERN_SMB(amf_smb_tlb_famas,    ItemCore,   amf_smb,TAN,CDG,FAMAS,yes)
	PATTERN_SMB(amf_smb_tlb_famas_grn,amf_smb_tlb,amf_smb,OD, CDG,FAMAS,yes)
	PATTERN_SMB(amf_smb_tlb_grn,      amf_smb_tlb,amf_smb,OD, CDG,HK416,yes)
	PATTERN_SMB(amf_smb_mc,           ItemCore,   amf_smb,TAN,AR,HK416,no)
	PATTERN_SMB(amf_smb_mc_grn,       amf_smb_mc, amf_smb,OD, AR,HK416,no)
	PATTERN_SMB(amf_smb_mcb,          ItemCore,   amf_smb,TAN,AR,HK416,yes)
	PATTERN_SMB(amf_smb_mcb_grn,      amf_smb_mcb,amf_smb,OD, AR,HK416,yes)
	
	PATTERN_SMB(amf_smb_tp_frf2,      amf_smb_grb,amf_smb_tp,TAN,TP,FRF2,no)
	PATTERN_SMB(amf_smb_tp_frf2_grn,  amf_smb_grb,amf_smb_tp,OD, TP,FRF2,no)
	PATTERN_SMB(amf_smb_tp_hk417,     amf_smb_grb,amf_smb_tp,TAN,TP,HK417,no)
	PATTERN_SMB(amf_smb_tp_hk417_grn, amf_smb_grb,amf_smb_tp,OD, TP,HK417,no)
	PATTERN_SMB(amf_smb_tp_scarh,     amf_smb_grb,amf_smb_tp,TAN,TP,SCARH,no)
	PATTERN_SMB(amf_smb_tp_scarh_grn, amf_smb_grb,amf_smb_tp,OD, TP,SCARH,no)

	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

	class AMF_MSC_MXGLV_BLK: CBA_MiscItem {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "MX Gloves";
		descriptionShort = "MX Gloves";
		model = QPATHTOF(data\mx.p3d);
		picture = QPATHTOF(data\mx.paa);
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 1;
		};
	};

	class AMF_MSC_GOGGLES_BLK: CBA_MiscItem {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Goggles";
		descriptionShort = "Goggles";
		model = "\A3\characters_f_beta\heads\glasses\g_combat.p3d"; // TODO
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa"; // TODO
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
		};
	};

};
