#include "types.h"

struct Unk_ov072_Actor {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10c */ u16 unk10c;
};

struct Unk_ov072_Task {
    /* 0x0 */ void (*unk0)(Unk_ov072_Task* task);
    /* 0x4 */ u8 unk4[0x4];
    /* 0x8 */ Unk_ov072_Actor* unk8;
};

extern "C" void func_ov072_020cabc8(Unk_ov072_Task* task) {
    if (task->unk8->unk10c == 0) {
        task->unk0 = NULL;
    }
}
