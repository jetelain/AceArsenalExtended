class cup_boonie_wdl {
	label="Boonie [WDL]";
	author="Community Upgrade Project";
	options[]= { "headset" };

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
		values[] = {"earpiece", "prr" };
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
