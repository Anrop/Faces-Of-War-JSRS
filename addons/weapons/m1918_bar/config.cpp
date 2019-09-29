class CfgPatches {
    class anrop_fow_jsrs_weapons_m1918_bar {
        name = "anrop_fow_jsrs_weapons_m1918_bar";
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

    class fow_w_m1918a2: fow_rifle_base 
    {
        class FullAuto_300: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_bar_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class FullAuto_650: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_bar_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};
