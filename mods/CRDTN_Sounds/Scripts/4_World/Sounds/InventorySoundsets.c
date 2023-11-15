class InventorySoundsets
{
    static const string SOUNDSET_GENERIC = "SoundSet_InvMove_Generic";
    static const string SOUNDSET_CLOTH = "SoundSet_InvMove_Cloth";
    static const string SOUNDSET_ACTION = "SoundSet_InvMove_Action";
    static const string SOUNDSET_PARTS = "SoundSet_InvMove_Parts";
    static const string SOUNDSET_KEY = "SoundSet_InvMove_Key";
    static const string SOUNDSET_COIN = "SoundSet_InvMove_Coin";
    static const string SOUNDSET_PAPER = "SoundSet_InvMove_Paper";
    static const string SOUNDSET_PILLS = "SoundSet_InvMove_Pills";
    static const string SOUNDSET_BOTTLE = "SoundSet_InvMove_Bottle";
    static const string SOUNDSET_WPN = "SoundSet_InvMove_Wpn";
    static const string SOUNDSET_GRENADE = "SoundSet_InvMove_Grenade";
    static const string SOUNDSET_AMMOSOUND = "SoundSet_InvMove_AmmoSound";
    static const string SOUNDSET_BIGITEM = "SoundSet_InvMove_BigItem";

    static string GetSoundSet(ItemBase item)
    {
        if(!item)
        {
            return "";
        }

        if (item.IsClothing())
        {
            return SOUNDSET_CLOTH;
        }

        if (item.IsFood())
        {
            return SOUNDSET_PAPER;
        }

        if (item.IsAnyInherited(CRDTN_ItemTypes.MED_PILLS))
        {
            return SOUNDSET_PILLS;
        }

        if (item.IsAmmoPile() || item.IsMagazine())
        {
            return SOUNDSET_AMMOSOUND;
        }

        if (item.IsWeapon())
        {
            return SOUNDSET_WPN;
        }

        if (item.IsInherited(Bottle_Base) || item.IsLiquidContainer())
        {
            return SOUNDSET_BOTTLE;
        }

        if (item.IsExplosive())
        {
            if (item.IsInherited(Plastic_Explosive))
            {
                return SOUNDSET_PARTS;
            }

            return SOUNDSET_GRENADE;
        }

        if (item.IsNVG())
        {
            return SOUNDSET_PARTS;
        }

        if (item.IsAnyInherited(CRDTN_ItemTypes.WEAPON_PARTS))
        {
            return SOUNDSET_PILLS;
        }

        if (item.IsAnyInherited(CRDTN_ItemTypes.CONSTRUCTION))
        {
            return SOUNDSET_BIGITEM;
        }

        return SOUNDSET_GENERIC;
    }
}