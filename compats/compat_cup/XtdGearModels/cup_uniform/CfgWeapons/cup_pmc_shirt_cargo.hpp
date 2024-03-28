class cup_pmc_shirt_cargo {
	label="PMC Shirt/Cargo";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK", "BLK_BRN", "BLK_DAZ", "SND_WDL", "WHT_BRN" };

		class BLK_BRN
		{
			label = "Blk/Brn";
			description = "Black/Brown";
			image = QPATHTOF(data\camo\pmc\crgo_blk_brn.paa);
		};

		class BLK_DAZ
		{
			label = "Blk/Daz";
			description = "Black/Dazzle";
			image = QPATHTOF(data\camo\pmc\crgo_blk_daz.paa);
		};

		class SND_WDL
		{
			label = "Sand/WDL";
			description = "Sand/Woodland";
			image = QPATHTOF(data\camo\pmc\crgo_snd_wdl.paa);
		};

		class WHT_BRN
		{
			label = "Wht/Brn";
			description = "White/Brown";
			image = QPATHTOF(data\camo\pmc\crgo_wht_brn.paa);
		};
	};
};
