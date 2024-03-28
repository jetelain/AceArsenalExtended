class cup_khet_partug {
	label="Khet Partug";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK", "BRN", "CRM", "WHT" };
		class BLK
		{
			image = "#(rgb,8,8,3)color(0.05,0.06,0.06,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.45,0.39,0.33,1)";
		};

		class CRM
		{
			label = "Cream";
			image = "#(rgb,8,8,3)color(0.83,0.79,0.73,1)";
		};

		class WHT
		{
			image = "#(rgb,8,8,3)color(0.90,0.90,0.90,1)";
		};
	};
};
