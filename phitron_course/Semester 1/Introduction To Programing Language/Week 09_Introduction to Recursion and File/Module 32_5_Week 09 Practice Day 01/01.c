#include<stdio.h>

int n_power_m(int l, int n, int m);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ans = n_power_m(1, n, m);

    printf("%d", ans);

    return 0;
}

int n_power_m(int l, int n, int m)
{
    if(m == 0)
        return l;
    else
        return n_power_m(l*n, n, m-1);
}
