#include <stdio.h>

#define macro_struct(name, type) typedef struct name {\
    type data;\
} name;\

macro_struct(IntStruct, int)

int main() {
    IntStruct x;
    x.data = 69;
    printf("x.data = %d\n", x.data);

    return 0;
}