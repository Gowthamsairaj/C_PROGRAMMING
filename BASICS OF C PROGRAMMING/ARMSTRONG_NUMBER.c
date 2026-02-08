#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &a);

    int temp = a;
    int org = a;
    int count = 0;

    
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = a;
    int sum = 0;

 
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if (sum == org)
        printf("THE GIVEN %d NUMBER IS AN ARMSTRONG NUMBER", a);
    else
        printf("THE GIVEN %d NUMBER IS NOT AN ARMSTRONG NUMBER", a);

    return 0;
}
