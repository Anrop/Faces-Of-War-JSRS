class CfgPatches {
    class anrop_fow_jsrs_weapons_m1_carbine {
        name = "anrop_fow_jsrs_weapons_m1_carbine";
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

class CfgWeapons 
{
    class fow_rifle_base;
    
    class fow_w_m1_carbine : fow_rifle_base 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m1carbine_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
    };
};
