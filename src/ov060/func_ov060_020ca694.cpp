#include "types.h"

struct Unk_ov060_Actor {
    /* 0x000 */ u8 unk000[0xec];
    /* 0x0ec */ void* unkEc;
    /* 0x0f0 */ u8 unk0f0[0x10c - 0xf0];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov060_Owner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov060_Actor* unk10;
};

struct Unk_ov060_Task {
    /* 0x0 */ void (*unk0)(Unk_ov060_Task* task);
    /* 0x4 */ Unk_ov060_Owner* unk4;
};

extern "C" void func_ov014_020961bc(void* p, s32 arg);
extern "C" void func_ov060_020ca760(Unk_ov060_Task* task);
extern "C" void func_ov060_020ca6dc(Unk_ov060_Task* task);

extern "C" void func_ov060_020ca694(Unk_ov060_Task* task) {
    Unk_ov060_Actor* actor = task->unk4->unk10;
    func_ov060_020ca760(task);
    if (actor->unk10c != 0) {
        return;
    }
    if (actor->unkEc != NULL) {
        func_ov014_020961bc(actor->unkEc, 1);
    }
    task->unk0 = func_ov060_020ca6dc;
}
