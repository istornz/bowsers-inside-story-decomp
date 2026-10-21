#include "types.h"

struct Unk_ov124_0207645c {
    /* 0x00 */ u8 unk00[0x1];
    /* 0x01 */ u8 unk01;
};

extern "C" void func_ov124_0207645c(Unk_ov124_0207645c* self) {
    self->unk01 = 1;
}
