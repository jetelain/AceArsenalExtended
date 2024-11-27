class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem : InventoryItem_Base_F
    {
        allowedSlots[]={901, 605};
        type=605;
        hiddenSelections[]={};
        hitpointName="HitHead";
    };

	class CUP_H_CZ_Patrol_Cap_Des : ItemCore
    {
        author="Pet Mudstone";
        scope=2;
        displayName="Patrol Cap ACR Des";
        picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\UI\ikona_ACR_patrolcap.paa";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ACR_cappatrol_des_co.paa"};
        model="\A3\Characters_F\Common\cappatrol";
        class ItemInfo : HeadgearItem
        {
            mass=6;
            allowedSlots[]={901, 701, 605};
            uniformModel="\A3\Characters_F\Common\cappatrol.p3d";
            modelSides[]={6};
            hiddenSelections[]={"camo"};
            hiddenSelectionsTextures[]={"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ACR_cappatrol_des_co.paa"};
        };
    };
};
