class cup_type56 {
	label="Type-56 Rig";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "GL", "BKPK" };
		class BKPK
		{
			label = "Backpack";
		};
	};
};
