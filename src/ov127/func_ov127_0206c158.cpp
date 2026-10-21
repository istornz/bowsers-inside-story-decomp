#include "types.h"

extern "C" void func_ov127_0206c2e8(void* p);

extern "C" void* func_ov127_0206c158(void* p) {
    func_ov127_0206c2e8(p);
    return p;
}
