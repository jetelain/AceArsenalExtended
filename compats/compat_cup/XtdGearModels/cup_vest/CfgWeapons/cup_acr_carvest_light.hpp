class cup_acr_carvest_light {
	label="ACR Car Vest [Light]";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout
	{
		alwaysSelectable = 1;
		label = "Loadout";
		values[] = {"EMPTY", "KNIFE", "CREW", "ENGI", "MED"};
		class EMPTY
		{
			label = "Empty";
		};

		class KNIFE
		{
			label = "Knife";
		};

		class CREW
		{
			label = "Crew";
			description = "Crewman";
		};

		class ENGI
		{
			label = "Engi";
			description = "Engineer";
		};

		class MED
		{
			label = "Medic";
		};
	};
};
