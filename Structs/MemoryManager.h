#include <cstdint>
#include "Heap.h"
//Diablo III64.exe + MEMORY_MANAGER
struct cMemoryManager
{
public:
	char			pad_0000[136];			//0x0000
	cLocalHeap*		LocalHeap;				//0x0088
	char			pad_0090[8];			//0x0090
	cLocalHeap*		LocalHeap2;				//0x0098
	cHeapNode*		FirstNode;				//0x00A0
	char			pad_00A8[32];			//0x00A8
	cDebugFile*		DebugFile;				//0x00C8
	char			pad_00D0[72];			//0x00D0
	char			DiabloDirectory[64];	//0x0118
	char			pad_0158[2784];			//0x0158
}; //Size: 0x0C38
static_assert(sizeof(cMemoryManager) == 0xC38);
struct cDebugFile
{
public:
	char			pad_0000[64];			//0x0000
	char			FileName[16];			//0x0040
	char			pad_0050[112];			//0x0050
	char			FilePath[64];			//0x00C0
	char			pad_0100[200];			//0x0100
}; //Size: 0x01C8
static_assert(sizeof(cDebugFile) == 0x1C8);