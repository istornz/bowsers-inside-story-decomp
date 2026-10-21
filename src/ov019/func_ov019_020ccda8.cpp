#include "types.h"

struct Unk_ov019_0208a270 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u16 unk0c;
    /* 0x0e */ u8 unk0e[0xa];
    /* 0x18 */ u32 unk18;
};

extern "C" void func_ov019_020ccda8(Unk_ov019_0208a270* self) {
    self->unk0c = 0;
    self->unk18 = 0;
}
