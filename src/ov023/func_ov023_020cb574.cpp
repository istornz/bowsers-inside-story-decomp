#include "types.h"

// Vtable slots 0x00-0x44 are unknown placeholders, only slot 0x48 is called here.
class Unk_ov023_Render {
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

    /* 0x04 */ u8 pad04[0xec - 0x4];
    /* 0xec */ void* unkEc;
};

struct Unk_ov023_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov023_Render* unk10;
    /* 0x14 */ u8 unk14[0x2c - 0x14];
    /* 0x2c */ u16 unk2c;
    /* 0x2e */ u8 unk2e[0x54 - 0x2e];
    /* 0x54 */ void (*unk54)(Unk_ov023_Obj* obj);
};

struct Unk_ov023_Flags {
    u32 unk0 : 1;
    u32 unk1 : 1;
    u32 unk2 : 1;
    u32 unk3 : 7;
    u32 unk10 : 1;
    u32 unk11 : 21;
};

struct Unk_ov023_Mgr {
    /* 0x00000 */ u8 unk00000[0x2888];
    /* 0x02888 */ Unk_ov023_Flags unk2888;
    /* 0x0288c */ u8 unk0288c[0x2ce54 - 0x288c];
    /* 0x2ce54 */ u8 unk2ce54[1];
};

struct Unk_ov016_020b8900 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0a */ u8 unk0a;
    /* 0x0b */ u8 unk0b;
    /* 0x0c */ u16 unk0c;
    /* 0x0e */ u16 unk0e;
};

extern "C" Unk_ov016_020b8900 data_ov016_020b8900;
extern "C" Unk_ov023_Mgr* data_ov008_02064f08;

extern "C" void func_ov014_020961bc(void* p, s32 arg);
extern "C" void func_ov016_020ad144(void* p);
extern "C" void func_ov023_020cb6cc(Unk_ov023_Obj* obj);
extern "C" void func_ov023_020cb700(Unk_ov023_Obj* obj);

extern "C" void func_ov023_020cb574(Unk_ov023_Obj* obj) {
    if (!data_ov008_02064f08->unk2888.unk10) {
        obj->unk54 = func_ov023_020cb700;
        return;
    }
    data_ov008_02064f08->unk2888.unk10 = 0;

    obj->unk10->unk48(0x14, -1, 0x100, 1);
    if (obj->unk10->unkEc != NULL) {
        func_ov014_020961bc(obj->unk10->unkEc, 1);
    }
    if (obj->unk2c == 0x1000) {
        data_ov016_020b8900.unk00 = 0x4000006a;
        data_ov016_020b8900.unk04 = 0;
        data_ov016_020b8900.unk06 = 0;
        data_ov016_020b8900.unk08 = 1;
        data_ov016_020b8900.unk0a = 0x7f;
        data_ov016_020b8900.unk0b = 1;
        data_ov016_020b8900.unk0c = 0x1000;
        data_ov016_020b8900.unk0e = 0x7f;
        func_ov016_020ad144(data_ov008_02064f08->unk2ce54);
    }
    if (obj->unk2c == 0x1001) {
        data_ov016_020b8900.unk00 = 0x4000003a;
        data_ov016_020b8900.unk04 = 0;
        data_ov016_020b8900.unk06 = 0;
        data_ov016_020b8900.unk08 = 1;
        data_ov016_020b8900.unk0a = 0x7f;
        data_ov016_020b8900.unk0b = 1;
        data_ov016_020b8900.unk0c = 0x1001;
        data_ov016_020b8900.unk0e = 0x7f;
        func_ov016_020ad144(data_ov008_02064f08->unk2ce54);
    }
    obj->unk54 = func_ov023_020cb6cc;
}
