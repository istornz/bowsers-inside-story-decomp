#include "types.h"

struct Unk_ov077_020c952c {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 unk54;
};

struct Unk_ov077_020cb280 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
};

extern "C" u32 func_ov120_020d4954(void *p);
extern "C" void func_ov015_020a7aac(u32 p);
extern "C" u8 *data_ov008_02064f08;
extern "C" Unk_ov077_020cb280 data_ov077_020c9720;

extern "C" void func_ov077_020c91cc(Unk_ov077_020c952c *self) {
    if (func_ov120_020d4954(data_ov008_02064f08 + 0x1e96ec) != 0) {
        return;
    }
    func_ov015_020a7aac(data_ov077_020c9720.unk04);
    func_ov015_020a7aac(data_ov077_020c9720.unk00);
    self->unk54 = 0;
}
