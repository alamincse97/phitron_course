#include<stdio.h>

void e_o(int x)
{
    if(x%2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    //return e_o(x);
}
int main()
{
    int a;

    printf("Enter an integer: \n");
    scanf("%d", &a);


     e_o(a);

    return 0;
}
