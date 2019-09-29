class CfgPatches {
    class anrop_fow_jsrs_weapons_1911 {
        name = "anrop_fow_jsrs_weapons_1911";
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
    class Pistol_Base_F;
    
    class fow_w_m1911 : Pistol_Base_F 
    {
        drySound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\acpc_dry.ogg", 1.5, 1, 15};
        reloadMagazineSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\acpc_reload.ogg", 2, 1, 35};
        
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_acpc_shot_soundset", "jsrs_cal45_reverb_soundset"};
            };
        };
    };
};
