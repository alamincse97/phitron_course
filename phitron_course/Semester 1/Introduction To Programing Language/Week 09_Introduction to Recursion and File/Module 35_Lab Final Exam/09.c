#include <stdio.h>

int gcd(int a, int b)
{
    int hig, lo;
    if (a > b)
    {
        hig = a;
        lo = b;
    }
    else
    {
        hig = b;
        lo = a;
    }
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(lo, hig % lo);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        int hexa = 0;

        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (gcd(arr[i], arr[j]) == 1)
                    {
                        hexa++;
                    }
                }
            }
        }
        printf("%d", hexa);
        printf("\n");
    }

    return 0;
}

