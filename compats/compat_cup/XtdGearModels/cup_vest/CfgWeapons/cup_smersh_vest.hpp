class cup_smersh_vest {
	label="Smersh Vest";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "GRN", "SPCT_SKWO" };

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.39,0.36,0.21,1)";
		};

		class SPCT_SKWO
        {
            label = "Spct-SKWO";
            description = "Spectre-SKWO";
            image = QPATHTOF(data\camo\spct_skwo.paa);
        };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "BUTT", "LIGHT", "RADIO" };
		class BUTT
		{
			label = "Buttpack";
		};
	};
};
