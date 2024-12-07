class cup_atlyn {
	label="Atlyn Helmet";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "shield" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "GRN", "DGRN" };

		class DGRN
		{
			label = "Dark Green";
			image = "#(rgb,8,8,3)color(0.20,0.22,0.14,1)";
		};
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes" };
	};

	class shield
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = "Faceshield";
		values[] = {"no", "down", "up" };
		class no
		{
			label = CSTRING(No);
			changeingame = -1;
		};

		class down
		{
			label = "Down";
			actionLabel = "Flip Faceshield Down";
		};

		class up
		{
			label = "Up";
			actionLabel = "Flip Faceshield Up";
		};
	};
};
