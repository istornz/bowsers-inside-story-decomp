#include "types.h"

extern "C" void func_ov014_02096790(void* p);
extern "C" void func_020204a4(void* p);

extern "C" void* func_ov082_020cbaa0(void* p) {
    func_ov014_02096790(p);
    func_020204a4(p);
    return p;
}
