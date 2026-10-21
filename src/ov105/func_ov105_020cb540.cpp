#include "types.h"

extern "C" u32 data_ov105_020d0fc0[];
extern "C" s32 func_ov105_020cb474();

extern "C" u32 func_ov105_020cb540() {
    return data_ov105_020d0fc0[func_ov105_020cb474()];
}
