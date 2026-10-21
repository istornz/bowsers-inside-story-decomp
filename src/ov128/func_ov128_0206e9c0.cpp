#include "types.h"

extern "C" void func_0201a69c(void *self);
extern "C" void *data_ov128_020735dc[];

extern "C" void *func_ov128_0206e9c0(void *self) {
    func_0201a69c(self);
    *(void **)self = data_ov128_020735dc;
    return self;
}
