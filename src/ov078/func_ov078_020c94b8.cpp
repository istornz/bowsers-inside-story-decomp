#include "types.h"

struct Unk_ov078_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov078_Obj {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ Unk_ov078_Actor* unk08;
};

extern "C" void func_ov078_020c94d8(Unk_ov078_Obj* obj);

extern "C" void func_ov078_020c94b8(Unk_ov078_Obj* obj) {
    if (obj->unk08->unk10c == 0) {
        func_ov078_020c94d8(obj);
    }
}
