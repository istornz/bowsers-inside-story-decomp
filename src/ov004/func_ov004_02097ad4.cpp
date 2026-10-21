#include "types.h"

extern "C" void func_ov003_0206b960(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov004_02097ad4(void* p) {
    func_ov003_0206b960(p);
    func_0201a168(p);
    return p;
}
