class cup_napa_fatigues {
	label="NAPA Fatigues";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "M81_FLCK", "FLCK_OLI" };

		class M81_FLCK
		{
			label = "M81/Flck";
			description = "M81 Woodland/Flecktarn";
			image = QPATHTOF(data\camo\napa\ftg_m81_flck.paa);
		};

		class FLCK_OLI
		{
			label = "Flck/Oli";
			description = "Flecktarn/Olive";
			image = QPATHTOF(data\camo\napa\ftg_flck_oli.paa);
		};
	};
};
