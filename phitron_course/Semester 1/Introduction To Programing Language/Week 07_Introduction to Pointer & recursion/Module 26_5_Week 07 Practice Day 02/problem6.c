// Finding the sum using pointer .
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers = ");
    scanf("%d %d %d",&a,&b,&c);
    int *p=&a;
    *p+=b;
    *p+=c;
    printf("The sum of three numbers is = %d\n",a);
}