#include "types.h"

struct Unk_ov095_Obj;

struct Unk_ov095_Actor {
    /* 0x000 */ u8 unk000[0x170];
    /* 0x170 */ u8 unk170[0x18];
    /* 0x188 */ void (*unk188)(Unk_ov095_Obj* obj);
    /* 0x18c */ Unk_ov095_Obj* unk18c;
};

struct Unk_ov095_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov095_Actor* unk10;
};

extern "C" void func_ov013_0208a300(void* p, s32 arg);
extern "C" void func_ov095_020c9674(Unk_ov095_Obj* obj);

extern "C" void func_ov095_020c9648(Unk_ov095_Obj* obj) {
    Unk_ov095_Actor* actor = obj->unk10;
    func_ov013_0208a300(actor->unk170, 1);
    actor->unk188 = func_ov095_020c9674;
    actor->unk18c = obj;
}
