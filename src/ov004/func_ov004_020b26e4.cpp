#include "types.h"

struct Unk_ov004_020b0e38 {
    /* 0x000 */ u8 unk000[0x444];
    /* 0x444 */ u8 unk444[1];
};

extern "C" void* func_ov004_020b26e4(Unk_ov004_020b0e38* self) {
    return self->unk444;
}
