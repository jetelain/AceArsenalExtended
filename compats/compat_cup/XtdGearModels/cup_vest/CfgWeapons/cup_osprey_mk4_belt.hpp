class cup_osprey_mk4_belt {
	label="Osprey Mk4 Belt";
	author="Community Upgrade Project";
	options[]= { "loadout" };
	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"BELT", "WEB" };
		
		class BELT
		{
			label = "Belt";
		};

		class WEB
		{
			label = "Webbing";
		};
	};

};
