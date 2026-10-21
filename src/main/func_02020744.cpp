#include "types.h"

struct Unk_02020744 {
    /* 0x0 */ u8 unk0[0xa];
    /* 0xa */ u16 unkA;
};

extern "C" void func_02020744(Unk_02020744* self) {
    self->unkA |= 0x4000;
}
