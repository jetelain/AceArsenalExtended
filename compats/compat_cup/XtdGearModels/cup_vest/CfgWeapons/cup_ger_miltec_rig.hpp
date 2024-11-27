class cup_ger_miltec_rig {
	label="GER Mil-Tec Rig";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "OD", "FLCK" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "RADIO", "HOLST" };
		class HOLST
		{
			label = "Holster";
		};
	};
};
