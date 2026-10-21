#include "types.h"

extern "C" void func_ov127_0206a998(void* p);
extern "C" void func_ov127_0206ae58(void* p);

extern "C" void func_ov127_0206af34(void* p) {
    func_ov127_0206a998(p);
    func_ov127_0206ae58(p);
}
