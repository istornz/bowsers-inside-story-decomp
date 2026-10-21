#include "types.h"

struct Unk_ov004_020b26f0 {
    /* 0x00 */ u8 unk00[0x444];
    /* 0x444 */ u32 unk444;
};

extern "C" BOOL func_ov004_020b26f0(Unk_ov004_020b26f0* self) {
    return self->unk444 != 0;
}
