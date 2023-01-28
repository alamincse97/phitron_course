#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int isPrime = 1;
        if (n == 1)
        {
            printf("No\n");
        }
        if (n != 0 && n != 1)
        {
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    isPrime = 0;
                }
            }
            if (isPrime)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
