class cup_tac_gear_combo {
	label="Tac Gear Combo";
	author="Community Upgrade Project";
	options[]= { "shemagh", "beard", "oakley" };

	class shemagh : cup_shemagh_color
	{
		label = "Color";
		alwaysSelectable = 1;
		values[] = {"none", "GRN", "KHK", "WHT" };
	};

	class beard : cup_beard_color
    {
		alwaysSelectable=1;
        values[] = {"none", "BLK", "BLND" };
    };

	class oakley
	{
		label = "Oakley Glasses";
		alwaysSelectable=1;
		values[] = { "none", "DRK" };
		class DRK
		{
			label = "Dark";
			image = "#(rgb,8,8,3)color(0.15,0.16,0.15,1)";
		};
	};
};
