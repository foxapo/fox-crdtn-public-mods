modded class ItemBase
{
    EffectSound sound = NULL;

    override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
    {
        super.EEItemLocationChanged(oldLoc, newLoc);

        if (GetGame().IsServer())
        {
            return;
        }

        if (!oldLoc || !newLoc)
        {
            return;
        }

        if (oldLoc.GetType() == InventoryLocationType.UNKNOWN || newLoc.GetType() == InventoryLocationType.UNKNOWN)
        {
            return;
        }

        if (GetGame().GetPlayer() && vector.Distance(GetPosition(), GetGame().GetPlayer().GetPosition()) > 15)
        {
			return;
		}

        SEffectManager.PlaySoundOnObject(InventorySoundsets.GetSoundSet(this), GetGame().GetPlayer());

        // Previous implementation - not sure if it's better or worse
        // string soundset = InventorySoundsets.GetSoundSet(this);
        // sound = SEffectManager.CreateSound(soundset, GetGame().GetPlayer());
        // if (!sound)
        // {
        //     return;
        // }
        // sound.SetSoundAutodestroy(true);
        // sound.SoundPlay();
    }
};