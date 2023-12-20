class cup_osprey_mk3 {
	label="Osprey Mk3";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "DPM", "DDPM" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"EMPTY", "AR", "CREW", "ENGI", "GL", "MED", "OFC", "RIFL", "SCT" };
	};

};
