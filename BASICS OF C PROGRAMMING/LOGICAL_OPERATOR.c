#include <stdio.h>

int main(void)
{
    int a, b;

    printf("ENTER FIRST NUMBER: ");
    scanf("%d", &a);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d", &b);

    printf("a > 5 && b > 5  = %d\n", a > 5 && b > 5);
    printf("a > 5 || b > 5  = %d\n", a > 5 || b > 5);
    printf("!(a > b)       = %d\n", !(a > b));

    return 0;
}
