#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char *name;
};

int main() {
    struct Student s1;

    s1.id = 101;

    s1.name = (char*) malloc(20 * sizeof(char)); // allocate memory
    strcpy(s1.name, "Gowtham");

    s1.name[0] = 'K';  // ✅ Now allowed

    printf("Name: %s\n", s1.name);

    free(s1.name);
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct fruits {
//    int price;
//    char *name;
// } s1;

// void main(){
//     s1.price=300;
//     s1.name=(char *)malloc(20 * sizeof(char));

//     strcpy(s1.name,"WATERMELON");

//     printf("NAME OF THE FRUIT %s\n",s1.name);
//     printf("price of the fruit %d",s1.price);
// }