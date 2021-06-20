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
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
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
				values[] = {"Full", "Quarter", "Half"};
			};
			class shoes
			{
				label = "Shoes";
				changeingame = 0;
				values[] = {"SL", "VQ","IST"};
			};
		};

		class USP_PCU_G3C
		{
			label = "PCU/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves"};
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class top //: CamoBase
			{
				values[] = {"BLK","GRY","MC","MCA","MCB","MCD","MCT"};
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
		};


		class USP_SOFTSHELL_G3C
		{
			label = "SoftShell/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves"};
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
		};


		class USP_OVERWHITE_G3C
		{
			label = "Overwhite/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "kneepads", "gloves"};
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
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
		};

		class USP_TSHIRT_G3C
		{
			label = "Tshirt/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves", "inside"};
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
		};
	};

};
