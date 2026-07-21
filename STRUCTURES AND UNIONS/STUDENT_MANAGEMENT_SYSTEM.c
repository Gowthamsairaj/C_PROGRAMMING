#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct Student s[2];

    for(int i = 0; i < 2; i++) {
        printf("Enter ID, Name, Marks: ");
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }

    printf("\n--- Student Data ---\n");
    for(int i = 0; i < 2; i++) {
        printf("%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}