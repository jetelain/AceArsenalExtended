class cup_sla_coveralls {
	label="SLA Overalls";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "Tanker", "Pilot" };
		class Tanker
		{
			label = "Tanker";
			image = "#(rgb,8,8,3)color(0.08,0.07,0.08,1)";
		};

		class Pilot
		{
			label = "Pilot";
			image = "#(rgb,8,8,3)color(0.06,0.15,0.24,1)";
		};
	};
};
