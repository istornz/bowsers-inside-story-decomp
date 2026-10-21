#include "types.h"

// Vtable slots other than 0x0c are unknown placeholders.
class Unk_ov060_Actor {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    /* 0x0c */ virtual void unk0c();

    /* 0x004 */ u8 pad004[0x10c - 0x4];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov060_Task {
    /* 0x0 */ void (*unk0)(Unk_ov060_Task* task);
    /* 0x4 */ u8 unk4[0x4];
    /* 0x8 */ Unk_ov060_Actor* unk8;
};

extern "C" void func_ov060_020cd5d8(Unk_ov060_Task* task) {
    Unk_ov060_Actor* actor = task->unk8;
    if (actor->unk10c != 0) {
        return;
    }
    if (actor != NULL) {
        actor->unk0c();
    }
    task->unk0 = NULL;
}
