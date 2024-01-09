class cup_pmc_shirt_pants_kp_glv {
	label="PMC PMC Shirt/Pants Glv KP";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "OLI_KHK", "PLD_CHR", "PLD_KHK" };

		class OLI_KHK
		{
			label = "Oli/Khk";
			description = "Olive/Khaki";
			image = QPATHTOF(data\camo\pmc\shrtpt_oli_khk.paa);
		};

		class PLD_CHR
		{
			label = "Pld/Chr";
			description = "Plaid/Charcoal";
			image = QPATHTOF(data\camo\pmc\shrtpt_pld_chr.paa);
		};

		class PLD_KHK
		{
			label = "Pld/Khk";
			description = "Plaid/Khaki";
			image = QPATHTOF(data\camo\pmc\shrtpt_pld_khk2.paa);
		};
	};
};
