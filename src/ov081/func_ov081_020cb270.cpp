#include "types.h"

struct Unk_ov081_Task {
    /* 0x0 */ void (*unk0)(Unk_ov081_Task* task);
};

extern "C" void func_ov081_020cb280(Unk_ov081_Task* task);

extern "C" void func_ov081_020cb270(Unk_ov081_Task* task) {
    task->unk0 = func_ov081_020cb280;
}
