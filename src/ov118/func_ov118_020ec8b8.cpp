#include "types.h"

// Vtable slots other than 0x48 are unknown placeholders.
class Unk_ov118_Obj {
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

extern "C" void func_ov014_020961bc(void* p, s32 arg);

extern "C" void func_ov118_020ec8b8(Unk_ov118_Obj* obj) {
    obj->unk48(3, -1, 0x100, 0);
    if (obj->unkEc != NULL) {
        func_ov014_020961bc(obj->unkEc, 1);
    }
}
