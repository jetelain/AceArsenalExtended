class CamoBase
{
	class ATACS_AU
	{
		label = CSTRING(ATACSAU_Label);
		description = CSTRING(ATACSAU_Description);
		image = QPATHTOF(data\camo\atacs_au.paa);
	};
	
	class ATACS_FG
	{
		label = CSTRING(ATACSFG_Label);
		description = CSTRING(ATACSFG_Description);
		image = QPATHTOF(data\camo\atacs_fg.paa);
	};

	class FDE
	{
		label = "FDE";
		description = "Flat Dark Earth";
		image = "#(rgb,8,8,3)color(0.56,0.48,0.38,1)";
	};

	class AFGKA // Also referred to as M88.
	{
		label = "Afghanka";
		image = QPATHTOF(data\camo\afghka.paa);
	};

	class BGEDIGI // Used on some Russian equipemnt. Orignates from camo used by soldiers assigned to the Russian Reconciliation Center for Syria in real life and I don't seem to be able to find an official name. Associated with KFOR and is the second digital camo they started using.
	{
		label = "Beige Digi";
		description = "KFOR-II Beige Digital";
		image = QPATHTOF(data\camo\bgedigi.paa);
	};

	class CCE
	{
		label = "CCE";
		image = QPATHTOF(data\camo\cce.paa);
	};

	class CEU // I think it's Camouflage Central-Europe (CCE) but I can't be sure.
	{
		label = "CEU";
		image = QPATHTOF(data\camo\ceu.paa);
	};

	class DDPM
	{
		label = "DDPM";
		description = "Desert Disruptive Pattern Material";
		image = QPATHTOF(data\camo\ddpm.paa);
	};

	class DESPNK
	{
		label = "Des Pink";
		description = "Desert Pink";
		image = "#(rgb,8,8,3)color(0.89,0.65,0.53,1)";
	};

	class EMR_ATM // Found on masking suit "6Sh112" and on Ratnik balaclava.
	{
		label = "EMR-Atm";
		description = "EMR-Autumn";
		image = QPATHTOF(data\camo\emr_atm.paa);
	};

	class MM14 // Ukranian digital camo.
	{
		label = "MM-14";
		image = QPATHTOF(data\camo\mm14.paa);
	};

	class CUP_URB // Looks like a Greyscale M81.
	{
		label = "Urban";
		image = QPATHTOF(data\camo\urb.paa);
	};

	class RHD
	{
		label = "Rhodesian";
		description = "Rhodesian Brushstroke";
		image = QPATHTOF(data\camo\rhd.paa);
	};

	class TPAT
	{
		label = "T-Pattern";
		image = QPATHTOF(data\camo\tpat.paa);
	};

	class TRPTRN
	{
		label = "Tropentarn";
		image = QPATHTOF(data\camo\trptrn.paa);
	};

	class TTS
	{
		label = "TTS";
		description = "Tanoan Tigerstripe";
		image = QPATHTOF(data\camo\tts.paa);
	};

	class VZ85_DES
	{
		label = "Vz. 85 Des";
		description = "Vz. 85 Desert";
		image = QPATHTOF(data\camo\vz85_des.paa);
	};

	class VZ95
	{
		label = "Vz. 95";
		image = QPATHTOF(data\camo\vz95.paa);
	};

	class CUP_TRANS // Used for clear eyewear and hidden NVGs. 
	{
		label = "Transparency Placeholder (YOU SHOULD NOT SEE THIS)";
		image = QPATHTOF(data\camo\transparency.paa);
	};

	// Weapon Only camo

	class CUP_URB_HEX
	{
		label = "Urban Hex";
		image = QPATHTOF(data\camo\weapons\cup_urb_hex.paa);
	};

	class AK_WOOD
	{
		label = "Wood";
		description = "Laminated Wood";
		image = "#(rgb,8,8,3)color(0.60,0.31,0.14,1)";
	};

	class AK_BLK
	{
		label = "Black";
		description = "Black Polymer";
		image="#(rgb,8,8,3)color(0.12,0.12,0.11,1)";
	};

	class CUP_ACR_SNW
	{
		label = "Snow";
		image = QPATHTOF(data\camo\weapons\cup_acr_snw.paa);
	};

	class CUP_ACR_WDL
	{
		label = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_acr_wdl.paa);
	};

	class CUP_ACR_TAN
	{
		label = "Tan";
		image = QPATHTOF(data\camo\weapons\cup_acr_tan.paa);
	};

	class CUP_FAL_DES
	{
		label = "Desert";
		image = QPATHTOF(data\camo\weapons\cup_fal_des.paa);
	};

	class CUP_FAL_RHD
	{
		label = "Rhodesian";
		image = QPATHTOF(data\camo\weapons\cup_fal_rhd.paa);
	};

	class CUP_FAL_SND
	{
		label = "Sand";
		image = QPATHTOF(data\camo\weapons\cup_fal_snd.paa);
	};

	class CUP_FAL_WDL
	{
		label = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_fal_wdl.paa);
	};
		
	class CUP_G36_DES
	{
		label = "Desert";
		image = QPATHTOF(data\camo\weapons\cup_g36_des.paa);
	};

	class CUP_G36_HEX
	{
		label = "Hex";
		image = QPATHTOF(data\camo\weapons\cup_g36_hex.paa);
	};

	class CUP_G36_WDL
	{
		label = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_g36_wdl.paa);
	};

	class CUP_HK416_DES
	{
		label = "Desert";
		image = QPATHTOF(data\camo\weapons\cup_hk416_des.paa);
	};

	class CUP_HK416_WDL
	{
		label = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_hk416_wdl.paa);
	};

	class CUP_SCAR_WDL
	{
		label = "Woodland";
		image = "#(rgb,8,8,3)color(0.36,0.37,0.30,1)";
	};

	class CUP_SAVZ_58_COMP
	{
		label = "Composite";
		image = QPATHTOF(data\camo\weapons\cup_savz_58_comp.paa);
	};

	class CUP_SAVZ_58_DES
	{
		label = "Desert";
		image = "#(rgb,8,8,3)color(0.66,0.58,0.43,1)";
	};

	class CUP_SAVZ_58_WDL
	{
		label = "Woodland";
		image = "#(rgb,8,8,3)color(0.42,0.42,0.31,1)";
	};

	class CUP_SAVZ_58_WOOD
	{
		label = "Wood";
		image = QPATHTOF(data\camo\weapons\cup_savz_58_wood.paa);
	};

	class CUP_OICW_BLK
	{
		label = "BLK";
		description = "Black";
		image = "#(rgb,8,8,3)color(0.13,0.13,0.13,1)";
	};

	class CUP_OICW_TAN
	{
		label = "TAN";
		description = "Desert Tan";
		image = "#(rgb,8,8,3)color(0.91,0.88,0.82,1)";
	};

	class CUP_OICW_OLI
	{
		label = "OLI";
		description = "Olive";
		image = "#(rgb,8,8,3)color(0.31,0.37,0.25,1)";
	};

	class CUP_OICW_ARID
	{
		label = "ARD";
		description = "Arid";
		image = QPATHTOF(data\camo\weapons\cup_oicw_arid.paa);
	};

	class CUP_OICW_LUSH
	{
		label = "LSH";
		description = "Lush";
		image = QPATHTOF(data\camo\weapons\cup_oicw_lush.paa);
	};

	class CUP_OICW_SNWTIG
	{
		label = "SNW TIG";
		description = "Snow Tiger";
		image = QPATHTOF(data\camo\weapons\cup_oicw_snwtig.paa);
	};

	class CUP_OICW_TIG
	{
		label = "TIG";
		description = "Tiger";
		image = QPATHTOF(data\camo\weapons\cup_oicw_tig.paa);
	};

	class CUP_OICW_SPLNT
	{
		label = "SPLNT";
		description = "Splinter";
		image = QPATHTOF(data\camo\weapons\cup_oicw_splnt.paa);
	};

	class CUP_OICW_WNTR
	{
		label = "WNTR";
		description = "Winter";
		image = QPATHTOF(data\camo\weapons\cup_oicw_wntr.paa);
	};

	class CUP_OICW_WDL
	{
		label = "WDL";
		description = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_oicw_wdl.paa);
	};

};

class cup_attachsys // This is what kind of attachments a gun can accept, roughly.
{
	label = "Attachment System";
	changeingame = 0;
	values[] = {};

	class none
	{
		label = CSTRING(None);
	};

	class carryhandle // Used for the G36, XM8, and XM29 KE. It's for fitting proprietary carryhandle sights.
	{
		label = CSTRING(Carryhandle);
	};

	class picatinny // Used when a gun's attachment system only affects its optic. Side attachments (flashlights, lasers) aren't included.
	{
		label = CSTRING(Picatinny_Label);
		description = CSTRING(Picatinny_Description);
	};

	class ris // Used when a gun's attachment system affects its optic AND side attachments (flashlights, lasers).
	{
		label = CSTRING(RIS_Label);
		description = CSTRING(RIS_Description);
	};

	class warsaw
	{
		label = CSTRING(WarsawRail_Label);
		description = CSTRING(WarsawRail_Description);
	};

	class zenit
	{
		label = "Zenitco";
		description = "Zenitco Railed Handguard";
	};

	class zenit_pica
	{
		label = "Zenit/Pica";
		description = "Zenitco Railed Handguard and Picatinny Rail";
	};
};

class cup_grip
{
	label = "Grip";
	changeingame = 0;
	values[] = {};

	class none
	{
		label = CSTRING(None);
	};

	class angled
	{
		label = "Angled";
		description = "Angled Foregrip";
	};

	class vertical
	{
		label = "Vertical";
		description = "Vertical Foregrip";
	};
};

class cup_goggles
{
	label = CSTRING(Goggles);
	changeingame = 1;
	values[] = {};

	class no
	{
		label = CSTRING(No);
		changeingame = -1;
	};

	class yes
	{
		label = CSTRING(Yes);
		changeingame = -1;
	};

	class yes_cover
	{
		label = "Yes/Cov";
		description = "Yes (Covered)";
		changeingame = -1;
	};

	class yes_cover_back
	{
		label = "Yes/CovBck";
		description = "Yes (Cover on Back)";
		changeingame = -1;
	};

	class up
	{
		label = "On-Helm";
		actionLabel = "Put Goggles Up";
	};

	class up_cover
	{
		label = "Up/Cov";
		description = "Up (Covered)";
		actionLabel = "Cover Up Goggles";
	};

	class down
	{
		label = "Over-Eye";
		actionLabel = "Put Goggles Down";
	};
};

class cup_beard_color
{
	label = "Beard Color";
	values[] = {};

	class none
	{
		label = CSTRING(None);
	};

	class BLK
	{
		label = "Black";
		image = "#(rgb,8,8,3)color(0.10,0.08,0.07,1)";
	};

	class BLND
	{
		label = "Blonde";
		image = "#(rgb,8,8,3)color(0.45,0.39,0.34,1)";
	};

	class BRN
	{
		label = "Brown";
		image = "#(rgb,8,8,3)color(0.26,0.14,0.10,1)";
	};
};

class cup_shemagh_color
{
	label = "Shemagh Color";
	values[] = {};

	class none
	{
		label = CSTRING(None);
	};

	class BLK
	{
		label = "Black";
		image = QPATHTOF(data\camo\shemagh\shemagh_blk.paa);
	};

	class GRN
	{
		label = "Green";
		image = QPATHTOF(data\camo\shemagh\shemagh_od.paa);

	};

	class KHK
	{
		label = "Khaki";
		image = QPATHTOF(data\camo\shemagh\shemagh_tan.paa);
	};

	class RED
	{
		label = "Red";
		image = QPATHTOF(data\camo\shemagh\shemagh_red.paa);
	};

	class WHT
	{
		label = "White";
		image = QPATHTOF(data\camo\shemagh\shemagh_wht.paa);
	};
};

class cup_loadout
{
	label = "Loadout";
	changeingame = 0;
	values[] = {};

	class EMPTY
	{
		label = "Empty";
	};

	class STD
	{
		label = "Standard";
	};

	class AR
	{
		label = "AR";
		description = "Automatic Rifleman";
	};

	class AT
	{
		label = "AT";
		description = "Anti-Tank";
	};

	class CREW
	{
		label = "Crew";
	};

	class ENGI
	{
		label = "Engineer";
	};

	class LIGHT
	{
		label = "Light";
	};

	class GL
	{
		label = "GL";
		description = "Grenadier";
	};

	class MED
	{
		label = "Medic";
	};

	class DMR
	{
		label = "DMR";
		description = "Designated Marksman";
	};

	class MG
	{
		label = "MG";
		description = "Machine Gunner";
	};

	class NCO
	{
		label = "NCO";
		description = "Non-Commissioned Officer";
	};

	class OFC
	{
		label = "Officer";
	};

	class PTRL
	{
		label = "Patrol";
	};

	class RIFL
	{
		label = "RIFL";
		description = "Rifleman";
	};

	class RADIO // Not to be confused with RTOs. This is just for if the loadout has a standard radio.
	{
		label = "Radio";
	};

	class RTO
	{
		label = "RTO";
		description = "Radio Telephone Operator";
	};

	class SCT
	{
		label = "Scout";
	};

	class SL
	{
		label = "SL";
		description = "Squad Leader";
	};

	class TL
	{
		label = "TL";
		description = "Team Leader";
	};
};
