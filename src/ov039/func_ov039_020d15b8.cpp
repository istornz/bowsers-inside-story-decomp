#include "types.h"

class Unk_ov039_Sub {
public:
    virtual void unk00();
    /* 0x04 */ virtual void unk04(void* p);
};

struct Unk_ov039_Fx {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Unk_ov039_Sub unk0c;
    /* 0x10 */ u8 unk10[0x38 - 0x10];
    /* 0x38 */ s16 unk38;
};

struct Unk_ov039_Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 unk20[0xc];
    /* 0x2c */ s16 unk2c;
};

struct Unk_ov039_Mgr {
    /* 0x00000 */ u8 unk00000[0x25be8];
    /* 0x25be8 */ u8 unk25be8[1];
};

extern "C" Unk_ov039_Mgr* data_ov008_02064f08;

extern "C" Unk_ov039_Fx* func_ov015_020a0f98(void* p, s32 a, s32 b);

extern "C" void func_ov039_020d15b8(Unk_ov039_Obj* obj) {
    Unk_ov039_Fx* fx = func_ov015_020a0f98(data_ov008_02064f08->unk25be8, 0, 0);
    fx->unk0c.unk04(obj->unk20);
    fx->unk38 = obj->unk2c;
}
