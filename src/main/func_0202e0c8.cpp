#include "types.h"

struct Unk_main_0202e0c8 {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u32 unk78;
};

extern "C" void func_0202e0c8(Unk_main_0202e0c8* self, u32 value) {
    self->unk78 = value;
}
