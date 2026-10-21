#include "types.h"

extern "C" u8 data_ov045_020d3eb0[];

extern "C" u8 func_ov045_020cc4b4(u32 index) {
    if (index >= 0x14) {
        index = 0x13;
    }
    return data_ov045_020d3eb0[index];
}
