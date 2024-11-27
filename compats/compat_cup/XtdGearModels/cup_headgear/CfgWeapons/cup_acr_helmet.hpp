class cup_acr_helmet {
	label="Combat Helmet [ACR]";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = {"VZ95", "VZ85_DES" };
	};
	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes"};
	};
};
