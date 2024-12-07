class cup_beard {
	label="Beard";
	author="Community Upgrade Project";
	options[]= { "color" };

	class color : cup_beard_color
	{
		label = "Color";
		alwaysSelectable = 1;
		values[] = {"BLK", "BLND", "BRN" };
	};
};
