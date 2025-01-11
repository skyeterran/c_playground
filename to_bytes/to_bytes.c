#include <stdio.h>
#include <string.h>

int main() {
    for (int x = 0; x < 1024; x++) {
        unsigned char bytes[sizeof(x)];
        memcpy(bytes, &x, sizeof(x));

        printf("%d -> ", x);
        for (int i = 0; i < sizeof(x); i++) {
            printf("%02x ", bytes[i]);
        }
        printf("\n");
    }

    return 0;
}