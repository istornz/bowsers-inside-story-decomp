#include "types.h"

struct Unk_ov077_Task {
    /* 0x0 */ void (*unk0)(Unk_ov077_Task* task);
};

extern "C" void func_ov077_020c9234(Unk_ov077_Task* task);

extern "C" void func_ov077_020c9220(Unk_ov077_Task* task) {
    task->unk0 = func_ov077_020c9234;
    func_ov077_020c9234(task);
}
