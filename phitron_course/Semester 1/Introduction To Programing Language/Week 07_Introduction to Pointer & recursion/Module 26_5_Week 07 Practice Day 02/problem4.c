#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n to print the value from n to 1 = ");
    scanf("%d",&n);
    printf("The values from %d to 1 are = ",n);
    recursive_funct(n);
}

int  recursive_funct(int x)
{
    if (x>0)
    {
        printf("%d ",x);
        recursive_funct(x-1);
    }
    
}