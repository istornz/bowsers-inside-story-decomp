#include "types.h"

struct Unk_ov072_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov072_Obj {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ Unk_ov072_Actor* unk08;
};

extern "C" void func_ov072_020cbb2c(Unk_ov072_Obj* obj);

extern "C" void func_ov072_020cbb0c(Unk_ov072_Obj* obj) {
    if (obj->unk08->unk10c == 0) {
        func_ov072_020cbb2c(obj);
    }
}
