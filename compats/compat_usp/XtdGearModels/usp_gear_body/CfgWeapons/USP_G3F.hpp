class USP_G3F
{
	label = "Crye G3F";
	author = "UnderSiege Productions";
	options[] = {"camo", "gloves", "pants"};
	textureoptions[] = { "pantscamo", "mxcamo", "orcamo" };
	class camo
	{
		values[] = {"3CD","AOR1","AOR2","BLK","KHK","M81","MC","MCA","MCB","MCD","MCT","NWU","RGR","UCP"};
	};
	class pants
	{
		label = "Pants";
		changeingame = 0;
		values[] = {"Field","Combat"};
		class Field {
			label="Field";
		};
		class Combat {
			label="Combat";
		};
	};
	class pantscamo : usp_g3c_pantscamo
	{
		requires[]={{"pants","Combat"}};
	};

};