class cup_pmc_shirt_pants_glv_rl {
	label="PMC Shirt/Pants Glv Rl";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BUR_GRY", "BRGDY_CHR", "GRN_KHK" };

		class BUR_GRY
		{
			label = "Bur/Grey";
			description = "Burberry/Grey";
			image = QPATHTOF(data\camo\pmc\shrtpt_bur_gry.paa);
		};

		class BRGDY_CHR
		{
			label = "Brgdy/Chr";
			description = "Burgundy/Charcoal";
			image = QPATHTOF(data\camo\pmc\shrtpt_brgdy_chr.paa);
		};

		class GRN_KHK
		{
			label = "Grn/Khk";
			description = "Green/Khaki";
			image = QPATHTOF(data\camo\pmc\shrtpt_grn_khk.paa);
		};
	};
};
