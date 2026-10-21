#include "types.h"

struct Unk_ov081_Task {
    /* 0x0 */ void (*unk0)(Unk_ov081_Task* task);
};

extern "C" void func_ov081_020cb47c(Unk_ov081_Task* task);

extern "C" void func_ov081_020cb46c(Unk_ov081_Task* task) {
    task->unk0 = func_ov081_020cb47c;
}
