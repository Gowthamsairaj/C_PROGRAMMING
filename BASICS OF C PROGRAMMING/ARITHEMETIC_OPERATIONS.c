#include <stdio.h>

int main(void)
{
    int a, b;

    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &a);

    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &b);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    return 0;
}
