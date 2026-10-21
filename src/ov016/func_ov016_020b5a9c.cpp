#include "types.h"

struct Unk_ov016_Actor {
    /* 0x000 */ u8 unk000[0x144];
    /* 0x144 */ u16 unk144;
};

struct Unk_ov016_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov016_Actor* unk10;
};

extern "C" void func_ov016_020b51e8(Unk_ov016_Obj* obj);

extern "C" void func_ov016_020b5a9c(Unk_ov016_Obj* obj) {
    if (obj->unk10->unk144 == 0) {
        func_ov016_020b51e8(obj);
    }
}
