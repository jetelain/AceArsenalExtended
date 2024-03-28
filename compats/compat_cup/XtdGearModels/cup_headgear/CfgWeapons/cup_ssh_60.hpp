class cup_ssh_60 {
	label="SSh-60";
	author="Community Upgrade Project";
	options[]= { "camo", "worn" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "NET", "DES", "GRY", "OLI" };
		class NET
		{
			label = "Netting";
			image = QPATHTOF(data\camo\taki\ssh_60_netting.paa)
		};

		class DES
		{
			label = "Desert";
			image = "#(rgb,8,8,3)color(0.40,0.37,0.31,1)";
		};

		class OLI
		{
			image = "#(rgb,8,8,3)color(0.26,0.28,0.24,1)";
		};

	};

	class worn
	{
		alwaysSelectable = 1;
		label = "Worn";
		values[] = {"no", "yes" };
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
	};
};
