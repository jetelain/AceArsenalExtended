class rhs_ach
{
    options[] = { "camo", "goggles", "headset", "nvgmount", "netting" };
    label="ACH";
    class camo
    {
        values[] = { "GRN", "Desert", "SemiArid", "TAN", "Woodland", "DCP", "DCP_ERL", "M81", "OEF_CP", "UCP" };
        alwaysSelectable=1;

        class DCP_ERL
	    {
            label = "DCP (Early)";
            description = "Desert Camouflage Pattern; AKA 3-Color Desert or Coffee Stain Camouflage";
            image = "z\aceax\compats\RHS\data\camo\dcp_early.paa";
	    };
        
        class Desert
	    {
            label = "Desert";
            image = "z\aceax\compats\RHS\data\camo\des_ach.paa";
	    };

        class SemiArid
        {
            label = "Semi-Arid";
            image = "z\aceax\compats\RHS\data\camo\semi_arid.paa";
        };

        class Woodland
	    {
            label = "Woodland";
            image = "z\aceax\compats\RHS\data\camo\wdl_ach.paa";
	    };
    };

    class goggles
    {
        label = "Goggles";
        values[] = { "None", "ESS" };
        alwaysSelectable=1;
    };

    class headset
    {
        label = "Headset";
        values[] = { "No", "Yes" };
        alwaysSelectable=1;
    };

    class nvgmount
    {
        values[] = { "None", "RhinoB", "RhinoT", "Norotos" };
        alwaysSelectable=1;
        class RhinoB
        {
            label = "Rhino B.";
            description = "Rhino Black";
        };
        class RhinoT
        {
            label = "Rhino T.";
            description = "Rhino Tan";
        };
    };
    class netting
    {
        label = "Netting";
        values[] = { "No", "Yes" };
        alwaysSelectable=1;
    };
};
