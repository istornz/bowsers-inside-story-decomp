#include "types.h"

struct Unk_ov027_020cbe84 {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ void* unk54;
};

extern "C" void func_ov027_020cbe94();

extern "C" void func_ov027_020cbe84(Unk_ov027_020cbe84* self) {
    self->unk54 = (void*)func_ov027_020cbe94;
}
