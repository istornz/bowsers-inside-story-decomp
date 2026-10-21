#include "types.h"

struct Unk_ov124_Task {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u8* unk0c;
    /* 0x10 */ void* unk10;
};

struct Unk_ov124_Ctx {
    /* 0x0000 */ u8 unk0000[0x4260];
    /* 0x4260 */ void* unk4260;
};

struct Unk_ov124_020a3ba0 {
    /* 0x0 */ u8 unk0[0x4];
    /* 0x4 */ Unk_ov124_Ctx* unk4;
};

extern "C" Unk_ov124_020a3ba0 data_ov124_020a3ba0;

extern "C" Unk_ov124_Task* func_ov122_0206a2c4(void* list, s32 a, void (*callback)());
extern "C" void func_ov124_0208c860();

extern "C" void func_ov124_0208d200(void* owner, u8 value) {
    Unk_ov124_Task* task = func_ov122_0206a2c4(data_ov124_020a3ba0.unk4->unk4260, 0, func_ov124_0208c860);
    task->unk10 = owner;
    *task->unk0c = value;
}
