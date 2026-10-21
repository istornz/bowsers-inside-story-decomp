#include "types.h"

extern "C" void func_ov003_02069ec4(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov003_0206a78c(void* p) {
    func_ov003_02069ec4(p);
    func_0201a168(p);
    return p;
}
