class CfgPatches {
    class anrop_fow_jsrs_weapons_m1903 {
        name = "anrop_fow_jsrs_weapons_m1903";
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
    class fow_rifleBolt_base;
    
    class fow_w_m1903A1 : fow_rifleBolt_base 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_springfield_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };
};
