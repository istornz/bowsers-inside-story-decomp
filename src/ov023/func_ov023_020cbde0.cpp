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
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ Unk_ov023_Render* unk10;
    /* 0x014 */ u8 unk014[0x54 - 0x14];
    /* 0x054 */ u32 unk54;
    /* 0x058 */ u8 unk058[0x21e - 0x58];
    /* 0x21e */ s16 unk21e;
};

// Vtable slots 0x00-0xac are unknown placeholders, only slot 0xb0 is called here.
class Unk_ov023_Mgr {
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
    virtual void unk48();
    virtual void unk4c();
    virtual void unk50();
    virtual void unk54();
    virtual void unk58();
    virtual void unk5c();
    virtual void unk60();
    virtual void unk64();
    virtual void unk68();
    virtual void unk6c();
    virtual void unk70();
    virtual void unk74();
    virtual void unk78();
    virtual void unk7c();
    virtual void unk80();
    virtual void unk84();
    virtual void unk88();
    virtual void unk8c();
    virtual void unk90();
    virtual void unk94();
    virtual void unk98();
    virtual void unk9c();
    virtual void unka0();
    virtual void unka4();
    virtual void unka8();
    virtual void unkac();
    /* 0xb0 */ virtual BOOL unkb0(s32 id, s32 b, s32 c, s32 d);

    /* 0x00004 */ u8 pad00004[0x2888 - 0x4];
    /* 0x02888 */ u32 unk2888;
    /* 0x0288c */ u8 pad0288c[0x25be8 - 0x288c];
    /* 0x25be8 */ u8 unk25be8[1];
};

extern "C" Unk_ov023_Mgr* data_ov008_02064f08;

extern "C" BOOL func_ov014_02096360(void* param);
extern "C" void func_ov014_0209799c(void* a, void* b, s32 c);
extern "C" u8* func_ov015_020a0f98(void* p, s32 a, s32 b);

extern "C" void func_ov023_020cbde0(Unk_ov023_Obj* obj) {
    BOOL ok;
    if (obj->unk10->unkEc == NULL) {
        ok = TRUE;
    } else {
        ok = func_ov014_02096360(obj->unk10->unkEc);
    }
    if (!ok) {
        return;
    }

    if (data_ov008_02064f08->unkb0(obj->unk21e & 0xff, 7, 0, 0)) {
        u8* fx = func_ov015_020a0f98(data_ov008_02064f08->unk25be8, 0x5eb, 0);
        func_ov014_0209799c(fx + 0xc, obj->unk10, 0);
    }
    obj->unk10->unk48(0, -1, 0x100, 1);
    obj->unk54 = 0;
    data_ov008_02064f08->unk2888 &= ~2;
}
