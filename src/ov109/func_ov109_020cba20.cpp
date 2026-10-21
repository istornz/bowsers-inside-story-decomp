#include "types.h"

extern "C" u8 data_ov109_020d2eec[];

extern "C" u8 func_ov109_020cba20(u32 index) {
    if (index >= 0x14) {
        index = 0x13;
    }
    return data_ov109_020d2eec[index];
}
