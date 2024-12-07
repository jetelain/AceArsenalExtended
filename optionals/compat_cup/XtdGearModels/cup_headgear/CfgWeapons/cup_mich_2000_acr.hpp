class cup_mich_2000_acr {
	label="MICH 2000 [ACR]";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"DES", "WDL" };

		class DES
		{
			label = "Desert";
			image = "#(rgb,8,8,3)color(0.47,0.43,0.27,1)";
		};

		class WDL
		{
			label = "Woodland";
			image = "#(rgb,8,8,3)color(0.34,0.34,0.23,1)";
		};
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes" };
	};
};
