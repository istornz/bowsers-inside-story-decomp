#include "types.h"

struct Unk_ov078_Actor {
    /* 0x000 */ u8 unk000[0x17c];
    /* 0x17c */ u16 unk17c;
};

struct Unk_ov078_Obj {
    /* 0x0 */ u8 unk0[0x8];
    /* 0x8 */ Unk_ov078_Actor* unk8;
};

extern "C" void func_ov078_020c9b98(Unk_ov078_Obj* obj);

extern "C" void func_ov078_020c9b78(Unk_ov078_Obj* obj) {
    if (obj->unk8->unk17c == 0) {
        func_ov078_020c9b98(obj);
    }
}
