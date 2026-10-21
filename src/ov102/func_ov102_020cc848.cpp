#include "types.h"

struct Unk_ov102_Task {
    /* 0x0 */ void (*unk0)(Unk_ov102_Task* task);
};

extern "C" void func_ov102_020cc858(Unk_ov102_Task* task);

extern "C" void func_ov102_020cc848(Unk_ov102_Task* task) {
    task->unk0 = func_ov102_020cc858;
}
