class cup_pmc_shirt_pants_glv {
	label="PMC Shirt/Pants Glv";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK_KHK", "PLD_KHK" };

		class BLK_KHK
		{
			label = "Black/Khaki";
			image = QPATHTOF(data\camo\pmc\shrtpt_blk_khk.paa);
		};

		class PLD_KHK
		{
			label = "Plaid/Khaki";
			image = QPATHTOF(data\camo\pmc\shrtpt_pld_khk1.paa);
		};
	};
};
