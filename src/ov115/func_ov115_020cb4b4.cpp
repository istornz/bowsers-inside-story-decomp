#include "types.h"

extern "C" u8 data_ov115_020d1078[];

extern "C" s32 func_ov115_020cb464();

extern "C" u8 func_ov115_020cb4b4() {
    return data_ov115_020d1078[func_ov115_020cb464()];
}
