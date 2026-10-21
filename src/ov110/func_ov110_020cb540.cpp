#include "types.h"

extern "C" u32 data_ov110_020d07b0[];
extern "C" s32 func_ov110_020cb474();

extern "C" u32 func_ov110_020cb540() {
    return data_ov110_020d07b0[func_ov110_020cb474()];
}
