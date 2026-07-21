#include <stdio.h>

struct Flags {
    unsigned int a : 1;
    unsigned int b : 2;
    unsigned int c : 3;
};

int main() {
    struct Flags f = {1, 2, 5};

    printf("a=%d b=%d c=%d\n", f.a, f.b, f.c);
    return 0;
}