class CRDTN_FX_Phantom_Spawn : House
{
	Particle m_Effect;

	void CRDTN_FX_Phantom_Spawn()
	{
		if (GetGame().IsClient())
		{
			PlayParticleFX();
		}
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(RemoveOnServer, 3000, false);
	};

	override bool IsValidEntity()
	{
		bool state = super.IsValidEntity();
		if (!state)
		{
			return false;
		}

		if (IsInherited(CRDTN_FX_Phantom_Spawn))
		{
			return false;
		}

		return true;
	}

	void ~CRDTN_FX_Phantom_Spawn()
	{
		if (GetGame().IsClient())
		{
			if (m_Effect)
				m_Effect.Stop();
		};
	};

	override bool IsInventoryVisible()
	{
		return false;
	};

	void RemoveOnServer()
	{
		if (GetGame().IsServer())
		{
			GetGame().ObjectDelete(this);
			GetGame().ObjectDeleteOnClient(this);
		};
	};

	void PlayParticleFX()
	{
		m_Effect = Particle.PlayOnObject(ParticleList.PHANTOM_DESPAWN_PTC, this, "0 0.5 0"); //dontobf
	};
};
