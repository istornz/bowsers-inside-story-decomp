#include "types.h"

extern "C" u16 data_ov116_020d2a4c[];

extern "C" s32 func_ov116_020cb464();

extern "C" u16 func_ov116_020cb4d8() {
    return data_ov116_020d2a4c[func_ov116_020cb464()];
}
