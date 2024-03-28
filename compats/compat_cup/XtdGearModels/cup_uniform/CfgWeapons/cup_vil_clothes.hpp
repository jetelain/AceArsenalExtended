class cup_vil_clothes {
	label="Villager Clothes";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLU", "BLU_CHK", "GRN", "GRN_CHK" };

		class BLU
		{
			image = "#(rgb,8,8,3)color(0.62,0.66,0.66,1)";
		};

		class BLU_CHK
		{
			label = "Blue Chk";
			description = "Blue Checkerboard";
			image = QPATHTOF(data\camo\village\blu_chk.paa);
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.42,0.50,0.33,1)";
		};

		class GRN_CHK
		{
			label = "Green Chk";
			description = "Green Checkerboard";
			image = QPATHTOF(data\camo\village\grn_chk.paa);
		};
	};
};
