class cup_civ_clothes {
	label="Civilian Clothes";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLU", "BRN", "GRN", "GRY" };

		class BLU
		{
			image = QPATHTOF(data\camo\civ\blu.paa);
		};

		class BRN
		{
			label = "Brown";
			image = QPATHTOF(data\camo\civ\brn.paa);
		};

		class GRN
		{
			image = QPATHTOF(data\camo\civ\grn.paa);
		};

		class GRY
		{
			image = QPATHTOF(data\camo\civ\gry.paa);
		};
	};
};
