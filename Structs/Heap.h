#include <cstdint>

struct cLocalHeap
{
public:
    uint64_t            VTable;         //0x0000
    cHeapNode*          FirstNode;      //0x0008
    uint64_t            TotalSize;      //0x0010
    int64_t             Used;           //0x0018
    int32_t             NodeCount;      //0x0020
    char                pad_0024[4];    //0x0024
    uint32_t            MinSize;        //0x0028
    char                pad_002C[28];   //0x002C
    uint64_t            LargestSize;    //0x0048
    char                pad_0050[24];   //0x0050
    cHeapNode*          LastNode;       //0x0068
}; //Size: 0x0070
static_assert(sizeof(cLocalHeap) == 0x70);
struct cHeapNode
{
public:
    cHeapNode*          PreviousFree;   //0x0000
    cHeapNode*          NextFree;       //0x0008
    cHeapNode*          PreviousNode;   //0x0010
    uint64_t            FlagSizeIsUsed; //0x0018

    int Size()
    {
        return (FlagSizeIsUsed >> 1) + sizeof(cHeapNode);
    };
    bool IsUsed()
    {
        return FlagSizeIsUsed & 1;
    };

}; //Size: 0x0020
static_assert(sizeof(cHeapNode) == 0x20);