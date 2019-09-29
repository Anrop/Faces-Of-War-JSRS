class CfgPatches {
    class anrop_fow_jsrs_weapons_bren {
        name = "anrop_fow_jsrs_weapons_bren";
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
    
    class fow_w_bren: fow_rifle_base 
    {
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_brenmk2_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };

    class HMG_M2;
    class MGun;

    class fow_w_bren_mounted: HMG_M2
    {
        class manual: MGun
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_brenmk2_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};
