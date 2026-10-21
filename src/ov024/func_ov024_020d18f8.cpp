#include "types.h"

struct Unk_ov024_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov024_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov024_Actor* unk10;
};

extern "C" void func_ov024_020d1918(Unk_ov024_Obj* obj);

extern "C" void func_ov024_020d18f8(Unk_ov024_Obj* obj) {
    if (obj->unk10->unk10c == 0) {
        func_ov024_020d1918(obj);
    }
}
