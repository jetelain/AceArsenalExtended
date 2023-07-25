class XtdGearModels
{
	class CamoBase
	{
		label = CSTRING(Camo);
		icon = QPATHTOF(data\ui\camo.paa);
		changeingame = 0;
		values[] = {};

	// Single Colors
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

		class CYT
		{
			label = "Coyote";
			image="#(rgb,8,8,3)color(0.85,0.77,0.65,1)";
		};

		class CBR
		{
			label = "CBR";
			description = "Coyote Brown";
			image="#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
		};

		class FDE
		{
			label = "FDE";
			description = "Flat Dark Earth";
			image = "#(rgb,8,8,3)color(0.56,0.48,0.38,1)";
		};

		class GRN
		{
			label = CSTRING(Green);
			image = "#(rgb,8,8,3)color(0.34,0.4,0.26,1)";
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

		class OLI
		{
			label = CSTRING(Olive);
			image = "#(rgb,8,8,3)color(0.43,0.48,0.28,1)";
		};

		class OD
		{
			label = "OD";
			description = "Olive Drab";
			image="#(rgb,8,8,3)color(0.3,0.29,0.24,1)";
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

		class TAN
		{
			label = CSTRING(Tan);
			image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
		};

		class ONU
		{
			label = "ONU";
			image="#(rgb,8,8,3)color(0.38,0.48,0.61,1)";
		};

	// Camouflage Patterns
		class 6CDP
		{
			label = "6CDP";
			description = "6-Color Desert Pattern; AKA Chocolate-Chip Camouflage";
			image = QPATHTOF(data\camo\6cdp.paa);
		};

		class ALP
		{
			label = "Alpenflage";
			image = QPATHTOF(data\camo\alp.paa);
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

		class DCP
		{
			label = "DCP";
			description = "Desert Camouflage Pattern";
			image = QPATHTOF(data\camo\dcp.paa);
		};

		class DPM
		{
			label = "DPM";
			description = "Disruptive Pattern Material";
			image = QPATHTOF(data\camo\dpm.paa);
		};

		class FLCK
		{
			label = "Flecktarn";
			image = QPATHTOF(data\camo\flck.paa);
		};

		class EMR_SUM
		{
			label = "EMR-Sum";
			description = "EMR-Summer";
			image = QPATHTOF(data\camo\emr_sum.paa);
		};

		class EMR_DES
		{
			label = "EMR-Des";
			description = "EMR-Desert";
			image = QPATHTOF(data\camo\emr_des.paa);
		};

		class ERDL_H
		{
			label = "ERDL-H";
			description = "ERDL Highland";
			image = QPATHTOF(data\camo\erdl_highland.paa);
		};

		class ERDL_L
		{
			label = "ERDL-L";
			description = "ERDL Lowland";
			image = QPATHTOF(data\camo\erdl_lowland.paa);
		};

		class M81
		{
			label = "M81";
			description = "M81 Woodland";
			image = QPATHTOF(data\camo\m81.paa);
		};

		class MTP
		{
			label = "MTP";
			description = "Multi-Terrain Pattern";
			image = QPATHTOF(data\camo\mtp.paa);
		};

		class Tropic // BI's "Tropic" version of MTP
		{
			label = "Tropic";
			image = QPATHTOF(data\camo\tropic.paa);
		};

		class MRPT_D
		{
			label = "MARPAT-D";
			description = "MARPAT Desert";
			image = QPATHTOF(data\camo\mrpt_d.paa);
		};

		class MRPT_WD
		{
			label = "MARPAT-WD";
			description = "MARPAT Woodland";
			image = QPATHTOF(data\camo\mrpt_wd.paa);
		};

		class MC
		{
			label = "MC";
			description = "MultiCam";
			image = QPATHTOF(data\camo\mc.paa);
		};

		class MCB
		{
			label = "MCB";
			description = "MultiCam Black";
			image = QPATHTOF(data\camo\mcb.paa);
		};

		class MCD
		{
			label = "MCD";
			description = "MultiCam Desert";
			image = QPATHTOF(data\camo\mcd.paa);
		};

		class MCT
		{
			label = "MCT";
			description = "MultiCam Tropic";
			image = QPATHTOF(data\camo\mct.paa);
		};

		class MCW
		{
			label = "MCW";
			description = "MultiCam Woodland";
			image = QPATHTOF(data\camo\mcw.paa);
		};

		class OCP
		{
			label = "OCP";
			description = "Operational Camouflage Pattern";
			image = QPATHTOF(data\camo\ocp.paa);
		};

		class OEF_CP : MC // OEF-CP is literally just MultiCam again.
		{
			label = "OEF-CP";
			description = "Operation Enduring Freedom Camoflage Pattern";
		};

		class UCP
		{
			label = "UCP";
			description = "Universal Camouflage Pattern";
			image = QPATHTOF(data\camo\ucp.paa);
		};

		class AAF // AAF Digtital Green
		{
			label = "AAF";
			image = QPATHTOF(data\camo\aaf.paa);
		};

		class EAF // LDF Fractal Camo
		{
			label = "EAF";
			image = QPATHTOF(data\camo\eaf.paa);
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
        alwaysSelectable = 1;
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
