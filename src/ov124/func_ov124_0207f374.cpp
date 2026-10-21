#include "types.h"

struct Unk_ov124_0207f374 {
    /* 0x00 */ u8 unk00[0x6];
    /* 0x06 */ u8 unk06;
};

extern "C" void func_ov124_0207f374(Unk_ov124_0207f374* self, u8 value) {
    self->unk06 = value;
}
