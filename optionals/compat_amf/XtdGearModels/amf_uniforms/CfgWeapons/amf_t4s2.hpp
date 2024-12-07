class amf_t4s2
{
    options[] = { "camo", "gloves" }; // Always computed, do not edit
    label = "treillis T4S2";
    author = "Arma Mod France";
    textureoptions[]={"rank","bloodtype","flag","glovescolor"};
    class camo : AMF_CamoBase
    {
        alwaysSelectable = 1;
        values[] = { "CE", "CEDA", "DADA" }; // Always computed, do not edit
    };
    class gloves : GlovesBase
    {
        alwaysSelectable = 1;
        values[] = { "MX", "none" }; // Always computed, do not edit
    };
    class rank : AMF_RankBaseBV {
        hiddenselection = "grade";
    };
    class bloodtype : BloodTypeBase {
        hiddenselection = "sang";
    };
    class flag : FlagBase {
        hiddenselection = "drapeau";
    };
    class glovescolor : GlovesColorBase {};
};
