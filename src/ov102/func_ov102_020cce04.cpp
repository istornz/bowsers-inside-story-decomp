#include "types.h"

// Vtable slots 0x00-0x44 are unknown placeholders, only slot 0x48 is called here.
class Unk_ov102_Actor {
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

struct Unk_ov102_Task {
    /* 0x0 */ void (*unk0)(Unk_ov102_Task* task);
};

extern "C" void* data_ov008_02064f08;

extern "C" Unk_ov102_Actor* func_ov011_02066dac(void* mgr, u32 id);
extern "C" void func_ov014_020961bc(void* p, s32 arg);
extern "C" BOOL func_ov014_02096360(void* p);
extern "C" void func_ov102_020cce8c(Unk_ov102_Task* task);

extern "C" void func_ov102_020cce04(Unk_ov102_Task* task) {
    Unk_ov102_Actor* actor = func_ov011_02066dac(data_ov008_02064f08, 0x3001);
    BOOL ok;
    if (actor->unkEc == NULL) {
        ok = TRUE;
    } else {
        ok = func_ov014_02096360(actor->unkEc);
    }
    if (!ok) {
        return;
    }
    actor->unk48(3, -1, 0x100, 0);
    if (actor->unkEc != NULL) {
        func_ov014_020961bc(actor->unkEc, 1);
    }
    task->unk0 = func_ov102_020cce8c;
}
