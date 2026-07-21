#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 10;
 

    d.f = 5.5;
  

    d.c = 'A';
     printf("i: %d\n", d.i);
       printf("f: %.2f\n", d.f);
    printf("c: %c\n", d.c);

    return 0;
}