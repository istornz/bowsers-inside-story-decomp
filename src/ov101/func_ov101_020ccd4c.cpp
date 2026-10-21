#include "types.h"

struct Unk_ov101_020ccd4c {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 unk32;
};

extern "C" Unk_ov101_020ccd4c data_ov101_020cf240;

extern "C" void func_ov101_020ccd4c() {
    data_ov101_020cf240.unk32 = 0;
}
