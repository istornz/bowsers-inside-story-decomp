#include "types.h"

extern "C" s32 func_0201ec50(s32 value);
extern "C" void func_0204536c(s32 value, void* p);

extern "C" void func_ov019_020ccf68(void* p, s32 value, s32 base, BOOL add) {
    s32 offset = func_0201ec50((value / 16) * (value - base));
    if (value < 0) {
        add = !add;
    }
    s32 result;
    if (add) {
        result = value + (offset << 2);
    } else {
        result = value - (offset << 2);
    }
    func_0204536c(result << 5, p);
}
