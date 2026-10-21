#include "types.h"

struct Unk_ov003_0206a904 {
    /* 0x00 */ u8 unk00[0xbc];
    /* 0xbc */ u32 unkbc;
};

extern "C" void func_ov003_0206a904(Unk_ov003_0206a904* self, u32 value) {
    self->unkbc = value;
}
