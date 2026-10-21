#include "types.h"

struct Unk_ov084_020c9058_Sub {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ u16 unk2c;
};

struct Unk_ov084_020c9058 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov084_020c9058_Sub* unk10;
    /* 0x14 */ u8 unk14[0x54 - 0x14];
    /* 0x54 */ u32 unk54;
};

extern "C" u8 data_ov084_020d03f8;

extern "C" s32 func_ov084_020c958c(void* p);
extern "C" void func_ov084_020c9320(void* p);

extern "C" void func_ov084_020c9058(Unk_ov084_020c9058* p) {
    if (func_ov084_020c958c(&data_ov084_020d03f8) == 1) {
        return;
    }
    func_ov084_020c9320(&data_ov084_020d03f8);
    p->unk54 = 0;
    p->unk10->unk2c = 0;
}
