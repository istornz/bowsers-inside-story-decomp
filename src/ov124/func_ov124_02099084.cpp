#include "types.h"

struct Unk_ov124_02099084 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

extern "C" void func_ov124_02099084(Unk_ov124_02099084* self, u32 value) {
    self->unk20 = value;
}
