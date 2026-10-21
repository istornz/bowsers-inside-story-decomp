#include "types.h"

struct Unk_main_02006388 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 unk20;
};

extern "C" Unk_main_02006388 data_01ff9504;

extern "C" u8 func_02006388() {
    return data_01ff9504.unk20;
}
