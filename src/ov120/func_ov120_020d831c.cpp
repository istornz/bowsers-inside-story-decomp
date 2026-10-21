#include "types.h"

struct Unk_ov120_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov120_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov120_Actor* unk10;
};

extern "C" void func_ov120_020d7f58(Unk_ov120_Obj* obj);

extern "C" void func_ov120_020d831c(Unk_ov120_Obj* obj) {
    if (obj->unk10->unk10c == 0) {
        func_ov120_020d7f58(obj);
    }
}
