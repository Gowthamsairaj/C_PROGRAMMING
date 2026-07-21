#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter ID and Marks: ");
        scanf("%d %f", &s[i].id, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < 3; i++) {
        printf("ID: %d, Marks: %.2f\n", s[i].id, s[i].marks);
    }

    return 0;
}