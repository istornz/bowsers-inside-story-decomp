#include "types.h"

struct Unk_ov128_0207311c {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ void* unk08;
};

extern "C" void func_ov127_0206b1ac(void* p);

extern "C" void func_ov128_0207311c(Unk_ov128_0207311c* self) {
    func_ov127_0206b1ac(self->unk08);
}
