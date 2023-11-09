class cup_taki_belt {
	label="Taki Belt";
	author="Community Upgrade Project";
	options[]= { "loadout" };
	class loadout
	{
		alwaysSelectable = 1;
		values[] = {"UTIL", "OFC", "OFC_BINO" };
		class UTIL
		{
			label = "Utility";
		};

		class OFC
		{
			label = "Officer";
		};

		class OFC_BINO
		{
			label = "Officer/Binos";
			description = "Officer/Binoculars"
		};
	};
};
