#include<stdio.h>

int main()
{
    int t, j=1;
    scanf("%d", &t);

    while(j <= t)
    {
        int n, i, index = -1;
        scanf("%d", &n);
        int a[n];
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        int s;
        scanf("%d", &s);

        for(i=0; i<n; i++)
        {
            if(a[i] == s)
            {
                index = i;
                break;
            }
        }
        if(index == -1)
        {
            printf("Case %d: Not Found\n", j);
        }
        else
        {
            printf("Case %d: %d\n", j, index+1);
        }
        j++;
    }
    return 0;
}
