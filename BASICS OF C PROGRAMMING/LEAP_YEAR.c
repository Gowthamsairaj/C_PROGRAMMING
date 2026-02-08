#include <stdio.h>

int main(void)
{
    int a;
    printf("ENTER THE YEAR: ");
    scanf("%d", &a);

    if (a % 100 == 0)
    {
        if (a % 400 == 0)
        {
            printf("%d IS A LEAP YEAR", a);
        }
        else
        {
            printf("%d IS NOT A LEAP YEAR", a);
        }
    }
    else
    {
        if (a % 4 == 0)
        {
            printf("%d IS A LEAP YEAR", a);
        }
        else
        {
            printf("%d IS NOT A LEAP YEAR", a);
        }
    }

    return 0;
}
