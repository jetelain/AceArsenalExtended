class cup_ger_protvest {
	label="GER Prot Vest";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout", "backpouch" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "FLCK", "TRPTRN" };
	};

	class loadout
	{
		alwaysSelectable = 1;
		values[] = {"GL", "MG", "MED", "OFC", "RFL", "TL" };
		class GL
		{
			label = "GL";
			description = "Grenadier";
		};

		class MG
		{
			label = "MG";
			description = "Machine Gun";
		};

		class MED
		{
			label = "Medic";
		};

		class OFC
		{
			label = "Officer";
		};

		class RFL
		{
			label = "Rifle";
			description = "Rifleman";
		};

		class TL
		{
			label = "TL";
			description = "Team Leader";
		};
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
