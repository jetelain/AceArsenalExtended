
#define PATTERN_UNIFORM_UBAS(name, c, s, g) \
	class name: Uniform_Base                      \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "amf_uniform_ubas";           \
			camo = #c;                            \
			sleeves = #s;                         \
			gloves = #g;                         \
		};                                        \
	}; 

#define PATTERN_UNIFORM_F3(name, c, g) \
	class name: Uniform_Base                      \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "amf_uniform_f3";             \
			camo = #c;                            \
			gloves = #g;                         \
		};                                        \
	}; 

#define PATTERN_HELMET(name, base, m, c, s, g) \
	class name: base                              \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			camo = #c;                           \
			sordin = #s;                          \
			goggles = #g;                         \
		};                                        \
	}; 


#define PATTERN_OPSCB(name, base, m, c, s, g, t) \
	class name: base                              \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			camo = #c;                           \
			sordin = #s;                          \
			goggles = #g;                         \
			top = #t;                             \
		};                                        \
	}; 


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
			hiddenSelectionsTextures[]= { tex, "amf_vests\data\blood_grade\amf_patch_co.paa" }; \
		}; \
		hiddenSelectionsTextures[]= { tex, "amf_vests\data\blood_grade\amf_patch_co.paa" }; \
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
	}; 											  \
	PATTERN_SMB_R(name,m, c, l, w, b, 2CL, "") \
	PATTERN_SMB_R(name,m, c, l, w, b, CPL, QPATHTOF(data\grades\cpl_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, CCH, QPATHTOF(data\grades\cplchef_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, CC1, QPATHTOF(data\grades\cplchef1_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, SGT, QPATHTOF(data\grades\sgt_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, SCH, QPATHTOF(data\grades\sgtchef_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, ADJ, QPATHTOF(data\grades\adj_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, ADC, QPATHTOF(data\grades\adjchel_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, MAJ, QPATHTOF(data\grades\maj_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, ASP, QPATHTOF(data\grades\asp_co.paa)) \
	PATTERN_SMB_R(name,m, c, l, w, b, LTN, QPATHTOF(data\grades\lt_co.paa)) 

#define PATTERN_HK614A5(name, base, m, p, b, h) \
	class name: base                              \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			camo = #p;                           \
			butt = #b;                          \
			handguard = #h;                         \
		};                                        \
	}; 


#define PATTERN_DCS(name, base, l, c) \
	class name: base           \
	{                          \
		class XtdGearInfo      \
		{                      \
			model = "amf_dcs"; \
			camo = #c;         \
			loadout = #l;      \
		};                     \
	}; 


class CfgWeapons
{
	class Uniform_Base;
	class H_HelmetB;
	class ItemCore;

	// amf_uniform_ubas
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE,CE_TAN,Full,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE,CE_TAN,Half,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE_OD,CE_OD,Full,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE_OD,CE_OD,Half,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_DA,DA,Full,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_DA,DA,Half,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_S,SERVAL,Full,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_S,SERVAL,Half,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE_2,CE_TAN,Full,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE_2,CE_TAN,Half,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE_OD_2,CE_OD,Full,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE_OD_2,CE_OD,Half,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_DA_2,DA,Full,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_DA_2,DA,Half,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_S_2,SERVAL,Full,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_S_2,SERVAL,Half,none)


	// amf_uniform_f3
	PATTERN_UNIFORM_F3(amf_uniform_03_CE,CE,MX)
	PATTERN_UNIFORM_F3(amf_uniform_03_DA,DA,MX)
	PATTERN_UNIFORM_F3(amf_uniform_03_S,SERVAL,MX)
	PATTERN_UNIFORM_F3(amf_uniform_03_MTP,MTP,MX)
	PATTERN_UNIFORM_F3(amf_uniform_03_CE_2,CE,none)
	PATTERN_UNIFORM_F3(amf_uniform_03_DA_2,DA,none)
	PATTERN_UNIFORM_F3(amf_uniform_03_S_2,SERVAL,none)
	PATTERN_UNIFORM_F3(amf_uniform_03_MTP_2,MTP,none)

	// amf_felin
	PATTERN_HELMET(amf_felin_cover,            H_HelmetB,      amf_felin,ce,none,down)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_OD, amf_felin_cover,amf_felin,ce,OD,down)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_BLK,amf_felin_cover,amf_felin,ce,BLK,down)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_TAN,amf_felin_cover,amf_felin,ce,TAN,down)

	PATTERN_HELMET(amf_felin_mount,            amf_felin_cover,amf_felin,mount,none,down)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_OD, amf_felin_mount,amf_felin,mount,OD,down)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_BLK,amf_felin_mount,amf_felin,mount,BLK,down)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_TAN,amf_felin_mount,amf_felin,mount,TAN,down)

	PATTERN_HELMET(amf_felin,            amf_felin_cover,amf_felin,none,none,none)
	PATTERN_HELMET(AMF_FELIN_EARPROT_OD, amf_felin,      amf_felin,none,OD,down)
	PATTERN_HELMET(AMF_FELIN_EARPROT_NLK,amf_felin,      amf_felin,none,BLK,down)
	PATTERN_HELMET(AMF_FELIN_EARPROT_TAN,amf_felin,      amf_felin,none,TAN,down)
	
	PATTERN_HELMET(amf_felin_cover_tan,            amf_felin_cover,amf_felin,TAN,none,down)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_OD, amf_felin_cover,amf_felin,TAN,OD,down)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_BLK,amf_felin_cover,amf_felin,TAN,BLK,down)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_TAN,amf_felin_cover,amf_felin,TAN,TAN,down)

	PATTERN_HELMET(amf_felin_cover_ONU,            amf_felin_cover,amf_felin,ONU,none,down)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_OD, amf_felin_cover,amf_felin,ONU,OD,down)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_BLK,amf_felin_cover,amf_felin,ONU,BLK,down)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_TAN,amf_felin_cover,amf_felin,ONU,TAN,down)

	PATTERN_HELMET(amf_felin_cover_CE_2,         amf_felin_cover,amf_felin,ce,none,none)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_OD_2, amf_felin_cover,amf_felin,ce,OD,none)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_BLK_2,amf_felin_cover,amf_felin,ce,BLK,none)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_TAN_2,amf_felin_cover,amf_felin,ce,TAN,none)

	PATTERN_HELMET(amf_felin_mount_2,            amf_felin_cover,amf_felin,mount,none,none)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_OD_2, amf_felin_mount,amf_felin,mount,OD,none)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_BLK_2,amf_felin_mount,amf_felin,mount,BLK,none)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_TAN_2,amf_felin_mount,amf_felin,mount,TAN,none)

	PATTERN_HELMET(amf_felin_2,            amf_felin_cover,amf_felin,none,none,down)
	PATTERN_HELMET(AMF_FELIN_EARPROT_OD_2, amf_felin,      amf_felin,none,OD,none)
	PATTERN_HELMET(AMF_FELIN_EARPROT_NLK_2,amf_felin,      amf_felin,none,BLK,none)
	PATTERN_HELMET(AMF_FELIN_EARPROT_TAN_2,amf_felin,      amf_felin,none,TAN,none)
	
	PATTERN_HELMET(amf_felin_cover_tan_2,            amf_felin_cover,amf_felin,TAN,none,none)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_OD_2, amf_felin_cover,amf_felin,TAN,OD,none)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_BLK_2,amf_felin_cover,amf_felin,TAN,BLK,none)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_TAN_2,amf_felin_cover,amf_felin,TAN,TAN,none)

	PATTERN_HELMET(amf_felin_cover_ONU_2,            amf_felin_cover,amf_felin,ONU,none,none)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_OD_2, amf_felin_cover,amf_felin,ONU,OD,none)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_BLK_2,amf_felin_cover,amf_felin,ONU,BLK,none)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_TAN_2,amf_felin_cover,amf_felin,ONU,TAN,none)
	
	// amf_tc3000
	PATTERN_HELMET(AMF_TC3000,               H_HelmetB,amf_tc3000,OD,none,none)
	PATTERN_HELMET(AMF_TC3000_earprot_blk_f, H_HelmetB,amf_tc3000,OD,BLK,none)
	PATTERN_HELMET(AMF_TC3000_earprot_od_f,  H_HelmetB,amf_tc3000,OD,OD,none)
	PATTERN_HELMET(AMF_TC3000_earprot_tan_f, H_HelmetB,amf_tc3000,OD,TAN,none)
	PATTERN_HELMET(AMF_TC3000_tan,               AMF_TC3000,    amf_tc3000,TAN,none,none)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_blk_f, AMF_TC3000_tan,amf_tc3000,TAN,BLK,none)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_od_f,  AMF_TC3000_tan,amf_tc3000,TAN,OD,none)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_tan_f, AMF_TC3000_tan,amf_tc3000,TAN,TAN,none)
	PATTERN_HELMET(AMF_TC3000_2,               H_HelmetB,amf_tc3000,OD,none,down)
	PATTERN_HELMET(AMF_TC3000_earprot_blk_f_2, H_HelmetB,amf_tc3000,OD,BLK,down)
	PATTERN_HELMET(AMF_TC3000_earprot_od_f_2,  H_HelmetB,amf_tc3000,OD,OD,down)
	PATTERN_HELMET(AMF_TC3000_earprot_tan_f_2, H_HelmetB,amf_tc3000,OD,TAN,down)
	PATTERN_HELMET(AMF_TC3000_tan_2,               AMF_TC3000,    amf_tc3000,TAN,none,down)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_blk_f_2, AMF_TC3000_tan,amf_tc3000,TAN,BLK,down)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_od_f_2,  AMF_TC3000_tan,amf_tc3000,TAN,OD,down)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_tan_f_2, AMF_TC3000_tan,amf_tc3000,TAN,TAN,down)

	// amf_tc3001
	PATTERN_HELMET(AMF_TC3001,                          H_HelmetB,amf_tc3001,OD,none,none)
	PATTERN_HELMET(AMF_TC3001_earprot_blk_f,            H_HelmetB,amf_tc3001,OD,BLK,none)
	PATTERN_HELMET(AMF_TC3001_earprot_od_f,             H_HelmetB,amf_tc3001,OD,OD,none)
	PATTERN_HELMET(AMF_TC3001_earprot_tan_f,            H_HelmetB,amf_tc3001,OD,TAN,none)
	PATTERN_HELMET(AMF_TC3001_tan,                 AMF_TC3001,    amf_tc3001,TAN,none,none)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_blk_f,   AMF_TC3001_tan,amf_tc3001,TAN,BLK,none)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_od_f,    AMF_TC3001_tan,amf_tc3001,TAN,OD,none)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_tan_f,   AMF_TC3001_tan,amf_tc3001,TAN,TAN,none)
	PATTERN_HELMET(AMF_TC3001_2,                        H_HelmetB,amf_tc3001,OD,none,down)
	PATTERN_HELMET(AMF_TC3001_earprot_blk_f_2,          H_HelmetB,amf_tc3001,OD,BLK,down)
	PATTERN_HELMET(AMF_TC3001_earprot_od_f_2,           H_HelmetB,amf_tc3001,OD,OD,down)
	PATTERN_HELMET(AMF_TC3001_earprot_tan_f_2,          H_HelmetB,amf_tc3001,OD,TAN,down)
	PATTERN_HELMET(AMF_TC3001_tan_2,               AMF_TC3001,    amf_tc3001,TAN,none,down)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_blk_f_2, AMF_TC3001_tan,amf_tc3001,TAN,BLK,down)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_od_f_2,  AMF_TC3001_tan,amf_tc3001,TAN,OD,down)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_tan_f_2, AMF_TC3001_tan,amf_tc3001,TAN,TAN,down)


	// amf_tc800
	PATTERN_HELMET(AMF_TC800,                   H_HelmetB,    amf_tc800,BLK,none,none)
	PATTERN_HELMET(AMF_TC800_EARPROT_BLK,       AMF_TC800,    amf_tc800,BLK,BLK,none)
	PATTERN_HELMET(AMF_TC800_EARPROT_OD,        AMF_TC800,    amf_tc800,BLK,OD,none)
	PATTERN_HELMET(AMF_TC800_EARPROT_TAN,       AMF_TC800,    amf_tc800,BLK,TAN,none)
	PATTERN_HELMET(AMF_TC800_GRN,               AMF_TC800,    amf_tc800,OD,none,none)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_BLK,   AMF_TC800_GRN,amf_tc800,OD,BLK,none)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_OD,    AMF_TC800_GRN,amf_tc800,OD,OD,none)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_TAN,   AMF_TC800_GRN,amf_tc800,OD,TAN,none)
	PATTERN_HELMET(AMF_TC800_TAN,               AMF_TC800,    amf_tc800,TAN,none,none)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_BLK,   AMF_TC800_TAN,amf_tc800,TAN,BLK,none)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_OD,    AMF_TC800_TAN,amf_tc800,TAN,OD,none)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_TAN,   AMF_TC800_TAN,amf_tc800,TAN,TAN,none)
  //PATTERN_HELMET(AMF_TC800_2,                 H_HelmetB,    amf_tc800,BLK,none,down) -- Missing
	PATTERN_HELMET(AMF_TC800_EARPROT_BLK_2,     AMF_TC800,    amf_tc800,BLK,BLK,down)
	PATTERN_HELMET(AMF_TC800_EARPROT_OD_2,      AMF_TC800,    amf_tc800,BLK,OD,down)
	PATTERN_HELMET(AMF_TC800_EARPROT_TAN_2,     AMF_TC800,    amf_tc800,BLK,TAN,down)
	PATTERN_HELMET(AMF_TC800_GRN_2,             AMF_TC800,    amf_tc800,OD,none,down)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_BLK_2, AMF_TC800_GRN,amf_tc800,OD,BLK,down)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_OD_2,  AMF_TC800_GRN,amf_tc800,OD,OD,down)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_TAN_2, AMF_TC800_GRN,amf_tc800,OD,TAN,down)
	PATTERN_HELMET(AMF_TC800_TAN_2,             AMF_TC800,    amf_tc800,TAN,none,down)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_BLK_2, AMF_TC800_TAN,amf_tc800,TAN,BLK,down)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_OD_2,  AMF_TC800_TAN,amf_tc800,TAN,OD,down)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_TAN_2, AMF_TC800_TAN,amf_tc800,TAN,TAN,down)
	
	// amf_tc801
	PATTERN_HELMET(AMF_TC801,                   H_HelmetB,    amf_tc801,BLK,none,none)
	PATTERN_HELMET(AMF_TC801_EARPROT_BLK,       AMF_TC801,    amf_tc801,BLK,BLK,none)
	PATTERN_HELMET(AMF_TC801_EARPROT_OD,        AMF_TC801,    amf_tc801,BLK,OD,none)
	PATTERN_HELMET(AMF_TC801_EARPROT_TAN,       AMF_TC801,    amf_tc801,BLK,TAN,none)
	PATTERN_HELMET(AMF_TC801_GRN,               AMF_TC801,    amf_tc801,OD,none,none)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_BLK,   AMF_TC801_GRN,amf_tc801,OD,BLK,none)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_OD,    AMF_TC801_GRN,amf_tc801,OD,OD,none)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_TAN,   AMF_TC801_GRN,amf_tc801,OD,TAN,none)
	PATTERN_HELMET(AMF_TC801_TAN,               AMF_TC801,    amf_tc801,TAN,none,none)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_BLK,   AMF_TC801_TAN,amf_tc801,TAN,BLK,none)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_OD,    AMF_TC801_TAN,amf_tc801,TAN,OD,none)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_TAN,   AMF_TC801_TAN,amf_tc801,TAN,TAN,none)
  //PATTERN_HELMET(AMF_TC801_2,                 H_HelmetB,    amf_tc801,BLK,none,down) -- Missing
	PATTERN_HELMET(AMF_TC801_EARPROT_BLK_2,     AMF_TC801,    amf_tc801,BLK,BLK,down)
	PATTERN_HELMET(AMF_TC801_EARPROT_OD_2,      AMF_TC801,    amf_tc801,BLK,OD,down)
	PATTERN_HELMET(AMF_TC801_EARPROT_TAN_2,     AMF_TC801,    amf_tc801,BLK,TAN,down)
	PATTERN_HELMET(AMF_TC801_GRN_2,             AMF_TC801,    amf_tc801,OD,none,down)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_BLK_2, AMF_TC801_GRN,amf_tc801,OD,BLK,down)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_OD_2,  AMF_TC801_GRN,amf_tc801,OD,OD,down)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_TAN_2, AMF_TC801_GRN,amf_tc801,OD,TAN,down)
	PATTERN_HELMET(AMF_TC801_TAN_2,             AMF_TC801,    amf_tc801,TAN,none,down)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_BLK_2, AMF_TC801_TAN,amf_tc801,TAN,BLK,down)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_OD_2,  AMF_TC801_TAN,amf_tc801,TAN,OD,down)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_TAN_2, AMF_TC801_TAN,amf_tc801,TAN,TAN,down)
	
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


	PATTERN_HELMET(AMF_OPSCORE,       H_HelmetB,         amf_opscore_xp,BLK,BLK,none)

	PATTERN_HELMET(AMF_OPSCORE_TAN,       AMF_OPSCORE,    amf_opscore_xp,BLK,OD,none)
	PATTERN_HELMET(AMF_OPSCORE_TAN,       AMF_OPSCORE,    amf_opscore_xp,BLK,TAN,none)

	PATTERN_HELMET(AMF_opscore,         H_HelmetB,  amf_opscore_xp,OD, BLK,none)
	PATTERN_HELMET(AMF_OPSCORE_OD1,     AMF_OPSCORE,amf_opscore_xp,OD, OD, none)
	PATTERN_HELMET(AMF_OPSCORE_OD1_2,   AMF_OPSCORE,amf_opscore_xp,OD, OD, down)
	PATTERN_HELMET(AMF_OPSCORE_OD2,     AMF_OPSCORE,amf_opscore_xp,OD, TAN,none)
	PATTERN_HELMET(AMF_OPSCORE_OD2_2,   AMF_OPSCORE,amf_opscore_xp,OD, TAN,down)
	PATTERN_HELMET(AMF_OPSCORE_TAN,     AMF_OPSCORE,amf_opscore_xp,TAN,BLK,none)
	PATTERN_HELMET(AMF_OPSCORE_TAN_2,   AMF_OPSCORE,amf_opscore_xp,TAN,BLK,down)
	PATTERN_HELMET(AMF_OPSCORE_TAN1,    AMF_OPSCORE,amf_opscore_xp,TAN,TAN,none)
	PATTERN_HELMET(AMF_OPSCORE_TAN1_2,  AMF_OPSCORE,amf_opscore_xp,TAN,TAN,down)
	PATTERN_HELMET(AMF_OPSCORE_TAN2,    AMF_OPSCORE,amf_opscore_xp,TAN,OD, none)
	PATTERN_HELMET(AMF_OPSCORE_TAN2_2,  AMF_OPSCORE,amf_opscore_xp,TAN,OD, down)
	PATTERN_HELMET(AMF_OPSCORE_GREY,    AMF_OPSCORE,amf_opscore_xp,GRY,BLK,none)
	PATTERN_HELMET(AMF_OPSCORE_GREY_2,  AMF_OPSCORE,amf_opscore_xp,GRY,BLK,down)
	PATTERN_HELMET(AMF_OPSCORE_GREY1,   AMF_OPSCORE,amf_opscore_xp,GRY,TAN,none)
	PATTERN_HELMET(AMF_OPSCORE_GREY1_2, AMF_OPSCORE,amf_opscore_xp,GRY,TAN,down)
	PATTERN_HELMET(AMF_OPSCORE_GREY2,   AMF_OPSCORE,amf_opscore_xp,GRY,OD, none)
	PATTERN_HELMET(AMF_OPSCORE_GREY2_2, AMF_OPSCORE,amf_opscore_xp,GRY,OD, down)
	PATTERN_HELMET(AMF_OPSCORE_BLACK,   AMF_OPSCORE,amf_opscore_xp,BLK,BLK,none)
	PATTERN_HELMET(AMF_OPSCORE_BLACK_2, AMF_OPSCORE,amf_opscore_xp,BLK,BLK,down)
	PATTERN_HELMET(AMF_OPSCORE_BLACK1,  AMF_OPSCORE,amf_opscore_xp,BLK,TAN,none)
	PATTERN_HELMET(AMF_OPSCORE_BLACK1_2,AMF_OPSCORE,amf_opscore_xp,BLK,TAN,down)
	PATTERN_HELMET(AMF_OPSCORE_BLACK2,  AMF_OPSCORE,amf_opscore_xp,BLK,OD, none)
	PATTERN_HELMET(AMF_OPSCORE_BLACK2_2,AMF_OPSCORE,amf_opscore_xp,BLK,OD, down)

	PATTERN_OPSCB(AMF_opscore2,         H_HelmetB,   amf_opscore_bump,OD, BLK,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_OD1,     AMF_OPSCORE2,amf_opscore_bump,OD, OD, none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_OD1_2,   AMF_OPSCORE2,amf_opscore_bump,OD, OD, down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_OD2,     AMF_OPSCORE2,amf_opscore_bump,OD, TAN,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_OD2_2,   AMF_OPSCORE2,amf_opscore_bump,OD, TAN,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN,     AMF_OPSCORE2,amf_opscore_bump,TAN,BLK,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN_2,   AMF_OPSCORE2,amf_opscore_bump,TAN,BLK,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN1,    AMF_OPSCORE2,amf_opscore_bump,TAN,TAN,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN1_2,  AMF_OPSCORE2,amf_opscore_bump,TAN,TAN,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN2,    AMF_OPSCORE2,amf_opscore_bump,TAN,OD, none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN2_2,  AMF_OPSCORE2,amf_opscore_bump,TAN,OD, down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY,    AMF_OPSCORE2,amf_opscore_bump,GRY,BLK,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY_2,  AMF_OPSCORE2,amf_opscore_bump,GRY,BLK,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY1,   AMF_OPSCORE2,amf_opscore_bump,GRY,TAN,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY1_2, AMF_OPSCORE2,amf_opscore_bump,GRY,TAN,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY2,   AMF_OPSCORE2,amf_opscore_bump,GRY,OD, none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY2_2, AMF_OPSCORE2,amf_opscore_bump,GRY,OD, down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK,   AMF_OPSCORE2,amf_opscore_bump,BLK,BLK,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK_2, AMF_OPSCORE2,amf_opscore_bump,BLK,BLK,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK1,  AMF_OPSCORE2,amf_opscore_bump,BLK,TAN,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK1_2,AMF_OPSCORE2,amf_opscore_bump,BLK,TAN,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK2,  AMF_OPSCORE2,amf_opscore_bump,BLK,OD, none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK2_2,AMF_OPSCORE2,amf_opscore_bump,BLK,OD, down,irf)

	PATTERN_OPSCB(AMF_opscore3,         H_HelmetB,   amf_opscore_bump,OD,BLK, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_OD1,     AMF_OPSCORE3,amf_opscore_bump,OD, OD, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_OD1_2,   AMF_OPSCORE3,amf_opscore_bump,OD, OD, down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_OD2,     AMF_OPSCORE3,amf_opscore_bump,OD, TAN,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_OD2_2,   AMF_OPSCORE3,amf_opscore_bump,OD, TAN,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN,     AMF_OPSCORE3,amf_opscore_bump,TAN,BLK,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN_2,   AMF_OPSCORE3,amf_opscore_bump,TAN,BLK,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN1,    AMF_OPSCORE3,amf_opscore_bump,TAN,TAN,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN1_2,  AMF_OPSCORE3,amf_opscore_bump,TAN,TAN,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN2,    AMF_OPSCORE3,amf_opscore_bump,TAN,OD, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN2_2_2,AMF_OPSCORE3,amf_opscore_bump,TAN,OD, down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY,    AMF_OPSCORE3,amf_opscore_bump,GRY,BLK,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY_2,  AMF_OPSCORE3,amf_opscore_bump,GRY,BLK,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY1,   AMF_OPSCORE3,amf_opscore_bump,GRY,TAN,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY1_2, AMF_OPSCORE3,amf_opscore_bump,GRY,TAN,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY2,   AMF_OPSCORE3,amf_opscore_bump,GRY,OD, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY2_2, AMF_OPSCORE3,amf_opscore_bump,GRY,OD, down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK,   AMF_OPSCORE3,amf_opscore_bump,BLK,BLK,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK_2, AMF_OPSCORE3,amf_opscore_bump,BLK,BLK,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK1,  AMF_OPSCORE3,amf_opscore_bump,BLK,TAN,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK1_2,AMF_OPSCORE3,amf_opscore_bump,BLK,TAN,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK2,  AMF_OPSCORE3,amf_opscore_bump,BLK,OD, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK2_2,AMF_OPSCORE3,amf_opscore_bump,BLK,OD, down,none)

	class AMF_614_short_01_Base_F;
	PATTERN_HK614A5(AMF_614_short_FS_BLK,   AMF_614_short_01_Base_F, amf_hk416a5_short, BLK,   MOE, STD) 
	PATTERN_HK614A5(AMF_614_short_fs_paint, AMF_614_short_01_Base_F, amf_hk416a5_short, Paint, MOE, STD) 
	PATTERN_HK614A5(AMF_614_short_FS_TAN,   AMF_614_short_01_Base_F, amf_hk416a5_short, TDF,   MOE, STD) 
	PATTERN_HK614A5(AMF_614_short_FS_TAN2,  AMF_614_short_01_Base_F, amf_hk416a5_short, TAN,   MOE, STD) 
	PATTERN_HK614A5(AMF_614_short_fs2_blk,  AMF_614_short_01_Base_F, amf_hk416a5_short, BLK,   STD, STD) 
	PATTERN_HK614A5(AMF_614_short_fs2_paint,AMF_614_short_01_Base_F, amf_hk416a5_short, Paint, STD, STD) 
	PATTERN_HK614A5(AMF_614_short_fs2_tan,  AMF_614_short_01_Base_F, amf_hk416a5_short, TDF,   STD, STD) 
	PATTERN_HK614A5(AMF_614_short_FS3_BLK,  AMF_614_short_01_Base_F, amf_hk416a5_short, BLK,   UBR, STD) 
	PATTERN_HK614A5(AMF_614_short_FS3_TAN,  AMF_614_short_01_Base_F, amf_hk416a5_short, TDF,   UBR, STD) 
	PATTERN_HK614A5(AMF_614_short_FS3_TAN2, AMF_614_short_01_Base_F, amf_hk416a5_short, TAN,   UBR, STD) 
	PATTERN_HK614A5(AMF_614_short_FS4_BLK,  AMF_614_short_01_Base_F, amf_hk416a5_short, BLK,   MOE, SMR) 
	PATTERN_HK614A5(AMF_614_short_FS4_TAN,  AMF_614_short_01_Base_F, amf_hk416a5_short, TAN,   MOE, SMR) 
	PATTERN_HK614A5(AMF_614_short_FS4_tan2, AMF_614_short_01_Base_F, amf_hk416a5_short, TDF,   MOE, SMR) 
	PATTERN_HK614A5(AMF_614_short_FS5_BLK,  AMF_614_short_01_Base_F, amf_hk416a5_short, BLK,   UBR, SMR) 
	PATTERN_HK614A5(AMF_614_short_FS5_TAN,  AMF_614_short_01_Base_F, amf_hk416a5_short, TAN,   UBR, SMR) 
	PATTERN_HK614A5(AMF_614_short_FS5_TAN2, AMF_614_short_01_Base_F, amf_hk416a5_short, TDF,   UBR, SMR) 

	class AMF_614_long_01_Base_F;
	PATTERN_HK614A5(AMF_614_long_FS_BLK,   AMF_614_long_01_Base_F, amf_hk416a5_long, BLK,   MOE, STD) 
	PATTERN_HK614A5(AMF_614_long_fs_paint, AMF_614_long_01_Base_F, amf_hk416a5_long, Paint, MOE, STD) 
	PATTERN_HK614A5(AMF_614_long_FS_TAN,   AMF_614_long_01_Base_F, amf_hk416a5_long, TDF,   MOE, STD) 
	PATTERN_HK614A5(AMF_614_long_FS_TAN2,  AMF_614_long_01_Base_F, amf_hk416a5_long, TAN,   MOE, STD) 
	PATTERN_HK614A5(AMF_614_long_fs2_blk,  AMF_614_long_01_Base_F, amf_hk416a5_long, BLK,   STD, STD) 
	PATTERN_HK614A5(AMF_614_long_fs2_paint,AMF_614_long_01_Base_F, amf_hk416a5_long, Paint, STD, STD) 
	PATTERN_HK614A5(AMF_614_long_fs2_tan,  AMF_614_long_01_Base_F, amf_hk416a5_long, TDF,   STD, STD) 
	PATTERN_HK614A5(AMF_614_long_FS3_BLK,  AMF_614_long_01_Base_F, amf_hk416a5_long, BLK,   UBR, STD) 
	PATTERN_HK614A5(AMF_614_long_FS3_TAN,  AMF_614_long_01_Base_F, amf_hk416a5_long, TDF,   UBR, STD) 
	PATTERN_HK614A5(AMF_614_long_FS3_TAN2, AMF_614_long_01_Base_F, amf_hk416a5_long, TAN,   UBR, STD) 
	PATTERN_HK614A5(AMF_614_long_FS4_BLK,  AMF_614_long_01_Base_F, amf_hk416a5_long, BLK,   MOE, SMR) 
	PATTERN_HK614A5(AMF_614_long_FS4_TAN,  AMF_614_long_01_Base_F, amf_hk416a5_long, TAN,   MOE, SMR) 
	PATTERN_HK614A5(AMF_614_long_FS4_tan2, AMF_614_long_01_Base_F, amf_hk416a5_long, TDF,   MOE, SMR) 
	PATTERN_HK614A5(AMF_614_long_FS5_BLK,  AMF_614_long_01_Base_F, amf_hk416a5_long, BLK,   UBR, SMR) 
	PATTERN_HK614A5(AMF_614_long_FS5_TAN,  AMF_614_long_01_Base_F, amf_hk416a5_long, TAN,   UBR, SMR) 
	PATTERN_HK614A5(AMF_614_long_FS5_TAN2, AMF_614_long_01_Base_F, amf_hk416a5_long, TDF,   UBR, SMR) 

	PATTERN_DCS(amf_DCS_01_RG,ItemCore,L1,TDF)
	PATTERN_DCS(amf_DCS_01_OD,ItemCore,L1,OD)
	PATTERN_DCS(amf_DCS_01_TAN,ItemCore,L1,TAN)
	PATTERN_DCS(amf_DCS_01_BLK,ItemCore,L1,BLK)
	PATTERN_DCS(amf_DCS_01_MTP,ItemCore,L1,MTP)
	PATTERN_DCS(amf_DCS_02,amf_DCS_01_RG,L2,TDF)
	PATTERN_DCS(amf_DCS_02_OD,amf_DCS_01_RG,L2,OD)
	PATTERN_DCS(amf_DCS_02_TAN,amf_DCS_01_RG,L2,TAN)
	PATTERN_DCS(amf_DCS_02_BLK,amf_DCS_01_RG,L2,BLK)
	PATTERN_DCS(amf_DCS_02_MTP,amf_DCS_01_RG,L2,MTP)
	PATTERN_DCS(amf_DCS_03,amf_DCS_01_RG,L3,TDF)
	PATTERN_DCS(amf_DCS_03_OD,amf_DCS_01_RG,L3,OD)
	PATTERN_DCS(amf_DCS_03_TAN,amf_DCS_01_RG,L3,TAN)
	PATTERN_DCS(amf_DCS_03_BLK,amf_DCS_01_RG,L3,BLK)
	PATTERN_DCS(amf_DCS_03_MTP,amf_DCS_01_RG,L3,MTP)
	PATTERN_DCS(amf_DCS_04_RG,amf_DCS_01_RG,L4,TDF)
	PATTERN_DCS(amf_DCS_04_OD,amf_DCS_01_RG,L4,OD)
	PATTERN_DCS(amf_DCS_04_TAN,amf_DCS_01_RG,L4,TAN)
	PATTERN_DCS(amf_DCS_04_BLK,amf_DCS_01_RG,L4,BLK)
	PATTERN_DCS(amf_DCS_04_MTP,amf_DCS_01_RG,L4,MTP)
	PATTERN_DCS(amf_DCS_05_RG,amf_DCS_01_RG,L5,TDF)
	PATTERN_DCS(amf_DCS_05_OD,amf_DCS_01_RG,L5,OD)
	PATTERN_DCS(amf_DCS_05_TAN,amf_DCS_01_RG,L5,TAN)
	PATTERN_DCS(amf_DCS_05_BLK,amf_DCS_01_RG,L5,BLK)
	PATTERN_DCS(amf_DCS_05_MTP,amf_DCS_01_RG,L5,MTP)



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
