#include "types.h"

struct Unk_main_02036474 {
    /* 0x00 */ u8 unk00[0xa];
    /* 0x0a */ u16 unk0a;
};

extern "C" Unk_main_02036474 data_02060524;

extern "C" u16 func_02036474() {
    return data_02060524.unk0a;
}
