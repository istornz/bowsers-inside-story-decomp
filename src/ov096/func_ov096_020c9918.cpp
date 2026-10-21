#include "types.h"

struct Unk_ov096_Fx {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u8 unk0c[0x34];
    /* 0x40 */ s32 unk40;
};

struct Unk_ov096_Mgr {
    /* 0x00000 */ u8 unk00000[0x25be8];
    /* 0x25be8 */ u8 unk25be8[1];
};

extern "C" Unk_ov096_Mgr* data_ov008_02064f08;

extern "C" Unk_ov096_Fx* func_ov015_020a0f98(void* p, s32 a, s32 b);
extern "C" void func_ov014_02097a20(void* a, void* b, s32 c, s32 d, s32 e);

extern "C" void func_ov096_020c9918(void* obj) {
    Unk_ov096_Fx* fx = func_ov015_020a0f98(data_ov008_02064f08->unk25be8, 0x10, 0);
    func_ov014_02097a20(fx->unk0c, obj, 0, 0, 0);
    fx->unk40 = 0x2000;
}
