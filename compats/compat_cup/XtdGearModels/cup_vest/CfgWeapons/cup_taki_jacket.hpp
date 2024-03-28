class cup_taki_jacket {
	label="Taki Jacket";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "6CDP", "M81_SNW", "M81", "BLK", "GRY", "BRN" };

		class M81_SNW
		{
			label = "M81 Snow";
			image = QPATHTOF(data\camo\taki\m81_snw.paa);
		};

		class BLK
		{
			image = "#(rgb,8,8,3)color(0.19,0.21,0.24,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.31,0.24,0.22,1)";
		};
	};
};
