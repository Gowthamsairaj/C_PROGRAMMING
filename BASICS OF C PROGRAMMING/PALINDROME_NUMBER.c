#include <stdio.h>

int main(void)
{
    int a, temp, rev = 0;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &a);

    temp = a;

    while (temp > 0)
    {
        rev = rev * 10;
        rev = rev + (temp % 10);
        temp = temp / 10;
    }

    if (rev == a)
    {
        printf("%d IS A PALINDROME NUMBER", a);
    }
    else
    {
        printf("%d IS NOT A PALINDROME NUMBER", a);
    }

    return 0;
}
