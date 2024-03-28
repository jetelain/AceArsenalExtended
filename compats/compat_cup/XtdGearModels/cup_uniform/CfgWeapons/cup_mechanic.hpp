class cup_mechanic {
	label="Mechanic Overalls";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLU", "GRN", "RED" };

		class BLU
		{
			image = QPATHTOF(data\camo\mechanic\blu.paa);
		};

		class GRN
		{
			image = QPATHTOF(data\camo\mechanic\grn.paa);
		};

		class RED
		{
			label = "Red";
			image = QPATHTOF(data\camo\mechanic\red.paa);
		};
	};
};
