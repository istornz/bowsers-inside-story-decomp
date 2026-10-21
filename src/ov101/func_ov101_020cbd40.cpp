#include "types.h"

struct Unk_ov101_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov101_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov101_Actor* unk10;
};

extern "C" void func_ov101_020cbd60(Unk_ov101_Obj* obj);

extern "C" void func_ov101_020cbd40(Unk_ov101_Obj* obj) {
    if (obj->unk10->unk10c == 0) {
        func_ov101_020cbd60(obj);
    }
}
