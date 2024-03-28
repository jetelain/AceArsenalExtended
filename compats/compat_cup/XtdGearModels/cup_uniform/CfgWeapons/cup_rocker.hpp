class cup_rocker {
	label="Rocker Clothes";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BAND", "GRAF", "SKULL", "TIE" };

		class BAND
		{
			label = "Band";
			image = QPATHTOF(data\camo\rocker\east_eggs.paa);
		};

		class GRAF
		{
			label = "Grafitti";
			image = QPATHTOF(data\camo\rocker\grafitti.paa);
		};

		class SKULL
		{
			label = "Skull";
			image = QPATHTOF(data\camo\rocker\skull.paa);
		};

		class TIE
		{
			label = "Tie-Dye";
			image = QPATHTOF(data\camo\rocker\tie_dye.paa);
		};
	};
};
