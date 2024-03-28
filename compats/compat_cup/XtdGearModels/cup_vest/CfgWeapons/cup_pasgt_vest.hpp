class cup_pasgt_vest {
	label="PASGT";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "CCE", "6CDP", "M81", "OD", "WHT" };

		class WHT
		{
			label = "Winter";
		};
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "LIGHT" };
	};

};
