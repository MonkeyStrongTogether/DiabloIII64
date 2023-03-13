#include <cstdint>
#include "../Enums/GameOptions.h"

class cVideo
{
public:
    int32_t         PreferencesVersion;             //0x0000
    int8_t          PlayedCutscene0;                //0x0004
    int8_t          PlayedCutscene1;                //0x0005
    int8_t          PlayedCutscene2;                //0x0006
    int8_t          PlayedCutscene3;                //0x0007
    int32_t         PlayedCutscene4;                //0x0008
    int32_t         Vsync;                          //0x000C
    eTexture        MipOffset;                      //0x0010
    eShadow         ShadowQuality;                  //0x0014
    int32_t         DisplayModeFlags;               //0x0018
    eDisplay        DisplayWindowMode;              //0x001C
    int32_t         DisplayModeWinLeft;             //0x0020
    int32_t         DisplayModeWinTop;              //0x0024
    int32_t         DisplayModeWinWidth;            //0x0028
    int32_t         DisplayModeWinHeight;           //0x002C
    int32_t         DisplayModeUIOptWidth;          //0x0030
    int32_t         DisplayModeUIOptHeight;         //0x0034
    int32_t         DisplayModeWidth;               //0x0038
    int32_t         DisplayModeHeight;              //0x003C
    int32_t         DisplayModeRefreshRate;         //0x0040
    int32_t         DisplayModeBitDepth;            //0x0044
    int32_t         DisplayModeMSAALevel;           //0x0048
    int32_t         LargeCursor;                    //0x004C
    float           Gamma;                          //0x0050
    eClusterDensity ClutterQuality;                 //0x0054
    ePhysics        PhysicsQuality;                 //0x0058
    int32_t         ShadowDetail;                   //0x005C
    int32_t         Letterbox;                      //0x0060
    eAntiAliasing   Antialiasing;                   //0x0064
    int32_t         LowFX;                          //0x0068
    int32_t         SSAO;                           //0x006C
    int32_t         LockCursorInFullscreenWindowed; //0x0070
    int32_t         DisableScreenShake;             //0x0074
    int32_t         DisableChromaEffects;           //0x0078
    int32_t         LimitForegroundFPS;             //0x007C
    int32_t         MaxForegroundFPS;               //0x0080
    int32_t         LimitBackgroundFPS;             //0x0084
    int32_t         MaxBackgroundFPS;               //0x0088
    int32_t         ReflectionQuality;              //0x008C
    int32_t         DisableTrilinearFiltering;      //0x0090
    int32_t         ColorCorrection;                //0x0094
    float           MipBias;                        //0x0098
    int32_t         HardwareClass;                  //0x009C
    int32_t         PCIVendor;                      //0x00A0
    int32_t         PCIDevice;                      //0x00A4
}; //Size: 0x00A8
static_assert(sizeof(cVideo) == 0xA8);
class cSound
{
public:
    int32_t         Unk00;                          //0x0000
    float           MasterVolume;                   //0x0004
    float           EffectVolume;                   //0x0008
    float           MusicVolume;                    //0x000C
    float           VoiceVolume;                    //0x0010
    float           AmbientVolume;                  //0x0014
    float           Unk01;                          //0x0018
    eSoundChannels  SoundChannels;                  //0x001C
    uint32_t        SoundDriver;                    //0x0020
    eSpeakerSetup   SpeakerSetup;                   //0x0024
    int32_t         ReverseSpeakers;                //0x0028
    int32_t         QuestSubtitlesEnabled;          //0x002C
    int32_t         CinematicsSubtitlesEnabled;     //0x0030
    int32_t         MuteSound :                     //0x0034
    int32_t         Unk02;                          //0x0038
    int32_t         MuteMusic;                      //0x003C
    int32_t         Unk03;                          //0x0040
    int32_t         Unk04;                          //0x0044
    int32_t         Unk05;                          //0x0048
    int32_t         PlayInBackground;               //0x004C
    int32_t         Unk06;                          //0x0050
}; //Size: 0x0054
static_assert(sizeof(cSound) == 0x54);
class cHotKey
{
public:
    eHotKey         Primary;                        //0x0000
    eModKey         PrimaryModifier;                //0x0004
    eHotKey         Secondary;                      //0x0008
    eModKey         SecondaryModifier;              //0x000C
}; //Size: 0x0010
static_assert(sizeof(cHotKey) == 0x10);
class cHotKeys : public cHotKey
{
public:
    cHotKey         ToggleFollowerMenu;             //0x0010
    cHotKey         ToggleSkillsMenu;               //0x0020
    cHotKey         ToggleQuestsMenu;               //0x0030
    cHotKey         ToggleJournalMenu;              //0x0040
    cHotKey         ToggleLeaderboards;             //0x0050
    cHotKey         ToggleFriendList;               //0x0060
    cHotKey         ToggleSocialCommunitiesList;    //0x0070
    cHotKey         ToggleClanPage;                 //0x0080
    cHotKey         Collection;                     //0x0090
    cHotKey         ToggleWorldMap;                 //0x00A0
    cHotKey         Unk00;                          //0x00B0
    cHotKey         Unk01;                          //0x00C0
    cHotKey         Unk02;                          //0x00D0
    cHotKey         ToggleAchievements;             //0x00E0
    cHotKey         ToggleProfile;                  //0x00F0
    cHotKey         Unk03;                          //0x0100
    cHotKey         Unk04;                          //0x0110
    cHotKey         CloseAllOpenWindows;            //0x0120
    cHotKey         Unk05;                          //0x0130
    cHotKey         ToggleMap;                      //0x0140
    cHotKey         Unk06;                          //0x0150
    cHotKey         ShowMonsterHealthBars;          //0x0160
    cHotKey         ShowPlayerHealthBars;           //0x0170
    cHotKey         Unk07;                          //0x0180
    cHotKey         ShowItemsOnGround;              //0x0190
    cHotKey         ReWhisper;                      //0x01A0
    cHotKey         ReplyToLastWhisper;             //0x01B0
    cHotKey         Unk08;                          //0x01C0
    cHotKey         PageDownChat;                   //0x01D0
    cHotKey         PageUpChat;                     //0x01E0
    cHotKey         NextChatView;                   //0x01F0
    cHotKey         PreviousChatView;               //0x0200
    cHotKey         ResetChatFade;                  //0x0210
    cHotKey         ActionBarSkill1;                //0x0220
    cHotKey         ActionBarSkill2;                //0x0230
    cHotKey         ActionBarSkill4;                //0x0240
    cHotKey         ActionBarSkill4;                //0x0250
    cHotKey         PotionButton;                   //0x0260
    cHotKey         Banner;                         //0x0270
    cHotKey         ToggleZoom;                     //0x0280
    cHotKey         Follow;                         //0x0290
    cHotKey         Give;                           //0x02A0
    cHotKey         Thanks;                         //0x02B0
    cHotKey         Sorry;                          //0x02C0
    cHotKey         Bye;                            //0x02D0
    cHotKey         Die;                            //0x02E0
    cHotKey         Run;                            //0x02F0
    cHotKey         Wait;                           //0x0300
    cHotKey         Go;                             //0x0310
    cHotKey         Help;                           //0x0320
    cHotKey         Yes;                            //0x0330
    cHotKey         No;                             //0x0340
    cHotKey         StayThere;                      //0x0350
    cHotKey         Attack;                         //0x0360
    cHotKey         Retreat;                        //0x0370
    cHotKey         Hold;                           //0x0380
    cHotKey         TakeObjective;                  //0x0390
    cHotKey         Unk09;                          //0x03A0
    cHotKey         ForceStandStill;                //0x03B0
    cHotKey         MasterVolumeUp;                 //0x03C0
    cHotKey         MasterVolumeDown;               //0x03D0
    cHotKey         ToggleSound;                    //0x03E0
    cHotKey         ToggleMusic;                    //0x03F0
    cHotKey         ToggleFrameRateDisplay;         //0x0400
    cHotKey         TakeScreenshot;                 //0x0410
    cHotKey         TownPortal;                     //0x0420
    cHotKey         ForceMove;                      //0x0430
    cHotKey         Paragon;                        //0x0440
    cHotKey         ToggleSeasonJourney;            //0x0450
    cHotKey         ShowBuffHolder;                 //0x0460
    cHotKey         HideUI;                         //0x0470
}; //Size: 0x0480
static_assert(sizeof(cHotKeys) == 0x480);
class cGamePlay
{
public:
    eItemLabelDisplay ItemLabelDisplay;                 //0x0000
    int32_t         ShowIconsForDroppedItems;           //0x0004
    int32_t         AlwaysShowItemLabelsOnDrop;         //0x0008
    int32_t         DisplayMonsterHealthBars;           //0x000C
    int32_t         DisplayPlayerHealthBars;            //0x0010
    int32_t         Unk00;                              //0x0014
    int32_t         DisplayPlayerNames;                 //0x0018
    int32_t         DisplayDamageNumbers;               //0x001C
    int32_t         DisplayHealingNumbers;              //0x0020
    int32_t         DisplayHealthBarNumbers;            //0x0024
    int32_t         DisplayCriticalDamageNumbers;       //0x0028
    int32_t         DisplayDefensiveMessages;           //0x002C
    int32_t         ZoomWhenYourInventoryIsOpen;        //0x0030
    int32_t         AutoEquipItems;                     //0x0034
    int32_t         ShowTutorials;                      //0x0038
    int32_t         Unk01;                              //0x003C
    int32_t         ShowClock;                          //0x0040
    int32_t         ShowAdvancedTooltips;               //0x0044
    int32_t         ElectiveMode;                       //0x0048
    int32_t         AutomaticallySkipAllCutScences;     //0x004C
    int32_t         RarityIconsForItems;                //0x0050
    int32_t         DisplayLongFloatingCombatNumbers;   //0x0054
    int32_t         Unk02;                              //0x0058
    int32_t         Unk03;                              //0x005C
    int32_t         Unk04;                              //0x0060
    int32_t         Unk05;                              //0x0064
}; //Size: 0x0068
static_assert(sizeof(cGamePlay) == 0x68);
class cSocial
{
public:
    int32_t         FriendsComeOnline;              //0x0000
    int32_t         FriendsGoOffline;               //0x0004
    int32_t         FriendsRequests;                //0x0008
    int32_t         FriendsEarnAnAchievement;       //0x000C
    int32_t         ShowToastWindows;               //0x0010
    eToastDuration  ToastDuration;                  //0x0014
    int32_t         EnableQuickJoin;                //0x0018
    int32_t         Unk00;                          //0x001C
    int32_t         FriendsBroadcast;               //0x0020
    int32_t         EnablePlayersNearYou;           //0x0024
    int32_t         ClanMemberComeOnline;           //0x0028
    int32_t         ClanMemberEarnsAnAchievement;   //0x002C
    int32_t         Unk01;                          //0x0030
}; //Size: 0x0034
static_assert(sizeof(cSocial) == 0x34);
class cChat
{
public:
    int32_t         MatureLanagueFilter;            //0x0000
    int32_t         ShowQuestDialogInChat;          //0x0004
}; //Size: 0x0008
static_assert(sizeof(cChat) == 0x8);
class cGameOtions : public cVideo
{
public:
    cSound           Sound;                         //0x00A8
    cHotKeys         HotKeys;                       //0x00FC
    cGamePlay        GamePlay;                      //0x057C
    cSocial          Social;                        //0x05E4
    cChat            Chat;                          //0x0618
}; //Size: 0x0620
static_assert(sizeof(cGameOtions) == 0x620);