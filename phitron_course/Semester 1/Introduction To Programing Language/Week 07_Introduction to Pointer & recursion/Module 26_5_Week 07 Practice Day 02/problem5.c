#include <stdio.h>

int recursive_sum_funct(int x);

int main()
{
    int n;
    printf("Enter the value of n to find the sum of the value from 1 to n = ");
    scanf("%d", &n);
    int sum = recursive_sum_funct(n);
    printf("%d\n",sum);
    
}

int recursive_sum_funct(int x)
{
    int sum=0;
    if (x < 1)
    {
        return 0;
    }
    else
    {
        return x+recursive_sum_funct(x-1);
    }
}
