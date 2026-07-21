#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s1 = {101, 90.5};
    struct Student *ptr = &s1;

    printf("Using pointer:\n");
    printf("ID: %d\n", ptr->id);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}


// # include <stdio.h>

// struct student {
//     int marks;
//     int id;

// };
// void main(){
//     struct student b={23,42};
    
//     struct student *p=&b;
  
//     printf("%d",p->marks);
//      printf("%d",p->id);

// }