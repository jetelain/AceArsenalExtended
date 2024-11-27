class cup_m1_helm {
	label="M1 Helmet";
	author="Community Upgrade Project";
	options[]= { "camo", "accessory" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"VNLF", "VNLF_BTP", "OLI", "M81" };
		class VNLF
		{
			label = "Vineleaf";
			image = QPATHTOF(data\camo\vineleaf.paa);
		};

		class VNLF_BTP
		{
			label = "Vine/BTP";
			description = "Vineleaf/Born To Port";
			image = QPATHTOF(data\camo\vineleaf.paa);
		};
	};

	class accessory
	{
		alwaysSelectable = 1;
		label = "Accessory";
		values[] = {"none", "cig" };
		class none
		{
			label = CSTRING(None);
		};

		class cig
		{
			label = "Cigarettes";
		};
	};
};
