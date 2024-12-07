class cup_navy_vest {
	label = "Navy Pers Vest";
	author = "Community Upgrade Project";
	options[]= { "camo" };
	class camo 
	{
		label = "Color";
		changeingame=0;
		alwaysSelectable = 1;
		values[]={ "BLU", "BRN", "GRN", "RED", "VLT", "WHT", "YLW" };
		class BLU
		{
			label = "Blue";
			image = "#(rgb,8,8,3)color(0.42,0.60,0.85,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.71,0.48,0.41,1)";
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.44,0.67,0.49,1)";
		};

		class RED
		{
			label = "Red";
			image = "#(rgb,8,8,3)color(0.86,0.38,0.30,1)";
		};

		class VLT
		{
			label = "Violet";
			image = "#(rgb,8,8,3)color(0.65,0.46,0.67,1)";
		};

		class WHT
		{
			image = "#(rgb,8,8,3)color(0.89,0.90,0.92,1)";
		};

		class YLW
		{
			label = "Yellow";
			image = "#(rgb,8,8,3)color(0.91,0.83,0.16,1)";
		};
	};
};
