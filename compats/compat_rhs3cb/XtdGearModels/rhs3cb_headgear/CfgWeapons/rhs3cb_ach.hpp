class rhs3cb_ach
{
    options[] = { "camo", "goggles", "headset", "nvgmount", "netting" };
    label="ACH";
    class camo
    {
        values[] = { "GRN", "Desert", "Semi-Arid", "TAN", "Woodland", "DCU", "DCU_ERL", "M81", "OEF-CP", "UCP" };
        alwaysSelectable=1;
        class M1942
        {
            description = "M1942 Frog Skin";
            //image = "";
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
