class cup_ssh_68 {
	label="SSh-68";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"SPTZDA", "GRN", "OLI", "DUBOK", "VSR", "FLRA" };
		class SPTZDA
		{
			label = "SPTZDA";
			description = "Spetsodezhda; also known as Berezka";
			image = QPATHTOF(data\camo\spetsodezhda.paa)
		};

		class DUBOK
		{
			label = "Dubok";
			description = "VSR-84 Dubok; also known as Butan";
			image = QPATHTOF(data\camo\dubok.paa)
		};
	};
};
