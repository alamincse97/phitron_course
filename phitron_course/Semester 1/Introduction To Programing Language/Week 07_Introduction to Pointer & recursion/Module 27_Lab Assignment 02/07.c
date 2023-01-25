#include <stdio.h>

int median(int arry[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Median: %d", median(arr, n));

    return 0;
}
int median(int arry[], int n)
{
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                t = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = t;
            }
        }
    }
    int med = 0;
    if (n % 2 == 0)
    {
        med = (arry[n / 2 - 1] + arry[n / 2]) / 2;
    }
    else if(n % 2 == 1)
    {
        med = arry[n / 2];
    }
    return med;
}
