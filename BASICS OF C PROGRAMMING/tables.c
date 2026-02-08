#include<stdio.h>

int main(void)
{
   int n;
   printf("ENTER THE NUMBER: ");
   if (scanf("%d", &n) != 1) return 1;

   for(int i = 1; i <= 10; i++)
   {
    
      printf("%d * %d = %d\n", i, n, i * n);
   }

   return 0;
}
