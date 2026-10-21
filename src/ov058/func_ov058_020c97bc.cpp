#include "types.h"

struct Unk_ov058_Mgr {
    /* 0x000000 */ u8 unk000000[0x1e9720];
    /* 0x1e9720 */ u8 unk1e9720[1];
};

extern "C" Unk_ov058_Mgr* data_ov008_02064f08;

extern "C" void func_ov120_020d49e4(void* p, s32 a, s32 b);

extern "C" void func_ov058_020c97bc(s32 a, s32 b) {
    func_ov120_020d49e4(data_ov008_02064f08->unk1e9720, a, b);
}
