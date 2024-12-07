class cup_ger_unif {
	label="German Uniform";
	author="Community Upgrade Project";
	options[]= { "camo", "sleeves", "gloves", "kneepad" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "FLCK", "TRPTRN" };
	};
	class sleeves
	{
		alwaysSelectable = 1;
		values[]={ "Full", "Quarter", };
	};
	class gloves
	{
		label="Gloves";
		alwaysSelectable = 1;
		values[] = {"no", "yes"};
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
	};

	class kneepad
	{
		label="Kneepad";
		alwaysSelectable = 1;
		values[] = {"no", "yes"};
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
