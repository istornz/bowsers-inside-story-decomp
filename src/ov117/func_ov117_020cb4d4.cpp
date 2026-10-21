#include "types.h"

extern "C" u16 data_ov117_020d2dc0[];

extern "C" s32 func_ov117_020cb464();

extern "C" u16 func_ov117_020cb4d4() {
    return data_ov117_020d2dc0[func_ov117_020cb464()];
}
