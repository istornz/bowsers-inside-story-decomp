#include "types.h"

struct Unk_main_02030530 {
    /* 0x00 */ u32 unk00;
};

extern "C" Unk_main_02030530 data_0205f670;

extern "C" u32 func_02030530() {
    return data_0205f670.unk00;
}
