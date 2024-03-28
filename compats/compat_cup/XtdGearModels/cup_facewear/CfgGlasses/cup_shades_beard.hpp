class cup_shades_beard {
	label="Shades/Beard";
	author="Community Upgrade Project";
	options[]= { "beard" };

	class beard : cup_beard_color
    {
		alwaysSelectable=1;
        values[] = { "BLK", "BLND" };
    };

	class gps
	{
		label = "Wrist GPS";

		values[] = { "no", "yes" };
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
