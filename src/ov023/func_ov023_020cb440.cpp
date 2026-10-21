#include "types.h"

// Vtable slots other than 0x08 and 0x54 are unknown placeholders.
class Unk_ov023_Obj {
public:
    virtual void unk00();
    virtual void unk04();
    /* 0x08 */ virtual BOOL unk08();
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
    virtual void unk48();
    virtual void unk4c();
    virtual void unk50();
    /* 0x54 */ virtual void unk54(s32 arg);

    /* 0x04 */ u8 pad04[0x4c - 0x4];
    /* 0x4c */ Unk_ov023_Obj* next;
    /* 0x50 */ u8 pad50[0x64 - 0x50];
    /* 0x64 */ Unk_ov023_Obj* unk64;
};

struct Unk_ov023_Flags {
    u32 unk0 : 1;
    u32 unk1 : 1;
    u32 unk2 : 1;
    u32 unk3 : 29;
};

struct Unk_ov023_Slot {
    u16 unk0 : 3;
    u16 unk3 : 13;
};

struct Unk_ov023_Mgr {
    /* 0x00000 */ u8 unk00000[0x2a];
    /* 0x0002a */ s16 unk2a;
    /* 0x0002c */ u8 unk0002c[0x2800 - 0x2c];
    /* 0x02800 */ Unk_ov023_Obj* unk2800;
    /* 0x02804 */ u8 unk02804[0x2880 - 0x2804];
    /* 0x02880 */ u32 unk2880;
    /* 0x02884 */ u8 unk02884[0x4];
    /* 0x02888 */ Unk_ov023_Flags unk2888;
    /* 0x0288c */ u8 unk0288c[0x2f164 - 0x288c];
    /* 0x2f164 */ Unk_ov023_Slot unk2f164;
};

struct Unk_ov023_Scene {
    /* 0x0000 */ u8 unk0000[0x1d14];
    /* 0x1d14 */ s16 unk1d14;
};

extern "C" Unk_ov023_Mgr* data_ov008_02064f08;
extern "C" Unk_ov023_Scene* data_ov008_02064f0c;

extern "C" BOOL func_ov015_020ac644(Unk_ov023_Obj* obj);
extern "C" BOOL func_ov015_020ac67c(Unk_ov023_Obj* obj);
extern "C" void func_ov023_020cb574(Unk_ov023_Obj* obj);

// TODO: 96.42%. The original loads 0x17 from the literal pool before the first load and compares registers
// (`ldr r1, =0x17` ... `cmp r0, r1`); this compiles to `cmp r0, #0x17`. Tried: swapped operands, s32 field, casts,
// a local constant. The rest of the function matches.
extern "C" void func_ov023_020cb440() {
    if (data_ov008_02064f0c->unk1d14 != 0x17) {
        return;
    }
    Unk_ov023_Mgr* mgr = data_ov008_02064f08;
    if (mgr->unk2f164.unk0 != mgr->unk2a && mgr->unk2888.unk0) {
        return;
    }
    if (mgr->unk2888.unk2) {
        return;
    }

    Unk_ov023_Obj* node = mgr->unk2800;
    while (node != NULL) {
        if (func_ov015_020ac644(node) && func_ov015_020ac67c(node) && node->unk08() && node->unk64 != NULL &&
            !func_ov015_020ac67c(node->unk64)) {
            node->unk54(0);
            data_ov008_02064f08->unk2880 |= 1;
            func_ov023_020cb574(node);
            data_ov008_02064f08->unk2888.unk1 = 1;
            return;
        }
        node = node->next;
    }
}
