class CRDTN_Creature_Minion : AnimalBase
{
       
    override void EEInit()
    {
        super.EEInit();
        GetGame().CreateObject("CRDTN_FX_Phantom_Despawn", GetPosition(), false);
    }

    override bool CanBeSkinned()
    {
        return false;
    }

};

class CRDTN_Creature_Minion_Grey : CRDTN_Creature_Minion {};
class CRDTN_Creature_Minion_White : CRDTN_Creature_Minion {};