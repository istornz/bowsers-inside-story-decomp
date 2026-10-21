#include "types.h"

// Vtable slots other than 0x0c are unknown placeholders.
class Unk_ov095_Actor {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    /* 0x0c */ virtual void unk0c();
};

struct Unk_ov095_Obj {
    /* 0x000 */ u8 unk000[0x21e];
    /* 0x21e */ s16 unk21e;
};

extern "C" void* data_ov008_02064f08;

extern "C" Unk_ov095_Actor* func_ov011_02066dac(void* mgr, u16 id);

extern "C" void func_ov095_020c9674(Unk_ov095_Obj* obj) {
    Unk_ov095_Actor* actor = func_ov011_02066dac(data_ov008_02064f08, obj->unk21e + 0x5000);
    if (actor != NULL) {
        actor->unk0c();
    }
}
