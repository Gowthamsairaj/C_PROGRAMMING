#include <stdio.h>

struct Address {
    char city[20];
    int pin;
};

struct Student {
    int id;
    struct Address addr;
};

int main() {
    struct Student s1 = {101, {"Coimbatore", 641001}};

    printf("ID: %d\n", s1.id);
    printf("City: %s\n", s1.addr.city);
    printf("PIN: %d\n", s1.addr.pin);

    return 0;
}




// # include <stdio.h>

// struct address {
//     char street[30];
//     int pincode;
// };
// struct student{
//     int rollno;
//     struct address ad;
// };

// int main()
// {
//     struct student s={2338,{"kamarajnagar",65656}};
//     printf(" ROLL NO \n",s.rollno);
//     printf(" STREET NAME%s\n ",s.ad.street);
//     printf("PIN CoDE OF THE STREET %d",s.ad.pincode);
// }