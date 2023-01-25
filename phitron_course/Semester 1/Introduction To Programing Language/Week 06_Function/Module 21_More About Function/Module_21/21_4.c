#include<stdio.h>
#include<math.h>

int fact(int x)
{
    int res = 1, i;
    for(i=1; i<=x; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    int n;

    scanf("%d", &n);
    int ans = fact(n);

    printf("Factorial = %d\n", ans);

    return 0;
}
