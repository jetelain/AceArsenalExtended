class USP_SOFTSHELL_G3C
{
	label = "SoftShell/Crye G3C";
	author = "UnderSiege Productions";
	options[] = {"camo", "top", "kneepads", "gloves"};
	textureoptions[] = { "mxcamo", "orcamo","flagleft"};
	class camo //: CamoBase
	{
		values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
	};
	class top //: CamoBase
	{
		values[] = {"BLK","CBR","GRY","MC","RGR"};
	};
	class kneepads
	{
		label = "Knee Pads";
		changeingame = 0;
		values[] = {"no", "yes"};
	};
	class gloves
	{
		label = "Gloves";
		changeingame = 0;
		values[] = {"none", "MX", "OR"};
		class MX
		{
			label = "MX";
			description = "Mechanix®";
		};
	};
	class mxcamo : usp_mxcamo  {};
	class orcamo : usp_orcamo  {};

	class flagleft {
		label = "Left Shoulder";
		hiddenselection="_FlagLeft";
		values[] = {
			"DEFAULT", 
			"usa_flag_base","usa_flag_blk","usa_flag_grn","usa_flag_mc","usa_flag_tan","usa_flag_tgr"
		};
		changeingame = 0;
		centerImage = 1;
		#define FLAG(N) class N { texture = QUOTE(\usp_gear_core\data\id\##N##_co.paa); image = QUOTE(\usp_gear_core\data\id\##N##_co.paa); label=""; description=#N; };
		class DEFAULT {
			label="(none)";
			texture="";
		};
		FLAG(usa_flag_base)
		FLAG(usa_flag_blk)
		FLAG(usa_flag_grn)
		FLAG(usa_flag_mc)
		FLAG(usa_flag_tan)
		FLAG(usa_flag_tgr)
	};
};