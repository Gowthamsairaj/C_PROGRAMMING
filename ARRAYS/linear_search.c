#include<stdio.h>
int main(void) 
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT AT INDEX OF %d:",i);
        scanf("%d",&arr[i]);
    }
      int key;
      printf("ENTER THE TARGET ELEMENT:");
      scanf("%d",&key);
      int found=0;
    for(int i=0;i<n;i++)
    {
       if(key==arr[i])
       {
          printf("THE TARGET %d NUMBER IS FOUND AT INDEX OF %d",key,i);
          found=1;
          break;
       }
       else{
        continue;
       }
    }
    if(found==0);
      printf("THE TARGET %d NUMBER IS NOT FOUND",key);
}