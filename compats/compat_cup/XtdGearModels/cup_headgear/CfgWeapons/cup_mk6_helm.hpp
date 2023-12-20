class cup_mk6_helm {
	label="Mk6 Helmet";
	author="Community Upgrade Project";
	options[]= { "camo", "accessory" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"DDPM", "DPM", "MTP" };
	};

	class accessory
	{
		alwaysSelectable = 1;
		label = "Accessory";
		values[] = {"none", "prr", "prr_crew", "prr_glasses", "prr_goggles", "prr_netting" };
		class none
		{
			label = CSTRING(None);
		};

		class prr
		{
			label = "PRR";
		};

		class prr_crew
		{
			label = "PRR/Crew";
		};

		class prr_glasses
		{
			label = "PRR/Glasses";
		};

		class prr_goggles
		{
			label = "PRR/Goggles";
		};

		class prr_netting
		{
			label = "PRR/Netting";
		};
	};
};
