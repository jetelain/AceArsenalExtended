class cup_round_glasses {
	label="Round Glasses";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		label = "Frame";
		alwaysSelectable = 1;
		values[] = {"SLV", "BLK", "GLD" };

		class SLV
		{
			label = "Silver";
			image = "#(rgb,8,8,3)color(0.84,0.85,0.84,1)";
		};

		class GLD
		{
			label = "Gold";
			image = "#(rgb,8,8,3)color(0.85,0.71,0.20,1)";
		};
	};
};
