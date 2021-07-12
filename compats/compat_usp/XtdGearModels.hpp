class XtdGearModels
{
	class CamoBase;
	class SleevesBase;
	class CfgWeapons
	{
		class USP_G3C
		{
			label = "Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "gloves", "sleeves", "collar", "kneepads","shoes"};
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class collar
			{
				label = "Collar";
				changeingame = 1;
				values[] = {"down", "up"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
			class sleeves //: SleevesBase
			{
				values[] = {"Full", "Quarter", "Half"};
			};
			class shoes
			{
				label = "Shoes";
				changeingame = 0;
				values[] = {"SL", "VQ","IST"};
			};
		};

		class USP_PCU_G3C
		{
			label = "PCU/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves"};
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class top //: CamoBase
			{
				values[] = {"BLK","GRY","MC","MCA","MCB","MCD","MCT"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
		};


		class USP_SOFTSHELL_G3C
		{
			label = "SoftShell/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves"};
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class top //: CamoBase
			{
				values[] = {"BLK","CBR","GRY","MC","RGR"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
		};


		class USP_OVERWHITE_G3C
		{
			label = "Overwhite/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "kneepads", "gloves"};
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
		};

		class USP_TSHIRT_G3C
		{
			label = "Tshirt/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves", "inside"};
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class top //: CamoBase
			{
				values[] = {"BLK","CBR","GRY","GRN","NAV"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
			class inside
			{
				label = "Tshirt inside pant";
				changeingame = 1;
				values[] = {"no", "yes"};
			};
		};


		class USP_CRYE_JPC
		{
			label = "Crye JPC";
			author = "UnderSiege Productions";
			options[] = {"camo", "loadout","belt"};
			class camo
			{
				values[] = {"MC","CBR","KHK","RGR"};
			};
			class loadout
			{
				values[] = {"none","ASLT","DM","GR","MG","TL","FS"};
			};
			class belt
			{
				values[] = {"no","yes"};
			};
		};

		class USP_CRYE_NCPC
		{
			label = "Crye NCPC";
			author = "UnderSiege Productions";
			options[] = {"camo", "loadout"};
			class camo
			{
				values[] = {"CBR","AOR1","AOR2","TGS","KTH","KTTY","M81"};
			};
			class loadout
			{
				values[] = {"none","ASLT","FAST"};
			};
		};

		
		class USP_CRYE_CPC
		{
			label = "Crye CPC";
			author = "UnderSiege Productions";
			options[] = {"camo", "loadout","belt"};
			class camo
			{
				values[] = {"CBR","AOR2","MC","MCA","MCB","MCD","MCT","RGR"};
			};
			class loadout
			{
				values[] = {"none","COMMS","FAST","LEAD","LIGHT","MEDIC","WEAPON"};
			};
			class belt
			{
				values[] = {"no","yes"};
			};
		};

		
		class USP_BASEBALL
		{
			label = "Baseball Cap";
			author = "UnderSiege Productions";
			options[] = {"camo", "light","eyewear","comms","side"};
			class camo
			{
				values[] = {"MC","ABU","AOR1","AOR2","ATACSAU","ATACSFG","ATACSIX","BLK","CBR","DCU","KHK","KTBANSHEE","KTHIGHLANDER","KTNEPTUNE","KTNOMAD","KTPONTUS","KTTYPHON","KTYETI","M81","MCA","MCB","MCD","MCT","MPW","MTP","OD","RGR","RT","RT2","RT3","RT4","RT5","RT6","RT7","TGR","TGRD","UCP","UCPD","US4CES", "PANTHERS"};
			};
			class light
			{
				values[] = {"none","FS","PT"};
			};
			class eyewear
			{
				values[] = {"none","GG","DC","SJ"};
			};
			class comms
			{
				values[] = {"none","BM","CT","CT3","CT3off"};
			};
			class side
			{
				values[] = {"front","back"};
			};
		};

		
		class USP_OPSCORE_FAST
		{
			label = "Ops-Core Fast MT";
			author = "UnderSiege Productions";
			options[] = {"camo", "comms","camera","goggles","light","counterweight"};
			class camo
			{
				values[] = {"TAN", "OD", "MC", "ABU", "AOR1", "AOR2", "CBR", "DCU", "FLECKTARN", "KTBANSHEE", "KTHIGHLANDER", "KTNEPTUNE", "KTNOMAD", "KTTYPHON", "KTYETI", "M81", "MCA", "MCD", "MCT", "RGR", "TGS", "TROPENTARN", "UCP"};
			};
			class comms
			{
				values[] = {"none","CT"};
			};
			class camera
			{
				values[] = {"none","CM"};
			};
			class goggles
			{
				values[] = {"none","GG"};
			};
			class light
			{
				values[] = {"none","SF","TL"};
			};
			class counterweight
			{
				values[] = {"none","CW"};
			};
		};

		class USP_AIRFRAME
		{
			label = "Crye AirFrame Helmet";
			author = "UnderSiege Productions";
			options[] = {"camo", "vlopt","camera","goggles","light","iropt","counterweight"};
			class camo
			{
				values[] = {"TAN","MC","MCD","OD"};
			};
			class vlopt
			{
				values[] = {"none","VL"};
			};
			class camera
			{
				values[] = {"none","CM"};
			};
			class goggles
			{
				values[] = {"none","GU"};
			};
			class light
			{
				values[] = {"none","SF","TL"};
			};
			class iropt
			{
				values[] = {"none","IR"};
			};
			class counterweight
			{
				values[] = {"none","CW"};
			};
		};


	};

};
