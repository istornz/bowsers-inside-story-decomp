#include "types.h"

extern "C" u16 data_ov115_020d101e[];

extern "C" s32 func_ov115_020cb464();

extern "C" u16 func_ov115_020cb4cc() {
    return data_ov115_020d101e[func_ov115_020cb464()];
}
