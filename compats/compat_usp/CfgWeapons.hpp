#define PATTERN_USP_G3C_S(suffix, base, m, c, k, g, s, p) \
	class suffix: base                    \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "USP_G3C";                   \
			camo = #m;                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
			shoes = #p;                           \
		};                                        \
	};   

#define PATTERN_USP_G3C(suffix, c, k, g, s, p) \
	PATTERN_USP_G3C_S(suffix,  Uniform_Base,BLK,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_GRY,suffix,GRY,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_KHK,suffix,KHK,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_NAV,suffix,NAV,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_RGR,suffix,RGR,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_M81,suffix,M81,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MC,suffix,MC,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MCB,suffix,MCB,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MCD,suffix,MCD,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MCT,suffix,MCT,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MCW,suffix,MCW,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_AOR1,suffix,AOR1,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_AOR2,suffix,AOR2,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_ATT,suffix,ATT,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_TSD,suffix,TSD,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_TSW,suffix,TSW,c,k,g,s,p) \

#define PATTERN_USP_PCU_G3C(suffix, base, c, t, k, g) \
	class suffix: base                            \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "USP_PCU_G3C";                \
			camo = #c;                            \
			top = #t;                             \
			kneepads = #k;                        \
			gloves = #g;                          \
		};                                        \
	};                                            

#define PATTERN_USP_PCU_G3C_BLK(suffix, k, g) \
	PATTERN_USP_PCU_G3C(suffix,         Uniform_Base,  BLK, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_AOR1,suffix,AOR1,BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_AOR2,suffix,AOR2,BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_ATT, suffix,ATT, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_GRY, suffix,GRY, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_KHK, suffix,KHK, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_M81, suffix,M81, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MC,  suffix,MC,  BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MCB, suffix,MCB, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MCD, suffix,MCD, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MCT, suffix,MCT, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MCW, suffix,MCW, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_NAV, suffix,NAV, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_RGR, suffix,RGR, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_TSD, suffix,TSD, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_TSW, suffix,TSW, BLK,k,g)

#define PATTERN_USP_PCU_G3C_GRY(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY,     suffix,GRY, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_AOR1,suffix,AOR1,GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_AOR2,suffix,AOR2,GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_ATT, suffix,ATT, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_BLK, suffix,BLK, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_KHK, suffix,KHK, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_M81, suffix,M81, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MC,  suffix,MC,  GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MCB, suffix,MCB, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MCD, suffix,MCD, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MCT, suffix,MCT, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MCW, suffix,MCW, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_NAV, suffix,NAV, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_RGR, suffix,RGR, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_TSD, suffix,TSD, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_TSW, suffix,TSW, GRY,k,g)

#define PATTERN_USP_PCU_G3C_MC(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC,     suffix,MC,  MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_AOR1,suffix,AOR1,MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_AOR2,suffix,AOR2,MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_ATT, suffix,ATT, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_BLK, suffix,BLK, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_KHK, suffix,KHK, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_M81, suffix,M81, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_GRY, suffix,GRY, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_MCB, suffix,MCB, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_MCD, suffix,MCD, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_MCT, suffix,MCT, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_MCW, suffix,MCW, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_NAV, suffix,NAV, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_RGR, suffix,RGR, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_TSD, suffix,TSD, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_TSW, suffix,TSW, MC,k,g)


#define PATTERN_USP_PCU_G3C_MCA(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MC,  suffix,MC,  MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_AOR1,suffix,AOR1,MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_AOR2,suffix,AOR2,MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_ATT, suffix,ATT, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_BLK, suffix,BLK, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_KHK, suffix,KHK, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_M81, suffix,M81, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_GRY, suffix,GRY, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MCB, suffix,MCB, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MCD, suffix,MCD, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MCT, suffix,MCT, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MCW, suffix,MCW, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_NAV, suffix,NAV, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_RGR, suffix,RGR, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_TSD, suffix,TSD, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_TSW, suffix,TSW, MCA,k,g)

#define PATTERN_USP_PCU_G3C_MCB(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB,     suffix,MCB, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_AOR1,suffix,AOR1,MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_AOR2,suffix,AOR2,MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_ATT, suffix,ATT, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_BLK, suffix,BLK, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_KHK, suffix,KHK, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_M81, suffix,M81, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_GRY, suffix,GRY, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_MC , suffix,MC,  MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_MCD, suffix,MCD, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_MCT, suffix,MCT, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_MCW, suffix,MCW, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_NAV, suffix,NAV, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_RGR, suffix,RGR, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_TSD, suffix,TSD, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_TSW, suffix,TSW, MCB,k,g)

#define PATTERN_USP_PCU_G3C_MCD(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD,     suffix,MCD, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_AOR1,suffix,AOR1,MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_AOR2,suffix,AOR2,MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_ATT, suffix,ATT, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_BLK, suffix,BLK, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_KHK, suffix,KHK, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_M81, suffix,M81, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_GRY, suffix,GRY, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_MC , suffix,MC,  MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_MCB, suffix,MCB, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_MCT, suffix,MCT, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_MCW, suffix,MCW, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_NAV, suffix,NAV, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_RGR, suffix,RGR, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_TSD, suffix,TSD, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_TSW, suffix,TSW, MCD,k,g)

#define PATTERN_USP_PCU_G3C_MCT(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT,     suffix,MCT, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_AOR1,suffix,AOR1,MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_AOR2,suffix,AOR2,MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_ATT, suffix,ATT, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_BLK, suffix,BLK, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_KHK, suffix,KHK, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_M81, suffix,M81, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_GRY, suffix,GRY, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_MC , suffix,MC,  MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_MCB, suffix,MCB, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_MCD, suffix,MCD, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_MCW, suffix,MCW, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_NAV, suffix,NAV, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_RGR, suffix,RGR, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_TSD, suffix,TSD, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_TSW, suffix,TSW, MCT,k,g)

#define PATTERN_USP_PCU_G3C_ALL(suffix,k,g) \
	PATTERN_USP_PCU_G3C_BLK(suffix,k,g) \
	PATTERN_USP_PCU_G3C_GRY(suffix,k,g) \
	PATTERN_USP_PCU_G3C_MC(suffix,k,g) \
	PATTERN_USP_PCU_G3C_MCA(suffix,k,g) \
    PATTERN_USP_PCU_G3C_MCB(suffix,k,g) \
    PATTERN_USP_PCU_G3C_MCD(suffix,k,g) \
    PATTERN_USP_PCU_G3C_MCT(suffix,k,g) 

#define PATTERN_USP_SOFTSHELL_G3C(suffix, base, c, t, k, g) \
	class suffix: base                            \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "USP_SOFTSHELL_G3C";                \
			camo = #c;                            \
			top = #t;                             \
			kneepads = #k;                        \
			gloves = #g;                          \
		};                                        \
	};         


#define PATTERN_USP_SOFTSHELL_G3C_BLK(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(suffix,         Uniform_Base,  BLK, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_AOR1,suffix,AOR1,BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_AOR2,suffix,AOR2,BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_ATT, suffix,ATT, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_GRY, suffix,GRY, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_KHK, suffix,KHK, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_M81, suffix,M81, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MC,  suffix,MC,  BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MCB, suffix,MCB, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MCD, suffix,MCD, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MCT, suffix,MCT, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MCW, suffix,MCW, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_NAV, suffix,NAV, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_RGR, suffix,RGR, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_TSD, suffix,TSD, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_TSW, suffix,TSW, BLK,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_CBR(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_BLK, suffix,BLK, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_AOR1,suffix,AOR1,CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_AOR2,suffix,AOR2,CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_ATT, suffix,ATT, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_GRY, suffix,GRY, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_KHK, suffix,KHK, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_M81, suffix,M81, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MC,  suffix,MC,  CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MCB, suffix,MCB, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MCD, suffix,MCD, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MCT, suffix,MCT, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MCW, suffix,MCW, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_NAV, suffix,NAV, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_RGR, suffix,RGR, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_TSD, suffix,TSD, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_TSW, suffix,TSW, CBR,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_GRY(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_BLK, suffix,BLK, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_AOR1,suffix,AOR1,GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_AOR2,suffix,AOR2,GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_ATT, suffix,ATT, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY,     suffix,GRY, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_KHK, suffix,KHK, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_M81, suffix,M81, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MC,  suffix,MC,  GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MCB, suffix,MCB, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MCD, suffix,MCD, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MCT, suffix,MCT, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MCW, suffix,MCW, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_NAV, suffix,NAV, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_RGR, suffix,RGR, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_TSD, suffix,TSD, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_TSW, suffix,TSW, GRY,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_MC(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_BLK, suffix,BLK, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_AOR1,suffix,AOR1,MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_AOR2,suffix,AOR2,MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_ATT, suffix,ATT, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_GRY, suffix,GRY, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_KHK, suffix,KHK, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_M81, suffix,M81, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC,     suffix,MC,  MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_MCB, suffix,MCB, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_MCD, suffix,MCD, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_MCT, suffix,MCT, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_MCW, suffix,MCW, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_NAV, suffix,NAV, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_RGR, suffix,RGR, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_TSD, suffix,TSD, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_TSW, suffix,TSW, MC,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_RGR(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_BLK, suffix,BLK, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_AOR1,suffix,AOR1,RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_AOR2,suffix,AOR2,RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_ATT, suffix,ATT, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_GRY, suffix,GRY, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_KHK, suffix,KHK, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_M81, suffix,M81, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MC,  suffix,MC,  RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MCB, suffix,MCB, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MCD, suffix,MCD, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MCT, suffix,MCT, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MCW, suffix,MCW, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_NAV, suffix,NAV, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR,     suffix,RGR, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_TSD, suffix,TSD, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_TSW, suffix,TSW, RGR,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_ALL(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C_BLK(suffix,k,g) \
	PATTERN_USP_SOFTSHELL_G3C_CBR(suffix,k,g) \
	PATTERN_USP_SOFTSHELL_G3C_GRY(suffix,k,g) \
	PATTERN_USP_SOFTSHELL_G3C_MC(suffix,k,g) \
    PATTERN_USP_SOFTSHELL_G3C_RGR(suffix,k,g) \
	
#define PATTERN_USP_OVERWHITE_G3C(suffix, base, c, k, g) \
	class suffix: base                            \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "USP_OVERWHITE_G3C";          \
			camo = #c;                            \
			kneepads = #k;                        \
			gloves = #g;                          \
		};                                        \
	};                                            

#define PATTERN_USP_OVERWHITE_G3C_MCA(suffix, k, g) \
	PATTERN_USP_OVERWHITE_G3C(suffix,         Uniform_Base,BLK, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_AOR1,suffix,AOR1,k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_AOR2,suffix,AOR2,k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_ATT, suffix,ATT, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_GRY, suffix,GRY, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_KHK, suffix,KHK, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_M81, suffix,M81, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_MC,  suffix,MC,  k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_MCB, suffix,MCB, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_MCD, suffix,MCD, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_MCT, suffix,MCT, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_MCW, suffix,MCW, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_NAV, suffix,NAV, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_RGR, suffix,RGR, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_TSD, suffix,TSD, k,g) \
	PATTERN_USP_OVERWHITE_G3C(##suffix##_MCA_TSW, suffix,TSW, k,g)

#define PATTERN_USP_TSHIRT_G3C(suffix, base, c, t, k, g, i) \
	class suffix: base                            \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "USP_TSHIRT_G3C";             \
			camo = #c;                            \
			top = #t;                             \
			kneepads = #k;                        \
			gloves = #g;                          \
			inside = #i;                          \
		};                                        \
	}; 

#define PATTERN_USP_TSHIRT_G3C_BLK(suffix, k, g, i) \
	PATTERN_USP_TSHIRT_G3C(suffix,         Uniform_Base,  BLK, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_AOR1,suffix,AOR1,BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_AOR2,suffix,AOR2,BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_ATT, suffix,ATT, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_GRY, suffix,GRY, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_KHK, suffix,KHK, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_M81, suffix,M81, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_MC,  suffix,MC,  BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_MCB, suffix,MCB, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_MCD, suffix,MCD, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_MCT, suffix,MCT, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_MCW, suffix,MCW, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_NAV, suffix,NAV, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_RGR, suffix,RGR, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_TSD, suffix,TSD, BLK,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_BLK_TSW, suffix,TSW, BLK,k,g,i)

#define PATTERN_USP_TSHIRT_G3C_CBR(suffix, k, g, i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_BLK, suffix,BLK, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_AOR1,suffix,AOR1,CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_AOR2,suffix,AOR2,CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_ATT, suffix,ATT, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_GRY, suffix,GRY, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_KHK, suffix,KHK, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_M81, suffix,M81, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_MC,  suffix,MC,  CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_MCB, suffix,MCB, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_MCD, suffix,MCD, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_MCT, suffix,MCT, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_MCW, suffix,MCW, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_NAV, suffix,NAV, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_RGR, suffix,RGR, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_TSD, suffix,TSD, CBR,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_CBR_TSW, suffix,TSW, CBR,k,g,i)

#define PATTERN_USP_TSHIRT_G3C_GRN(suffix, k, g, i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_BLK, suffix,BLK, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_AOR1,suffix,AOR1,GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_AOR2,suffix,AOR2,GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_ATT, suffix,ATT, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_GRY, suffix,GRY, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_KHK, suffix,KHK, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_M81, suffix,M81, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_MC,  suffix,MC,  GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_MCB, suffix,MCB, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_MCD, suffix,MCD, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_MCT, suffix,MCT, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_MCW, suffix,MCW, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_NAV, suffix,NAV, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_RGR, suffix,RGR, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_TSD, suffix,TSD, GRN,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRN_TSW, suffix,TSW, GRN,k,g,i)


#define PATTERN_USP_TSHIRT_G3C_GRY(suffix, k, g, i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_BLK, suffix,BLK, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_AOR1,suffix,AOR1,GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_AOR2,suffix,AOR2,GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_ATT, suffix,ATT, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY, suffix,GRY, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_KHK, suffix,KHK, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_M81, suffix,M81, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_MC,  suffix,MC,  GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_MCB, suffix,MCB, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_MCD, suffix,MCD, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_MCT, suffix,MCT, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_MCW, suffix,MCW, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_NAV, suffix,NAV, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_RGR, suffix,RGR, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_TSD, suffix,TSD, GRY,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_GRY_TSW, suffix,TSW, GRY,k,g,i)


#define PATTERN_USP_TSHIRT_G3C_NAV(suffix, k, g, i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_BLK, suffix,BLK, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_AOR1,suffix,AOR1,NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_AOR2,suffix,AOR2,NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_ATT, suffix,ATT, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_GRY, suffix,GRY, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_KHK, suffix,KHK, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_M81, suffix,M81, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_MC,  suffix,MC,  NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_MCB, suffix,MCB, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_MCD, suffix,MCD, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_MCT, suffix,MCT, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_MCW, suffix,MCW, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV,     suffix,NAV, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_RGR, suffix,RGR, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_TSD, suffix,TSD, NAV,k,g,i) \
	PATTERN_USP_TSHIRT_G3C(##suffix##_NAV_TSW, suffix,TSW, NAV,k,g,i)

#define PATTERN_USP_TSHIRT_G3C_ALL(suffix, k, g, i) \
	PATTERN_USP_TSHIRT_G3C_BLK(suffix,k,g,i) \
	PATTERN_USP_TSHIRT_G3C_CBR(suffix,k,g,i) \
	PATTERN_USP_TSHIRT_G3C_GRY(suffix,k,g,i) \
	PATTERN_USP_TSHIRT_G3C_GRN(suffix,k,g,i) \
	PATTERN_USP_TSHIRT_G3C_NAV(suffix,k,g,i)

class CfgWeapons
{
	class Uniform_Base;

	// USP_G3C (some combinaisons does not exists, so it's splitted in small chunks)
	PATTERN_USP_G3C(USP_G3C,             down,no, none,Full,   SL)
	PATTERN_USP_G3C(USP_G3C_CU,          up,  no, none,Full,   SL)
	PATTERN_USP_G3C(USP_G3C_KP,          down,yes,none,Full,   SL)
	PATTERN_USP_G3C(USP_G3C_CU_KP,       up,  yes,none,Full,   SL)
	PATTERN_USP_G3C(USP_G3C_MX,          down,no, MX,  Full,   SL)
	PATTERN_USP_G3C(USP_G3C_CU_MX,       up,  no, MX,  Full,   SL)
	PATTERN_USP_G3C(USP_G3C_KP_MX,       down,yes,MX,  Full,   SL)
	PATTERN_USP_G3C(USP_G3C_CU_KP_MX,    up,  yes,MX,  Full,   SL)
	PATTERN_USP_G3C(USP_G3C_OR,          down,no, OR,  Full,   SL)
	PATTERN_USP_G3C(USP_G3C_CU_OR,       up,  no, OR,  Full,   SL)
	PATTERN_USP_G3C(USP_G3C_KP_OR,       down,yes,OR,  Full,   SL)
	PATTERN_USP_G3C(USP_G3C_CU_KP_OR,    up,  yes,OR,  Full,   SL)

	PATTERN_USP_G3C(USP_G3C_RS2,         down,no, none,Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_CU,      up,  no, none,Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_KP,      down,yes,none,Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_KP,   up,  yes,none,Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_MX,      down,no, MX,  Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_MX,   up,  no, MX,  Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_KP_MX,   down,yes,MX,  Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_KP_MX,up,  yes,MX,  Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_OR,      down,no, OR,  Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_OR,   up,  no, OR,  Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_KP_OR,   down,yes,OR,  Half,   SL)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_KP_OR,up,  yes,OR,  Half,   SL)

	PATTERN_USP_G3C(USP_G3C_RS,          down,no, none,Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_CU,       up,  no, none,Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_KP,       down,yes,none,Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_CU_KP,    up,  yes,none,Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_MX,       down,no, MX,  Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_CU_MX,    up,  no, MX,  Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_KP_MX,    down,yes,MX,  Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_CU_KP_MX, up,  yes,MX,  Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_OR,       down,no, OR,  Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_CU_OR,    up,  no, OR,  Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_KP_OR,    down,yes,OR,  Quarter,SL)
	PATTERN_USP_G3C(USP_G3C_RS_CU_KP_OR, up,  yes,OR,  Quarter,SL)

	PATTERN_USP_G3C(USP_G3C_RS_VQ,          down,no, none,Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_CU_VQ,       up,  no, none,Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_KP_VQ,       down,yes,none,Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_CU_KP_VQ,    up,  yes,none,Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_MX_VQ,       down,no, MX,  Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_CU_MX_VQ,    up,  no, MX,  Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_KP_MX_VQ,    down,yes,MX,  Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_CU_KP_MX_VQ, up,  yes,MX,  Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_OR_VQ,       down,no, OR,  Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_CU_OR_VQ,    up,  no, OR,  Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_KP_OR_VQ,    down,yes,OR,  Quarter,VQ)
	PATTERN_USP_G3C(USP_G3C_RS_CU_KP_OR_VQ, up,  yes,OR,  Quarter,VQ)

	PATTERN_USP_G3C(USP_G3C_RS2_CU_VQ,      up,  no, none,Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_KP_VQ,      down,yes,none,Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_KP_VQ,   up,  yes,none,Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_MX_VQ,      down,no, MX,  Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_MX_VQ,   up,  no, MX,  Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_KP_MX_VQ,   down,yes,MX,  Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_KP_MX_VQ,up,  yes,MX,  Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_OR_VQ,      down,no, OR,  Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_OR_VQ,   up,  no, OR,  Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_KP_OR_VQ,   down,yes,OR,  Half,   VQ)
	PATTERN_USP_G3C(USP_G3C_RS2_CU_KP_OR_VQ,up,  yes,OR,  Half,   VQ)

	PATTERN_USP_G3C(USP_G3C_VQ,          down,no, none,Full,   VQ)
	PATTERN_USP_G3C(USP_G3C_MX_VQ,       down,no, MX,  Full,   VQ)
	PATTERN_USP_G3C(USP_G3C_OR_VQ,       down,no, OR,  Full,   VQ)

	PATTERN_USP_G3C(USP_G3C_IST,         down,no, none,Full,   IST)
	PATTERN_USP_G3C(USP_G3C_IST_MX,      down,no, MX,  Full,   IST)
	PATTERN_USP_G3C(USP_G3C_IST_OR,      down,no, OR,  Full,   IST)
	PATTERN_USP_G3C(USP_G3C_IST_KP,      down,yes,none,Full,   IST)
	PATTERN_USP_G3C(USP_G3C_IST_KP_MX,   down,yes,MX,  Full,   IST)
	PATTERN_USP_G3C(USP_G3C_IST_KP_OR,   down,yes,OR,  Full,   IST)

	// USP_PCU_G3
	// NOTE: USP_PCU_G3C_*_GRY_BLK are broken in USP Mod itself
	PATTERN_USP_PCU_G3C_ALL(USP_PCU_G3C,      no, none)
	PATTERN_USP_PCU_G3C_ALL(USP_PCU_G3C_KP,   yes,none)
	PATTERN_USP_PCU_G3C_ALL(USP_PCU_G3C_KP_MX,yes,MX)
	PATTERN_USP_PCU_G3C_ALL(USP_PCU_G3C_KP_OR,yes,OR)
	PATTERN_USP_PCU_G3C_ALL(USP_PCU_G3C_MX,   no, MX)
	PATTERN_USP_PCU_G3C_ALL(USP_PCU_G3C_OR,   no, OR)

	// USP_SOFTSHELL_G3C
	PATTERN_USP_SOFTSHELL_G3C_ALL(USP_SOFTSHELL_G3C,      no, none)
	PATTERN_USP_SOFTSHELL_G3C_ALL(USP_SOFTSHELL_G3C_KP,   yes,none)
	PATTERN_USP_SOFTSHELL_G3C_ALL(USP_SOFTSHELL_G3C_MX,   no, MX)
	PATTERN_USP_SOFTSHELL_G3C_ALL(USP_SOFTSHELL_G3C_KP_MX,yes,MX)
	PATTERN_USP_SOFTSHELL_G3C_ALL(USP_SOFTSHELL_G3C_OR,   no, OR)
	PATTERN_USP_SOFTSHELL_G3C_ALL(USP_SOFTSHELL_G3C_KP_OR,yes,OR)

	// USP_OVERWHITE_G3C
	PATTERN_USP_OVERWHITE_G3C_MCA(USP_OVERWHITE_G3C,      no, none)
	PATTERN_USP_OVERWHITE_G3C_MCA(USP_OVERWHITE_G3C_KP,   yes,none)
	PATTERN_USP_OVERWHITE_G3C_MCA(USP_OVERWHITE_G3C_MX,   no, MX)
	PATTERN_USP_OVERWHITE_G3C_MCA(USP_OVERWHITE_G3C_KP_MX,yes,MX)
	PATTERN_USP_OVERWHITE_G3C_MCA(USP_OVERWHITE_G3C_OR,   no, OR)
	PATTERN_USP_OVERWHITE_G3C_MCA(USP_OVERWHITE_G3C_KP_OR,yes,OR)

	// USP_TSHIRT_G3C / USP_TSHIRT2_G3C
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT_G3C,       no, none,no)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT_G3C_KP,    yes,none,no)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT_G3C_MX,    no, MX,no)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT_G3C_KP_MX, yes,MX,no)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT_G3C_OR,    no, OR,no)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT_G3C_KP_OR, yes,OR,no)
	//PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT2_G3C,      no, none,yes) => exists, but private
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT2_G3C_KP,   yes,none,yes)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT2_G3C_MX,   no, MX,yes)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT2_G3C_KP_MX,yes,MX,yes)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT2_G3C_OR,   no, OR,yes)
	PATTERN_USP_TSHIRT_G3C_ALL(USP_TSHIRT2_G3C_KP_OR,yes,OR,yes)
};
