class cup_6b3_cdf {
	label="6B3 [CDF]";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "DES", "FRS", "MTN", "WNTR" };

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.43,0.39,0.24,1)";
		};

		class DES
		{
			label = "Desert";
			image = QPATHTOF(data\camo\cdf\des.paa);
		};

		class FRS
		{
			label = "Forest";
			image = QPATHTOF(data\camo\cdf\frs.paa);
		};

		class MTN
		{
			label = "Mountain";
			image = QPATHTOF(data\camo\cdf\mtn.paa);
		};

		class WNTR
		{
			label = "Winter";
			image = QPATHTOF(data\camo\cdf\wntr.paa);
		};
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "GL", "MG", "NCO", "NBP" };

		class NBP
		{
			label = "NBP";
			description = "No Back Pouch";
		};
	};
};
