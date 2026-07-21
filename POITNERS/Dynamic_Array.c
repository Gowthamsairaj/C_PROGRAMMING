#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int n = 3;

    p = (int *)malloc(n * sizeof(int));

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);

    return 0;
}