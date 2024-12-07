class cup_miltec_rig {
	label="Mil-Tec Rig";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "OD", "TAN" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "RADIO" };
	};
};
