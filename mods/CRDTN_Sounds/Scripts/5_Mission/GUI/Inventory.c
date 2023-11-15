modded class Inventory
{
    override void OnHide()
    {
        super.OnHide();
        if (GetGame().IsClient())
        {
            PlaySound(CRDTN_SOUND_INV_CLOSE);
        }
    }

    override void OnShow()
    {
        super.OnShow();
        if (GetGame().IsClient())
        {
            PlaySound(CRDTN_SOUND_INV_CLOSE);
        }
    }

    void PlaySound(string soundset)
    {
        // Check the mission
        Mission mission = GetGame().GetMission();
        if (!mission)
        {
            return;
        }

        // Check the hud
        IngameHud thishud = IngameHud.Cast(mission.GetHud());
        if (!thishud)
        {
            return;
        }

        // Create a sound
        EffectSound sound = SEffectManager.CreateSound(soundset, GetGame().GetPlayer().GetPosition());
        if (!sound)
        {
            return;
        }

        sound.SetSoundAutodestroy(true);
        sound.SoundPlay();
    }
}