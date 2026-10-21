#include "types.h"

extern "C" u32 data_ov117_020d2d70[];
extern "C" s32 func_ov117_020cb4f0();

extern "C" u32 func_ov117_020cb548() {
    return data_ov117_020d2d70[func_ov117_020cb4f0()];
}
