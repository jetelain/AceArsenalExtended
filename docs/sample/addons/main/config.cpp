class CfgPatches {
    class ChangeMe001_main { // <- Replace ChangeMe001 by the value picked in .hemtt\base.toml for prefix
        name = "main";
        units[] = {};
        weapons[] = {};
        requiredVersion = "1.0";
        requiredAddons[] = {"aceax_gearinfo"};
        author = "YourName"; // <- Your name 
        version = "1.0.0";
    };
};


class XtdGearModels
{
	class CamoBase;
	class SleevesBase;
	class CfgWeapons 
	{
		class CBRN_Suit_01 // <- Name that will be used to group CfgWeapons entries, used in "model" property.
		{
			label = "CBRN Suit";
			author = "Bohemia Interactive";
			options[] = {"camo"};
			class camo : CamoBase // Reuse camos defined in ACEAX
			{
				values[] = {"WHT", "BLU", "M81", "MTP", "Tropic", "AAF", "EAF"};
			};
		};
	};
};

// We use the "all in one" appraoch here : it's much more easier, and you dot not risk breaking things
class XtdGearInfo
{
	class CfgWeapons
	{
		class U_C_CBRN_Suit_01_White_F // <- Class name in CfgWeapons
		{
			model = "CBRN_Suit_01"; // <- Model name, from XtdGearModels >> CfgWeapons
			camo = "WHT"; // <- "camo" option value
		};
		class U_C_CBRN_Suit_01_Blue_F 
		{
			model = "CBRN_Suit_01";
			camo = "BLU";
		};
		class U_B_CBRN_Suit_01_Wdl_F 
		{
			model = "CBRN_Suit_01";
			camo = "M81";
		};
		class U_B_CBRN_Suit_01_MTP_F 
		{
			model = "CBRN_Suit_01";
			camo = "MTP";
		};
		class U_B_CBRN_Suit_01_Tropic_F 
		{
			model = "CBRN_Suit_01";
			camo = "Tropic";
		};
		class U_I_CBRN_Suit_01_AAF_F 
		{
			model = "CBRN_Suit_01";
			camo = "AAF";
		};
		class U_I_E_CBRN_Suit_01_EAF_F 
		{
			model = "CBRN_Suit_01";
			camo = "EAF";
		};
	};
};
