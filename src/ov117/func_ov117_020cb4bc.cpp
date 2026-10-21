#include "types.h"

extern "C" u32 data_ov117_020d2e5c[];
extern "C" s32 func_ov117_020cb464();

extern "C" u32 func_ov117_020cb4bc() {
    return data_ov117_020d2e5c[func_ov117_020cb464()];
}
