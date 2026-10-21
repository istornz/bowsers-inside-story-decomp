#include "types.h"

extern "C" u8 data_ov116_020d2a9c[];

extern "C" s32 func_ov116_020cb464();

extern "C" u8 func_ov116_020cb4c0() {
    return data_ov116_020d2a9c[func_ov116_020cb464()];
}
