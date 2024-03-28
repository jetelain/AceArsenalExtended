class cup_acr_carvest {
	label="ACR Car Vest";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		label = "Loadout";
		values[] = {"EMPTY", "GL", "MG", "MED", "MED_SMK", "RIFL", "TL"};
		class MED_SMK
		{
			label = "Med/Smk";
			description = "Medic & Smoke Grenade";
		};
	};
};
