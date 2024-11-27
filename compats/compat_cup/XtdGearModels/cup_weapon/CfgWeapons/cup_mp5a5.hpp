class cup_mp5a5
{
    options[] = { "attachsys", "grip" };
    label = "MP5A5";
    class attachsys : cup_attachsys
    {
        values[] = { "picatinny", "ris" };
        alwaysSelectable=1;
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical", "angled" };
        alwaysSelectable=1;

    };

};
