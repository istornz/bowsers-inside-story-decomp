#include "types.h"

extern "C" u32 data_ov107_020d3b94[];
extern "C" s32 func_ov107_020cb450();

extern "C" u32 func_ov107_020cb4a0() {
    return data_ov107_020d3b94[func_ov107_020cb450()];
}
