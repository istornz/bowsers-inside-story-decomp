#include "types.h"

extern "C" void func_020205e0(void* p);
extern "C" void func_020204a4(void* p);

extern "C" void* func_ov025_020ceb74(void* p) {
    func_020205e0(p);
    func_020204a4(p);
    return p;
}
