class CfgPatches {
    class anrop_fow_jsrs_weapons_mp40 {
        name = "anrop_fow_jsrs_weapons_mp40";
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
    
    class fow_w_mp40: fow_rifle_base 
    {
        class Full: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mp40_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };
};
