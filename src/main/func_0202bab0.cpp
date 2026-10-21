#include "types.h"

struct Unk_main_0202bab0 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s16 unk28;
};

extern "C" s16 func_0202bab0(Unk_main_0202bab0* self) {
    return self->unk28;
}
