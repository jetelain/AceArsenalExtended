class cup_zsh_7 {
	label="ZSh-7";
	author="Community Upgrade Project";
	options[]= { "visor" };

	class visor
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = "Visor";
		values[] = {"down", "up" };
		class down
		{
			label = "Down";
			actionLabel = "Flip Visor Down";
		};

		class up
		{
			label = "Up";
			actionLabel = "Flip Visor Up";
		};
	};
};
