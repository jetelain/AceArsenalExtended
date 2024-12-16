class cup_gssh_01 {
	label="GSSh-01";
	author="Community Upgrade Project";
	options[]= { "camo", "microphone" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"DESPNK", "GRN" };

		class GRN 
		{
			image = "#(rgb,8,8,3)color(0.27,0.25,0.21,1)";
		};
	};

	class microphone
	{
		alwaysSelectable = 1;
		values[] = { "no", "yes" };
		label = CSTRING(Microphone);
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
