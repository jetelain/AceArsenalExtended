#define PATTERN(suffix, c, k, g, s) \
	class suffix: Uniform_Base                    \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "BLK";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_GRY: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "GRY";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_KHK: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "KHK";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_NAV: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "NAV";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_RGR: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "RGR";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_M81: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "M81";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_MC: suffix                   \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "MC";                          \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_MCB: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "MCB";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_MCD: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "MCD";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_MCT: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "MCT";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_MCW: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "MCW";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_AOR1: suffix                 \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "AOR1";                        \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_AOR2: suffix                 \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "AOR2";                        \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_ATT: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "ATT";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_TSD: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "TSD";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \
	class ##suffix##_TSW: suffix                  \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			master = "USP_G3C";                   \
			camo = "TSW";                         \
			collar = #c;                          \
			kneepads = #k;                        \
			gloves = #g;                          \
			sleeves = #s;                         \
		};                                        \
	};                                            \


class CfgWeapons
{
	class Uniform_Base;

	PATTERN(USP_G3C,             down,no, none,Full)
	PATTERN(USP_G3C_CU,          up,  no, none,Full)
	PATTERN(USP_G3C_KP,          down,yes,none,Full)
	PATTERN(USP_G3C_CU_KP,       up,  yes,none,Full)
	PATTERN(USP_G3C_MX,          down,no, MX,  Full)
	PATTERN(USP_G3C_CU_MX,       up,  no, MX,  Full)
	PATTERN(USP_G3C_KP_MX,       down,yes,MX,  Full)
	PATTERN(USP_G3C_CU_KP_MX,    up,  yes,MX,  Full)
	PATTERN(USP_G3C_OR,          down,no, OR,  Full)
	PATTERN(USP_G3C_CU_OR,       up,  no, OR,  Full)
	PATTERN(USP_G3C_KP_OR,       down,yes,OR,  Full)
	PATTERN(USP_G3C_CU_KP_OR,    up,  yes,OR,  Full)
								 
	PATTERN(USP_G3C_RS2,         down,no, none,Half)
	PATTERN(USP_G3C_RS2_CU,      up,  no, none,Half)
	PATTERN(USP_G3C_RS2_KP,      down,yes,none,Half)
	PATTERN(USP_G3C_RS2_CU_KP,   up,  yes,none,Half)
	PATTERN(USP_G3C_RS2_MX,      down,no, MX,  Half)
	PATTERN(USP_G3C_RS2_CU_MX,   up,  no, MX,  Half)
	PATTERN(USP_G3C_RS2_KP_MX,   down,yes,MX,  Half)
	PATTERN(USP_G3C_RS2_CU_KP_MX,up,  yes,MX,  Half)
	PATTERN(USP_G3C_RS2_OR,      down,no, OR,  Half)
	PATTERN(USP_G3C_RS2_CU_OR,   up,  no, OR,  Half)
	PATTERN(USP_G3C_RS2_KP_OR,   down,yes,OR,  Half)
	PATTERN(USP_G3C_RS2_CU_KP_OR,up,  yes,OR,  Half)
	
	PATTERN(USP_G3C_RS,          down,no, none,Quarter)
	PATTERN(USP_G3C_RS_CU,       up,  no, none,Quarter)
	PATTERN(USP_G3C_RS_KP,       down,yes,none,Quarter)
	PATTERN(USP_G3C_RS_CU_KP,    up,  yes,none,Quarter)
	PATTERN(USP_G3C_RS_MX,       down,no, MX,  Quarter)
	PATTERN(USP_G3C_RS_CU_MX,    up,  no, MX,  Quarter)
	PATTERN(USP_G3C_RS_KP_MX,    down,yes,MX,  Quarter)
	PATTERN(USP_G3C_RS_CU_KP_MX, up,  yes,MX,  Quarter)
	PATTERN(USP_G3C_RS_OR,       down,no, OR,  Quarter)
	PATTERN(USP_G3C_RS_CU_OR,    up,  no, OR,  Quarter)
	PATTERN(USP_G3C_RS_KP_OR,    down,yes,OR,  Quarter)
	PATTERN(USP_G3C_RS_CU_KP_OR, up,  yes,OR,  Quarter)




/*
USP_G3C_MX_VQ
USP_G3C_OR_VQ
USP_G3C_VQ

USP_G3C_IST
USP_G3C_IST_KP
USP_G3C_IST_KP_MX
USP_G3C_IST_KP_OR
USP_G3C_IST_MX
USP_G3C_IST_OR

USP_G3C_RS_CU_KP_MX_VQ
USP_G3C_RS_CU_KP_OR_VQ
USP_G3C_RS_CU_KP_VQ
USP_G3C_RS_CU_MX_VQ
USP_G3C_RS_CU_OR_VQ
USP_G3C_RS_CU_VQ
USP_G3C_RS_KP_MX_VQ
USP_G3C_RS_KP_OR_VQ
USP_G3C_RS_KP_VQ
USP_G3C_RS_MX_VQ
USP_G3C_RS_OR_VQ
USP_G3C_RS_VQ

USP_G3C_RS2_CU_KP_OR_VQ
USP_G3C_RS2_CU_KP_MX_VQ
USP_G3C_RS2_CU_MX_VQ
USP_G3C_RS2_CU_KP_VQ
USP_G3C_RS2_CU_OR_VQ
USP_G3C_RS2_CU_VQ
USP_G3C_RS2_KP_MX_VQ
USP_G3C_RS2_KP_OR_VQ
USP_G3C_RS2_KP_VQ
USP_G3C_RS2_MX_VQ
USP_G3C_RS2_OR_VQ
!! USP_G3C_RS2_VQ is missing

*/

};
