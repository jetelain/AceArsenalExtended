class cup_mk7_helm {
	label="Mk7 Helmet";
	author="Community Upgrade Project";
	options[]= { "accessory" };
	class accessory
	{
		alwaysSelectable = 1;
		label = "Accessory";
		values[] = {"none", "prr", "prr_scrim_a", "prr_scrim_b" };
		class none
		{
			label = CSTRING(None);
		};

		class prr
		{
			label = "PRR";
		};

		class prr_scrim_a
		{
			label = "PRR/Scrim A";
		};

		class prr_scrim_B
		{
			label = "PRR/Scrim B";
		};
	};
};
