#include "types.h"

struct Unk_main_0202bab8 {
    /* 0x00 */ u8 unk00[0x83];
    /* 0x83 */ u8 unk83;
};

extern "C" void func_0202bab8(Unk_main_0202bab8* self, u8 value) {
    self->unk83 = value;
}
