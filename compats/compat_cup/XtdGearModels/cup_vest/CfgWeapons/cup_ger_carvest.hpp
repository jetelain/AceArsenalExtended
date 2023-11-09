class cup_ger_carvest {
	label="GER Car Vest";
	author="Community Upgrade Project";
	options[]= { "loadout" };
	class loadout
	{
		alwaysSelectable = 1;
		label = "Loadout";
		values[]={ "STAND", "HOLST", "POUCH" };

		class STAND
		{
			label = "Standard";
		};

		class HOLST
		{
			label = "Holster";
		};

		class POUCH
		{
			label = "Pouches";
		};
	};

};
