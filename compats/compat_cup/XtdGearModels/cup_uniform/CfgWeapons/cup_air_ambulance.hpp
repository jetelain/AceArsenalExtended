class cup_air_ambulance {
	label="Air Ambulance";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "ORN", "RED", "YLW" };

		class ORN
		{
			label = "Orange";
			image = "#(rgb,8,8,3)color(0.90,0.40,0.0,1)";
		};

		class RED
		{
			label = "Red";
			image = "#(rgb,8,8,3)color(0.65,0.13,0.12,1)";
		};

		class YLW
		{
			label = "Yellow";
			image = "#(rgb,8,8,3)color(0.91,0.90,0.06,1)";
		};
	};
};
