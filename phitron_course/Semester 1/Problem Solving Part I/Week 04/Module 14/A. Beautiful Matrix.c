#include<stdio.h>

int main()
{
    int i, j, temp, x, y;
    int ara[5][5];

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &ara[i][j]);

            if(ara[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int ans = 0;

    if(x > 2)
        ans += (x-2);
    else
        ans += (2-x);
    if(y>2)
        ans += (y-2);
    else
        ans += (2-y);

    printf("%d\n", ans);

    return 0;
}
