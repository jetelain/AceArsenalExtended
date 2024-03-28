class cup_m92_helm {
	label="M92 Helmet";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "FLCK", "OLI", "RGR", "TAN", "TRPTRN" };
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes", "yes_cover", "yes_cover_back" };
	};
};
