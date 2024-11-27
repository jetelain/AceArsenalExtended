class cup_sph_4 {
	label="SPH-4";
	author="Community Upgrade Project";
	options[]= { "camo", "visor" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "GRY", "KHK", "OD" };

	};

	class visor
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = "Visor";
		values[] = {"down", "up" };
		class down
		{
			label = "Down";
			actionLabel = "Flip Visor Down";
		};

		class up
		{
			label = "Up";
			actionLabel = "Flip Visor Up";
		};
	};
};
