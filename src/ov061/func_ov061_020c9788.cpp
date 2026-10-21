#include "types.h"

struct Unk_ov061_Mgr {
    /* 0x000000 */ u8 unk000000[0x1e96f0];
    /* 0x1e96f0 */ u8 unk1e96f0[1];
};

extern "C" Unk_ov061_Mgr* data_ov008_02064f08;

extern "C" void func_ov120_020d49e4(void* p, s32 a, s32 b);

extern "C" void func_ov061_020c9788(s32 a, s32 b) {
    func_ov120_020d49e4(data_ov008_02064f08->unk1e96f0, a, b);
}
