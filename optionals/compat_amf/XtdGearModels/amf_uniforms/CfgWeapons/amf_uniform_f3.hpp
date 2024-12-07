class amf_uniform_f3
{
    options[] = { "camo", "gloves" }; // Always computed, do not edit
    label = "treillis F3";
    textureoptions[]={"rank","bloodtype","flag","glovescolor"};
	class camo : AMF_CamoBase
    {
        alwaysSelectable = 1;
        values[] = { "BME", "CE", "CEDA", "DADA", "MTP", "TUNDRA" }; // Always computed, do not edit
    };
    class gloves : GlovesBase
    {
        alwaysSelectable = 1;
        values[] = { "MX", "none" }; // Always computed, do not edit
    };
    class rank : AMF_RankBaseHV {
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
