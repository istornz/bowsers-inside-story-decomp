#include "types.h"

// Vtable slots other than 0x48 are unknown placeholders.
class Unk_ov025_Actor {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0c();
    virtual void unk10();
    virtual void unk14();
    virtual void unk18();
    virtual void unk1c();
    virtual void unk20();
    virtual void unk24();
    virtual void unk28();
    virtual void unk2c();
    virtual void unk30();
    virtual void unk34();
    virtual void unk38();
    virtual void unk3c();
    virtual void unk40();
    virtual void unk44();
    /* 0x48 */ virtual void unk48(s32 a, s32 b, s32 c, s32 d);

    /* 0x004 */ u8 pad004[0x2c - 0x4];
    /* 0x02c */ u16 unk2C;
    /* 0x02e */ u8 pad02e[0xec - 0x2e];
    /* 0x0ec */ void* unkEc;
    /* 0x0f0 */ u8 pad0f0[0x100 - 0xf0];
    /* 0x100 */ u8 unk100[0xc];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov025_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov025_Actor* unk10;
    /* 0x14 */ u8 unk14[0x54 - 0x14];
    /* 0x54 */ void (*unk54)(Unk_ov025_Obj* obj);
    /* 0x58 */ void* unk58;
};

extern "C" void func_ov014_020961bc(void* p, s32 arg);
extern "C" void func_ov025_020cc770(Unk_ov025_Obj* obj);

extern "C" void func_ov025_020cc70c(Unk_ov025_Obj* obj) {
    Unk_ov025_Actor* actor = obj->unk10;
    if (actor->unk10c != 0) {
        return;
    }
    actor->unk48(6, -1, 0x100, 0);
    if (actor->unkEc != NULL) {
        func_ov014_020961bc(actor->unkEc, 1);
    }
    obj->unk54 = func_ov025_020cc770;
}
