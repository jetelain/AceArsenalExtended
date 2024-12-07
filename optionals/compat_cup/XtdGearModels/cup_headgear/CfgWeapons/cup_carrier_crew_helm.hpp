class cup_carrier_crew_helm {
	label = "Carrier Crew Helmet";
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
			image = "#(rgb,8,8,3)color(0.37,0.58,0.82,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.70,0.40,0.29,1)";
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.43,0.68,0.35,1)";
		};

		class RED
		{
			label = "Red";
			image = "#(rgb,8,8,3)color(0.88,0.39,0.32,1)";
		};

		class VLT
		{
			label = "Violet";
			image = "#(rgb,8,8,3)color(0.61,0.47,0.79,1)";
		};

		class WHT
		{
			image = "#(rgb,8,8,3)color(0.88,0.88,0.90,1)";
		};

		class YLW
		{
			label = "Yellow";
			image = "#(rgb,8,8,3)color(0.90,0.86,0.40,1)";
		};
	};
};
