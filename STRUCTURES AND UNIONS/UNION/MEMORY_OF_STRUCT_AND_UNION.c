#include <stdio.h>

struct TestStruct {
    char a;
    char b;
};

union TestUnion {
    char  a;
    float b;
};

int main() {
    printf("Size of struct: %lu\n", sizeof(struct TestStruct));
    printf("Size of union: %lu\n", sizeof(union TestUnion));
    return 0;
}