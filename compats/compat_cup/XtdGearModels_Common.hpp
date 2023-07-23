class CamoBase
{
	class FDE
	{
		label = "FDE";
		description = "Flat Dark Earth";
		image = "#(rgb,8,8,3)color(0.56,0.48,0.38,1)";
	};

	class CUP_URB_HEX
	{
		label = "Urban Hex";
		image = "z\aceax\compats\CUP\data\camo\cup_urb_hex.paa";
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
		image = "z\aceax\compats\CUP\data\camo\cup_acr_snw.paa";
	};

	class CUP_ACR_WDL
	{
		label = "Woodland";
		image = "z\aceax\compats\CUP\data\camo\cup_acr_wdl.paa";
	};

	class CUP_ACR_TAN
	{
		label = "Tan";
		image = "z\aceax\compats\CUP\data\camo\cup_acr_tan.paa";
	};

	class CUP_FAL_DES
	{
		label = "Desert";
		image = "z\aceax\compats\CUP\data\camo\cup_fal_des.paa";
	};

	class CUP_FAL_RHD
	{
		label = "Rhodesian";
		image = "z\aceax\compats\CUP\data\camo\cup_fal_rhd.paa";
	};

	class CUP_FAL_SND
	{
		label = "Sand";
		image = "z\aceax\compats\CUP\data\camo\cup_fal_snd.paa";
	};

	class CUP_FAL_WDL
	{
		label = "Woodland";
		image = "z\aceax\compats\CUP\data\camo\cup_fal_wdl.paa";
	};
		
	class CUP_G36_DES
	{
		label = "Desert";
		image = "z\aceax\compats\CUP\data\camo\cup_g36_des.paa";
	};

	class CUP_G36_HEX
	{
		label = "Hex";
		image = "z\aceax\compats\CUP\data\camo\cup_g36_hex.paa";
	};

	class CUP_G36_WDL
	{
		label = "Woodland";
		image = "z\aceax\compats\CUP\data\camo\cup_g36_wdl.paa";
	};

	class CUP_HK416_DES
	{
		label = "Desert";
		image = "z\aceax\compats\CUP\data\camo\cup_hk416_des.paa";
	};

	class CUP_HK416_WDL
	{
		label = "Woodland";
		image = "z\aceax\compats\CUP\data\camo\cup_hk416_wdl.paa";
	};

	class CUP_SCAR_WDL
	{
		label = "Woodland";
		image = "#(rgb,8,8,3)color(0.36,0.37,0.30,1)";
	};
};

class cup_attachsys // This is what kind of attachments a gun can accept, roughly.
{
	label = "Attachment System";
	changeingame = 0;
	values[] = {};

	class none
	{
		label = "None";
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
		label = "None";
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
