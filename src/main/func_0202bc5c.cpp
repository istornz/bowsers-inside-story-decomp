#include "types.h"

struct Unk_main_0202bc5c {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u32 unk78;
};

extern "C" u32 func_0202bc5c(Unk_main_0202bc5c* self) {
    return self->unk78;
}
