#include "types.h"

struct Unk_main_020418ec {
    /* 0x00 */ u32 unk00;
};

extern "C" Unk_main_020418ec data_020626c0;

extern "C" u32 func_020418ec() {
    return data_020626c0.unk00;
}
