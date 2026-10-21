#include "types.h"

struct Unk_ov077_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov077_Obj {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ Unk_ov077_Actor* unk08;
};

extern "C" void func_ov077_020c9404(Unk_ov077_Obj* obj);

extern "C" void func_ov077_020c93e4(Unk_ov077_Obj* obj) {
    if (obj->unk08->unk10c == 0) {
        func_ov077_020c9404(obj);
    }
}
