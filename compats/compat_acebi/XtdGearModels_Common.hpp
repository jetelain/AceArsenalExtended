class CamoBase
{
	// Plain colors.
	class SND // Color used on NATO weapons, such as the MX.
	{
		label = "Sand";
		image="#(rgb,8,8,3)color(0.886,0.843,0.765,1)";
	};
	class SGG
	{
		label = "Sage";
		image="#(rgb,8,8,3)color(0.53,0.62,0.51,1)";
	};
	class KHKG // Color used on "Khaki" NATO weapons in tropical enviroments.
	{
		label = "Khaki G.";
		description = "Khaki Green";
		image="#(rgb,8,8,3)color(0.6,0.64,0.5,1)";
	};

	//CSAT camos.
	class HEX // CSAT standard hex camo.
	{
		label = "Hex";
	};
	class GHEX // CSAT tropical hex camo.
	{
		label = "G. Hex";
		description = "Green Hex";
	};
	class UHEX // CSAT urban hex camo.
	{
		label = "U. Hex";
		description = "Urban Hex";
	};

	// NATO helmet camos.
	class BIHELM_STD // There is no better way to describe it really
	{
		label = "Standard";
		image = "z\aceax\compats\ACEandBI\data\camo\bihelm_std.paa";
	};
	class BIHELM_DES
	{
		label = "Desert";
		image = "z\aceax\compats\ACEandBI\data\camo\bihelm_des.paa";
	};
	class BIHELM_GRS
	{
		label = "Grass";
		image = "z\aceax\compats\ACEandBI\data\camo\bihelm_grs.paa";
	};
	class BIHELM_SNK
	{
		label = "Snakeskin";
		image = "z\aceax\compats\ACEandBI\data\camo\bihelm_snk.paa";
	};

	// CTRG camos.
	class CTRG_ARID
	{
		label = "Arid Daz.";
		description = "CTRG Arid Dazzle";
		image = "z\aceax\compats\ACEandBI\data\camo\ctrg_arid.paa";
	};
	class CTRG_URB
	{
		label = "Urb. Daz.";
		description = "CTRG Urban Dazzle";
		image = "z\aceax\compats\ACEandBI\data\camo\ctrg_urb.paa";
	};
	class CTRG_TROP
	{
		label = "Trop. Daz.";
		description = "CTRG Tropic Dazzle";
		image = "z\aceax\compats\ACEandBI\data\camo\ctrg_trop.paa";
	};

	// Spetsnaz camos.
	class BISPNZ_A // Camo used on Arid AK-15s
	{
		label = "Arid";
		image = "z\aceax\compats\ACEandBI\data\camo\bihelm_spnz_a.paa";
	};
	class BISPNZ_L // Camo used on Lush AK-15s
	{
		label = "Lush";
		image = "z\aceax\compats\ACEandBI\data\camo\bihelm_spnz_l.paa";
	};
	class THEX // Taiga hex.
	{
		label = "T. Hex";
		description = "Taiga Hex";
	};
};
