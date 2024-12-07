class cup_napa_anorak {
	label="NAPA Anorak";
	author="Community Upgrade Project";
	options[]= { "camo", "pantscamo", "hood" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BRN", "FLCK" };

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.23,0.17,0.14,1)";
		};

	};

	class pantscamo
	{
		alwaysSelectable = 1;
		values[]={ "JEAN", "KHK" };

		class JEAN
		{
			label = "Jeans";
			image = "#(rgb,8,8,3)color(0.23,0.17,0.14,1)";
		};

	};

	class hood
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = "Hood";
		values[] = {"down", "up" };
		class down
		{
			label = "Down";
			actionLabel = "Pull Hood Down";
		};

		class up
		{
			label = "Up";
			actionLabel = "Pull Hood Up";
		};
	};
};
