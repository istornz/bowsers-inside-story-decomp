#include "types.h"

struct Unk_ov083_Task {
    /* 0x0 */ void (*unk0)(Unk_ov083_Task* task);
};

extern "C" void func_ov083_020c9f94(Unk_ov083_Task* task);

extern "C" void func_ov083_020c9f84(Unk_ov083_Task* task) {
    task->unk0 = func_ov083_020c9f94;
}
