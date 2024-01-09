class cup_napa_unif {
	label="NAPA Uniform";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "FLCK_OLI", "FLCK_M81", "M81_OLI" };

		class FLCK_OLI
		{
			label = "Flck/Oli";
			description = "Flecktarn/Olive";
			image = QPATHTOF(data\camo\napa\unf_flck_oli.paa);
		};

		class FLCK_M81
		{
			label = "Flck/M81";
			description = "Flecktarn/M81 Woodland";
			image = QPATHTOF(data\camo\napa\unf_flck_m81.paa);
		};

		class M81_OLI
		{
			label = "M81/Oli";
			description = "M81 Woodland/Olive";
			image = QPATHTOF(data\camo\napa\unf_m81_oli.paa);
		};

	};
};
