class XtdGearMasters
{
	class CamoBase
	{
		label = "Camo";
		icon = QPATHTOF(data\ui\camo.paa);
		changeingame = 0;
		values[] = {};
	    class White
		{
			label = "White";
			image = QPATHTOF(data\camo\white.paa);
		};
		class Blue
		{
			label = "Blue";
			image = QPATHTOF(data\camo\blue.paa);
		};
		class Woodland
		{
			label = "Woodland";
			image = QPATHTOF(data\camo\woodland.paa);
		};
		class MTP
		{
			label = "MTP";
			image = QPATHTOF(data\camo\mtp.paa);
		};
		class Tropic
		{
			label = "Tropic";
			image = QPATHTOF(data\camo\tropic.paa);
		};
		class AAF
		{
			label = "AAF";
			image = QPATHTOF(data\camo\aaf.paa);
		};
		class EAF
		{
			label = "EAF";
			image = QPATHTOF(data\camo\eaf.paa);
		};
	};

	class SleevesBase
	{
		label = "Sleeves";
		icon = QPATHTOF(data\ui\sleeves.paa);
		changeingame = 1;
		values[] = {};
		class Full
		{
			label = "Full";
		};
		class Quarter
		{
			label = "1/4";
		};
		class Half
		{
			label = "1/2";
		};
	};


	class CfgWeapons 
	{
		class U_C_CBRN_Suit_01
		{
			label = "CBRN Suit";
			author = "Bohemia Interactive";
			configs[] = {"camo"};
			class camo : CamoBase
			{
				values[] = {"White", "Blue", "Woodland", "MTP", "Tropic", "AAF", "EAF"};
			};
		};
	};


};
