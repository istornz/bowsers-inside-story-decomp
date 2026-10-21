#include "types.h"

struct Unk_ov073_Task {
    /* 0x0 */ void (*unk0)(Unk_ov073_Task* task);
};

extern "C" void func_ov073_020c9e04(Unk_ov073_Task* task);

extern "C" void func_ov073_020c9df0(Unk_ov073_Task* task) {
    task->unk0 = func_ov073_020c9e04;
    func_ov073_020c9e04(task);
}
