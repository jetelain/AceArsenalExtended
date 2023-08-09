class cup_profiteer {
	label="Profiteer Clothes";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLU", "BRN", "GRY", "RED" };

		class BLU
		{
			image = "#(rgb,8,8,3)color(0.13,0.15,0.20,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.28,0.23,0.21,1)";
		};

		class GRY
		{
			image = "#(rgb,8,8,3)color(0.48,0.45,0.48,1)";
		};

		class RED
		{
			label = "Red";
			image = QPATHTOF(data\camo\profit_red.paa);
		};
	};
};
