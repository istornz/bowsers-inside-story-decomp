#include "types.h"

struct Unk_ov122_0206c028 {
    /* 0x00 */ u8 unk00[0xd1];
    /* 0xd1 */ u8 unkd1;
};

extern "C" u8 func_ov122_0206c028(Unk_ov122_0206c028* self) {
    return self->unkd1;
}
