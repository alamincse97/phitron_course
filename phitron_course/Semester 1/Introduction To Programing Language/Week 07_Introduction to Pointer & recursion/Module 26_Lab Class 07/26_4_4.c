// 1 + 2 + 3 + .. + n = (n(n+1)) / 2
// Tower of hannoy

#include<stdio.h>

int S(int n)
{
    if(n == 1)
        return 1;
    else
        return S(n-1) + n;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int summ = S(n);
    printf("%d\n", summ);

//    for(i=1 i<=n; i++)
//    {
//        summ += i;
//    }
    return 0;
}
