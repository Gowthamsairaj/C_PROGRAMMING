#include <stdio.h>

struct marks {
    int science;
    int maths;
    int biology;
    int total;
    float avg;
};

int main() {
    struct marks m;

    printf("ENTER YOUR SCIENCE MARK:\n");
    scanf("%d", &m.science);

    printf("ENTER YOUR MATHS MARK:\n");
    scanf("%d", &m.maths);

    printf("ENTER YOUR BIOLOGY MARK:\n");
    scanf("%d", &m.biology);

    m.total = m.science + m.maths + m.biology;
    m.avg = m.total / 3.0;  

   
    printf("\nScience: %d\n", m.science);
    printf("Maths: %d\n", m.maths);
    printf("Biology: %d\n", m.biology);

    printf("ALL SUBJECT TOTAL IS: %d\n", m.total);
    printf("AVERAGE MARK IN ALL SUBJECT: %.2f\n", m.avg);

    return 0;
}