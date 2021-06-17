class XtdGearModels
{
	class CamoBase;
	class SleevesBase;
	class CfgWeapons
	{
		class USP_G3C
		{
			label = "Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "gloves", "sleeves", "collar", "kneepads","shoes"};
			class camo : CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
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
			};
			class sleeves : SleevesBase
			{
				values[] = {"Full", "Quarter", "Half"};
			};
			class shoes
			{
				label = "Shoes";
				changeingame = 0;
				values[] = {"SL", "VQ","IST"};
			};
		};
	};

};
