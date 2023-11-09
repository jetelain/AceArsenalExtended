class cup_acr_carvest {
	label="ACR Car Vest";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout
	{
		alwaysSelectable = 1;
		label = "Loadout";
		values[] = {"EMPTY", "GL", "MG", "MED", "MED_SMK", "RIFL", "TL"};
		class EMPTY
		{
			label = "Empty";
		};

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

		class MED_SMK
		{
			label = "Med/Smk";
			description = "Medic & Smoke Grenade";
		};

		class RIFL
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
};
