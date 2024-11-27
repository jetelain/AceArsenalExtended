class cup_tsh_4 {
	label="TSh-4";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "BRN", "TAN" };
		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.16,0.14,0.13,1)";
		};

		class TAN
		{
			image = "#(rgb,8,8,3)color(0.70,0.58,0.37,1)";
		};
	};
};
