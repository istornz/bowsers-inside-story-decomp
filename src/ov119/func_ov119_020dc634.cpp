#include "types.h"

struct Unk_ov119_Obj {
    /* 0x0 */ u8 unk0[0xc];
    /* 0xc */ void (*unkC)(Unk_ov119_Obj* obj);
};

struct Unk_ov119_Mgr {
    /* 0x0 */ u8 unk0[0x4];
    /* 0x4 */ s16 unk4;
    /* 0x6 */ s16 unk6;
};

extern "C" Unk_ov119_Mgr* data_ov008_02064f08;

extern "C" void func_ov119_020dc67c(Unk_ov119_Obj* obj);

extern "C" void func_ov119_020dc634(Unk_ov119_Obj* obj) {
    s32 value = data_ov008_02064f08->unk4;
    if (value > 0) {
        value -= 2;
    }
    if (value < 0) {
        value = 0;
    }
    data_ov008_02064f08->unk6 = value;
    data_ov008_02064f08->unk4 = data_ov008_02064f08->unk6;
    if (value <= 0) {
        obj->unkC = func_ov119_020dc67c;
    }
}
