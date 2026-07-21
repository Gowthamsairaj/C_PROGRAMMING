#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;

    *p = 20;  // change value using pointer

    printf("a = %d\n", a);

    return 0;
}