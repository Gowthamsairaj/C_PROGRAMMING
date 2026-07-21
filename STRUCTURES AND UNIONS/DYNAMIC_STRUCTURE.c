#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student*) malloc(sizeof(struct Student));

    ptr->id = 101;
    ptr->marks = 85.5;

    printf("ID: %d\n", ptr->id);
    printf("Marks: %.2f\n", ptr->marks);

    free(ptr);
    return 0;
}


// # include <stdio.h>
// # include <stdlib.h>
// struct student {
//    int id;
//    int rollno;
//    float marks;
// };

// void main()
// {
// struct student *p;
 
// p=(struct student*) malloc(sizeof(struct student));

// p->id=84;
// p->rollno=23345;
// p->marks=234.5;
// printf("ID:%d\n",p->id);
// printf("ROLL NO:%d\n",p->rollno);
// printf("MARKS:%.2f\n",p->marks);
// }