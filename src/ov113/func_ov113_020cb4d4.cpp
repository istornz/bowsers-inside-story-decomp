#include "types.h"

extern "C" u16 data_ov113_020d2b80[];

extern "C" s32 func_ov113_020cb464();

extern "C" u16 func_ov113_020cb4d4() {
    return data_ov113_020d2b80[func_ov113_020cb464()];
}
