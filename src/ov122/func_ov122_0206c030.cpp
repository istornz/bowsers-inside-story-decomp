#include "types.h"

struct Unk_ov122_0206c030 {
    /* 0x00 */ u8 unk00[0xd3];
    /* 0xd3 */ u8 unkd3;
};

extern "C" u8 func_ov122_0206c030(Unk_ov122_0206c030* self) {
    return self->unkd3;
}
