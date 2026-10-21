#include "types.h"

struct Unk_main_02042b4c {
    /* 0x00 */ u32 unk00;
};

extern "C" Unk_main_02042b4c data_02062fa0;

extern "C" u32 func_02042b4c() {
    return data_02062fa0.unk00;
}
