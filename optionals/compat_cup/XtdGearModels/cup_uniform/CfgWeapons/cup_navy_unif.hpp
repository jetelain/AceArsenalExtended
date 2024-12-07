class cup_navy_unif {
	label = "Carrier Crew";
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
			image = "#(rgb,8,8,3)color(0.38,0.47,0.64,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.65,0.54,0.49,1)";
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.49,0.62,0.56,1)";
		};

		class RED
		{
			label = "Red";
			image = "#(rgb,8,8,3)color(0.76,0.57,0.48,1)";
		};

		class VLT
		{
			label = "Violet";
			image = "#(rgb,8,8,3)color(0.53,0.40,0.53,1)";
		};

		class WHT
		{
			image = "#(rgb,8,8,3)color(0.71,0.73,0.74,1)";
		};

		class YLW
		{
			label = "Yellow";
			image = "#(rgb,8,8,3)color(0.69,0.64,0.25,1)";
		};
	};
};
