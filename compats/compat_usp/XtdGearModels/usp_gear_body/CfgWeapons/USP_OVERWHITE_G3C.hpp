class USP_OVERWHITE_G3C
{
	label = "Overwhite/Crye G3C";
	author = "UnderSiege Productions";
	options[] = {"camo", "top", "kneepads", "gloves"};
	textureoptions[] = { "mxcamo", "orcamo" };
	class camo //: CamoBase
	{
		values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
	};
	class top //: CamoBase
	{
		values[] = {"MCA","BLK","GRN","TAN"};
	};
	class kneepads
	{
		label = "Knee Pads";
		changeingame = 0;
		values[] = {"no", "G3", "G4"};
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
	class mxcamo : usp_mxcamo  
	{ 
		hiddenselection="Camo4"; 
	};
	class orcamo : usp_orcamo 
	{ 
		hiddenselection="Camo3"; 
	};
};