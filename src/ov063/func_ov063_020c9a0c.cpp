#include "types.h"

struct Unk_ov063_Actor {
    /* 0x000 */ u8 unk000[0xec];
    /* 0x0ec */ void* unkEc;
    /* 0x0f0 */ u8 unk0f0[0x10c - 0xf0];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov063_Owner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov063_Actor* unk10;
};

struct Unk_ov063_Task {
    /* 0x0 */ void (*unk0)(Unk_ov063_Task* task);
    /* 0x4 */ Unk_ov063_Owner* unk4;
};

extern "C" void func_ov014_020961bc(void* p, s32 arg);
extern "C" void func_ov063_020c9ad8(Unk_ov063_Task* task);
extern "C" void func_ov063_020c9a54(Unk_ov063_Task* task);

extern "C" void func_ov063_020c9a0c(Unk_ov063_Task* task) {
    Unk_ov063_Actor* actor = task->unk4->unk10;
    func_ov063_020c9ad8(task);
    if (actor->unk10c != 0) {
        return;
    }
    if (actor->unkEc != NULL) {
        func_ov014_020961bc(actor->unkEc, 1);
    }
    task->unk0 = func_ov063_020c9a54;
}
