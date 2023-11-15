class SoundShader_Inv_Base
{
    volume = 0.5;
};

class SoundShader_InvOpen : SoundShader_Inv_Base
{
    samples[] = {{"CRDTN_Sounds\Data\sounds\inv_open", 1}};
};

class SoundShader_InvClose : SoundShader_Inv_Base
{
    samples[] = {{"CRDTN_Sounds\Data\sounds\inv_close", 1}};
};

class SoundShader_InvMove_Generic : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_generic_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_generic_2", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_generic_3", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_generic_4", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_generic_5", 1},
    };
};

class SoundShader_InvMove_Action : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_take_all", 1},
    };
};

class SoundShader_InvMove_Cloth : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_cloth_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_cloth_2", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_cloth_3", 1},
    };
};

class SoundShader_InvMove_BigItem : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_wpnbig_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_wpnbig_2", 1},
    };
};

// -------------------------------------------------
// Resources section - parts, materials etc...
// -------------------------------------------------

class SoundShader_InvMove_Parts : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_parts_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_parts_2", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_parts_3", 1},
    };
};

class SoundShader_InvMove_Key : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_key_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_key_2", 1},
    };
};

class SoundShader_InvMove_Coin : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_money_coin_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_money_coin_2", 1},
    };
};

class SoundShader_InvMove_Paper : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_money_paper", 1},
    };
};

// -------------------------------------------------
// Meds & Food section
// -------------------------------------------------

class SoundShader_InvMove_Pills : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_pills_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_pills_2", 1},
    };
};

class SoundShader_InvMove_Bottle : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_bottle_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_bottle_2", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_bottle_3", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_bottle_4", 1},
    };
};

// -------------------------------------------------
// Weaponry section
// -------------------------------------------------

class SoundShader_InvMove_Wpn : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_wpn_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_wpn_2", 1},
        {"CRDTN_Sounds\Data\sounds\weapons\generic_holster", 1}};
};

class SoundShader_InvMove_Grenade : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_grenade_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_grenade_2", 1},
    };
};

class SoundShader_InvMove_AmmoSound : SoundShader_Inv_Base
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_ammo_1", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_ammo_2", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_ammo_3", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_ammo_4", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_ammo_5", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_ammo_6", 1},
        {"CRDTN_Sounds\Data\sounds\Items\inv_items_ammo_7", 1}};
};