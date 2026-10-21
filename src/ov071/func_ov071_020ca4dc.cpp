#include "types.h"

struct Unk_ov071_Actor {
    /* 0x000 */ u8 unk000[0x17c];
    /* 0x17c */ u16 unk17c;
};

struct Unk_ov071_Obj {
    /* 0x0 */ u8 unk0[0x8];
    /* 0x8 */ Unk_ov071_Actor* unk8;
};

extern "C" void func_ov071_020ca4fc(Unk_ov071_Obj* obj);

extern "C" void func_ov071_020ca4dc(Unk_ov071_Obj* obj) {
    if (obj->unk8->unk17c == 0) {
        func_ov071_020ca4fc(obj);
    }
}
