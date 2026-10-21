#include "types.h"

extern "C" u8 data_ov105_020d0f1c[];

extern "C" s32 func_ov105_020cb474();

extern "C" u8 func_ov105_020cb510() {
    return data_ov105_020d0f1c[func_ov105_020cb474()];
}
