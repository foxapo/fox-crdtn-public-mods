modded class CRDTN_Creature_Minion
{
    CRDTN_Creature_PhantomBase m_Alfa;
    
    void SetAlfa(CRDTN_Creature_PhantomBase parent)
    {
        m_Alfa = parent;
    }

    override void EEKilled(Object killer)
    {
        super.EEKilled(killer);
        m_Alfa.OnMinionKilled(this);
    }

    override void EEDelete(EntityAI parent)
    {
        super.EEDelete(parent);
        GetGame().CreateObject("CRDTN_FX_Phantom_Despawn", GetPosition(), false);
    }
};