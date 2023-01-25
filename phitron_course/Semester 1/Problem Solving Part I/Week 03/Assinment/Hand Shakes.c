#include<stdio.h>
int main()
{
    long long int total,n;
    scanf("%lld", &n);
    if (n >= 1 && n <= 1000000000)
    {
        total = n * (n-1)/2;
        printf("%lld", total);
    }
 return 0;
}
