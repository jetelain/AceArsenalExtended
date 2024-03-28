class cup_pmc_winter_jacket {
	label="PMC Winter Jacket";
	author="Community Upgrade Project";
	options[]= { "camo", "hood" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "CAMO1", "CAMO2", "WHT", "WHT_FLG" };

		class CAMO1
		{
			label = "Camo 1";
			image = QPATHTOF(data\camo\pmc\wntr_jkt_camo1.paa);
		};

		class CAMO2
		{
			label = "Camo 2";
			image = QPATHTOF(data\camo\pmc\wntr_jkt_camo2.paa);
		};

		class WHT_FLG
		{
			label = "White/Flag";
			image="\z\aceax\addons\gearinfo\data\camo\wht.paa"; // It draws from another addon so no script shorthand here.
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
