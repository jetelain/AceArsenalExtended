class cup_spc {
	label="SPC";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"AT", "AR", "MED", "CREW", "EMPTY", "GL", "MG", "DMR", "OFC", "PTRL", "RTO", "RIFL", "SCT", "SL", "TL" };

	};
};
