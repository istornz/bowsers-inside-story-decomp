#include "types.h"

struct Unk_ov071_Task {
    /* 0x0 */ void (*unk0)(Unk_ov071_Task* task);
};

extern "C" void func_ov071_020c9990(Unk_ov071_Task* task);

extern "C" void func_ov071_020c997c(Unk_ov071_Task* task) {
    task->unk0 = func_ov071_020c9990;
    func_ov071_020c9990(task);
}
