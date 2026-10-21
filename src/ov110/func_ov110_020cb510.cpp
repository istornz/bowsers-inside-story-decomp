#include "types.h"

extern "C" u8 data_ov110_020d0720[];

extern "C" s32 func_ov110_020cb474();

extern "C" u8 func_ov110_020cb510() {
    return data_ov110_020d0720[func_ov110_020cb474()];
}
