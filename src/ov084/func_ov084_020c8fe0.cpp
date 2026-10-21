#include "types.h"

extern "C" u8 *data_ov008_02064f08;
extern "C" u8 data_ov084_020d03f8[];
extern "C" void func_ov084_020c9030();
extern "C" void func_ov084_020c9090(u8 *a, void *b);

struct Unk_ov084_020c8fe0 {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 unk54;
};

extern "C" void func_ov084_020c8fe0(Unk_ov084_020c8fe0 *self) {
    s16 val = *(s16 *)(data_ov008_02064f08 + 0x2f14e);
    if (val > 0) {
        func_ov084_020c9090(data_ov084_020d03f8, self);
        self->unk54 = (u32)func_ov084_020c9030;
    } else {
        self->unk54 = 0;
    }
}
