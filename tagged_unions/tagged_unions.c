#include <stdio.h>

typedef enum Tag {
    INT,
    FLOAT,
    CHAR,
} Tag;

typedef union Union {
    int i;
    float f;
    char c;
} Union;

typedef struct Struct {
    Tag tag;
    Union value;
} Struct;

Struct structInt(int i) {
    Struct result;
    result.tag = INT;
    result.value.i = i;
    return result;
}

Struct structFloat(float f) {
    Struct result;
    result.tag = FLOAT;
    result.value.f = f;
    return result;
}

Struct structChar(char c) {
    Struct result;
    result.tag = CHAR;
    result.value.c = c;
    return result;
}

int main() {
    Struct x = structFloat(420.0);
    switch (x.tag) {
        case INT:
            printf("%d\n", x.value.i);
            break;
        case FLOAT:
            printf("%f\n", x.value.f);
            break;
        case CHAR:
            printf("%c\n", x.value.c);
            break;
    }
    return 0;
}