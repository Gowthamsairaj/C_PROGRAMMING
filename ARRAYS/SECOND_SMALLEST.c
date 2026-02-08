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

    int min= a[0];
    int secondsmallest=a[0];

    for (int i = 1; i < N; i++)
    {
        if (a[i] < min)
        {
            secondsmallest=min;
            min=a[i];
        }
        else if (a[i] < secondsmallest && a[i] != min) 
        {
                secondsmallest = a[i];
            }
    }

    printf("%d IS THE MAXIMUM ELEMENT IN THAT ARRAY", secondsmallest);

    return 0;
}
