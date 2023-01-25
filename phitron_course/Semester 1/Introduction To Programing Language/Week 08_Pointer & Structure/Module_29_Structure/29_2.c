#include<stdio.h>

struct Student{
    int roll;
    int age;
    char name[50];
    float weight;
};
int main()
{
    struct Student s1 = {12, "Farhan Feroz", 24, 75.6};
    struct Student s2 = {21, "Salman Shamil", 25, 71.6};

    printf("Student 1 Info: \n");
    printf("%d\n%d\n%s\n%f\n\n", s1.roll, s1.name, s1.age, s1.weight);
    printf("Student 2 Info: \n");
    printf("%d\n%d\n%s\n%f", s2.roll, s2.name, s2.age,s2.weight);

    return 0;
}
