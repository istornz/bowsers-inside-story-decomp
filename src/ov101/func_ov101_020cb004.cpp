#include "types.h"

struct Unk_ov101_020cb004 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ s8 unk24;
};

extern "C" Unk_ov101_020cb004 data_ov101_020cf240;

extern "C" s8 func_ov101_020cb004() {
    return data_ov101_020cf240.unk24;
}
