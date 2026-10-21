#include "types.h"

extern "C" void func_0201a69c(void *self);
extern "C" void *data_ov122_02075984[];

extern "C" void *func_ov122_020711a4(void *self) {
    func_0201a69c(self);
    *(void **)self = data_ov122_02075984;
    return self;
}
