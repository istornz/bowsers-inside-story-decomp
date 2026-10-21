#include "types.h"

struct Unk_main_02036484 {
    /* 0x00 */ u16 unk00;
};

extern "C" Unk_main_02036484 data_02060524;

extern "C" u16 func_02036484() {
    return data_02060524.unk00;
}
