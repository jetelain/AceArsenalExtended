class cup_iotv_us {
	label="IOTV [US]";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"OCP", "OEF_CP", "UCP" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"EMPTY", "GL", "MG", "MED", "RIFL", "RIFL_DEL", "AR", "SL", "TL" };
		class RIFL_DEL
		{
			label = "Rifle/Del";
			description = "Rifleman/Deltoid Protector";
		};

	};
};
