#include "types.h"

struct Unk_ov095_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov095_Task {
    /* 0x0 */ void (*unk0)(Unk_ov095_Task* task);
    /* 0x4 */ u8 unk4[0x4];
    /* 0x8 */ Unk_ov095_Actor* unk8;
};

extern "C" void func_ov095_020c9c68(Unk_ov095_Task* task);

extern "C" void func_ov095_020ca450(Unk_ov095_Task* task) {
    if (task->unk8->unk10c == 0) {
        task->unk0 = func_ov095_020c9c68;
    }
}
