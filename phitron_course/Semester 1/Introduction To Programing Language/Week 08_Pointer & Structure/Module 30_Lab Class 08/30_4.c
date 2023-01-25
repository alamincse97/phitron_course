#include<stdio.h>

struct Student{
    int roll;
    char name[50];
    double marks;
};
int main()
{
    struct Student cls[5];

    for(i=0; i<5; i++)
    {
        scanf("%d", &cls[i].roll);
        scanf("%s", &cls[i].name);
        scanf("%lf", &cls[i].marks);
    }
    for(i=0; i<5; i++)
    {
        printf("Information of Student %d\n", i);
        printf("Roll -> %d\n", cls[i].roll);
        printf("Name -> %s\n", cls[i].name);
        printf("Mark -> %lf\n", cls[i].marks);
    }
    return 0;
}
