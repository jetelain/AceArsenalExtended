class cup_worker {
	label="Worker Clothes";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLU", "BRN", "GRN", "GRY" };

		class BLU
		{
			image = "#(rgb,8,8,3)color(0.43,0.51,0.63,1)";
		};

		class BRN
		{
			label = "Brown";
			image = QPATHTOF(data\camo\worker_brn.paa);
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.53,0.55,0.38,1)";
		};

		class GRY
		{
			image = "#(rgb,8,8,3)color(0.70,0.63,0.58,1)";
		};
	};
};
