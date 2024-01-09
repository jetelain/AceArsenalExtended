class cup_beret_paras {
	label="Beret [Paras]";
	author="Community Upgrade Project";
	options[]= { "headset" };

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
		values[] = {"none", "over", "under" };
		class none
		{
			label = CSTRING(None);
		};

		class over
		{
			label = "Over";
		};

		class under
		{
			label = "Under";
		};
	};
};
