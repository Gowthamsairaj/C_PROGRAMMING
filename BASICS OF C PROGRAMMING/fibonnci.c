#include <stdio.h>

int main(void) {
    int n;
    printf("ENTER THE NUMBER:");
    if (scanf("%d", &n) != 1) return 1;

    int a = 0;
    int b = 1;

    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (int i = 2; i < n; i++) {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
   
   
}