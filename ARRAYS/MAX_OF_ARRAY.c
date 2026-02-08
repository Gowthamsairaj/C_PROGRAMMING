#include <stdio.h>

int main(void)
{
    int N;

    printf("ENTER THE SIZE OF AN ARRAY: ");
    scanf("%d", &N);

    int a[N];

    printf("ENTER %d ELEMENTS:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int max= a[0];

    for (int i = 1; i < N; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("%d IS THE MAXIMUM ELEMENT IN THAT ARRAY", max);

    return 0;
}
