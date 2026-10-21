#include "types.h"

struct Unk_main_02019574 {
    /* 0x00 */ u8 unk00[0x2];
    /* 0x02 */ u16 unk02;
};

extern "C" u16 func_02019574(Unk_main_02019574* self) {
    return self->unk02;
}
