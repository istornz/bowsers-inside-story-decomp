#include "types.h"

// Vtable slots other than 0x44 are unknown placeholders.
class Unk_ov060_Actor {
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
    /* 0x44 */ virtual void unk44(void* p);

    /* 0x004 */ u8 pad004[0x2c - 0x4];
    /* 0x02c */ u16 unk2C;
    /* 0x02e */ u8 pad02e[0xec - 0x2e];
    /* 0x0ec */ void* unkEc;
    /* 0x0f0 */ u8 pad0f0[0x100 - 0xf0];
    /* 0x100 */ u8 unk100[0xc];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov060_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov060_Actor* unk10;
    /* 0x14 */ u8 unk14[0x54 - 0x14];
    /* 0x54 */ void (*unk54)(Unk_ov060_Obj* obj);
    /* 0x58 */ void* unk58;
};

struct Unk_ov060_Timer {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u16 unk4;
};

struct Unk_ov060_Mgr {
    /* 0x000000 */ u8 unk000000[0x1e98e4];
    /* 0x1e98e4 */ Unk_ov060_Timer unk1e98e4;
};

extern "C" Unk_ov060_Mgr* data_ov008_02064f08;

extern "C" BOOL func_ov014_02096360(void* p);

// TODO: 96.24%. The original adds 0x1e98e4 to the manager with a register before `strh [r0, #0x4]`; this compiles to
// one `strh [r2, r0]` with 0x1e98e8. Tried: nested struct, local manager, pointer to the sub-struct.
extern "C" void func_ov060_020cb0b0(Unk_ov060_Obj* obj) {
    Unk_ov060_Actor* actor = obj->unk10;
    BOOL ok;
    if (actor->unkEc == NULL) {
        ok = TRUE;
    } else {
        ok = func_ov014_02096360(actor->unkEc);
    }
    if (!ok) {
        return;
    }
    actor->unk44(obj->unk58);
    actor->unk2C = 0;
    Unk_ov060_Mgr* mgr = data_ov008_02064f08;
    Unk_ov060_Timer* timer = &mgr->unk1e98e4;
    timer->unk4 = 0;
    mgr->unk1e98e4.unk0 = 0;
    obj->unk54 = NULL;
}
