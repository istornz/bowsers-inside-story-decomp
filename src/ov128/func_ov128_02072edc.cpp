#include "types.h"

struct Unk_ov128_02072edc {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u8 unk0c;
};

extern "C" void func_ov128_02072edc(Unk_ov128_02072edc* self) {
    self->unk0c = 0;
}
