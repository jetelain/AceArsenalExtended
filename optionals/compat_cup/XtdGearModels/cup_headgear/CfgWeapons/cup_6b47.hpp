class cup_6b47 {
	label="6B47";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"EMR_DES", "DESPNK", "EMR_SUM", "WHT" };

		class WHT
		{
			label = "Winter";
		};
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "up", "up_cover", "down" };
	};
};
