#include "types.h"

struct Unk_ov120_Obj {
    /* 0x00 */ u8 unk00[0xd0];
    /* 0xd0 */ void (*unkD0)(Unk_ov120_Obj* obj);
    /* 0xd4 */ Unk_ov120_Obj* unkD4;
};

extern "C" void func_ov120_020d4d58(Unk_ov120_Obj* obj);
extern "C" void func_ov120_020d4e7c(Unk_ov120_Obj* obj);

extern "C" void func_ov120_020d4e5c(Unk_ov120_Obj* obj) {
    func_ov120_020d4d58(obj);
    obj->unkD0 = func_ov120_020d4e7c;
    obj->unkD4 = obj;
}
