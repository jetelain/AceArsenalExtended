class cup_labcoat {
	label="Labcoat";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "DBLU", "BLU", "WHT" };

		class DBLU
		{
			label = "Dark Blue";
			image = "#(rgb,8,8,3)color(0.12,0.13,0.18,1)";
		};

		class BLU
		{
			image = "#(rgb,8,8,3)color(0.53,0.64,0.73,1)";
		};

		class WHT
		{
			image = "#(rgb,8,8,3)color(0.88,0.88,0.88,1)";
		};
	};
};
