#include "Heap.h"
#include "../Enums/GameStates.h"
#include <cstdint>

struct cUIAnimation
{
public:
    float           RenderTick;         //0x0000
    float           FrameTime;          //0x0004
}; //Size: 0x0008
static_assert(sizeof(cUIAnimation) == 0x8);
//MemoryManager -> FirstNode + OBJECT_MANAGER
struct cObjectManager
{
public:
    cHeapNode       HeapNode;           //0x0000
    char            pad_0020[44];       //0x0020
    cUIAnimation    UIAnimation;        //0x004C
    char            pad_0054[44];       //0x0054
    cUIAnimation    Animation;          //0x0080
    char            pad_0088[52];       //0x0088
    eInGameState    InGameState;        //0x00BC
    char            pad_00C0[60];       //0x00C0
    char            ServerIP[64];       //0x00FC
    char            pad_013C[456];      //0x013C
    char            HeroName[12];       //0x0304
    char            pad_0310[412];      //0x0310
    char            ServerIP2[64];      //0x04AC
    char            pad_04EC[456];      //0x04EC
    char            HeroName2[12];      //0x06B4
    char            pad_06C0[340];      //0x06C0
    eGameDifficulty GameDifficulty;     //0x0814
    char            pad_0818[84];       //0x0818
    int32_t         IsGROrRiftOpen;     //0x086C
    int32_t         GRLevel;            //0x0870
    int32_t         IsGRFinished;       //0x0874
    char            pad_0878[4];        //0x0878
    int32_t         IsBossSpawned;      //0x087C
    char            pad_0880[600];      //0x0880
    cCameraManager* CameraManager;      //0x0AD8
    char            pad_0AE0[152];      //0x0AE0
    cUIManager*     UIManager;          //0x0B78
    char            pad_0B80[184];      //0x0B80
}; //Size: 0x0C38
static_assert(sizeof(cObjectManager) == 0xC38);