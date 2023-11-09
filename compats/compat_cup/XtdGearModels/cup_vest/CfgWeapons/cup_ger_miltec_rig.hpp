class cup_ger_miltec_rig {
	label="GER Mil-Tec Rig";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "OD", "FLCK" };
	};

	class loadout
	{
		alwaysSelectable = 1;
		values[] = {"STAND", "RADIO", "HOLST" };
		class STAND
		{
			label = "Standard";
		};

		class RADIO
		{
			label = "Radio";
		};

		class HOLST
		{
			label = "Holster";
		};
	};
};
