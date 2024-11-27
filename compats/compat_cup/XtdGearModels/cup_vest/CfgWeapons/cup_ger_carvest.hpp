class cup_ger_carvest {
	label="GER Car Vest";
	author="Community Upgrade Project";
	options[]= { "loadout" };
	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		label = "Loadout";
		values[]={ "STD", "HOLST", "POUCH" };
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
