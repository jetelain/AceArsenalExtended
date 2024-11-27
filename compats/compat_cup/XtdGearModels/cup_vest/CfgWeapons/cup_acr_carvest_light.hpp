class cup_acr_carvest_light {
	label="ACR Car Vest [Light]";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		label = "Loadout";
		values[] = {"EMPTY", "KNIFE", "CREW", "ENGI", "MED"};
		class KNIFE
		{
			label = "Knife";
		};
	};
};
