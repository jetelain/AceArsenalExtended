#define PATTERN_USP_G3C_S(suffix, m, c, k, g, s, p) \
	class suffix                    \
	{                                             \
			model = "USP_G3C";                   \
			camo = #m;                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
			shoes = #p;                           \
	};   

#define PATTERN_USP_G3C(suffix, c, k, g, s, p) \
	PATTERN_USP_G3C_S(suffix,  BLK,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_GRY,GRY,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_KHK,KHK,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_NAV,NAV,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_RGR,RGR,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_M81,M81,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MC,MC,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MCB,MCB,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MCD,MCD,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MCT,MCT,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_MCW,MCW,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_AOR1,AOR1,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_AOR2,AOR2,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_ATT,ATT,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_TSD,TSD,c,k,g,s,p) \
	PATTERN_USP_G3C_S(##suffix##_TSW,TSW,c,k,g,s,p) 

#define PATTERN_USP_PCU_G3C(suffix, c, t, k, g) \
	class suffix                            \
	{                                             \
			model = "USP_PCU_G3C";                \
			camo = #c;                            \
			top = #t;                             \
			kneepads = #k;                        \
			gloves = #g;                          \
	};                                            

#define PATTERN_USP_PCU_G3C_BLK(suffix, k, g) \
	PATTERN_USP_PCU_G3C(suffix,             BLK, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_AOR1,AOR1,BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_AOR2,AOR2,BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_ATT, ATT, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_GRY, GRY, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_KHK, KHK, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_M81, M81, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MC,  MC,  BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MCB, MCB, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MCD, MCD, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MCT, MCT, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_MCW, MCW, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_NAV, NAV, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_RGR, RGR, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_TSD, TSD, BLK,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_BLK_TSW, TSW, BLK,k,g)

#define PATTERN_USP_PCU_G3C_GRY(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY,     GRY, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_AOR1,AOR1,GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_AOR2,AOR2,GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_ATT, ATT, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_BLK, BLK, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_KHK, KHK, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_M81, M81, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MC,  MC,  GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MCB, MCB, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MCD, MCD, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MCT, MCT, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_MCW, MCW, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_NAV, NAV, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_RGR, RGR, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_TSD, TSD, GRY,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_GRY_TSW, TSW, GRY,k,g)

#define PATTERN_USP_PCU_G3C_MC(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC,     MC,  MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_AOR1,AOR1,MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_AOR2,AOR2,MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_ATT, ATT, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_BLK, BLK, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_KHK, KHK, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_M81, M81, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_GRY, GRY, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_MCB, MCB, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_MCD, MCD, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_MCT, MCT, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_MCW, MCW, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_NAV, NAV, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_RGR, RGR, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_TSD, TSD, MC,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MC_TSW, TSW, MC,k,g)


#define PATTERN_USP_PCU_G3C_MCA(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MC,  MC,  MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_AOR1,AOR1,MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_AOR2,AOR2,MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_ATT, ATT, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_BLK, BLK, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_KHK, KHK, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_M81, M81, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_GRY, GRY, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MCB, MCB, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MCD, MCD, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MCT, MCT, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_MCW, MCW, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_NAV, NAV, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_RGR, RGR, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_TSD, TSD, MCA,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCA_TSW, TSW, MCA,k,g)

#define PATTERN_USP_PCU_G3C_MCB(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB,     MCB, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_AOR1,AOR1,MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_AOR2,AOR2,MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_ATT, ATT, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_BLK, BLK, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_KHK, KHK, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_M81, M81, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_GRY, GRY, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_MC , MC,  MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_MCD, MCD, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_MCT, MCT, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_MCW, MCW, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_NAV, NAV, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_RGR, RGR, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_TSD, TSD, MCB,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCB_TSW, TSW, MCB,k,g)

#define PATTERN_USP_PCU_G3C_MCD(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD,     MCD, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_AOR1,AOR1,MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_AOR2,AOR2,MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_ATT, ATT, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_BLK, BLK, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_KHK, KHK, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_M81, M81, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_GRY, GRY, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_MC , MC,  MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_MCB, MCB, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_MCT, MCT, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_MCW, MCW, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_NAV, NAV, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_RGR, RGR, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_TSD, TSD, MCD,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCD_TSW, TSW, MCD,k,g)

#define PATTERN_USP_PCU_G3C_MCT(suffix, k, g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT,     MCT, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_AOR1,AOR1,MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_AOR2,AOR2,MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_ATT, ATT, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_BLK, BLK, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_KHK, KHK, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_M81, M81, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_GRY, GRY, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_MC , MC,  MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_MCB, MCB, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_MCD, MCD, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_MCW, MCW, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_NAV, NAV, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_RGR, RGR, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_TSD, TSD, MCT,k,g) \
	PATTERN_USP_PCU_G3C(##suffix##_MCT_TSW, TSW, MCT,k,g)

#define PATTERN_USP_PCU_G3C_ALL(suffix,k,g) \
	PATTERN_USP_PCU_G3C_BLK(suffix,k,g) \
	PATTERN_USP_PCU_G3C_GRY(suffix,k,g) \
	PATTERN_USP_PCU_G3C_MC(suffix,k,g) \
	PATTERN_USP_PCU_G3C_MCA(suffix,k,g) \
    PATTERN_USP_PCU_G3C_MCB(suffix,k,g) \
    PATTERN_USP_PCU_G3C_MCD(suffix,k,g) \
    PATTERN_USP_PCU_G3C_MCT(suffix,k,g) 

#define PATTERN_USP_SOFTSHELL_G3C(suffix, c, t, k, g) \
	class suffix                            \
	{                                             \
			model = "USP_SOFTSHELL_G3C";                \
			camo = #c;                            \
			top = #t;                             \
			kneepads = #k;                        \
			gloves = #g;                          \
	};         


#define PATTERN_USP_SOFTSHELL_G3C_BLK(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(suffix,             BLK, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_AOR1,AOR1,BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_AOR2,AOR2,BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_ATT, ATT, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_GRY, GRY, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_KHK, KHK, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_M81, M81, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MC,  MC,  BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MCB, MCB, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MCD, MCD, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MCT, MCT, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_MCW, MCW, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_NAV, NAV, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_RGR, RGR, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_TSD, TSD, BLK,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_BLK_TSW, TSW, BLK,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_CBR(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_BLK, BLK, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_AOR1,AOR1,CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_AOR2,AOR2,CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_ATT, ATT, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_GRY, GRY, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_KHK, KHK, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_M81, M81, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MC,  MC,  CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MCB, MCB, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MCD, MCD, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MCT, MCT, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_MCW, MCW, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_NAV, NAV, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_RGR, RGR, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_TSD, TSD, CBR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_CBR_TSW, TSW, CBR,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_GRY(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_BLK, BLK, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_AOR1,AOR1,GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_AOR2,AOR2,GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_ATT, ATT, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY,     GRY, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_KHK, KHK, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_M81, M81, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MC,  MC,  GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MCB, MCB, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MCD, MCD, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MCT, MCT, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_MCW, MCW, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_NAV, NAV, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_RGR, RGR, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_TSD, TSD, GRY,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_GRY_TSW, TSW, GRY,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_MC(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_BLK, BLK, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_AOR1,AOR1,MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_AOR2,AOR2,MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_ATT, ATT, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_GRY, GRY, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_KHK, KHK, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_M81, M81, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC,     MC,  MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_MCB, MCB, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_MCD, MCD, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_MCT, MCT, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_MCW, MCW, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_NAV, NAV, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_RGR, RGR, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_TSD, TSD, MC,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_MC_TSW, TSW, MC,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_RGR(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_BLK, BLK, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_AOR1,AOR1,RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_AOR2,AOR2,RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_ATT, ATT, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_GRY, GRY, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_KHK, KHK, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_M81, M81, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MC,  MC,  RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MCB, MCB, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MCD, MCD, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MCT, MCT, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_MCW, MCW, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_NAV, NAV, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR,     RGR, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_TSD, TSD, RGR,k,g) \
	PATTERN_USP_SOFTSHELL_G3C(##suffix##_RGR_TSW, TSW, RGR,k,g)

#define PATTERN_USP_SOFTSHELL_G3C_ALL(suffix, k, g) \
	PATTERN_USP_SOFTSHELL_G3C_BLK(suffix,k,g) \
	PATTERN_USP_SOFTSHELL_G3C_CBR(suffix,k,g) \
	PATTERN_USP_SOFTSHELL_G3C_GRY(suffix,k,g) \
	PATTERN_USP_SOFTSHELL_G3C_MC(suffix,k,g) \
    PATTERN_USP_SOFTSHELL_G3C_RGR(suffix,k,g) \
	
#define PATTERN_USP_OVERWHITE_G3C(suffix, base, c, k, g) \
	class suffix                            \
	{                                             \
			model = "USP_OVERWHITE_G3C";          \
			camo = #c;                            \
			kneepads = #k;                        \
			gloves = #g;                          \
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
	class suffix                            \
	{                                             \
			model = "USP_TSHIRT_G3C";             \
			camo = #c;                            \
			top = #t;                             \
			kneepads = #k;                        \
			gloves = #g;                          \
			inside = #i;                          \
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


#define PATTERN_VEST(name, base, m, c, l, b) \
	class name                              \
	{                                             \
			model = #m;                           \
			camo = #c;                            \
			loadout = #l;                         \
			belt = #b;                            \
	}; 

#define PATTERN_VEST_JPC(name, l, b) \
	PATTERN_VEST(name,Vest_NoCamo_Base,USP_CRYE_JPC,MC,l,b) \
	PATTERN_VEST(##name##_CBR,name,USP_CRYE_JPC,CBR,l,b) \
	PATTERN_VEST(##name##_KHK,name,USP_CRYE_JPC,KHK,l,b) \
	PATTERN_VEST(##name##_RGR,name,USP_CRYE_JPC,RGR,l,b) 

#define PATTERN_CAP(name, base, l, c, y, o, s) \
	class name                              \
	{                                             \
			model = "USP_BASEBALL";               \
			camo = #c;                            \
			light = #l;                           \
			eyewear = #y;                         \
			comms = #o;                           \
			side = #s;                            \
	}; 


#define PATTERN_CAP_L(name, base, c, y, o, s) \
	PATTERN_CAP(name,      base, none, c, y, o, s)   \
	PATTERN_CAP(##name##S, base, FS,   c, y, o, s)           

#define PATTERN_CAP_Y(name, base, c, o, s) \
	PATTERN_CAP_L(##name##D,base,c,DC,o,s) \
	PATTERN_CAP_L(##name##G,base,c,GG,o,s) \
	PATTERN_CAP_L(##name##J,base,c,SJ,o,s)       

#define PATTERN_CAP_ALL(name,  c, s) \
	PATTERN_CAP(  name,       H_HelmetB,none,c, none, none, s) \
	PATTERN_CAP(  ##name##_BP,name,     PT,  c, none, BM,   s) \
	PATTERN_CAP(  ##name##_S, name,     FS,  c, none, none, s) \
	PATTERN_CAP(  ##name##_S, name,     FS,  c, none, none, s) \
	PATTERN_CAP_L(##name##_B, name,          c, none, BM,   s) \
	PATTERN_CAP_L(##name##_C, name,          c, none, CT,   s) \
    PATTERN_CAP_Y(##name##_,  name,          c,       none, s) \
	PATTERN_CAP_Y(##name##_B, name,          c,       BM,   s) \
	PATTERN_CAP_Y(##name##_C, name,          c,       CT,   s)

#define PATTERN_CAP_CT3(name,o,s) \
	PATTERN_CAP(name,H_HelmetB,none,MC,none,o,s)                      \
	PATTERN_CAP(##name##_ABU,name,none,ABU,none,o,s)                  \
	PATTERN_CAP(##name##_AOR1,name,none,AOR1,none,o,s)                \
	PATTERN_CAP(##name##_AOR2,name,none,AOR2,none,o,s)                \
	PATTERN_CAP(##name##_ATACSAU,name,none,ATACSAU,none,o,s)          \
	PATTERN_CAP(##name##_ATACSFG,name,none,ATACSFG,none,o,s)          \
	PATTERN_CAP(##name##_ATACSIX,name,none,ATACSIX,none,o,s)          \
	PATTERN_CAP(##name##_BLK,name,none,BLK,none,o,s)                  \
	PATTERN_CAP(##name##_CBR,name,none,CBR,none,o,s)                  \
	PATTERN_CAP(##name##_DCU,name,none,DCU,none,o,s)                  \
	PATTERN_CAP(##name##_KHK,name,none,KHK,none,o,s)                  \
	PATTERN_CAP(##name##_KTBANSHEE,name,none,KTBANSHEE,none,o,s)      \
	PATTERN_CAP(##name##_KTHIGHLANDER,name,none,KTHIGHLANDER,none,o,s)\
	PATTERN_CAP(##name##_KTNEPTUNE,name,none,KTNEPTUNE,none,o,s)      \
	PATTERN_CAP(##name##_KTNOMAD,name,none,KTNOMAD,none,o,s)          \
	PATTERN_CAP(##name##_KTPONTUS,name,none,KTPONTUS,none,o,s)        \
	PATTERN_CAP(##name##_KTTYPHON,name,none,KTTYPHON,none,o,s)        \
	PATTERN_CAP(##name##_KTYETI,name,none,KTYETI,none,o,s)            \
	PATTERN_CAP(##name##_M81,name,none,M81,none,o,s)                  \
	PATTERN_CAP(##name##_MCA,name,none,MCA,none,o,s)                  \
	PATTERN_CAP(##name##_MCB,name,none,MCB,none,o,s)                  \
	PATTERN_CAP(##name##_MCD,name,none,MCD,none,o,s)                  \
	PATTERN_CAP(##name##_MCT,name,none,MCT,none,o,s)                  \
	PATTERN_CAP(##name##_MPW,name,none,MPW,none,o,s)                  \
	PATTERN_CAP(##name##_MTP,name,none,MTP,none,o,s)                  \
	PATTERN_CAP(##name##_OD,name,none,OD,none,o,s)                    \
	PATTERN_CAP(##name##_PANTHERS,H_HelmetB,none,PANTHERS,none,o,s)   \
	PATTERN_CAP(##name##_RGR,name,none,RGR,none,o,s)                  \
	PATTERN_CAP(##name##_RT,name,none,RT,none,o,s)                    \
	PATTERN_CAP(##name##_RT2,name,none,RT2,none,o,s)                  \
	PATTERN_CAP(##name##_RT3,name,none,RT3,none,o,s)                  \
	PATTERN_CAP(##name##_RT4,name,none,RT4,none,o,s)                  \
	PATTERN_CAP(##name##_RT5,name,none,RT5,none,o,s)                  \
	PATTERN_CAP(##name##_RT6,name,none,RT6,none,o,s)                  \
	PATTERN_CAP(##name##_RT7,name,none,RT7,none,o,s)                  \
	PATTERN_CAP(##name##_TGR,name,none,TGR,none,o,s)                  \
	PATTERN_CAP(##name##_TGRD,name,none,TGRD,none,o,s)                \
	PATTERN_CAP(##name##_UCP,name,none,UCP,none,o,s)                  \
	PATTERN_CAP(##name##_UCPD,name,none,UCPD,none,o,s)                \
	PATTERN_CAP(##name##_US4CES,name,none,US4CES,none,o,s)            

#define PATTERN_OPSCORE_FASTMT(name, base, ct, cm, gg, lt, cw, c) \
	class name                              \
	{                                             \
			model = "USP_OPSCORE_FAST";           \
			camo = #c;                            \
			comms = #ct;                          \
			camera = #cm;                          \
			goggles = #gg;                        \
			light = #lt;                          \
			counterweight = #cw;                  \
	}; 

#define PATTERN_AIRFRAME(name, base, cm, lt, cw, gu, ir, vl,c) \
	class name                              \
	{                                             \
			model = "USP_AIRFRAME";               \
			camo = #c;                            \
			vlopt = #vl;                          \
			camera = #cm;                          \
			goggles = #gu;                          \
			light = #lt;                          \
			iropt = #ir;                          \
			counterweight = #cw;                  \
	}; 

#define PATTERN_OPSCORE_FASTFCV(name, base, ct, cm, gg, lt, cw, c) \
	class name                              \
	{                                             \
			model = "USP_OPSCORE_FASTFCV";            \
			camo = #c;                            \
			comms = #ct;                          \
			camera = #cm;                          \
			goggles = #gg;                          \
			light = #lt;                          \
			counterweight = #cw;                  \
	}; 

class XtdGearInfos
{

class CfgWeapons
{

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

	// USP_CRYE_JPC
	PATTERN_VEST_JPC(USP_CRYE_JPC_ASLT, ASLT,no)
	PATTERN_VEST_JPC(USP_CRYE_JPC_ASLTB,ASLT,yes)
	PATTERN_VEST_JPC(USP_CRYE_JPC_DM,   DM,  no)
	PATTERN_VEST_JPC(USP_CRYE_JPC_DMB,  DM,  yes)
	PATTERN_VEST_JPC(USP_CRYE_JPC_GR,   GR,  no)
	PATTERN_VEST_JPC(USP_CRYE_JPC_GRB,  GR,  yes)
	PATTERN_VEST_JPC(USP_CRYE_JPC_MG,   MG,  no)
	PATTERN_VEST_JPC(USP_CRYE_JPC_MGB,  MG,  yes)
	PATTERN_VEST_JPC(USP_CRYE_JPC_TL,   TL,  no)
	PATTERN_VEST_JPC(USP_CRYE_JPC_TlB,  TL,  yes)
	PATTERN_VEST_JPC(USP_CRYE_JPC_FS,   FS,  no)
	PATTERN_VEST_JPC(USP_CRYE_JPC,      none,no)

	// USP_CRYE_NCPC
	PATTERN_VEST(USP_CRYE_NCPC,Vest_NoCamo_Base,            USP_CRYE_NCPC,CBR,none,no)
	PATTERN_VEST(USP_CRYE_NCPC_AOR1,USP_CRYE_NCPC,          USP_CRYE_NCPC,AOR1,none,no)
	PATTERN_VEST(USP_CRYE_NCPC_AOR2,USP_CRYE_NCPC,          USP_CRYE_NCPC,AOR2,none,no)
	PATTERN_VEST(USP_CRYE_NCPC_TGS,USP_CRYE_NCPC,           USP_CRYE_NCPC,TGS,none,no)
	PATTERN_VEST(USP_CRYE_NCPC_ASLT,Vest_NoCamo_Base,       USP_CRYE_NCPC,CBR,ASLT,no)
	PATTERN_VEST(USP_CRYE_NCPC_ASLT_AOR1,USP_CRYE_NCPC_ASLT,USP_CRYE_NCPC,AOR1,ASLT,no)
	PATTERN_VEST(USP_CRYE_NCPC_ASLT_AOR2,USP_CRYE_NCPC_ASLT,USP_CRYE_NCPC,AOR2,ASLT,no)
	PATTERN_VEST(USP_CRYE_NCPC_ASLT_KTH,USP_CRYE_NCPC_ASLT, USP_CRYE_NCPC,KTH,ASLT,no)
	PATTERN_VEST(USP_CRYE_NCPC_ASLT_KTTY,USP_CRYE_NCPC_ASLT,USP_CRYE_NCPC,KTTY,ASLT,no)
	PATTERN_VEST(USP_CRYE_NCPC_ASLT_M81,USP_CRYE_NCPC_ASLT, USP_CRYE_NCPC,M81,ASLT,no)
	PATTERN_VEST(USP_CRYE_NCPC_ASLT_TGS,USP_CRYE_NCPC_ASLT, USP_CRYE_NCPC,TGS,ASLT,no)
	PATTERN_VEST(USP_CRYE_NCPC_FAST,Vest_NoCamo_Base,       USP_CRYE_NCPC,CBR,FAST,no)
	PATTERN_VEST(USP_CRYE_NCPC_FAST_AOR1,USP_CRYE_NCPC_FAST,USP_CRYE_NCPC,AOR1,FAST,no)
	PATTERN_VEST(USP_CRYE_NCPC_FAST_AOR2,USP_CRYE_NCPC_FAST,USP_CRYE_NCPC,AOR2,FAST,no)
	PATTERN_VEST(USP_CRYE_NCPC_FAST_TGS,USP_CRYE_NCPC_FAST, USP_CRYE_NCPC,TGS,FAST,no)

	// USP_CRYE_CPC
	PATTERN_VEST(USP_CRYE_CPC,Vest_NoCamo_Base,                         USP_CRYE_CPC,CBR,none,no)
	PATTERN_VEST(USP_CRYE_CPC_AOR2,USP_CRYE_CPC,                        USP_CRYE_CPC,AOR2,none,no)
	PATTERN_VEST(USP_CRYE_CPC_MC,USP_CRYE_CPC                          ,USP_CRYE_CPC,MC,none,no)
	PATTERN_VEST(USP_CRYE_CPC_MCA,USP_CRYE_CPC                         ,USP_CRYE_CPC,MCA,none,no)
	PATTERN_VEST(USP_CRYE_CPC_MCB,USP_CRYE_CPC                         ,USP_CRYE_CPC,MCB,none,no)
	PATTERN_VEST(USP_CRYE_CPC_MCD,USP_CRYE_CPC                         ,USP_CRYE_CPC,MCD,none,no)
	PATTERN_VEST(USP_CRYE_CPC_MCT,USP_CRYE_CPC                         ,USP_CRYE_CPC,MCT,none,no)
	PATTERN_VEST(USP_CRYE_CPC_RGR,USP_CRYE_CPC                         ,USP_CRYE_CPC,RGR,none,no)

	PATTERN_VEST(USP_CRYE_CPC_COMMS,Vest_NoCamo_Base                   ,USP_CRYE_CPC,CBR,COMMS,no)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_AOR2,USP_CRYE_CPC_COMMS            ,USP_CRYE_CPC,AOR2,COMMS,no)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_BELT,Vest_NoCamo_Base              ,USP_CRYE_CPC,CBR,COMMS,yes)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_BELT_AOR2,USP_CRYE_CPC_COMMS_BELT  ,USP_CRYE_CPC,AOR2,COMMS,yes)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_BELT_MC,USP_CRYE_CPC_COMMS_BELT    ,USP_CRYE_CPC,MC,COMMS,yes)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_BELT_RGR,USP_CRYE_CPC_COMMS_BELT   ,USP_CRYE_CPC,RGR,COMMS,yes)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_MC,USP_CRYE_CPC_COMMS              ,USP_CRYE_CPC,MC,COMMS,no)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_MCA,USP_CRYE_CPC_COMMS             ,USP_CRYE_CPC,MCA,COMMS,no)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_MCB,USP_CRYE_CPC_COMMS             ,USP_CRYE_CPC,MCB,COMMS,no)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_MCD,USP_CRYE_CPC_COMMS             ,USP_CRYE_CPC,MCD,COMMS,no)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_MCT,USP_CRYE_CPC_COMMS             ,USP_CRYE_CPC,MCT,COMMS,no)
	PATTERN_VEST(USP_CRYE_CPC_COMMS_RGR,USP_CRYE_CPC_COMMS             ,USP_CRYE_CPC,RGR,COMMS,no)

	PATTERN_VEST(USP_CRYE_CPC_FAST,Vest_NoCamo_Base                    ,USP_CRYE_CPC,CBR,FAST,no)
	PATTERN_VEST(USP_CRYE_CPC_FAST_AOR2,USP_CRYE_CPC_FAST              ,USP_CRYE_CPC,AOR2,FAST,no)
	PATTERN_VEST(USP_CRYE_CPC_FAST_MC,USP_CRYE_CPC_FAST                ,USP_CRYE_CPC,MC,FAST,no)
	PATTERN_VEST(USP_CRYE_CPC_FAST_RGR,USP_CRYE_CPC_FAST               ,USP_CRYE_CPC,RGR,FAST,no)
	PATTERN_VEST(USP_CRYE_CPC_FAST_BELT,Vest_NoCamo_Base               ,USP_CRYE_CPC,CBR,FAST,yes)
	PATTERN_VEST(USP_CRYE_CPC_FAST_BELT_AOR2,USP_CRYE_CPC_FAST_BELT    ,USP_CRYE_CPC,AOR2,FAST,yes)
	PATTERN_VEST(USP_CRYE_CPC_FAST_BELT_MC,USP_CRYE_CPC_FAST_BELT      ,USP_CRYE_CPC,MC,FAST,yes)
	PATTERN_VEST(USP_CRYE_CPC_FAST_BELT_RGR,USP_CRYE_CPC_FAST_BELT     ,USP_CRYE_CPC,RGR,FAST,yes)

	PATTERN_VEST(USP_CRYE_CPC_LEAD,Vest_NoCamo_Base                    ,USP_CRYE_CPC,CBR,LEAD,no)
	PATTERN_VEST(USP_CRYE_CPC_LEAD_BELT,Vest_NoCamo_Base               ,USP_CRYE_CPC,CBR,LEAD,yes)
	PATTERN_VEST(USP_CRYE_CPC_LEAD_BELT_MC,USP_CRYE_CPC_LEAD_BELT      ,USP_CRYE_CPC,MC,LEAD,yes)
	PATTERN_VEST(USP_CRYE_CPC_LEAD_BELT_RGR,USP_CRYE_CPC_LEAD_BELT     ,USP_CRYE_CPC,RGR,LEAD,yes)
	PATTERN_VEST(USP_CRYE_CPC_LEAD_MC,USP_CRYE_CPC_LEAD                ,USP_CRYE_CPC,MC,LEAD,no)
	PATTERN_VEST(USP_CRYE_CPC_LEAD_RGR,USP_CRYE_CPC_LEAD               ,USP_CRYE_CPC,RGR,LEAD,no)

	PATTERN_VEST(USP_CRYE_CPC_LIGHT,Vest_NoCamo_Base                   ,USP_CRYE_CPC,CBR,LIGHT,no)
	PATTERN_VEST(USP_CRYE_CPC_LIGHT_BELT,Vest_NoCamo_Base              ,USP_CRYE_CPC,CBR,LIGHT,yes)
	PATTERN_VEST(USP_CRYE_CPC_LIGHT_BELT_MC,USP_CRYE_CPC_LIGHT_BELT    ,USP_CRYE_CPC,MC,LIGHT,yes)
	PATTERN_VEST(USP_CRYE_CPC_LIGHT_BELT_RGR,USP_CRYE_CPC_LIGHT_BELT   ,USP_CRYE_CPC,RGR,LIGHT,yes)
	PATTERN_VEST(USP_CRYE_CPC_LIGHT_MC,USP_CRYE_CPC_LIGHT              ,USP_CRYE_CPC,MC,LIGHT,no)
	PATTERN_VEST(USP_CRYE_CPC_LIGHT_RGR,USP_CRYE_CPC_LIGHT             ,USP_CRYE_CPC,RGR,LIGHT,no)

	PATTERN_VEST(USP_CRYE_CPC_MEDIC,Vest_NoCamo_Base                   ,USP_CRYE_CPC,CBR,MEDIC,no)
	PATTERN_VEST(USP_CRYE_CPC_MEDIC_BELT,Vest_NoCamo_Base              ,USP_CRYE_CPC,CBR,MEDIC,yes)
	PATTERN_VEST(USP_CRYE_CPC_MEDIC_BELT_MC,USP_CRYE_CPC_MEDIC_BELT    ,USP_CRYE_CPC,MC,MEDIC,yes)
	PATTERN_VEST(USP_CRYE_CPC_MEDIC_BELT_RGR,USP_CRYE_CPC_MEDIC_BELT   ,USP_CRYE_CPC,RGR,MEDIC,yes)
	PATTERN_VEST(USP_CRYE_CPC_MEDIC_MC,USP_CRYE_CPC_MEDIC              ,USP_CRYE_CPC,MC,MEDIC,no)
	PATTERN_VEST(USP_CRYE_CPC_MEDIC_RGR,USP_CRYE_CPC_MEDIC             ,USP_CRYE_CPC,RGR,MEDIC,no)

	PATTERN_VEST(USP_CRYE_CPC_WEAPON,Vest_NoCamo_Base                  ,USP_CRYE_CPC,CBR,WEAPON,no)
	PATTERN_VEST(USP_CRYE_CPC_WEAPON_BELT,Vest_NoCamo_Base             ,USP_CRYE_CPC,CBR,WEAPON,yes)
	PATTERN_VEST(USP_CRYE_CPC_WEAPON_BELT_MC,USP_CRYE_CPC_WEAPON_BELT  ,USP_CRYE_CPC,MC,WEAPON,yes)
	PATTERN_VEST(USP_CRYE_CPC_WEAPON_BELT_RGR,USP_CRYE_CPC_WEAPON_BELT ,USP_CRYE_CPC,RGR,WEAPON,yes)
	PATTERN_VEST(USP_CRYE_CPC_WEAPON_MC,USP_CRYE_CPC_WEAPON            ,USP_CRYE_CPC,MC,WEAPON,no)
	PATTERN_VEST(USP_CRYE_CPC_WEAPON_RGR,USP_CRYE_CPC_WEAPON           ,USP_CRYE_CPC,RGR,WEAPON,no)


	PATTERN_CAP_ALL(USP_BASEBALL_CAP,           MC, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB,          MC, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_ABU,       ABU, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_ABU,      ABU, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_AOR1,      AOR1, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_AOR1,     AOR1, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_AOR2,      AOR2, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_AOR2,     AOR2, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_ATACSAU,   ATACSAU, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_ATACSAU,  ATACSAU, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_ATACSFG,   ATACSFG, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_ATACSFG,  ATACSFG, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_ATACSIX,   ATACSIX, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_ATACSIX,  ATACSIX, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_BLK,       BLK, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_BLK,      BLK, back)

	PATTERN_CAP_ALL(USP_BASEBALL_CAP_CBR,CBR, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_CBR,CBR, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_DCU,DCU, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_DCU,DCU, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_KHK,KHK, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_KHK,KHK, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_KTBANSHEE,KTBANSHEE, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_KTBANSHEE,KTBANSHEE, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_KTHIGHLANDER,KTHIGHLANDER, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_KTHIGHLANDER,KTHIGHLANDER, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_KTNEPTUNE,KTNEPTUNE, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_KTNEPTUNE,KTNEPTUNE, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_KTNOMAD,KTNOMAD, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_KTNOMAD,KTNOMAD, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_KTPONTUS,KTPONTUS, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_KTPONTUS,KTPONTUS, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_KTTYPHON,KTTYPHON, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_KTTYPHON,KTTYPHON, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_KTYETI,KTYETI, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_KTYETI,KTYETI, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_M81,M81, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_M81,M81, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_MCA,MCA, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_MCA,MCA, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_MCB,MCB, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_MCB,MCB, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_MCD,MCD, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_MCD,MCD, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_MCT,MCT, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_MCT,MCT, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_MPW,MPW, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_MPW,MPW, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_MTP,MTP, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_MTP,MTP, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_OD,OD, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_OD,OD, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_RGR,RGR, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_RGR,RGR, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_RT,RT, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_RT,RT, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_RT2,RT2, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_RT2,RT2, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_RT3,RT3, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_RT3,RT3, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_RT4,RT4, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_RT4,RT4, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_RT5,RT5, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_RT5,RT5, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_RT6,RT6, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_RT6,RT6, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_RT7,RT7, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_RT7,RT7, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_TGR,TGR, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_TGR,TGR, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_TGRD,TGRD, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_TGRD,TGRD, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_UCP,UCP, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_UCP,UCP, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_UCPD,UCPD, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_UCPD,UCPD, back)
	PATTERN_CAP_ALL(USP_BASEBALL_CAP_US4CES,US4CES, front)
	PATTERN_CAP_ALL(USP_BASEBALL_CAPB_US4CES,US4CES, back)

	PATTERN_CAP_CT3(USP_BASEBALL_CAP_CT3,CT3,front)
	PATTERN_CAP_CT3(USP_BASEBALL_CAP_CT3O,CT3off,front)
	PATTERN_CAP_CT3(USP_BASEBALL_CAPB_CT3,CT3,back)
	PATTERN_CAP_CT3(USP_BASEBALL_CAPB_CT3O,CT3off,back)

	PATTERN_CAP(USP_BASEBALL_CAP_PANTHERS,H_HelmetB,none,PANTHERS,none,none,front)

	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT,H_HelmetB,none,none,none,none,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_C,USP_OPSCORE_FASTMT,CT,none,none,none,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CM,USP_OPSCORE_FASTMT,CT,CM,none,none,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMG,USP_OPSCORE_FASTMT,CT,CM,GG,none,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMGS,USP_OPSCORE_FASTMT,CT,CM,GG,SF,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMGSW,USP_OPSCORE_FASTMT,CT,CM,GG,SF,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMGT,USP_OPSCORE_FASTMT,CT,CM,GG,TL,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMGTW,USP_OPSCORE_FASTMT,CT,CM,GG,TL,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMS,USP_OPSCORE_FASTMT,CT,CM,none,SF,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMSW,USP_OPSCORE_FASTMT,CT,CM,none,SF,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMT,USP_OPSCORE_FASTMT,CT,CM,none,TL,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMTW,USP_OPSCORE_FASTMT,CT,CM,none,TL,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CMW,USP_OPSCORE_FASTMT,CT,CM,none,none,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CG,USP_OPSCORE_FASTMT,CT,none,GG,none,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CGS,USP_OPSCORE_FASTMT,CT,none,GG,SF,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CGSW,USP_OPSCORE_FASTMT,CT,none,GG,SF,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CGT,USP_OPSCORE_FASTMT,CT,none,GG,TL,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CGTW,USP_OPSCORE_FASTMT,CT,none,GG,TL,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CGW,USP_OPSCORE_FASTMT,CT,none,GG,none,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CS,USP_OPSCORE_FASTMT,CT,none,none,SF,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CSW,USP_OPSCORE_FASTMT,CT,none,none,SF,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CT,USP_OPSCORE_FASTMT,CT,none,none,TL,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CTW,USP_OPSCORE_FASTMT,CT,none,none,TL,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_CW,USP_OPSCORE_FASTMT,CT,none,none,none,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_M,USP_OPSCORE_FASTMT,none,CM,none,none,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MG,USP_OPSCORE_FASTMT,none,CM,GG,none,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MGS,USP_OPSCORE_FASTMT,none,CM,GG,SF,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MGSW,USP_OPSCORE_FASTMT,none,CM,GG,SF,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MGT,USP_OPSCORE_FASTMT,none,CM,GG,TL,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MGTW,USP_OPSCORE_FASTMT,none,CM,GG,TL,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MGW,USP_OPSCORE_FASTMT,none,CM,GG,none,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MS,USP_OPSCORE_FASTMT,none,CM,none,SF,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MSW,USP_OPSCORE_FASTMT,none,CM,none,SF,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MT,USP_OPSCORE_FASTMT,none,CM,none,TL,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MTW,USP_OPSCORE_FASTMT,none,CM,none,TL,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_MW,USP_OPSCORE_FASTMT,none,CM,none,none,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_G,USP_OPSCORE_FASTMT,none,none,GG,none,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_GS,USP_OPSCORE_FASTMT,none,none,GG,SF,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_GSW,USP_OPSCORE_FASTMT,none,none,GG,SF,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_GT,USP_OPSCORE_FASTMT,none,none,GG,TL,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_GTW,USP_OPSCORE_FASTMT,none,none,GG,TL,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_GW,USP_OPSCORE_FASTMT,none,none,GG,none,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_S,USP_OPSCORE_FASTMT,none,none,none,SF,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_SW,USP_OPSCORE_FASTMT,none,none,none,SF,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_T,USP_OPSCORE_FASTMT,none,none,none,TL,none,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_TW,USP_OPSCORE_FASTMT,none,none,none,TL,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_W,USP_OPSCORE_FASTMT,none,none,none,none,CW,TAN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD,USP_OPSCORE_FASTMT,none,none,none,none,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_C,USP_OPSCORE_FASTMT_C,CT,none,none,none,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CM,USP_OPSCORE_FASTMT_CM,CT,CM,none,none,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMG,USP_OPSCORE_FASTMT_CMG,CT,CM,GG,none,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMGS,USP_OPSCORE_FASTMT_CMGS,CT,CM,GG,SF,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMGSW,USP_OPSCORE_FASTMT_CMGSW,CT,CM,GG,SF,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMGT,USP_OPSCORE_FASTMT_CMGT,CT,CM,GG,TL,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMGTW,USP_OPSCORE_FASTMT_CMGTW,CT,CM,GG,TL,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMS,USP_OPSCORE_FASTMT_CMS,CT,CM,none,SF,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMSW,USP_OPSCORE_FASTMT_CMSW,CT,CM,none,SF,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMT,USP_OPSCORE_FASTMT_CMT,CT,CM,none,TL,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMTW,USP_OPSCORE_FASTMT_CMTW,CT,CM,none,TL,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CMW,USP_OPSCORE_FASTMT_CMW,CT,CM,none,none,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CG,USP_OPSCORE_FASTMT_CG,CT,none,GG,none,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CGS,USP_OPSCORE_FASTMT_CGS,CT,none,GG,SF,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CGSW,USP_OPSCORE_FASTMT_CGSW,CT,none,GG,SF,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CGT,USP_OPSCORE_FASTMT_CGT,CT,none,GG,TL,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CGTW,USP_OPSCORE_FASTMT_CGTW,CT,none,GG,TL,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CGW,USP_OPSCORE_FASTMT_CGW,CT,none,GG,none,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CS,USP_OPSCORE_FASTMT_CS,CT,none,none,SF,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CSW,USP_OPSCORE_FASTMT_CSW,CT,none,none,SF,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CT,USP_OPSCORE_FASTMT_CT,CT,none,none,TL,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CTW,USP_OPSCORE_FASTMT_CTW,CT,none,none,TL,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_CW,USP_OPSCORE_FASTMT_CW,CT,none,none,none,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_M,USP_OPSCORE_FASTMT_M,none,CM,none,none,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MG,USP_OPSCORE_FASTMT_MG,none,CM,GG,none,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MGS,USP_OPSCORE_FASTMT_MGS,none,CM,GG,SF,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MGSW,USP_OPSCORE_FASTMT_MGSW,none,CM,GG,SF,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MGT,USP_OPSCORE_FASTMT_MGT,none,CM,GG,TL,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MGTW,USP_OPSCORE_FASTMT_MGTW,none,CM,GG,TL,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MGW,USP_OPSCORE_FASTMT_MGW,none,CM,GG,none,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MS,USP_OPSCORE_FASTMT_MS,none,CM,none,SF,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MSW,USP_OPSCORE_FASTMT_MSW,none,CM,none,SF,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MT,USP_OPSCORE_FASTMT_MT,none,CM,none,TL,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MTW,USP_OPSCORE_FASTMT_MTW,none,CM,none,TL,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_MW,USP_OPSCORE_FASTMT_MW,none,CM,none,none,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_G,USP_OPSCORE_FASTMT_G,none,none,GG,none,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_GS,USP_OPSCORE_FASTMT_GS,none,none,GG,SF,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_GSW,USP_OPSCORE_FASTMT_GSW,none,none,GG,SF,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_GT,USP_OPSCORE_FASTMT_GT,none,none,GG,TL,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_GTW,USP_OPSCORE_FASTMT_GTW,none,none,GG,TL,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_GW,USP_OPSCORE_FASTMT_GW,none,none,GG,none,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_S,USP_OPSCORE_FASTMT_S,none,none,none,SF,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_SW,USP_OPSCORE_FASTMT_SW,none,none,none,SF,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_T,USP_OPSCORE_FASTMT_T,none,none,none,TL,none,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_TW,USP_OPSCORE_FASTMT_TW,none,none,none,TL,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMT_OD_W,USP_OPSCORE_FASTMT_W,none,none,none,none,CW,OD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC,H_HelmetB,none,none,none,none,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_C,USP_OPSCORE_FASTMTC,CT,none,none,none,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CM,USP_OPSCORE_FASTMTC,CT,CM,none,none,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMG,USP_OPSCORE_FASTMTC,CT,CM,GG,none,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMGS,USP_OPSCORE_FASTMTC,CT,CM,GG,SF,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMGSW,USP_OPSCORE_FASTMTC,CT,CM,GG,SF,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMGT,USP_OPSCORE_FASTMTC,CT,CM,GG,TL,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMGTW,USP_OPSCORE_FASTMTC,CT,CM,GG,TL,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMS,USP_OPSCORE_FASTMTC,CT,CM,none,SF,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMSW,USP_OPSCORE_FASTMTC,CT,CM,none,SF,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMT,USP_OPSCORE_FASTMTC,CT,CM,none,TL,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMTW,USP_OPSCORE_FASTMTC,CT,CM,none,TL,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CMW,USP_OPSCORE_FASTMTC,CT,CM,none,none,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CG,USP_OPSCORE_FASTMTC,CT,none,GG,none,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CGS,USP_OPSCORE_FASTMTC,CT,none,GG,SF,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CGSW,USP_OPSCORE_FASTMTC,CT,none,GG,SF,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CGT,USP_OPSCORE_FASTMTC,CT,none,GG,TL,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CGTW,USP_OPSCORE_FASTMTC,CT,none,GG,TL,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CGW,USP_OPSCORE_FASTMTC,CT,none,GG,none,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CS,USP_OPSCORE_FASTMTC,CT,none,none,SF,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CSW,USP_OPSCORE_FASTMTC,CT,none,none,SF,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CT,USP_OPSCORE_FASTMTC,CT,none,none,TL,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CTW,USP_OPSCORE_FASTMTC,CT,none,none,TL,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CW,USP_OPSCORE_FASTMTC,CT,none,none,none,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M,USP_OPSCORE_FASTMTC,none,CM,none,none,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MG,USP_OPSCORE_FASTMTC,none,CM,GG,none,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MGS,USP_OPSCORE_FASTMTC,none,CM,GG,SF,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MGSW,USP_OPSCORE_FASTMTC,none,CM,GG,SF,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MGT,USP_OPSCORE_FASTMTC,none,CM,GG,TL,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MGTW,USP_OPSCORE_FASTMTC,none,CM,GG,TL,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MGW,USP_OPSCORE_FASTMTC,none,CM,GG,none,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MS,USP_OPSCORE_FASTMTC,none,CM,none,SF,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MSW,USP_OPSCORE_FASTMTC,none,CM,none,SF,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MT,USP_OPSCORE_FASTMTC,none,CM,none,TL,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MTW,USP_OPSCORE_FASTMTC,none,CM,none,TL,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MW,USP_OPSCORE_FASTMTC,none,CM,none,none,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_G,USP_OPSCORE_FASTMTC,none,none,GG,none,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_GS,USP_OPSCORE_FASTMTC,none,none,GG,SF,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_GSW,USP_OPSCORE_FASTMTC,none,none,GG,SF,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_GT,USP_OPSCORE_FASTMTC,none,none,GG,TL,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_GTW,USP_OPSCORE_FASTMTC,none,none,GG,TL,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_GW,USP_OPSCORE_FASTMTC,none,none,GG,none,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_S,USP_OPSCORE_FASTMTC,none,none,none,SF,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_SW,USP_OPSCORE_FASTMTC,none,none,none,SF,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_T,USP_OPSCORE_FASTMTC,none,none,none,TL,none,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TW,USP_OPSCORE_FASTMTC,none,none,none,TL,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_W,USP_OPSCORE_FASTMTC,none,none,none,none,CW,MC)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU,USP_OPSCORE_FASTMTC,none,none,none,none,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_ABU_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,ABU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1,USP_OPSCORE_FASTMTC,none,none,none,none,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR1_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,AOR1)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2,USP_OPSCORE_FASTMTC,none,none,none,none,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_AOR2_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,AOR2)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR,USP_OPSCORE_FASTMTC,none,none,none,none,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_CBR_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,CBR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU,USP_OPSCORE_FASTMTC,none,none,none,none,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_DCU_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,DCU)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN,USP_OPSCORE_FASTMTC,none,none,none,none,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_FLECKTARN_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,FLECKTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE,USP_OPSCORE_FASTMTC,none,none,none,none,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTBANSHEE_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,KTBANSHEE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER,USP_OPSCORE_FASTMTC,none,none,none,none,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTHIGHLANDER_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,KTHIGHLANDER)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE,USP_OPSCORE_FASTMTC,none,none,none,none,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNEPTUNE_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,KTNEPTUNE)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD,USP_OPSCORE_FASTMTC,none,none,none,none,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTNOMAD_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,KTNOMAD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON,USP_OPSCORE_FASTMTC,none,none,none,none,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTTYPHON_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,KTTYPHON)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI,USP_OPSCORE_FASTMTC,none,none,none,none,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_KTYETI_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,KTYETI)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81,USP_OPSCORE_FASTMTC,none,none,none,none,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_M81_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,M81)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA,USP_OPSCORE_FASTMTC,none,none,none,none,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCA_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,MCA)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD,USP_OPSCORE_FASTMTC,none,none,none,none,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCD_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,MCD)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT,USP_OPSCORE_FASTMTC,none,none,none,none,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_MCT_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,MCT)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR,USP_OPSCORE_FASTMTC,none,none,none,none,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_RGR_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,RGR)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS,USP_OPSCORE_FASTMTC,none,none,none,none,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TGS_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,TGS)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN,USP_OPSCORE_FASTMTC,none,none,none,none,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_TROPENTARN_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,TROPENTARN)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP,USP_OPSCORE_FASTMTC,none,none,none,none,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_C,USP_OPSCORE_FASTMTC_C,CT,none,none,none,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CM,USP_OPSCORE_FASTMTC_CM,CT,CM,none,none,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMG,USP_OPSCORE_FASTMTC_CMG,CT,CM,GG,none,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMGS,USP_OPSCORE_FASTMTC_CMGS,CT,CM,GG,SF,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMGSW,USP_OPSCORE_FASTMTC_CMGSW,CT,CM,GG,SF,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMGT,USP_OPSCORE_FASTMTC_CMGT,CT,CM,GG,TL,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMGTW,USP_OPSCORE_FASTMTC_CMGTW,CT,CM,GG,TL,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMS,USP_OPSCORE_FASTMTC_CMS,CT,CM,none,SF,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMSW,USP_OPSCORE_FASTMTC_CMSW,CT,CM,none,SF,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMT,USP_OPSCORE_FASTMTC_CMT,CT,CM,none,TL,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMTW,USP_OPSCORE_FASTMTC_CMTW,CT,CM,none,TL,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CMW,USP_OPSCORE_FASTMTC_CMW,CT,CM,none,none,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CG,USP_OPSCORE_FASTMTC_CG,CT,none,GG,none,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CGS,USP_OPSCORE_FASTMTC_CGS,CT,none,GG,SF,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CGSW,USP_OPSCORE_FASTMTC_CGSW,CT,none,GG,SF,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CGT,USP_OPSCORE_FASTMTC_CGT,CT,none,GG,TL,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CGTW,USP_OPSCORE_FASTMTC_CGTW,CT,none,GG,TL,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CGW,USP_OPSCORE_FASTMTC_CGW,CT,none,GG,none,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CS,USP_OPSCORE_FASTMTC_CS,CT,none,none,SF,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CSW,USP_OPSCORE_FASTMTC_CSW,CT,none,none,SF,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CT,USP_OPSCORE_FASTMTC_CT,CT,none,none,TL,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CTW,USP_OPSCORE_FASTMTC_CTW,CT,none,none,TL,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_CW,USP_OPSCORE_FASTMTC_CW,CT,none,none,none,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_M,USP_OPSCORE_FASTMTC_M,none,CM,none,none,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MG,USP_OPSCORE_FASTMTC_MG,none,CM,GG,none,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MGS,USP_OPSCORE_FASTMTC_MGS,none,CM,GG,SF,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MGSW,USP_OPSCORE_FASTMTC_MGSW,none,CM,GG,SF,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MGT,USP_OPSCORE_FASTMTC_MGT,none,CM,GG,TL,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MGTW,USP_OPSCORE_FASTMTC_MGTW,none,CM,GG,TL,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MGW,USP_OPSCORE_FASTMTC_MGW,none,CM,GG,none,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MS,USP_OPSCORE_FASTMTC_MS,none,CM,none,SF,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MSW,USP_OPSCORE_FASTMTC_MSW,none,CM,none,SF,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MT,USP_OPSCORE_FASTMTC_MT,none,CM,none,TL,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MTW,USP_OPSCORE_FASTMTC_MTW,none,CM,none,TL,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_MW,USP_OPSCORE_FASTMTC_MW,none,CM,none,none,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_G,USP_OPSCORE_FASTMTC_G,none,none,GG,none,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_GS,USP_OPSCORE_FASTMTC_GS,none,none,GG,SF,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_GSW,USP_OPSCORE_FASTMTC_GSW,none,none,GG,SF,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_GT,USP_OPSCORE_FASTMTC_GT,none,none,GG,TL,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_GTW,USP_OPSCORE_FASTMTC_GTW,none,none,GG,TL,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_GW,USP_OPSCORE_FASTMTC_GW,none,none,GG,none,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_S,USP_OPSCORE_FASTMTC_S,none,none,none,SF,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_SW,USP_OPSCORE_FASTMTC_SW,none,none,none,SF,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_T,USP_OPSCORE_FASTMTC_T,none,none,none,TL,none,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_TW,USP_OPSCORE_FASTMTC_TW,none,none,none,TL,CW,UCP)
	PATTERN_OPSCORE_FASTMT(USP_OPSCORE_FASTMTC_UCP_W,USP_OPSCORE_FASTMTC_W,none,none,none,none,CW,UCP)


	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME,H_HelmetB,none,none,none,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CM,H_HelmetB,CM,none,none,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMW,H_HelmetB,CM,none,CW,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGU,H_HelmetB,CM,none,CW,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUI,H_HelmetB,CM,none,CW,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUIS,H_HelmetB,CM,SF,CW,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUISV,H_HelmetB,CM,SF,CW,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUIT,H_HelmetB,CM,TL,CW,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUITV,H_HelmetB,CM,TL,CW,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUIV,H_HelmetB,CM,none,CW,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUS,H_HelmetB,CM,SF,CW,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUSV,H_HelmetB,CM,SF,CW,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUT,H_HelmetB,CM,TL,CW,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUTV,H_HelmetB,CM,TL,CW,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWGUV,H_HelmetB,CM,none,CW,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWI,H_HelmetB,CM,none,CW,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWIS,H_HelmetB,CM,SF,CW,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWISV,H_HelmetB,CM,SF,CW,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWIT,H_HelmetB,CM,TL,CW,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWITV,H_HelmetB,CM,TL,CW,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWIV,H_HelmetB,CM,none,CW,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWS,H_HelmetB,CM,SF,CW,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWSV,H_HelmetB,CM,SF,CW,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWT,H_HelmetB,CM,TL,CW,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWTV,H_HelmetB,CM,TL,CW,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMWV,H_HelmetB,CM,none,CW,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGU,H_HelmetB,CM,none,none,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUI,H_HelmetB,CM,none,none,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUIS,H_HelmetB,CM,SF,none,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUISV,H_HelmetB,CM,SF,none,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUIT,H_HelmetB,CM,TL,none,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUITV,H_HelmetB,CM,TL,none,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUIV,H_HelmetB,CM,none,none,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUS,H_HelmetB,CM,SF,none,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUSV,H_HelmetB,CM,SF,none,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUT,H_HelmetB,CM,TL,none,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUTV,H_HelmetB,CM,TL,none,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMGUV,H_HelmetB,CM,none,none,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMI,H_HelmetB,CM,none,none,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMIS,H_HelmetB,CM,SF,none,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMISV,H_HelmetB,CM,SF,none,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMIT,H_HelmetB,CM,TL,none,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMITV,H_HelmetB,CM,TL,none,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMIV,H_HelmetB,CM,none,none,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMS,H_HelmetB,CM,SF,none,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMSV,H_HelmetB,CM,SF,none,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMT,H_HelmetB,CM,TL,none,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMTV,H_HelmetB,CM,TL,none,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CMV,H_HelmetB,CM,none,none,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CW,H_HelmetB,none,none,CW,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGU,H_HelmetB,none,none,CW,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUI,H_HelmetB,none,none,CW,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUIS,H_HelmetB,none,SF,CW,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUISV,H_HelmetB,none,SF,CW,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUIT,H_HelmetB,none,TL,CW,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUITV,H_HelmetB,none,TL,CW,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUIV,H_HelmetB,none,none,CW,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUS,H_HelmetB,none,SF,CW,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUSV,H_HelmetB,none,SF,CW,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUT,H_HelmetB,none,TL,CW,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWGUTV,H_HelmetB,none,TL,CW,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWI,H_HelmetB,none,none,CW,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWIS,H_HelmetB,none,SF,CW,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWISV,H_HelmetB,none,SF,CW,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWIT,H_HelmetB,none,TL,CW,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWITV,H_HelmetB,none,TL,CW,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWIV,H_HelmetB,none,none,CW,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWS,H_HelmetB,none,SF,CW,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWSV,H_HelmetB,none,SF,CW,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWT,H_HelmetB,none,TL,CW,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWTV,H_HelmetB,none,TL,CW,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_CWV,H_HelmetB,none,none,CW,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GU,H_HelmetB,none,none,none,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUI,H_HelmetB,none,none,none,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUIS,H_HelmetB,none,SF,none,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUISV,H_HelmetB,none,SF,none,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUIT,H_HelmetB,none,TL,none,GU,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUITV,H_HelmetB,none,TL,none,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUIV,H_HelmetB,none,none,none,GU,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUS,H_HelmetB,none,SF,none,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUSV,H_HelmetB,none,SF,none,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUT,H_HelmetB,none,TL,none,GU,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUTV,H_HelmetB,none,TL,none,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_GUV,H_HelmetB,none,none,none,GU,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_IR,H_HelmetB,none,none,none,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_IRS,H_HelmetB,none,SF,none,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_IRSV,H_HelmetB,none,SF,none,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_IRT,H_HelmetB,none,TL,none,none,IR,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_IRTV,H_HelmetB,none,TL,none,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_IRV,H_HelmetB,none,none,none,none,IR,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_SF,H_HelmetB,none,SF,none,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_SFV,H_HelmetB,none,SF,none,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_TL,H_HelmetB,none,TL,none,none,none,none,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_TLV,H_HelmetB,none,TL,none,none,none,VL,TAN)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_VL,H_HelmetB,none,none,none,none,none,VL,TAN)
	
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_BLK,USP_CRYE_AIRFRAME,none,none,none,none,none,none,BLK)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_MC,USP_CRYE_AIRFRAME,none,none,none,none,none,none,MC)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_MCD,USP_CRYE_AIRFRAME,none,none,none,none,none,none,MCD)
	PATTERN_AIRFRAME(USP_CRYE_AIRFRAME_OD,USP_CRYE_AIRFRAME,none,none,none,none,none,none,OD)


	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV,H_HelmetB,none,none,none,none,none,TAN)
	/*
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_FULL,USP_OPSCORE_FASTMT_FCV,none,none,none,none,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_FULL_C,USP_OPSCORE_FASTMT_FCV,none,none,none,none,none,TAN)
	*/
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_C,USP_OPSCORE_FASTMT_FCV,CT,none,none,none,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CM,USP_OPSCORE_FASTMT_FCV,CT,CM,none,none,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMG,USP_OPSCORE_FASTMT_FCV,CT,CM,GG,none,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMGS,USP_OPSCORE_FASTMT_FCV,CT,CM,GG,SF,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMGSW,USP_OPSCORE_FASTMT_FCV,CT,CM,GG,SF,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMGT,USP_OPSCORE_FASTMT_FCV,CT,CM,GG,TL,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMGTW,USP_OPSCORE_FASTMT_FCV,CT,CM,GG,TL,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMS,USP_OPSCORE_FASTMT_FCV,CT,CM,none,SF,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMSW,USP_OPSCORE_FASTMT_FCV,CT,CM,none,SF,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMT,USP_OPSCORE_FASTMT_FCV,CT,CM,none,TL,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMTW,USP_OPSCORE_FASTMT_FCV,CT,CM,none,TL,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CMW,USP_OPSCORE_FASTMT_FCV,CT,CM,none,none,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CG,USP_OPSCORE_FASTMT_FCV,CT,none,GG,none,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CGS,USP_OPSCORE_FASTMT_FCV,CT,none,GG,SF,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CGSW,USP_OPSCORE_FASTMT_FCV,CT,none,GG,SF,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CGT,USP_OPSCORE_FASTMT_FCV,CT,none,GG,TL,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CGTW,USP_OPSCORE_FASTMT_FCV,CT,none,GG,TL,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CGW,USP_OPSCORE_FASTMT_FCV,CT,none,GG,none,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CS,USP_OPSCORE_FASTMT_FCV,CT,none,none,SF,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CSW,USP_OPSCORE_FASTMT_FCV,CT,none,none,SF,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CT,USP_OPSCORE_FASTMT_FCV,CT,none,none,TL,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CTW,USP_OPSCORE_FASTMT_FCV,CT,none,none,TL,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_CW,USP_OPSCORE_FASTMT_FCV,CT,none,none,none,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_M,USP_OPSCORE_FASTMT_FCV,none,CM,none,none,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MG,USP_OPSCORE_FASTMT_FCV,none,CM,GG,none,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MGS,USP_OPSCORE_FASTMT_FCV,none,CM,GG,SF,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MGSW,USP_OPSCORE_FASTMT_FCV,none,CM,GG,SF,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MGT,USP_OPSCORE_FASTMT_FCV,none,CM,GG,TL,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MGTW,USP_OPSCORE_FASTMT_FCV,none,CM,GG,TL,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MGW,USP_OPSCORE_FASTMT_FCV,none,CM,GG,none,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MS,USP_OPSCORE_FASTMT_FCV,none,CM,none,SF,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MSW,USP_OPSCORE_FASTMT_FCV,none,CM,none,SF,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MT,USP_OPSCORE_FASTMT_FCV,none,CM,none,TL,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MTW,USP_OPSCORE_FASTMT_FCV,none,CM,none,TL,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_MW,USP_OPSCORE_FASTMT_FCV,none,CM,none,none,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_G,USP_OPSCORE_FASTMT_FCV,none,none,GG,none,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_GS,USP_OPSCORE_FASTMT_FCV,none,none,GG,SF,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_GSW,USP_OPSCORE_FASTMT_FCV,none,none,GG,SF,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_GT,USP_OPSCORE_FASTMT_FCV,none,none,GG,TL,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_GTW,USP_OPSCORE_FASTMT_FCV,none,none,GG,TL,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_GW,USP_OPSCORE_FASTMT_FCV,none,none,GG,none,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_S,USP_OPSCORE_FASTMT_FCV,none,none,none,SF,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_SW,USP_OPSCORE_FASTMT_FCV,none,none,none,SF,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_T,USP_OPSCORE_FASTMT_FCV,none,none,none,TL,none,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_TW,USP_OPSCORE_FASTMT_FCV,none,none,none,TL,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_W,USP_OPSCORE_FASTMT_FCV,none,none,none,none,CW,TAN)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD,USP_OPSCORE_FASTMT_FCV,none,none,none,none,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_C,USP_OPSCORE_FASTMT_FCV_C,CT,none,none,none,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CM,USP_OPSCORE_FASTMT_FCV_CM,CT,CM,none,none,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMG,USP_OPSCORE_FASTMT_FCV_CMG,CT,CM,GG,none,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMGS,USP_OPSCORE_FASTMT_FCV_CMGS,CT,CM,GG,SF,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMGSW,USP_OPSCORE_FASTMT_FCV_CMGSW,CT,CM,GG,SF,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMGT,USP_OPSCORE_FASTMT_FCV_CMGT,CT,CM,GG,TL,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMGTW,USP_OPSCORE_FASTMT_FCV_CMGTW,CT,CM,GG,TL,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMS,USP_OPSCORE_FASTMT_FCV_CMS,CT,CM,none,SF,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMSW,USP_OPSCORE_FASTMT_FCV_CMSW,CT,CM,none,SF,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMT,USP_OPSCORE_FASTMT_FCV_CMT,CT,CM,none,TL,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMTW,USP_OPSCORE_FASTMT_FCV_CMTW,CT,CM,none,TL,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CMW,USP_OPSCORE_FASTMT_FCV_CMW,CT,CM,none,none,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CG,USP_OPSCORE_FASTMT_FCV_CG,CT,none,GG,none,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CGS,USP_OPSCORE_FASTMT_FCV_CGS,CT,none,GG,SF,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CGSW,USP_OPSCORE_FASTMT_FCV_CGSW,CT,none,GG,SF,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CGT,USP_OPSCORE_FASTMT_FCV_CGT,CT,none,GG,TL,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CGTW,USP_OPSCORE_FASTMT_FCV_CGTW,CT,none,GG,TL,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CGW,USP_OPSCORE_FASTMT_FCV_CGW,CT,none,GG,none,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CS,USP_OPSCORE_FASTMT_FCV_CS,CT,none,none,SF,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CSW,USP_OPSCORE_FASTMT_FCV_CSW,CT,none,none,SF,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CT,USP_OPSCORE_FASTMT_FCV_CT,CT,none,none,TL,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CTW,USP_OPSCORE_FASTMT_FCV_CTW,CT,none,none,TL,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_CW,USP_OPSCORE_FASTMT_FCV_CW,CT,none,none,none,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_M,USP_OPSCORE_FASTMT_FCV_M,none,CM,none,none,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MG,USP_OPSCORE_FASTMT_FCV_MG,none,CM,GG,none,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MGS,USP_OPSCORE_FASTMT_FCV_MGS,none,CM,GG,SF,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MGSW,USP_OPSCORE_FASTMT_FCV_MGSW,none,CM,GG,SF,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MGT,USP_OPSCORE_FASTMT_FCV_MGT,none,CM,GG,TL,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MGTW,USP_OPSCORE_FASTMT_FCV_MGTW,none,CM,GG,TL,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MGW,USP_OPSCORE_FASTMT_FCV_MGW,none,CM,GG,none,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MS,USP_OPSCORE_FASTMT_FCV_MS,none,CM,none,SF,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MSW,USP_OPSCORE_FASTMT_FCV_MSW,none,CM,none,SF,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MT,USP_OPSCORE_FASTMT_FCV_MT,none,CM,none,TL,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MTW,USP_OPSCORE_FASTMT_FCV_MTW,none,CM,none,TL,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_MW,USP_OPSCORE_FASTMT_FCV_MW,none,CM,none,none,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_G,USP_OPSCORE_FASTMT_FCV_G,none,none,GG,none,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_GS,USP_OPSCORE_FASTMT_FCV_GS,none,none,GG,SF,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_GSW,USP_OPSCORE_FASTMT_FCV_GSW,none,none,GG,SF,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_GT,USP_OPSCORE_FASTMT_FCV_GT,none,none,GG,TL,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_GTW,USP_OPSCORE_FASTMT_FCV_GTW,none,none,GG,TL,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_GW,USP_OPSCORE_FASTMT_FCV_GW,none,none,GG,none,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_S,USP_OPSCORE_FASTMT_FCV_S,none,none,none,SF,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_SW,USP_OPSCORE_FASTMT_FCV_SW,none,none,none,SF,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_T,USP_OPSCORE_FASTMT_FCV_T,none,none,none,TL,none,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_TW,USP_OPSCORE_FASTMT_FCV_TW,none,none,none,TL,CW,OD)
	PATTERN_OPSCORE_FASTFCV(USP_OPSCORE_FASTMT_FCV_OD_W,USP_OPSCORE_FASTMT_FCV_W,none,none,none,none,CW,OD)

};

};