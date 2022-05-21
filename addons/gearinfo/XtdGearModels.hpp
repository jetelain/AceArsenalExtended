class XtdGearModels
{
	class CamoBase
	{
		label = CSTRING(Camo);
		icon = QPATHTOF(data\ui\camo.paa);
		changeingame = 0;
		values[] = {};
	    class WHT
		{
			label = CSTRING(White);
			image = QPATHTOF(data\camo\wht.paa);
		};
	    class BLK
		{
			label = CSTRING(Black);
			image = QPATHTOF(data\camo\blk.paa);
		};
		class BLU
		{
			label = CSTRING(Blue);
			image = QPATHTOF(data\camo\blu.paa);
		};
		class GRY
		{
			label = CSTRING(Grey);
			image = QPATHTOF(data\camo\gry.paa);
		};
		class KHK
		{
			label = CSTRING(Khaki);
			image = QPATHTOF(data\camo\khk.paa);
		};
		class AOR1
		{
			label = "AOR1";
			image = QPATHTOF(data\camo\aor1.paa);
		};
		class AOR2
		{
			label = "AOR2";
			image = QPATHTOF(data\camo\aor2.paa);
		};
		class ATT
		{
			label = "ATT";
			image = QPATHTOF(data\camo\att.paa);
		};
		class M81
		{
			label = "M81";
			image = QPATHTOF(data\camo\m81.paa);
		};
		class MTP
		{
			label = "MTP";
			image = QPATHTOF(data\camo\mtp.paa);
		};
		class Tropic // BI's "Tropic"
		{
			label = "Tropic";
			image = QPATHTOF(data\camo\tropic.paa);
		};
		class MC
		{
			label = "MC";
			image = QPATHTOF(data\camo\mc.paa);
		};
		class MCB
		{
			label = "MCB";
			image = QPATHTOF(data\camo\mcb.paa);
		};
		class MCD
		{
			label = "MCD";
			image = QPATHTOF(data\camo\mcd.paa);
		};
		class MCT
		{
			label = "MCT";
			image = QPATHTOF(data\camo\mct.paa);
		};
		class MCW
		{
			label = "MCW";
			image = QPATHTOF(data\camo\mcw.paa);
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
		class NAV
		{
			label = CSTRING(Navy);
			image = QPATHTOF(data\camo\nav.paa);
		};
		class RGR
		{
			label = "RGR";
			description = "Ranger Green";
			image = QPATHTOF(data\camo\rgr.paa);
		};
		class TSD
		{
			label = "TSD";
			description = "Tiger Stripe Desert";
			image = QPATHTOF(data\camo\tsd.paa);
		};
		class TSW
		{
			label = "TSW";
			description = "Tiger Stripe Woodland";
			image = QPATHTOF(data\camo\tsw.paa);
		};
		class OD
		{
			label = "OD";
			image="#(rgb,8,8,3)color(0.3,0.29,0.24,1)";
		};
		class TAN
		{
			label = "TAN";
			image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
		};
		class ONU
		{
			label = "ONU";
			image="#(rgb,8,8,3)color(0.38,0.48,0.61,1)";
		};
	};

	class SleevesBase
	{
		label = CSTRING(Sleeves);
		icon = QPATHTOF(data\ui\sleeves.paa);
		changeingame = 1;
		values[] = {};
		class Full
		{
			label = CSTRING(SleevesFull);
			actionLabel = CSTRING(SleevesFullAction);
			icon = QPATHTOF(data\ui\sleeves.paa);
		};
		class Quarter
		{
			label = CSTRING(SleevesQuarter);
			actionLabel = CSTRING(SleevesQuarterAction);
			icon = QPATHTOF(data\ui\sleeves_quarter.paa);
		};
		class Half
		{
			label = CSTRING(SleevesHalf);
			actionLabel = CSTRING(SleevesHalfAction);
			icon = QPATHTOF(data\ui\sleeves_half.paa);
		};
		class Cut
		{
			label = CSTRING(SleevesCut);
			changeingame = -1;
		};
	};

	class Faction
    {
        label = CSTRING(Faction);
        values[] = {};
        FACTION_OPTION(NATO,NATO_CTRG_COMBINED);
        FACTION_OPTION(CTRG,CTRG_FACTION);
        FACTION_OPTION(USA,NATO_FACTION);
        FACTION_OPTION(CSAT,CSAT_FACTION);
        FACTION_OPTION(AAF,AAF_FACTION);
        FACTION_OPTION(FIA,FIA_FACTION);
        FACTION_OPTION(LDF,LDF_FACTION);
    };

	/**
	 * Conventional options names that can be used by mods, to avoid dependency to this pbo.
	 */
	class Conventional 
	{
		class camo: CamoBase {};
		class pantscamo: CamoBase {
			label = CSTRING(PantsCamo);
		};
		class sleeves : SleevesBase {};
		class faction : Faction {};
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
				values[] = {"WHT", "BLU", "M81", "MTP", "Tropic", "AAF", "EAF"};
			};
		};
	};

};
