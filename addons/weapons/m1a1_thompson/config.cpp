class CfgPatches {
    class anrop_fow_jsrs_weapons_m1a1_thompson {
        name = "anrop_fow_jsrs_weapons_m1a1_thompson";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"fow_weapons_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "fow_weapons_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons 
{
    class fow_rifle_base;
    
    class fow_w_m1a1_thompson : fow_rifle_base
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_thompson_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
        class Full: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_thompson_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
        class Burst_AI: Mode_Burst
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_thompson_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };
};
