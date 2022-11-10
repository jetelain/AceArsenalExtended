class USP_TSHIRT_G3C
{
	label = "Tshirt/Crye G3C";
	author = "UnderSiege Productions";
	options[] = {"camo", "top", "kneepads", "gloves", "inside"};
	textureoptions[] = { "mxcamo", "orcamo" };
	class camo //: CamoBase
	{
		values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
	};
	class top //: CamoBase
	{
		values[] = {"BLK","CBR","GRY","GRN","NAV"};
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
	class inside
	{
		label = "Tshirt inside pant";
		changeingame = 1;
		values[] = {"no", "yes"};
	};
	class mxcamo : usp_mxcamo  {};
	class orcamo : usp_orcamo  {};
};