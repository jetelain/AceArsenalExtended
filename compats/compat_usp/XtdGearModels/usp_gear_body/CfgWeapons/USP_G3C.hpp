class USP_G3C
{
	label = "Crye G3C";
	author = "UnderSiege Productions";
	options[] = {"camo", "gloves", "sleeves", "collar", "kneepads","shoes"};
	textureoptions[] = { "pantscamo", "mxcamo", "orcamo","flagright","flagleft" };
	class camo //: CamoBase
	{
		values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2", /*"ATT", due to scope=1*/ "TSD","TSW"};
	};
	class collar
	{
		label = "Collar";
		changeingame = 1;
		values[] = {"down", "up"};
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
	class sleeves //: SleevesBase
	{
		values[] = {"Full", "Quarter", "Half", "Cut"};
	};
	class shoes
	{
		label = "Shoes";
		changeingame = 0;
		values[] = {"SL", "VQ","IST"};
	};
	class pantscamo : usp_g3c_pantscamo {};

	class mxcamo : usp_mxcamo  {};

	class orcamo : usp_orcamo  {};

	class flagleft : usp_flags
	{
		label = "Left Shoulder";
		hiddenselection="_FlagLeft";
		values[] = {"DEFAULT",ALL_FLAGS,ALL_MORALE,ALL_CALLSIGN};
	};

	class flagright : usp_flags
	{
		label = "Right Shoulder";
		hiddenselection="_FlagRight";
		values[] = {"DEFAULT",ALL_FLAGS_R,ALL_MORALE};
	};

};