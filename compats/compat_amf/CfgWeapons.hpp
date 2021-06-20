
#define PATTERN_UNIFORM_UBAS(name, c, s) \
	class name: Uniform_Base                      \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "amf_uniform_ubas";           \
			camo = #c;                            \
			sleeves = #s;                         \
		};                                        \
	}; 

#define PATTERN_UNIFORM_F3(name, c) \
	class name: Uniform_Base                      \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "amf_uniform_f3";             \
			camo = #c;                            \
		};                                        \
	}; 

#define PATTERN_HELMET(name, base, m, c, s) \
	class name: base                              \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			cover = #c;                           \
			sordin = #s;                          \
		};                                        \
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
		};                                        \
	}; 

class CfgWeapons
{
	class Uniform_Base;
	class H_HelmetB;
	class ItemCore;

	// amf_uniform_ubas
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE,CE_TAN,Full)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE,CE_TAN,Half)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE_OD,CE_OD,Full)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE_OD,CE_OD,Half)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_DA,DA,Full)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_DA,DA,Half)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_S,SERVAL,Full)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_S,SERVAL,Half)

	// amf_uniform_f3
	PATTERN_UNIFORM_F3(amf_uniform_03_CE,CE)
	PATTERN_UNIFORM_F3(amf_uniform_03_DA,DA)
	PATTERN_UNIFORM_F3(amf_uniform_03_S,SERVAL)

	// amf_felin
	PATTERN_HELMET(amf_felin_cover,            H_HelmetB,      amf_felin,ce,none)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_OD, amf_felin_cover,amf_felin,ce,od)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_BLK,amf_felin_cover,amf_felin,ce,blk)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_TAN,amf_felin_cover,amf_felin,ce,tan)

	PATTERN_HELMET(amf_felin_mount,            amf_felin_cover,amf_felin,mount,none)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_OD, amf_felin_mount,amf_felin,mount,od)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_BLK,amf_felin_mount,amf_felin,mount,blk)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_TAN,amf_felin_mount,amf_felin,mount,tan)

	PATTERN_HELMET(amf_felin,            amf_felin_cover,amf_felin,none,none)
	PATTERN_HELMET(AMF_FELIN_EARPROT_OD, amf_felin,      amf_felin,none,od)
	PATTERN_HELMET(AMF_FELIN_EARPROT_NLK,amf_felin,      amf_felin,none,blk)
	PATTERN_HELMET(AMF_FELIN_EARPROT_TAN,amf_felin,      amf_felin,none,tan)
	
	PATTERN_HELMET(amf_felin_cover_tan,            amf_felin_cover,amf_felin,tan,none)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_OD, amf_felin_cover,amf_felin,tan,od)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_BLK,amf_felin_cover,amf_felin,tan,blk)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_TAN,amf_felin_cover,amf_felin,tan,tan)

	
	// amf_tc3000
	PATTERN_HELMET(AMF_TC3000,               H_HelmetB,amf_tc3000,grn,none)
	PATTERN_HELMET(AMF_TC3000_earprot_blk_f, H_HelmetB,amf_tc3000,grn,blk)
	PATTERN_HELMET(AMF_TC3000_earprot_od_f,  H_HelmetB,amf_tc3000,grn,od)
	PATTERN_HELMET(AMF_TC3000_earprot_tan_f, H_HelmetB,amf_tc3000,grn,tan)

	PATTERN_HELMET(AMF_TC3000_tan,               AMF_TC3000,    amf_tc3000,tan,none)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_blk_f, AMF_TC3000_tan,amf_tc3000,tan,blk)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_od_f,  AMF_TC3000_tan,amf_tc3000,tan,od)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_tan_f, AMF_TC3000_tan,amf_tc3000,tan,tan)

	// amf_tc800
	PATTERN_HELMET(AMF_TC800,             H_HelmetB,amf_tc800,blk,none)
	PATTERN_HELMET(AMF_TC800_EARPROT_BLK, AMF_TC800,amf_tc800,blk,blk)
	PATTERN_HELMET(AMF_TC800_EARPROT_OD,  AMF_TC800,amf_tc800,blk,od)
	PATTERN_HELMET(AMF_TC800_EARPROT_TAN, AMF_TC800,amf_tc800,blk,tan)

	PATTERN_HELMET(AMF_TC800_GRN,             AMF_TC800,    amf_tc800,grn,none)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_BLK, AMF_TC800_GRN,amf_tc800,grn,blk)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_OD,  AMF_TC800_GRN,amf_tc800,grn,od)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_TAN, AMF_TC800_GRN,amf_tc800,grn,tan)

	PATTERN_HELMET(AMF_TC800_TAN,             AMF_TC800,    amf_tc800,tan,none)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_BLK, AMF_TC800_TAN,amf_tc800,tan,blk)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_OD,  AMF_TC800_TAN,amf_tc800,tan,od)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_TAN, AMF_TC800_TAN,amf_tc800,tan,tan)
	

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


};
