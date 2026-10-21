#include "types.h"

struct Unk_ov004_02088ddc {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ u32 unk3c;
};

extern "C" u32 func_ov004_02088ddc(Unk_ov004_02088ddc* self) {
    return self->unk3c;
}
