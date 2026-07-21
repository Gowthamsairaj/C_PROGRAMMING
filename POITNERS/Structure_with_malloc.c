#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float marks;
};

int main()
{
    struct Student *p;

    p = (struct Student *)malloc(sizeof(struct Student));

    p->id = 101;
    p->marks = 88.5;

    printf("%d\n", p->id);
    printf("%.1f\n", p->marks);

    free(p);

    return 0;
}