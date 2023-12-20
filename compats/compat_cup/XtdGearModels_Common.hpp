class CamoBase
{
	class ATACS_AU
	{
		label = "ATACS-AU";
		image = QPATHTOF(data\camo\atacs_au.paa);
	};
	
	class ATACS_FG
	{
		label = "ATACS-FG";
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

	class BGEDIGI
	{
		label = "Beige Digi";
		description = "Beige Digital";
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

	class CUP_URB // Looks like a Greyscale M81.
	{
		label = "Urban";
		image = QPATHTOF(data\camo\urb.paa);
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

	class carryhandle // Used only for the G36 and XM8.
	{
		label = "Carryhandle";
	};

	class picatinny // Used when a gun's attachment system only affects its optic. Side attachments (flashlights, lasers) aren't included.
	{
		label = "Picatinny";
		description = "Picatinny Rail";
	};

	class ris // Used when a gun's attachment system affects its optic AND side attachments (flashlights, lasers).
	{
		label = "RIS";
		description = "Rail Integration System";
	};

	class warsaw
	{
		label = "Warsaw";
		description = "Warsaw Pact Rail";
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
	label = "Goggles";
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
		actionLabel = "Cover Up Goggles"
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
