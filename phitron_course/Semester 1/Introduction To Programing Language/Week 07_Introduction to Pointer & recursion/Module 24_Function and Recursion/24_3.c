/*#include<stdio.h>

void add_two_nums()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    printf("%d\n", sum);
}

int main()
{
    add_two_nums();
    return 0;
}

// Scope means life time, life spent

*/

#include<stdio.h>

int g = 7;

void add_two_nums()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    printf("%d\n", sum);
    printf("Printing in add function %d\n", g);
    g = g+2;
}

int main()
{
    int mv = 7;

    add_two_nums();

    printf("Printing in main function %d\n", g);


    return 0;
}
