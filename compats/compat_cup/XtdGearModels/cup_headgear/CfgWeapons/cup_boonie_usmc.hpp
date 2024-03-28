class cup_boonie_usmc {
	label="Boonie [USMC]";
	author="Community Upgrade Project";
	options[]= { "camo", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"MRPT_D", "MRPT_WD" };
	};

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
		values[] = {"none", "earpiece", "prr" };
		class none
		{
			label = CSTRING(None);
		};
		
		class earpiece
		{
			label = "Earpiece";
		};

		class prr
		{
			label = "PRR";
		};
	};
};
