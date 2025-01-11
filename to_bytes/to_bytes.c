#include <stdio.h>
#include <string.h>

int main() {
    int x = 420;
    unsigned char bytes[sizeof(x)];
    memcpy(bytes, &x, sizeof(x));

    for (int i = 0; i < sizeof(x); i++) {
        printf("%02x ", bytes[i]);
    }

    return 0;
}