#include "types.h"

// Vtable slots 0x00-0x44 are unknown placeholders, only slot 0x48 is called here.
class Unk_ov105_Obj {
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
};

extern "C" void func_ov105_020cfc1c(Unk_ov105_Obj* obj) {
    obj->unk48(0, -1, 0x100, 0);
}
