class cup_zsh_1 {
	label="ZSh-1 Helmet";
	author="Community Upgrade Project";
	options[]= { "goggles" };

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes" };
	};
};
