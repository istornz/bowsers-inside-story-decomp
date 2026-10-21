#include "types.h"

struct Unk_ov007_02110914 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
};

extern "C" u32 func_ov007_02110914(Unk_ov007_02110914* self) {
    return self->unk10;
}
