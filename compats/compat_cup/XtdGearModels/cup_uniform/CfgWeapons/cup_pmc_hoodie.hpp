class cup_pmc_hoodie {
	label="PMC Hoodie";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK", "CAMO", "DAZ", "MRN" };

		class CAMO
		{
			label = "Camo";
			image = QPATHTOF(data\camo\pmc\hdie_camo.paa);
		};

		class DAZ
		{
			label = "Dazzle";
			image = QPATHTOF(data\camo\pmc\hdie_daz.paa);
		};

		class MRN
		{
			label = "Maroon";
			image = "#(rgb,8,8,3)color(0.23,0.17,0.14,1)";
		};
	};
};
