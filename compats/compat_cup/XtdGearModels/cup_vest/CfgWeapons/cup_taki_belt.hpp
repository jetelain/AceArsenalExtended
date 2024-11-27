class cup_taki_belt {
	label="Taki Belt";
	author="Community Upgrade Project";
	options[]= { "loadout" };
	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"CREW", "OFC", "OFC_BINO" };
		class OFC_BINO
		{
			label = "Officer/Binos";
			description = "Officer/Binoculars"
		};
	};
};
