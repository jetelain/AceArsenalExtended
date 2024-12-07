class cup_osprey_mk4 {
	label="Osprey Mk4";
	author="Community Upgrade Project";
	options[]= { "loadout" };
	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"EMPTY", "AR", "CREW", "ENGI", "GL", "MED", "OFC", "RIFL", "SCT" };
	};

};
