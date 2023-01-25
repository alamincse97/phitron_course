#include <stdio.h>

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int a[], int len, int ac)
{
    int i, j;
    for(i=0; i<len; i++)
    {
        for(j=i; j<len; j++)
        {
            if(ac)
                a[i] > a[j] ? swap(&a[i], &a[j]) : NULL;
            else
                a[i] < a[j] ? swap(&a[i], &a[j]) : NULL;

        }
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n], b[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }


    bubble_sort(a, n, 1);
    bubble_sort(b, n, 0);

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]-b[i]);
    }
    return 0;
}
