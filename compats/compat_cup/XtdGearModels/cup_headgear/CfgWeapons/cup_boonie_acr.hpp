class cup_boonie_acr {
	label="Boonie [ACR]";
	author="Community Upgrade Project";
	options[]= { "camo", "fold" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = {"VZ95", "VZ85_DES" };
	};

	class fold
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = "Folded";
		values[] = {"no", "yes" };
		class no
		{
			label = CSTRING(No);
			actionLabel = "Unfold Boonie";
		};

		class yes
		{
			label = CSTRING(Yes);
			actionLabel = "Fold Boonie";
		};
	};
};
