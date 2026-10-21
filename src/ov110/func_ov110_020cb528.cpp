#include "types.h"

extern "C" u32 data_ov110_020d0800[];
extern "C" s32 func_ov110_020cb474();

extern "C" u32 func_ov110_020cb528() {
    return data_ov110_020d0800[func_ov110_020cb474()];
}
