class cup_6b3_fv {
	label="6B3 FV";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "SB", "NCO" };

		class SB
		{
			label = "Shovel/Bag";
			description = "Shovel and Bag";
		};
	};
};
