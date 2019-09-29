class CfgPatches {
    class anrop_fow_jsrs_weapons_mg34 {
        name = "anrop_fow_jsrs_weapons_mg34";
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
class Mode_FullAuto;

class CfgWeapons 
{
    class fow_rifle_base;
    
    class fow_w_mg34 : fow_rifle_base 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_mg34_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_mg34_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};
