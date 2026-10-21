#include "types.h"

extern "C" void func_0201a69c(void *self);
extern "C" void *data_ov130_020724a0[];

extern "C" void *func_ov130_0206db20(void *self) {
    func_0201a69c(self);
    *(void **)self = data_ov130_020724a0;
    return self;
}
