class CfgPatches {
    class anrop_fow_jsrs_weapons_m1919 {
        name = "anrop_fow_jsrs_weapons_m1919";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"fow_weapons_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "fow_weapons_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_FullAuto;

class CfgWeapons 
{
    class fow_rifle_base;
    
    class fow_w_m1919: fow_rifle_base 
    {
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_browning_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };

    class MGun;

    class fow_w_m1919a4_mounted: MGun
    {
        class manual: MGun
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_browning_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};
