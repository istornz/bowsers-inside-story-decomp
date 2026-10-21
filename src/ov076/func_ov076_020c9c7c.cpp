#include "types.h"

struct Unk_ov076_Task {
    /* 0x0 */ void (*unk0)(Unk_ov076_Task* task);
};

extern "C" void func_ov076_020c9c90(Unk_ov076_Task* task);

extern "C" void func_ov076_020c9c7c(Unk_ov076_Task* task) {
    task->unk0 = func_ov076_020c9c90;
    func_ov076_020c9c90(task);
}
