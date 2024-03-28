class cup_woodlander {
	label="Woodlander Clothes";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BRN_BLU", "BLK_GRN", "GRN_BRN", "BRN_CAMO" };

		class BRN_BLU
		{
			label = "Brown/Blue";
			image = QPATHTOF(data\camo\woodlander\brn_blu.paa);
		};

		class BLK_GRN
		{
			label = "Black/Green";
			image = QPATHTOF(data\camo\woodlander\blk_grn.paa);
		};

		class GRN_BRN
		{
			label = "Green/Brown";
			image = QPATHTOF(data\camo\woodlander\grn_brn.paa);
		};

		class BRN_CAMO
		{
			label = "Brown/Camo";
			image = QPATHTOF(data\camo\woodlander\brn_camo.paa);
		};
	};
};
