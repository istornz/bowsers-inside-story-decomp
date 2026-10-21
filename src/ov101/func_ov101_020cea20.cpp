#include "types.h"

struct Unk_ov101_Actor {
    /* 0x000 */ u8 unk000[0x144];
    /* 0x144 */ u16 unk144;
};

struct Unk_ov101_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov101_Actor* unk10;
};

extern "C" void func_ov101_020ccfc4(Unk_ov101_Obj* obj);

extern "C" void func_ov101_020cea20(Unk_ov101_Obj* obj) {
    if (obj->unk10->unk144 == 0) {
        func_ov101_020ccfc4(obj);
    }
}
