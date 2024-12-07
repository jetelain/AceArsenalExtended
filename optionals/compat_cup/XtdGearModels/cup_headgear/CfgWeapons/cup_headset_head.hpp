class cup_headset_head {
	label="Headset";
	author="Community Upgrade Project";
	options[]= { "headband" };

	class headband : CamoBase
	{
		alwaysSelectable = 1;
		label = "Headband";
		values[] = {"none", "M81" };
		class none
		{
			label = CSTRING(None);
		};
	};
};
