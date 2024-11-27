class cup_taki_unif {
	label="Taki Uniform";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "GRN", "Mixed" };
		class GRN
		{
			image = QPATHTOF(data\camo\taki\unif_green.paa);
		};

		class Mixed
		{
			label = "Mixed";
			image = QPATHTOF(data\camo\taki\unif_mixed.paa);
		};
	};
};
