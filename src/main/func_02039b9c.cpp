#include "types.h"

struct Unk_main_02039b9c {
    /* 0x00 */ u16 unk00;
};

extern "C" Unk_main_02039b9c data_02060914;

extern "C" u16 func_02039b9c() {
    return data_02060914.unk00;
}
