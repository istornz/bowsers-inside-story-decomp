#include "types.h"

extern "C" u32 data_ov113_020d2c1c[];
extern "C" s32 func_ov113_020cb464();

extern "C" u32 func_ov113_020cb4bc() {
    return data_ov113_020d2c1c[func_ov113_020cb464()];
}
