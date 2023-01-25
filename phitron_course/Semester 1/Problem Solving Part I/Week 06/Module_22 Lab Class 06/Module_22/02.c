// prime number checke

#include<stdio.h>

int is_prime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if(is_prime(n) == 1)
        printf("Prime Number\n");
    else
        printf("Composite Number\n");

    return 0;
}
