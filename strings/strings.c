#include <stdio.h>
#include <stdbool.h>

int main() {
    char* s = "Hello, world!";

    // Rawdog style
    {
        int i = 0;
        while (true) {
            char* p = s + i;
            if (*p == '\0') {
                break;
            }
            printf("Pointer: %d, Value: \'%c\'\n", p, *p);
            i++;
        }
    }

    // Idk, a different one
    {
        int i = 0;
        while (true) {
            char c = s[i];
            if (c != '\0') {
                printf("Pointer: %d, Value: \'%c\'\n", s + i, c);
            } else {
                break;
            }
            i++;
        }
    }

    return 0;
}