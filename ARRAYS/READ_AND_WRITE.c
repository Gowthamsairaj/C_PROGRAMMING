#include<stdio.h>
int main(void)
{
    printf("ENTER THE SIZE OF AN ARRAY:");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    
    {
        printf("%d \n",&a[i]);
    }
}