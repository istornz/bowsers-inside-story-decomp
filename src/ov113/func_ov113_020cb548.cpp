#include "types.h"

extern "C" u32 data_ov113_020d2b30[];
extern "C" s32 func_ov113_020cb4f0();

extern "C" u32 func_ov113_020cb548() {
    return data_ov113_020d2b30[func_ov113_020cb4f0()];
}
