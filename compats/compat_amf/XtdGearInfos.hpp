
#define PATTERN_UNIFORM_UBAS(name, c, s, g) \
	class name                      \
	{                                             \
			model = "amf_uniform_ubas";           \
			camo = #c;                            \
			sleeves = #s;                         \
			gloves = #g;                         \
	}; 

#define PATTERN_UNIFORM_G3(name, c, s) \
	class name                      \
	{                                             \
			model = "amf_g3";           \
			camo = #c;                         \
			sleeves = #s;                         \
	}; 

#define PATTERN_UNIFORM_F3(name, c, g) \
	class name                      \
	{                                             \
			model = "amf_uniform_f3";             \
			camo = #c;                            \
			gloves = #g;                         \
	}; 

#define PATTERN_HELMET(name, m, c, s, g) \
	class name                              \
	{                                             \
			model = #m;                           \
			camo = #c;                           \
			sordin = #s;                          \
			goggles = #g;                         \
	}; 


#define PATTERN_OPSCB(name, m, c, s, g, t) \
	class name                              \
	{                                             \
			model = #m;                           \
			camo = #c;                           \
			sordin = #s;                          \
			goggles = #g;                         \
			top = #t;                             \
	}; 
	
#define PATTERN_HK614A5(name, m, p, b, h) \
	class name                              \
	{                                             \
			model = #m;                           \
			camo = #p;                           \
			butt = #b;                          \
			handguard = #h;                         \
	}; 

#define PATTERN_VEST(name, m, l, c) \
	class name           \
	{                          \
			model = #m; \
			camo = #c;         \
			loadout = #l;      \
	}; 

#define PATTERN_CIRAS(name, l, c) PATTERN_VEST(name,amf_plate,l,c)
#define PATTERN_DCS(name, l, c)   PATTERN_VEST(name,amf_dcs,l,c)
#define PATTERN_JPC(name, l, c)   PATTERN_VEST(name,amf_jpc,l,c)

#define PATTERN_CAMO(name, m, c) \
	class name           \
	{                          \
		model = #m; \
		camo = #c;         \
	}; 

#define PATTERN_SCARH(name, l, c) \
	class name           \
	{                          \
		model = "amf_scar_h"; \
		camo = #c;         \
		variant = #l;      \
	}; 

#define PATTERN_SCARL(name, x, c) \
	class name           \
	{                          \
		model = "amf_scar_l"; \
		camo = #c;         \
		variant = #x;      \
	}; 

#define PATTERN_SMB(name, m, c, l, w, b) \
	class name           \
	{                    \
		model = #m;  \
		camo = #c;   \
		loadout = #l;\
		weapon = #w; \
		belt = #b;   \
	}; 

#define PATTERN_BALACLAVA(name, c, s, g) \
	class name            \
	{                          \
		model = "amf_balaclava"; \
		camo = #c;         \
		sordin = #s;       \
		goggles = #g;      \
	}; 

class XtdGearInfos
{
	class CfgWeapons
	{
		// amf_uniform_t4s2
		class amf_uniform_04_ce   { model="amf_uniform_t4s2"; camo="CE";     gloves="MX"; };
		class amf_uniform_04_ce_2 { model="amf_uniform_t4s2"; camo="CE";     gloves="none"; };
		class amf_uniform_04_da   { model="amf_uniform_t4s2"; camo="DA";     gloves="MX"; };
		class amf_uniform_04_da_2 { model="amf_uniform_t4s2"; camo="DA";     gloves="none"; };
		class amf_uniform_04_S    { model="amf_uniform_t4s2"; camo="SERVAL"; gloves="MX"; };
		class amf_uniform_04_S_2  { model="amf_uniform_t4s2"; camo="SERVAL"; gloves="none"; };


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
		PATTERN_UNIFORM_UBAS(amf_uniform_01_TUNDRA,TUNDRA,Full,MX)
		PATTERN_UNIFORM_UBAS(amf_uniform_01_TUNDRA_2,TUNDRA,Full,none)

		// amf_uniform_f3
		PATTERN_UNIFORM_F3(amf_uniform_03_CE,CE,MX)
		PATTERN_UNIFORM_F3(amf_uniform_03_DA,DA,MX)
		PATTERN_UNIFORM_F3(amf_uniform_03_S,SERVAL,MX)
		PATTERN_UNIFORM_F3(amf_uniform_03_MTP,MTP,MX)
		PATTERN_UNIFORM_F3(amf_uniform_03_CE_2,CE,none)
		PATTERN_UNIFORM_F3(amf_uniform_03_DA_2,DA,none)
		PATTERN_UNIFORM_F3(amf_uniform_03_S_2,SERVAL,none)
		PATTERN_UNIFORM_F3(amf_uniform_03_MTP_2,MTP,none)
		PATTERN_UNIFORM_F3(amf_uniform_03_TUNDRA,TUNDRA,MX)
		PATTERN_UNIFORM_F3(amf_uniform_03_TUNDRA_2,TUNDRA,none)

		// amf_felin
		PATTERN_HELMET(amf_felin_cover,                  amf_felin,ce,none,down)
		PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_OD,       amf_felin,ce,OD,down)
		PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_BLK,      amf_felin,ce,BLK,down)
		PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_TAN,      amf_felin,ce,TAN,down)

		PATTERN_HELMET(amf_felin_mount,                  amf_felin,mount,none,down)
		PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_OD,       amf_felin,mount,OD,down)
		PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_BLK,      amf_felin,mount,BLK,down)
		PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_TAN,      amf_felin,mount,TAN,down)

		PATTERN_HELMET(amf_felin,                        amf_felin,none,none,none)
		PATTERN_HELMET(AMF_FELIN_EARPROT_OD,             amf_felin,none,OD,down)
		PATTERN_HELMET(AMF_FELIN_EARPROT_NLK,            amf_felin,none,BLK,down)
		PATTERN_HELMET(AMF_FELIN_EARPROT_TAN,            amf_felin,none,TAN,down)
		
		PATTERN_HELMET(amf_felin_cover_tan,              amf_felin,TAN,none,down)
		PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_OD,   amf_felin,TAN,OD,down)
		PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_BLK,  amf_felin,TAN,BLK,down)
		PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_TAN,  amf_felin,TAN,TAN,down)

		PATTERN_HELMET(amf_felin_cover_ONU,              amf_felin,ONU,none,down)
		PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_OD,   amf_felin,ONU,OD,down)
		PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_BLK,  amf_felin,ONU,BLK,down)
		PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_TAN,  amf_felin,ONU,TAN,down)

		PATTERN_HELMET(amf_felin_cover_CE_2,             amf_felin,ce,none,none)
		PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_OD_2,     amf_felin,ce,OD,none)
		PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_BLK_2,    amf_felin,ce,BLK,none)
		PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_TAN_2,    amf_felin,ce,TAN,none)

		PATTERN_HELMET(amf_felin_mount_2,                amf_felin,mount,none,none)
		PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_OD_2,     amf_felin,mount,OD,none)
		PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_BLK_2,    amf_felin,mount,BLK,none)
		PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_TAN_2,    amf_felin,mount,TAN,none)

		PATTERN_HELMET(amf_felin_2,                      amf_felin,none,none,down)
		PATTERN_HELMET(AMF_FELIN_EARPROT_OD_2,           amf_felin,none,OD,none)
		PATTERN_HELMET(AMF_FELIN_EARPROT_NLK_2,          amf_felin,none,BLK,none)
		PATTERN_HELMET(AMF_FELIN_EARPROT_TAN_2,          amf_felin,none,TAN,none)
		
		PATTERN_HELMET(amf_felin_cover_tan_2,            amf_felin,TAN,none,none)
		PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_OD_2, amf_felin,TAN,OD,none)
		PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_BLK_2,amf_felin,TAN,BLK,none)
		PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_TAN_2,amf_felin,TAN,TAN,none)

		PATTERN_HELMET(amf_felin_cover_ONU_2,            amf_felin,ONU,none,none)
		PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_OD_2, amf_felin,ONU,OD,none)
		PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_BLK_2,amf_felin,ONU,BLK,none)
		PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_TAN_2,amf_felin,ONU,TAN,none)
		
		// amf_tc3000
		PATTERN_HELMET(AMF_TC3000,                    amf_tc3000,OD,none,none)
		PATTERN_HELMET(AMF_TC3000_earprot_blk_f,      amf_tc3000,OD,BLK,none)
		PATTERN_HELMET(AMF_TC3000_earprot_od_f,       amf_tc3000,OD,OD,none)
		PATTERN_HELMET(AMF_TC3000_earprot_tan_f,      amf_tc3000,OD,TAN,none)
		PATTERN_HELMET(AMF_TC3000_tan,                amf_tc3000,TAN,none,none)
		PATTERN_HELMET(AMF_TC3000_tan_earprot_blk_f,  amf_tc3000,TAN,BLK,none)
		PATTERN_HELMET(AMF_TC3000_tan_earprot_od_f,   amf_tc3000,TAN,OD,none)
		PATTERN_HELMET(AMF_TC3000_tan_earprot_tan_f,  amf_tc3000,TAN,TAN,none)
		PATTERN_HELMET(AMF_TC3000_2,                  amf_tc3000,OD,none,down)
		PATTERN_HELMET(AMF_TC3000_earprot_blk_f_2,    amf_tc3000,OD,BLK,down)
		PATTERN_HELMET(AMF_TC3000_earprot_od_f_2,     amf_tc3000,OD,OD,down)
		PATTERN_HELMET(AMF_TC3000_earprot_tan_f_2,    amf_tc3000,OD,TAN,down)
		PATTERN_HELMET(AMF_TC3000_tan_2,              amf_tc3000,TAN,none,down)
		PATTERN_HELMET(AMF_TC3000_tan_earprot_blk_f_2,amf_tc3000,TAN,BLK,down)
		PATTERN_HELMET(AMF_TC3000_tan_earprot_od_f_2, amf_tc3000,TAN,OD,down)
		PATTERN_HELMET(AMF_TC3000_tan_earprot_tan_f_2,amf_tc3000,TAN,TAN,down)

		// amf_tc3001
		PATTERN_HELMET(AMF_TC3001,                    amf_tc3001,OD,none,none)
		PATTERN_HELMET(AMF_TC3001_earprot_blk_f,      amf_tc3001,OD,BLK,none)
		PATTERN_HELMET(AMF_TC3001_earprot_od_f,       amf_tc3001,OD,OD,none)
		PATTERN_HELMET(AMF_TC3001_earprot_tan_f,      amf_tc3001,OD,TAN,none)
		PATTERN_HELMET(AMF_TC3001_tan,                amf_tc3001,TAN,none,none)
		PATTERN_HELMET(AMF_TC3001_tan_earprot_blk_f,  amf_tc3001,TAN,BLK,none)
		PATTERN_HELMET(AMF_TC3001_tan_earprot_od_f,   amf_tc3001,TAN,OD,none)
		PATTERN_HELMET(AMF_TC3001_tan_earprot_tan_f,  amf_tc3001,TAN,TAN,none)
		PATTERN_HELMET(AMF_TC3001_2,                  amf_tc3001,OD,none,down)
		PATTERN_HELMET(AMF_TC3001_earprot_blk_f_2,    amf_tc3001,OD,BLK,down)
		PATTERN_HELMET(AMF_TC3001_earprot_od_f_2,     amf_tc3001,OD,OD,down)
		PATTERN_HELMET(AMF_TC3001_earprot_tan_f_2,    amf_tc3001,OD,TAN,down)
		PATTERN_HELMET(AMF_TC3001_tan_2,              amf_tc3001,TAN,none,down)
		PATTERN_HELMET(AMF_TC3001_tan_earprot_blk_f_2,amf_tc3001,TAN,BLK,down)
		PATTERN_HELMET(AMF_TC3001_tan_earprot_od_f_2, amf_tc3001,TAN,OD,down)
		PATTERN_HELMET(AMF_TC3001_tan_earprot_tan_f_2,amf_tc3001,TAN,TAN,down)


		// amf_tc800
		PATTERN_HELMET(AMF_TC800,                   amf_tc800,BLK,none,none)
		PATTERN_HELMET(AMF_TC800_EARPROT_BLK,       amf_tc800,BLK,BLK,none)
		PATTERN_HELMET(AMF_TC800_EARPROT_OD,        amf_tc800,BLK,OD,none)
		PATTERN_HELMET(AMF_TC800_EARPROT_TAN,       amf_tc800,BLK,TAN,none)
		PATTERN_HELMET(AMF_TC800_GRN,               amf_tc800,OD,none,none)
		PATTERN_HELMET(AMF_TC800_GRN_EARPROT_BLK,   amf_tc800,OD,BLK,none)
		PATTERN_HELMET(AMF_TC800_GRN_EARPROT_OD,    amf_tc800,OD,OD,none)
		PATTERN_HELMET(AMF_TC800_GRN_EARPROT_TAN,   amf_tc800,OD,TAN,none)
		PATTERN_HELMET(AMF_TC800_TAN,               amf_tc800,TAN,none,none)
		PATTERN_HELMET(AMF_TC800_TAN_EARPROT_BLK,   amf_tc800,TAN,BLK,none)
		PATTERN_HELMET(AMF_TC800_TAN_EARPROT_OD,    amf_tc800,TAN,OD,none)
		PATTERN_HELMET(AMF_TC800_TAN_EARPROT_TAN,   amf_tc800,TAN,TAN,none)
		//PATTERN_HELMET(AMF_TC800_2,                 amf_tc800,BLK,none,down) -- Missing
		PATTERN_HELMET(AMF_TC800_EARPROT_BLK_2,     amf_tc800,BLK,BLK,down)
		PATTERN_HELMET(AMF_TC800_EARPROT_OD_2,      amf_tc800,BLK,OD,down)
		PATTERN_HELMET(AMF_TC800_EARPROT_TAN_2,     amf_tc800,BLK,TAN,down)
		PATTERN_HELMET(AMF_TC800_GRN_2,             amf_tc800,OD,none,down)
		PATTERN_HELMET(AMF_TC800_GRN_EARPROT_BLK_2, amf_tc800,OD,BLK,down)
		PATTERN_HELMET(AMF_TC800_GRN_EARPROT_OD_2,  amf_tc800,OD,OD,down)
		PATTERN_HELMET(AMF_TC800_GRN_EARPROT_TAN_2, amf_tc800,OD,TAN,down)
		PATTERN_HELMET(AMF_TC800_TAN_2,             amf_tc800,TAN,none,down)
		PATTERN_HELMET(AMF_TC800_TAN_EARPROT_BLK_2, amf_tc800,TAN,BLK,down)
		PATTERN_HELMET(AMF_TC800_TAN_EARPROT_OD_2,  amf_tc800,TAN,OD,down)
		PATTERN_HELMET(AMF_TC800_TAN_EARPROT_TAN_2, amf_tc800,TAN,TAN,down)
		
		PATTERN_HELMET(AMF_TC800_FS,                 amf_tc800,BLK,none,FS)
		PATTERN_HELMET(AMF_TC800_FS_EARPROT_BLK,     amf_tc800,BLK,BLK,FS)
		PATTERN_HELMET(AMF_TC800_FS_EARPROT_OD,      amf_tc800,BLK,OD,FS)
		PATTERN_HELMET(AMF_TC800_FS_EARPROT_TAN,     amf_tc800,BLK,TAN,FS)
		PATTERN_HELMET(AMF_TC800_FS_GRN,             amf_tc800,OD,none,FS)
		PATTERN_HELMET(AMF_TC800_FS_GRN_EARPROT_BLK, amf_tc800,OD,BLK,FS)
		PATTERN_HELMET(AMF_TC800_FS_GRN_EARPROT_OD,  amf_tc800,OD,OD,FS)
		PATTERN_HELMET(AMF_TC800_FS_GRN_EARPROT_TAN, amf_tc800,OD,TAN,FS)
		PATTERN_HELMET(AMF_TC800_FS_TAN,             amf_tc800,TAN,none,FS)
		PATTERN_HELMET(AMF_TC800_FS_TAN_EARPROT_BLK, amf_tc800,TAN,BLK,FS)
		PATTERN_HELMET(AMF_TC800_FS_TAN_EARPROT_OD,  amf_tc800,TAN,OD,FS)
		PATTERN_HELMET(AMF_TC800_FS_TAN_EARPROT_TAN, amf_tc800,TAN,TAN,FS)


		// amf_tc801
		PATTERN_HELMET(AMF_TC801,                   amf_tc801,BLK,none,none)
		PATTERN_HELMET(AMF_TC801_EARPROT_BLK,       amf_tc801,BLK,BLK,none)
		PATTERN_HELMET(AMF_TC801_EARPROT_OD,        amf_tc801,BLK,OD,none)
		PATTERN_HELMET(AMF_TC801_EARPROT_TAN,       amf_tc801,BLK,TAN,none)
		PATTERN_HELMET(AMF_TC801_GRN,               amf_tc801,OD,none,none)
		PATTERN_HELMET(AMF_TC801_GRN_EARPROT_BLK,   amf_tc801,OD,BLK,none)
		PATTERN_HELMET(AMF_TC801_GRN_EARPROT_OD,    amf_tc801,OD,OD,none)
		PATTERN_HELMET(AMF_TC801_GRN_EARPROT_TAN,   amf_tc801,OD,TAN,none)
		PATTERN_HELMET(AMF_TC801_TAN,               amf_tc801,TAN,none,none)
		PATTERN_HELMET(AMF_TC801_TAN_EARPROT_BLK,   amf_tc801,TAN,BLK,none)
		PATTERN_HELMET(AMF_TC801_TAN_EARPROT_OD,    amf_tc801,TAN,OD,none)
		PATTERN_HELMET(AMF_TC801_TAN_EARPROT_TAN,   amf_tc801,TAN,TAN,none)
		//PATTERN_HELMET(AMF_TC801_2,                 amf_tc801,BLK,none,down) -- Missing
		PATTERN_HELMET(AMF_TC801_EARPROT_BLK_2,     amf_tc801,BLK,BLK,down)
		PATTERN_HELMET(AMF_TC801_EARPROT_OD_2,      amf_tc801,BLK,OD,down)
		PATTERN_HELMET(AMF_TC801_EARPROT_TAN_2,     amf_tc801,BLK,TAN,down)
		PATTERN_HELMET(AMF_TC801_GRN_2,             amf_tc801,OD,none,down)
		PATTERN_HELMET(AMF_TC801_GRN_EARPROT_BLK_2, amf_tc801,OD,BLK,down)
		PATTERN_HELMET(AMF_TC801_GRN_EARPROT_OD_2,  amf_tc801,OD,OD,down)
		PATTERN_HELMET(AMF_TC801_GRN_EARPROT_TAN_2, amf_tc801,OD,TAN,down)
		PATTERN_HELMET(AMF_TC801_TAN_2,             amf_tc801,TAN,none,down)
		PATTERN_HELMET(AMF_TC801_TAN_EARPROT_BLK_2, amf_tc801,TAN,BLK,down)
		PATTERN_HELMET(AMF_TC801_TAN_EARPROT_OD_2,  amf_tc801,TAN,OD,down)
		PATTERN_HELMET(AMF_TC801_TAN_EARPROT_TAN_2, amf_tc801,TAN,TAN,down)
		
		PATTERN_HELMET(AMF_TC801_FS,                 amf_tc801,BLK,none,FS)
		PATTERN_HELMET(AMF_TC801_FS_EARPROT_BLK,     amf_tc801,BLK,BLK,FS)
		PATTERN_HELMET(AMF_TC801_FS_EARPROT_OD,      amf_tc801,BLK,OD,FS)
		PATTERN_HELMET(AMF_TC801_FS_EARPROT_TAN,     amf_tc801,BLK,TAN,FS)
		PATTERN_HELMET(AMF_TC801_FS_GRN,             amf_tc801,OD,none,FS)
		PATTERN_HELMET(AMF_TC801_FS_GRN_EARPROT_BLK, amf_tc801,OD,BLK,FS)
		PATTERN_HELMET(AMF_TC801_FS_GRN_EARPROT_OD,  amf_tc801,OD,OD,FS)
		PATTERN_HELMET(AMF_TC801_FS_GRN_EARPROT_TAN, amf_tc801,OD,TAN,FS)
		PATTERN_HELMET(AMF_TC801_FS_TAN,             amf_tc801,TAN,none,FS)
		PATTERN_HELMET(AMF_TC801_FS_TAN_EARPROT_BLK, amf_tc801,TAN,BLK,FS)
		PATTERN_HELMET(AMF_TC801_FS_TAN_EARPROT_OD,  amf_tc801,TAN,OD,FS)
		PATTERN_HELMET(AMF_TC801_FS_TAN_EARPROT_TAN, amf_tc801,TAN,TAN,FS)



		PATTERN_HELMET(AMF_OPSCORE,         amf_opscore_xp,BLK,BLK,none)

		PATTERN_HELMET(AMF_OPSCORE_TAN,     amf_opscore_xp,BLK,OD,none)
		PATTERN_HELMET(AMF_OPSCORE_TAN,     amf_opscore_xp,BLK,TAN,none)

		PATTERN_HELMET(AMF_opscore,         amf_opscore_xp,OD, BLK,none)
		PATTERN_HELMET(AMF_OPSCORE_OD1,     amf_opscore_xp,OD, OD, none)
		PATTERN_HELMET(AMF_OPSCORE_OD1_2,   amf_opscore_xp,OD, OD, down)
		PATTERN_HELMET(AMF_OPSCORE_OD2,     amf_opscore_xp,OD, TAN,none)
		PATTERN_HELMET(AMF_OPSCORE_OD2_2,   amf_opscore_xp,OD, TAN,down)
		PATTERN_HELMET(AMF_OPSCORE_TAN,     amf_opscore_xp,TAN,BLK,none)
		PATTERN_HELMET(AMF_OPSCORE_TAN_2,   amf_opscore_xp,TAN,BLK,down)
		PATTERN_HELMET(AMF_OPSCORE_TAN1,    amf_opscore_xp,TAN,TAN,none)
		PATTERN_HELMET(AMF_OPSCORE_TAN1_2,  amf_opscore_xp,TAN,TAN,down)
		PATTERN_HELMET(AMF_OPSCORE_TAN2,    amf_opscore_xp,TAN,OD, none)
		PATTERN_HELMET(AMF_OPSCORE_TAN2_2,  amf_opscore_xp,TAN,OD, down)
		PATTERN_HELMET(AMF_OPSCORE_GREY,    amf_opscore_xp,GRY,BLK,none)
		PATTERN_HELMET(AMF_OPSCORE_GREY_2,  amf_opscore_xp,GRY,BLK,down)
		PATTERN_HELMET(AMF_OPSCORE_GREY1,   amf_opscore_xp,GRY,TAN,none)
		PATTERN_HELMET(AMF_OPSCORE_GREY1_2, amf_opscore_xp,GRY,TAN,down)
		PATTERN_HELMET(AMF_OPSCORE_GREY2,   amf_opscore_xp,GRY,OD, none)
		PATTERN_HELMET(AMF_OPSCORE_GREY2_2, amf_opscore_xp,GRY,OD, down)
		PATTERN_HELMET(AMF_OPSCORE_BLACK,   amf_opscore_xp,BLK,BLK,none)
		PATTERN_HELMET(AMF_OPSCORE_BLACK_2, amf_opscore_xp,BLK,BLK,down)
		PATTERN_HELMET(AMF_OPSCORE_BLACK1,  amf_opscore_xp,BLK,TAN,none)
		PATTERN_HELMET(AMF_OPSCORE_BLACK1_2,amf_opscore_xp,BLK,TAN,down)
		PATTERN_HELMET(AMF_OPSCORE_BLACK2,  amf_opscore_xp,BLK,OD, none)
		PATTERN_HELMET(AMF_OPSCORE_BLACK2_2,amf_opscore_xp,BLK,OD, down)

		PATTERN_OPSCB(AMF_opscore2,         amf_opscore_bump,OD, BLK,none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_OD1,     amf_opscore_bump,OD, OD, none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_OD1_2,   amf_opscore_bump,OD, OD, down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_OD2,     amf_opscore_bump,OD, TAN,none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_OD2_2,   amf_opscore_bump,OD, TAN,down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_TAN,     amf_opscore_bump,TAN,BLK,none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_TAN_2,   amf_opscore_bump,TAN,BLK,down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_TAN1,    amf_opscore_bump,TAN,TAN,none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_TAN1_2,  amf_opscore_bump,TAN,TAN,down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_TAN2,    amf_opscore_bump,TAN,OD, none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_TAN2_2,  amf_opscore_bump,TAN,OD, down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_GREY,    amf_opscore_bump,GRY,BLK,none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_GREY_2,  amf_opscore_bump,GRY,BLK,down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_GREY1,   amf_opscore_bump,GRY,TAN,none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_GREY1_2, amf_opscore_bump,GRY,TAN,down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_GREY2,   amf_opscore_bump,GRY,OD, none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_GREY2_2, amf_opscore_bump,GRY,OD, down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_BLACK,   amf_opscore_bump,BLK,BLK,none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_BLACK_2, amf_opscore_bump,BLK,BLK,down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_BLACK1,  amf_opscore_bump,BLK,TAN,none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_BLACK1_2,amf_opscore_bump,BLK,TAN,down,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_BLACK2,  amf_opscore_bump,BLK,OD, none,irf)
		PATTERN_OPSCB(AMF_OPSCORE2_BLACK2_2,amf_opscore_bump,BLK,OD, down,irf)

		PATTERN_OPSCB(AMF_opscore3,         amf_opscore_bump,OD,BLK, none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_OD1,     amf_opscore_bump,OD, OD, none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_OD1_2,   amf_opscore_bump,OD, OD, down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_OD2,     amf_opscore_bump,OD, TAN,none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_OD2_2,   amf_opscore_bump,OD, TAN,down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_TAN,     amf_opscore_bump,TAN,BLK,none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_TAN_2,   amf_opscore_bump,TAN,BLK,down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_TAN1,    amf_opscore_bump,TAN,TAN,none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_TAN1_2,  amf_opscore_bump,TAN,TAN,down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_TAN2,    amf_opscore_bump,TAN,OD, none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_TAN2_2_2,amf_opscore_bump,TAN,OD, down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_GREY,    amf_opscore_bump,GRY,BLK,none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_GREY_2,  amf_opscore_bump,GRY,BLK,down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_GREY1,   amf_opscore_bump,GRY,TAN,none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_GREY1_2, amf_opscore_bump,GRY,TAN,down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_GREY2,   amf_opscore_bump,GRY,OD, none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_GREY2_2, amf_opscore_bump,GRY,OD, down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_BLACK,   amf_opscore_bump,BLK,BLK,none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_BLACK_2, amf_opscore_bump,BLK,BLK,down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_BLACK1,  amf_opscore_bump,BLK,TAN,none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_BLACK1_2,amf_opscore_bump,BLK,TAN,down,none)
		PATTERN_OPSCB(AMF_OPSCORE3_BLACK2,  amf_opscore_bump,BLK,OD, none,none)
		PATTERN_OPSCB(AMF_OPSCORE3_BLACK2_2,amf_opscore_bump,BLK,OD, down,none)

		PATTERN_HK614A5(AMF_614_short_FS_BLK,   amf_hk416a5_short, BLK,   MOE, STD) 
		PATTERN_HK614A5(AMF_614_short_fs_paint, amf_hk416a5_short, Paint, MOE, STD) 
		PATTERN_HK614A5(AMF_614_short_FS_TAN,   amf_hk416a5_short, TDF,   MOE, STD) 
		PATTERN_HK614A5(AMF_614_short_FS_TAN2,  amf_hk416a5_short, TAN,   MOE, STD) 
		PATTERN_HK614A5(AMF_614_short_fs2_blk,  amf_hk416a5_short, BLK,   STD, STD) 
		PATTERN_HK614A5(AMF_614_short_fs2_paint,amf_hk416a5_short, Paint, STD, STD) 
		PATTERN_HK614A5(AMF_614_short_fs2_tan,  amf_hk416a5_short, TDF,   STD, STD) 
		PATTERN_HK614A5(AMF_614_short_FS3_BLK,  amf_hk416a5_short, BLK,   UBR, STD) 
		PATTERN_HK614A5(AMF_614_short_FS3_TAN,  amf_hk416a5_short, TDF,   UBR, STD) 
		PATTERN_HK614A5(AMF_614_short_FS3_TAN2, amf_hk416a5_short, TAN,   UBR, STD) 
		PATTERN_HK614A5(AMF_614_short_FS4_BLK,  amf_hk416a5_short, BLK,   MOE, SMR) 
		PATTERN_HK614A5(AMF_614_short_FS4_TAN,  amf_hk416a5_short, TAN,   MOE, SMR) 
		PATTERN_HK614A5(AMF_614_short_FS4_tan2, amf_hk416a5_short, TDF,   MOE, SMR) 
		PATTERN_HK614A5(AMF_614_short_FS5_BLK,  amf_hk416a5_short, BLK,   UBR, SMR) 
		PATTERN_HK614A5(AMF_614_short_FS5_TAN,  amf_hk416a5_short, TAN,   UBR, SMR) 
		PATTERN_HK614A5(AMF_614_short_FS5_TAN2, amf_hk416a5_short, TDF,   UBR, SMR) 

		PATTERN_HK614A5(AMF_614_long_FS_BLK,   amf_hk416a5_long, BLK,   MOE, STD) 
		PATTERN_HK614A5(AMF_614_long_fs_paint, amf_hk416a5_long, Paint, MOE, STD) 
		PATTERN_HK614A5(AMF_614_long_FS_TAN,   amf_hk416a5_long, TDF,   MOE, STD) 
		PATTERN_HK614A5(AMF_614_long_FS_TAN2,  amf_hk416a5_long, TAN,   MOE, STD) 
		PATTERN_HK614A5(AMF_614_long_fs2_blk,  amf_hk416a5_long, BLK,   STD, STD) 
		PATTERN_HK614A5(AMF_614_long_fs2_paint,amf_hk416a5_long, Paint, STD, STD) 
		PATTERN_HK614A5(AMF_614_long_fs2_tan,  amf_hk416a5_long, TDF,   STD, STD) 
		PATTERN_HK614A5(AMF_614_long_FS3_BLK,  amf_hk416a5_long, BLK,   UBR, STD) 
		PATTERN_HK614A5(AMF_614_long_FS3_TAN,  amf_hk416a5_long, TDF,   UBR, STD) 
		PATTERN_HK614A5(AMF_614_long_FS3_TAN2, amf_hk416a5_long, TAN,   UBR, STD) 
		PATTERN_HK614A5(AMF_614_long_FS4_BLK,  amf_hk416a5_long, BLK,   MOE, SMR) 
		PATTERN_HK614A5(AMF_614_long_FS4_TAN,  amf_hk416a5_long, TAN,   MOE, SMR) 
		PATTERN_HK614A5(AMF_614_long_FS4_tan2, amf_hk416a5_long, TDF,   MOE, SMR) 
		PATTERN_HK614A5(AMF_614_long_FS5_BLK,  amf_hk416a5_long, BLK,   UBR, SMR) 
		PATTERN_HK614A5(AMF_614_long_FS5_TAN,  amf_hk416a5_long, TAN,   UBR, SMR) 
		PATTERN_HK614A5(AMF_614_long_FS5_TAN2, amf_hk416a5_long, TDF,   UBR, SMR) 

		PATTERN_DCS(amf_DCS_01_RG, L1,TDF)
		PATTERN_DCS(amf_DCS_01_OD, L1,OD)
		PATTERN_DCS(amf_DCS_01_TAN,L1,TAN)
		PATTERN_DCS(amf_DCS_01_BLK,L1,BLK)
		PATTERN_DCS(amf_DCS_01_MTP,L1,MTP)
		PATTERN_DCS(amf_DCS_02,    L2,TDF)
		PATTERN_DCS(amf_DCS_02_OD, L2,OD)
		PATTERN_DCS(amf_DCS_02_TAN,L2,TAN)
		PATTERN_DCS(amf_DCS_02_BLK,L2,BLK)
		PATTERN_DCS(amf_DCS_02_MTP,L2,MTP)
		PATTERN_DCS(amf_DCS_03,    L3,TDF)
		PATTERN_DCS(amf_DCS_03_OD, L3,OD)
		PATTERN_DCS(amf_DCS_03_TAN,L3,TAN)
		PATTERN_DCS(amf_DCS_03_BLK,L3,BLK)
		PATTERN_DCS(amf_DCS_03_MTP,L3,MTP)
		PATTERN_DCS(amf_DCS_04_RG, L4,TDF)
		PATTERN_DCS(amf_DCS_04_OD, L4,OD)
		PATTERN_DCS(amf_DCS_04_TAN,L4,TAN)
		PATTERN_DCS(amf_DCS_04_BLK,L4,BLK)
		PATTERN_DCS(amf_DCS_04_MTP,L4,MTP)
		PATTERN_DCS(amf_DCS_05_RG, L5,TDF)
		PATTERN_DCS(amf_DCS_05_OD, L5,OD)
		PATTERN_DCS(amf_DCS_05_TAN,L5,TAN)
		PATTERN_DCS(amf_DCS_05_BLK,L5,BLK)
		PATTERN_DCS(amf_DCS_05_MTP,L5,MTP)

		PATTERN_JPC(amf_JPC_01,    L1,TDF)
		PATTERN_JPC(amf_JPC_01_OD, L1,OD)
		PATTERN_JPC(amf_JPC_01_TAN,L1,TAN)
		PATTERN_JPC(amf_JPC_01_BLK,L1,BLK)
		PATTERN_JPC(amf_JPC_01_MTP,L1,MTP)
		PATTERN_JPC(amf_JPC_02,    L2,TDF)
		PATTERN_JPC(amf_JPC_02_OD, L2,OD)
		PATTERN_JPC(amf_JPC_02_TAN,L2,TAN)
		PATTERN_JPC(amf_JPC_02_BLK,L2,BLK)
		PATTERN_JPC(amf_JPC_02_MTP,L2,MTP)
		PATTERN_JPC(amf_JPC_03,    L3,TDF)
		PATTERN_JPC(amf_JPC_03_OD, L3,OD)
		PATTERN_JPC(amf_JPC_03_TAN,L3,TAN)
		PATTERN_JPC(amf_JPC_03_BLK,L3,BLK)
		PATTERN_JPC(amf_JPC_03_MTP,L3,MTP)

		PATTERN_CAMO(AMF_SPECTRA,     amf_spectra,OD)
		PATTERN_CAMO(AMF_SPECTRA_2,   amf_spectra,CE)
		PATTERN_CAMO(AMF_SPECTRA_2_DA,amf_spectra,DA)
		PATTERN_CAMO(AMF_SPECTRA_2_UN,amf_spectra,UN2)
		PATTERN_CAMO(AMF_SPECTRA_UN,  amf_spectra,UN)
		PATTERN_CAMO(AMF_SPECTRA_FO,  amf_spectra,FO)

		PATTERN_CAMO(AMF_TCNVG,   amf_tcnvg,CE)
		PATTERN_CAMO(AMF_TCNVG_DA,amf_tcnvg,DA)

		PATTERN_UNIFORM_G3(amf_uniform_04_MTP,MTP,Full)
		PATTERN_UNIFORM_G3(amf_uniform_05_MTP,MTP,Half)
		PATTERN_UNIFORM_G3(amf_uniform_04_BLK,BLK,Full)
		PATTERN_UNIFORM_G3(amf_uniform_05_BLK,BLK,Half)
		PATTERN_UNIFORM_G3(amf_uniform_04_OD,OD,Full)
		PATTERN_UNIFORM_G3(amf_uniform_05_OD,OD,Half)
		PATTERN_UNIFORM_G3(amf_uniform_04_TAN,TAN,Full)
		PATTERN_UNIFORM_G3(amf_uniform_05_TAN,TAN,Half)

		PATTERN_CIRAS(amf_plate_ca_tan,   none,TAN)
		PATTERN_CIRAS(amf_plate_ca_green, none,OD)
		PATTERN_CIRAS(amf_plate_ca3_tan,  GV,TAN)
		PATTERN_CIRAS(amf_plate_ca3_green,GV,OD)

		PATTERN_SCARH(AMF_SCAR_H_02_F,    STD, TAN)
		PATTERN_SCARH(AMF_SCAR_H_02_F_BLK,STD, BLK)
		PATTERN_SCARH(AMF_SCAR_H_03_F,    CQC, TAN)
		PATTERN_SCARH(AMF_SCAR_H_03_F_BLK,CQC, BLK)

		PATTERN_SCARL(AMF_SCAR_L_02_F,    STD, BLK)
		PATTERN_SCARL(AMF_SCAR_L_02_F_TAN,STD, TAN)
		PATTERN_SCARL(AMF_SCAR_L_01_F,    CQC, BLK)
		PATTERN_SCARL(AMF_SCAR_L_01_F_TAN,CQC, TAN)

		PATTERN_SMB(amf_smb_gr,           amf_smb,TAN,LG,HK416,no)
		PATTERN_SMB(amf_smb_gr_famas,     amf_smb,TAN,LG,FAMAS,no)
		PATTERN_SMB(amf_smb_gr_famas_grn, amf_smb,OD, LG,FAMAS,no)
		PATTERN_SMB(amf_smb_gr_grn,       amf_smb,OD, LG,HK416,no)
		PATTERN_SMB(amf_smb_grb,          amf_smb,TAN,LG,HK416,yes)
		PATTERN_SMB(amf_smb_grb_famas,    amf_smb,TAN,LG,FAMAS,yes)
		PATTERN_SMB(amf_smb_grb_famas_grn,amf_smb,OD, LG,FAMAS,yes)
		PATTERN_SMB(amf_smb_grb_grn,      amf_smb,OD, LG,HK416,yes)
		PATTERN_SMB(amf_smb_in,           amf_smb,TAN,GV,HK416,no)
		PATTERN_SMB(amf_smb_in_famas,     amf_smb,TAN,GV,FAMAS,no)
		PATTERN_SMB(amf_smb_in_famas_grn, amf_smb,OD, GV,FAMAS,no)
		PATTERN_SMB(amf_smb_in_grn,       amf_smb,OD, GV,HK416,no)
		PATTERN_SMB(amf_smb_inb,          amf_smb,TAN,GV,HK416,yes)
		PATTERN_SMB(amf_smb_inb_famas,    amf_smb,TAN,GV,FAMAS,yes)
		PATTERN_SMB(amf_smb_inb_famas_grn,amf_smb,OD, GV,FAMAS,yes)
		PATTERN_SMB(amf_smb_inb_grn,      amf_smb,OD, GV,HK416,yes)
		PATTERN_SMB(amf_smb_me,           amf_smb,TAN,SC2,HK416,no)
		PATTERN_SMB(amf_smb_me_famas,     amf_smb,TAN,SC2,FAMAS,no)
		PATTERN_SMB(amf_smb_me_famas_grn, amf_smb,OD, SC2,FAMAS,no)
		PATTERN_SMB(amf_smb_me_grn,       amf_smb,OD, SC2,HK416,no)
		PATTERN_SMB(amf_smb_meb,          amf_smb,TAN,SC2,HK416,yes)
		PATTERN_SMB(amf_smb_meb_famas,    amf_smb,TAN,SC2,FAMAS,yes)
		PATTERN_SMB(amf_smb_meb_famas_grn,amf_smb,OD, SC2,FAMAS,yes)
		PATTERN_SMB(amf_smb_meb_grn,      amf_smb,OD, SC2,HK416,yes)
		PATTERN_SMB(amf_smb_tl,           amf_smb,TAN,CDG,HK416,no)
		PATTERN_SMB(amf_smb_tl_famas,     amf_smb,TAN,CDG,FAMAS,no)
		PATTERN_SMB(amf_smb_tl_famas_grn, amf_smb,OD, CDG,FAMAS,no)
		PATTERN_SMB(amf_smb_tl_grn,       amf_smb,OD, CDG,HK416,no)
		PATTERN_SMB(amf_smb_tlb,          amf_smb,TAN,CDG,HK416,yes)
		PATTERN_SMB(amf_smb_tlb_famas,    amf_smb,TAN,CDG,FAMAS,yes)
		PATTERN_SMB(amf_smb_tlb_famas_grn,amf_smb,OD, CDG,FAMAS,yes)
		PATTERN_SMB(amf_smb_tlb_grn,      amf_smb,OD, CDG,HK416,yes)
		PATTERN_SMB(amf_smb_mc,           amf_smb,TAN,AR,HK416,no)
		PATTERN_SMB(amf_smb_mc_grn,       amf_smb,OD, AR,HK416,no)
		PATTERN_SMB(amf_smb_mcb,          amf_smb,TAN,AR,HK416,yes)
		PATTERN_SMB(amf_smb_mcb_grn,      amf_smb,OD, AR,HK416,yes)
		
		PATTERN_SMB(amf_smb_tp_frf2,      amf_smb_tp,TAN,TP,FRF2,no)
		PATTERN_SMB(amf_smb_tp_frf2_grn,  amf_smb_tp,OD, TP,FRF2,no)
		PATTERN_SMB(amf_smb_tp_hk417,     amf_smb_tp,TAN,TP,HK417,no)
		PATTERN_SMB(amf_smb_tp_hk417_grn, amf_smb_tp,OD, TP,HK417,no)
		PATTERN_SMB(amf_smb_tp_scarh,     amf_smb_tp,TAN,TP,SCARH,no)
		PATTERN_SMB(amf_smb_tp_scarh_grn, amf_smb_tp,OD, TP,SCARH,no)

		PATTERN_CAMO(AMF_opscore4,      amf_opscore_fs,OD)
		PATTERN_CAMO(AMF_OPSCORE4_BLACK,amf_opscore_fs,BLK)
		PATTERN_CAMO(AMF_OPSCORE4_GREY, amf_opscore_fs,GRY)
		PATTERN_CAMO(AMF_OPSCORE4_TAN,  amf_opscore_fs,TAN)

		class amf_S3_01_CE { model="amf_S3"; camo="CE"; };
 		class amf_S3_01_DA { model="amf_S3"; camo="DA"; };

		class AMF_714_long_TAN_F  { model="amf_714"; size="S16"; camo="TAN"; };
 		class AMF_714_long_01_F   { model="amf_714"; size="S16"; camo="BLK"; };
		class AMF_714_short_TAN_F { model="amf_714"; size="S13"; camo="TAN"; };
 		class AMF_714_short_01_F  { model="amf_714"; size="S13"; camo="BLK"; };
	};

	
	class CfgGlasses 
	{
		PATTERN_BALACLAVA(amf_balaclava_blk,           BLK,none,none)
		PATTERN_BALACLAVA(amf_balaclava_goggles_blk,   BLK,none,down)
		PATTERN_BALACLAVA(amf_balaclava_sordin_blk,    BLK,BLK, none)
		PATTERN_BALACLAVA(amf_balaclava_sordin_blkod,  BLK,OD,  none)
		PATTERN_BALACLAVA(amf_balaclava_sordin_blktan, BLK,TAN, none)
		PATTERN_BALACLAVA(amf_balaclava_sording_blk,   BLK,BLK, down)
		PATTERN_BALACLAVA(amf_balaclava_sording_blkod, BLK,OD,  down)
		PATTERN_BALACLAVA(amf_balaclava_sording_blktan,BLK,TAN, down)

		PATTERN_BALACLAVA(amf_balaclava_od,           OD, none,none)
		PATTERN_BALACLAVA(amf_balaclava_goggles_od,   OD, none,down)
		PATTERN_BALACLAVA(amf_balaclava_sordin_od,    OD, BLK, none)
		PATTERN_BALACLAVA(amf_balaclava_sordin_odod,  OD, OD,  none)
		PATTERN_BALACLAVA(amf_balaclava_sordin_odtan, OD, TAN, none)
		PATTERN_BALACLAVA(amf_balaclava_sording_od,   OD, BLK, down)
		PATTERN_BALACLAVA(amf_balaclava_sording_odod, OD, OD,  down)
		PATTERN_BALACLAVA(amf_balaclava_sording_odtan,OD, TAN, down)

		PATTERN_BALACLAVA(amf_balaclava_tan,           TAN,none,none)
		PATTERN_BALACLAVA(amf_balaclava_goggles_tan,   TAN,none,down)
		PATTERN_BALACLAVA(amf_balaclava_sording_tan,   TAN,BLK, down)
		PATTERN_BALACLAVA(amf_balaclava_sording_tanod, TAN,OD,  down)
		PATTERN_BALACLAVA(amf_balaclava_sording_tantan,TAN,TAN, down)
		PATTERN_BALACLAVA(amf_balaclava_sordin_tan,    TAN,BLK, none)
		PATTERN_BALACLAVA(amf_balaclava_sordin_tanod,  TAN,OD,  none)
		PATTERN_BALACLAVA(amf_balaclava_sordin_tantan, TAN,TAN, none)

		PATTERN_BALACLAVA(amf_balaclava_ranger,           RGR,none,none)
		PATTERN_BALACLAVA(amf_balaclava_goggles_ranger,   RGR,none,down)
		PATTERN_BALACLAVA(amf_balaclava_sording_ranger,   RGR,BLK, down)
		PATTERN_BALACLAVA(amf_balaclava_sording_rangerod, RGR,OD,  down)
		PATTERN_BALACLAVA(amf_balaclava_sording_rangertan,RGR,TAN, down)
		PATTERN_BALACLAVA(amf_balaclava_sordin_ranger,    RGR,BLK, none)
		PATTERN_BALACLAVA(amf_balaclava_sordin_rangerod,  RGR,OD,  none)
		PATTERN_BALACLAVA(amf_balaclava_sordin_rangertan, RGR,TAN, none)
	};


	class CfgVehicles
	{
		class AMF_FELIN_BACKPACK           { model = "AMF_FELIN"; camo="OD";  loadout="STD"; };
		class AMF_FELIN_BACKPACK_TAN       { model = "AMF_FELIN"; camo="TAN"; loadout="STD"; };
		class AMF_FELIN_BACKPACK_MEDIC     { model = "AMF_FELIN"; camo="OD";  loadout="MED"; };
		class AMF_FELIN_BACKPACK_TAN_MEDIC { model = "AMF_FELIN"; camo="TAN"; loadout="MED"; };
		class AMF_FELIN_BACKPACK_RDCE      { model = "AMF_FELIN"; camo="OD";  loadout="TFAR"; };
		class AMF_FELIN_BACKPACK_RDTAN     { model = "AMF_FELIN"; camo="TAN"; loadout="TFAR"; };

		class AMF_rush24_01           { model = "AMF_rush24"; camo="OD";  };
		class AMF_rush24_01_TAN       { model = "AMF_rush24"; camo="TAN"; };
		class AMF_rush24_01_BLK       { model = "AMF_rush24"; camo="BLK"; };
		class AMF_rush24_01_TDF       { model = "AMF_rush24"; camo="TDF"; };
		class AMF_rush24_01_MTP       { model = "AMF_rush24"; camo="MTP"; };

	};
};