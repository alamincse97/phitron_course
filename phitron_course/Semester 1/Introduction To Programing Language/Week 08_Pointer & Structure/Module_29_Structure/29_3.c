#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float weight;
};
int main()
{
    int a;
    struct Student s1;
    scanf("%d %s %d %f", &s1.roll, &s1.name, &s1.age, &s1.weight);
    struct Student s2 = {21, "Salman Shamil", 25, 71.6};

    printf("Student 1 Info: \n");
    printf("%d\n%s\n%d\n%f\n\n", s1.roll, s1.name, s1.age, s1.weight);
    printf("Student 2 Info: \n");
    printf("%d\n%s\n%d\n%f", s2.roll, s2.name, s2.age,s2.weight);

    return 0;
}

