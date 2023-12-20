class cup_ech_bare {
	label="ECH [Bare]";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "GRN", "SAND" };

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.18,0.19,0.16,1)";
		};

		class SAND
		{
			label = "Sand";
			image = "#(rgb,8,8,3)color(0.70,0.60,0.43,1)";
		};
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes" };
	};
};
