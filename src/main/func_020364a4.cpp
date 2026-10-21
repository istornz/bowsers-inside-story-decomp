#include "types.h"

struct Unk_main_020364a4 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 unk18;
};

extern "C" Unk_main_020364a4 data_02060524;

extern "C" u16 func_020364a4() {
    return data_02060524.unk18;
}
