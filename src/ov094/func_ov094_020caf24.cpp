#include "types.h"

struct Unk_ov094_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov094_Task {
    /* 0x0 */ void (*unk0)(Unk_ov094_Task* task);
    /* 0x4 */ u8 unk4[0x4];
    /* 0x8 */ Unk_ov094_Actor* unk8;
};

extern "C" void func_ov094_020caf44(Unk_ov094_Task* task);

extern "C" void func_ov094_020caf24(Unk_ov094_Task* task) {
    if (task->unk8->unk10c == 0) {
        task->unk0 = func_ov094_020caf44;
    }
}
