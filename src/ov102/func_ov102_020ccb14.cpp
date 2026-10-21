#include "types.h"

struct Unk_ov102_Task {
    /* 0x0 */ void (*unk0)(Unk_ov102_Task* task);
};

struct Unk_ov102_Actor {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ u8 unk100[0xc];
    /* 0x10c */ u16 unk10c;
};

extern "C" void* data_ov008_02064f08;

extern "C" Unk_ov102_Actor* func_ov011_02066dac(void* mgr, u32 id);
extern "C" void func_ov013_0208a300(void* p, s32 arg);
extern "C" void func_ov014_02098650(Unk_ov102_Actor* actor);
extern "C" void func_ov102_020ccb80(Unk_ov102_Task* task);

extern "C" void func_ov102_020ccb14(Unk_ov102_Task* task) {
    Unk_ov102_Actor* first = func_ov011_02066dac(data_ov008_02064f08, 0x3000);
    Unk_ov102_Actor* second = func_ov011_02066dac(data_ov008_02064f08, 0x3001);
    if (first->unk10c != 0) {
        return;
    }
    func_ov014_02098650(first);
    func_ov013_0208a300(second->unk100, 0x14);
    task->unk0 = func_ov102_020ccb80;
}
