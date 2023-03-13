#pragma once
#include <cstdint>

//Diablo III64 v2.7.5.87562
//Diablo III64.exe Image Base
const size_t GAME_OPTIONS       = 0x020A77B4;
const size_t WORLD_SNO          = 0x02261478;
const size_t SELECTED_ACT       = 0x022A5DF8; //-1: Sanctuary | 0: A1 | 100: A2 | 200: A3 | 300: A4 | 400: A5 | Last selected when opening the World map
const size_t VERSION_NUMBER     = 0x02329498; //This is actually in a struct having stuff like ChallengeRiftNumber which you can change to get the `newest` CR build or older Challenge Rifts bit you cannot play them
const size_t SELECTED_REGION    = 0x0232A804;
const size_t MEMORY_MANAGER     = 0x0243D238;
//Pointer
const size_t MEMORY_REGION      = 0x020A25D8;
const size_t BUFF_MANAGER       = 0x022B3E80;
const size_t UNK_MANAGER        = 0x02441C10;
//First Node
const size_t OBJECT_MANAGER     = 0x17A8EFC0; //MemoryManager -> FirstNode + 0x17A8EFC0


