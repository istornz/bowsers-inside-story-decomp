#include "types.h"

struct Unk_ov060_Mgr {
    /* 0x000000 */ u8 unk000000[0x1e96f0];
    /* 0x1e96f0 */ u8 unk1e96f0[1];
};

extern "C" Unk_ov060_Mgr* data_ov008_02064f08;

extern "C" void func_ov120_020d4a34(void* p, s32 a, s32 b);

extern "C" void func_ov060_020c9810(s32 a, s32 b) {
    func_ov120_020d4a34(data_ov008_02064f08->unk1e96f0, a, b);
}
