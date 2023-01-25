#include<stdio.h>

int main()
{
    int num1, num2, maxx;

    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    maxx = (num1 > num2) ? num1 : num2;

    printf("Maximum Number %d and %d is %d\n", num1, num2, maxx);

    return 0;
}
