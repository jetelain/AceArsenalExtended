class cup_tracksuit {
	label="Tracksuit";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLU", "BLK", "BRN", "GRN" };

		class BLU
		{
			image = "#(rgb,8,8,3)color(0.22,0.26,0.32,1)";
		};

		class BLK
		{
			image = "#(rgb,8,8,3)color(0.15,0.14,0.14,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.25,0.22,0.18,1)";
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.24,0.32,0.26,1)";
		};
	};
};
