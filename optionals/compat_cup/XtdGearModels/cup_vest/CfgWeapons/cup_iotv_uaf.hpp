class cup_iotv_uaf {
	label="IOTV [UAF]";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"AR", "EMPTY", "GL", "MG", "MED", "RIFL", "RIFL_DEL", "SL", "TL" };
		class RIFL_DEL
		{
			label = "RIFL/Del";
			description = "Rifleman/Deltoid Protector";
		};
	};
};
