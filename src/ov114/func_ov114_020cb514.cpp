#include "types.h"

extern "C" u16 data_ov114_020d1d04[];

extern "C" s32 func_ov114_020cb4c4();

extern "C" u16 func_ov114_020cb514() {
    return data_ov114_020d1d04[func_ov114_020cb4c4()];
}
