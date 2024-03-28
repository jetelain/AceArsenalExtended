class cup_ger_protvest {
	label="GER Prot Vest";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout", "backpouch" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "FLCK", "TRPTRN" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"GL", "MG", "MED", "OFC", "RIFL", "TL" };
	};

	class backpouch
	{
		alwaysSelectable = 1;
		label = "Back Pouch";
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
