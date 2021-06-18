class XtdGearModels
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
		class M81
		{
			label = "M81";
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
		class Cut
		{
			label = "Cut";
			changeingame = -1;
		};
	};

	/**
	 * Conventional options names that can be used by mods, to avoid dependency to this pbo.
	 */
	class Conventional 
	{
		class camo: CamoBase {};
		class sleeves: SleevesBase{};
	};

	class CfgWeapons 
	{
		class U_C_CBRN_Suit_01
		{
			label = "CBRN Suit";
			author = "Bohemia Interactive";
			options[] = {"camo"};
			class camo : CamoBase
			{
				values[] = {"White", "Blue", "M81", "MTP", "Tropic", "AAF", "EAF"};
			};
		};
	};


};
