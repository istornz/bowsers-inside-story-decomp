#include "types.h"

struct Unk_ov082_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov082_Obj {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ Unk_ov082_Actor* unk08;
};

extern "C" void func_ov082_020ca9c0(Unk_ov082_Obj* obj);

extern "C" void func_ov082_020ca9a0(Unk_ov082_Obj* obj) {
    if (obj->unk08->unk10c == 0) {
        func_ov082_020ca9c0(obj);
    }
}
