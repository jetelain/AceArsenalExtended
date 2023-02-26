class CamoBase
{
	// Plain colors.
	class SND // Color used on NATO weapons, such as the MX.
	{
		label = "Sand";
		image="#(rgb,8,8,3)color(0.886,0.843,0.765,1)";
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
	}
	class GHEX // CSAT tropical hex camo.
	{
		label = "G. Hex";
		description = "Green Hex";
	}
	class UHEX // CSAT urban hex camo.
	{
		label = "U. Hex";
		description = "Urban Hex";
	}

	// CTRG camos.
	class CTRG_ARID // CTRG arid dazzle camo.
	{
		label = "Arid Daz.";
		description = "CTRG Arid Dazzle";
	}
	class CTRG_URB // CTRG urban dazzle camo.
	{
		label = "Urb. Daz.";
		description = "CTRG Urban Dazzle";
	}
	class CTRG_TROP // CTRG tropical dazzle camo.
	{
		label = "Trop. Daz.";
		description = "CTRG Tropic Dazzle";
	}

	// Spetsnaz camos.
	class BISPNZA // Camo used on Arid AK-15s
	{
		label = "Arid";
		//image = QPATHTOF(data\camo\bispnza);
	};
	class BISPNZL // Camo used on Lush AK-15s
	{
		label = "Lush";
		//image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
	};
	class THEX // Taiga hex.
	{
		label = "T. Hex";
		description = "Taiga Hex";
	};
};
