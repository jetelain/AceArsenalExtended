class cup_khet_partug_short {
	label="Khet Partug (Short)";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLU", "BRN", "CRM", "GRY" };

		class BLU
		{
			image = "#(rgb,8,8,3)color(0.65,0.72,0.83,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.23,0.13,0.11,1)";
		};

		class CRM
		{
			label = "Cream";
			image = "#(rgb,8,8,3)color(0.93,0.89,0.84,1)";
		};

		class GRY
		{
			image = "#(rgb,8,8,3)color(0.24,0.24,0.26,1)";
		};
	};
};
