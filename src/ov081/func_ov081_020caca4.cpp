#include "types.h"

struct Unk_ov081_Actor {
    /* 0x000 */ u8 unk000[0x144];
    /* 0x144 */ u16 unk144;
};

struct Unk_ov081_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov081_Actor* unk10;
};

extern "C" void func_ov081_020c9244(Unk_ov081_Obj* obj);

extern "C" void func_ov081_020caca4(Unk_ov081_Obj* obj) {
    if (obj->unk10->unk144 == 0) {
        func_ov081_020c9244(obj);
    }
}
