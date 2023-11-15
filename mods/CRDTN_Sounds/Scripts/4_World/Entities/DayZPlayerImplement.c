  /// @brief inspired class by AimSounds mod
//! USES CODE FROM AimSounds MOD - https://steamcommunity.com/sharedfiles/filedetails/?id=2550932214&searchtext=AimSounds !/
modded class DayZPlayerImplement extends DayZPlayer
{

    protected bool m_AS_IsSoundSynchServer;
    protected bool m_AS_IsSoundSynchClient;
    protected bool m_AS_IsDebug = false;

    void DayZPlayerImplement()
    {
        RegisterNetSyncVariableBool("m_AS_IsSoundSynchServer");
    }

    override void OnVariablesSynchronized()
    {
        super.OnVariablesSynchronized();
        if (AS_ShouldPlaySound() && m_Initialized)
        {
            m_AS_IsSoundSynchClient = m_AS_IsSoundSynchServer;

            bool exit;
            if (m_IsFireWeaponRaised)
            {
                exit = false;
            }
            else if (!m_IsFireWeaponRaised)
            {
                exit = true;
            }

            Weapon_Base weapon;
            if (!Class.CastTo(weapon, GetHumanInventory().GetEntityInHands()))
            {
                return;
            }

            PlayAimSound(weapon, exit);
        }
    }

    override void HandleWeapons(float pDt, Entity pInHands, HumanInputController pInputs, out bool pExitIronSights)
    {
        super.HandleWeapons(pDt, pInHands, pInputs, pExitIronSights);

        Weapon_Base weapon;
        if (!Class.CastTo(weapon, pInHands))
            return;

        if (m_IsFireWeaponRaised && !m_RaiseStarted)  // enter
        {
            SendAimSound(weapon, false);
        }
        else if (!m_IsFireWeaponRaised && m_RaiseStarted)  // exit
        {
            SendAimSound(weapon, true);
        }
    }

    void SendAimSound(Weapon_Base weapon, bool exit)
    {
        AS_SoundSynch();
    }

    protected void PlayAimSound(Weapon_Base weapon, bool exit)
    {
        if (GetGame().IsServer() && GetGame().IsMultiplayer())
            return;

        string sound_set = GetAimSoundSet(weapon, exit);

        EffectSound sound;
        PlaySoundSet(sound, sound_set, 0, 0);
        sound.SetSoundAutodestroy(true);
        sound.SetSoundVolume(1);
    }

    protected string GetAimSoundSet(Weapon_Base weapon, bool exit)
    {
        string sound_set;

        if (!weapon)
        {
            if (exit)
                return CRDTN_AIM_DEFAULT_SOUNDSET + CRDTN_AIM_SOUNDSET_OUT;
            else
                return CRDTN_AIM_DEFAULT_SOUNDSET + CRDTN_AIM_SOUNDSET_IN;
        }

        sound_set = weapon.ConfigGetString(CRDTN_AIM_CONFIG_ENTRY);

          // Fallback - predict sound set
        if (!sound_set || sound_set.Length() == 0)
            sound_set = PredictAimSoundSet(weapon);

        if (exit)
            return sound_set + CRDTN_AIM_SOUNDSET_OUT;
        else
            return sound_set + CRDTN_AIM_SOUNDSET_IN;
    }

    protected string PredictAimSoundSet(Weapon_Base weapon)
    {
        if (!weapon)
            return CRDTN_AIM_DEFAULT_SOUNDSET;

        if (weapon.IsInherited(Pistol_Base) || weapon.IsInherited(Magnum_Base))
            return "FNX45";

        if (weapon.IsInherited(BoltActionRifle_InnerMagazine_Base))
            return "Mosin";

        if (weapon.IsInherited(BoltActionRifle_Base) || weapon.IsInherited(DoubleBarrel_Base))
            return "CR527";

        string cartridge_type = weapon.GetChamberAmmoTypeName(weapon.GetCurrentMuzzle());

        if (cartridge_type.Contains("12ga"))
            return "Saiga";

        if (cartridge_type.Contains("762x54") || cartridge_type.Contains("308Win"))
            return "SVD";

        if (cartridge_type.Contains("Ammo_380"))
            return "CZ61";

        if (cartridge_type.Contains("9x39"))
            return "VSS";

        return CRDTN_AIM_DEFAULT_SOUNDSET;
    }

    void AS_SoundSynch()
    {
        m_AS_IsSoundSynchServer = !m_AS_IsSoundSynchServer;
        SetSynchDirty();
    }

    bool AS_ShouldPlaySound()
	{
		return m_AS_IsSoundSynchClient != m_AS_IsSoundSynchServer;
	}
}