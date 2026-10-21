#include "types.h"

struct Unk_ov122_0206c038 {
    /* 0x00 */ u8 unk00[0xd2];
    /* 0xd2 */ u8 unkd2;
};

extern "C" u8 func_ov122_0206c038(Unk_ov122_0206c038* self) {
    return self->unkd2;
}
