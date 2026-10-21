#include "types.h"

// Vtable slots 0x00-0x44 are unknown placeholders, only slot 0x48 is called here.
class Unk_ov031_Obj {
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

    /* 0x04 */ u8 pad04[0x8];
    /* 0x0c */ u16 unkC;
    /* 0x0e */ u8 pad0e[0x3c - 0xe];
    /* 0x3c */ u32 unk3C;
};

struct Unk_ov031_020d43e0 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 unk14;
};

struct Unk_ov031_Mgr {
    /* 0x00000 */ u8 unk00000[0x2ce54];
    /* 0x2ce54 */ u8 unk2ce54[1];
};

extern "C" Unk_ov031_020d43e0 data_ov031_020d43e0;
extern "C" s16 data_ov031_020d43f4[];
extern "C" Unk_ov031_Mgr* data_ov008_02064f08;

extern "C" void func_ov016_020ad31c(void* p);

// TODO: 99.32%. Register allocation only: the original keeps the id in r2 and loads unk14 and the table entry into r1;
// this compiles to r1 and r0. Tried: reading unkC once into a local.
extern "C" void func_ov031_020cd30c(Unk_ov031_Obj* obj) {
    obj->unk48(0, -1, 0x100, 0);
    obj->unk3C &= ~1;
    u16 id = obj->unkC;
    if (id == 0x1002 && data_ov031_020d43e0.unk14 > 0) {
        func_ov016_020ad31c(data_ov008_02064f08->unk2ce54);
        data_ov031_020d43e0.unk14 = -1;
        return;
    }
    if (id == 0x1002) {
        return;
    }
    if (data_ov031_020d43f4[id - 0x1000] <= 0) {
        return;
    }
    func_ov016_020ad31c(data_ov008_02064f08->unk2ce54);
    data_ov031_020d43f4[obj->unkC - 0x1000] = -1;
}
