#include "types.h"

struct Unk_ov124_02076468 {
    /* 0x00 */ u8 unk00[0x1];
    /* 0x01 */ u8 unk01;
};

extern "C" void func_ov124_02076468(Unk_ov124_02076468* self) {
    self->unk01 = 0;
}
