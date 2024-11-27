class cup_balaclava_ratnik_hat {
	label="Balaclava [Ratnik]";
	author="Community Upgrade Project";
	options[]= { "camo", "variant" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "WHT" };
		
		class GRN
		{
			image = "#(rgb,8,8,3)color(0.17,0.21,0.12,1)";
		};

		class WHT
		{
			image = "#(rgb,8,8,3)color(0.93,0.92,0.87,1)";
		};
	};

	class variant
	{
		alwaysSelectable = 1;
		values[] = {"1", "2" };
	};
};
