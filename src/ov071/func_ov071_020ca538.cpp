#include "types.h"

struct Unk_ov071_Task {
    /* 0x0 */ void (*unk0)(Unk_ov071_Task* task);
};

extern "C" void func_ov071_020ca54c(Unk_ov071_Task* task);

extern "C" void func_ov071_020ca538(Unk_ov071_Task* task) {
    task->unk0 = func_ov071_020ca54c;
    func_ov071_020ca54c(task);
}
